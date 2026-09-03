module uupal (
    input  logic       clk,
    input  logic       rst,
    input  logic [3:0] force_in,
    input  logic       force_en,
    input  logic       we0,
    input  logic       we1,
    input  logic       we2,
    input  logic       we3,
    input  logic [1:0] src_a,
    input  logic [1:0] src_b,
    input  logic       load_op_a,
    input  logic       load_op_b,
    input  logic [1:0] op,
    output logic [3:0] r0,
    output logic [3:0] r1,
    output logic [3:0] r2,
    output logic [3:0] r3,
    output logic [3:0] operand_a,
    output logic [3:0] operand_b,
    output logic [3:0] and_value,
    output logic [3:0] or_value,
    output logic [3:0] result
);
  // Completar de manera estructural: 
  logic [3:0] bus_w;

  logic [3:0] mux_out_a, mux_out_b;

  logic [3:0] res_add, res_sub;

  // 1. mux src_a -> bus de lectura A; mux src_b -> bus de lectura B;
  assign mux_out_a = (src_a == 2'b00) ? r0:
                     (src_a == 2'b01) ? r1:
                     (src_a ==2'b10) ? r2: r3;
  assign mux_out_b = (src_b == 2'b00) ? r0:
                     (src_b == 2'b01) ? r1:
                     (src_b == 2'b10) ? r2: r3;

  // 2. registros operand_a y operand_b (load_op_a / load_op_b);
  registro_4b registro_4ba (
    .clk(clk),
    .rst(rst),
    .we (load_op_a),
    .din(mux_out_a),
    .q  (operand_a)
  );

  registro_4b registro_4bb (
    .clk(clk),
    .rst(rst),
    .we (load_op_b),
    .din(mux_out_b),
    .q  (operand_b)
  );

  // 3. AND y OR de 4 bits e instancias sumador_4b y restador_4b;
  compuerta_and_4b compuerta_and_4b (
    .a     (operand_a),
    .b     (operand_b),
    .result(and_value)
  );

  compuerta_or_4b compuerta_or_4b (
    .a     (operand_a),
    .b     (operand_b),
    .result(or_value)
  );

  sumador_4b sumador_4b (
    .a   (operand_a),
    .b   (operand_b),
    .cin (1'b0),
    .sum (res_add),
    .cout()
  );
  
  restador_4b restador_4b (
    .a   (operand_a),
    .b   (operand_b),
    .bin (1'b0),
    .diff(res_sub),
    .bout()
  );

  // 4. mux op -> result;
  assign result = (op == 2'b00) ? and_value :
                      (op == 2'b01) ? or_value :
                      (op == 2'b10) ? res_add : res_sub;

  // 5. mux force_en: force_in vs result -> bus de escritura;
  assign bus_w = force_en ? force_in : result;

  // 6. cuatro registro_4b (r0..r3) con we0..we3.;
  registro_4b registro_4b0 (
    .clk(clk),
    .rst(rst),
    .we (we0),
    .din(bus_w),
    .q  (r0)
  );
  registro_4b registro_4b1 (
    .clk(clk),
    .rst(rst),
    .we (we1),
    .din(bus_w),
    .q  (r1)
  );
  registro_4b registro_4b2 (
    .clk(clk),
    .rst(rst),
    .we (we2),
    .din(bus_w),
    .q  (r2)
  );
  registro_4b registro_4b3 (
    .clk(clk),
    .rst(rst),
    .we (we3),
    .din(bus_w),
    .q  (r3)
  );
  
endmodule
