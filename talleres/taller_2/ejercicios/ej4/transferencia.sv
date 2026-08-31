module transferencia (
    input  logic       clk,
    input  logic       rst,
    input  logic [3:0] force_in,
    input  logic       force_en, 
    input  logic [1:0] src,
    input  logic       we0,
    input  logic       we1,
    input  logic       we2,
    input  logic       we3,
    output logic [3:0] r0,
    output logic [3:0] r1,
    output logic [3:0] r2,
    output logic [3:0] r3
);

  // asignamos nuestro bus de 4 bits
  logic [3:0] bus;

  // si el force_en vale 1, entonces el bus vale force_in, sino conectamos el bus con r0, r1, r2 o r3
  assign bus = force_en ? force_in : (src == 2'b00) ? r0 : (src == 2'b01) ? r1 : (src == 2'b10) ? r2 : r3;
  
  registro_4b regis4b0 (
    .clk(clk),
    .rst(rst),
    .we (we0),
    .din(bus),
    .q  (r0)
  );
  registro_4b regis4b1 (
    .clk(clk),
    .rst(rst),
    .we (we1),
    .din(bus),
    .q  (r1)
  );
  registro_4b regis4b2 (
    .clk(clk),
    .rst(rst),
    .we (we2),
    .din(bus),
    .q  (r2)
  );
  registro_4b regis4b3 (
    .clk(clk),
    .rst(rst),
    .we (we3),
    .din(bus),
    .q  (r3)
  );
endmodule
