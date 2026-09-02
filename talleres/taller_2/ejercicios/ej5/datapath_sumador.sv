module datapath_sumador (
    input  logic       clk,
    input  logic       rst,
    input  logic [3:0] force_in,
    input  logic       we_a,
    input  logic       we_b,
    input  logic       we_s,
    output logic [3:0] r_a,
    output logic [3:0] r_b,
    output logic [3:0] r_s,
    output logic       cout
);
    logic [3:0] suma;

  registro_4b regis4b1(
    .clk(clk),
    .rst(rst),
    .we (we_a),
    .din(force_in),
    .q(r_a)
  );

  registro_4b regis4b2 (
    .clk(clk),
    .rst(rst),
    .we (we_b),
    .din(force_in),
    .q(r_b)
  );

  sumador_4b sumador (
    .a(r_a),
    .b(r_b),
    .cin(1'b0),
    .sum(suma),
    .cout(cout)
  );

  registro_4b regisuma (
    .clk(clk),
    .rst(rst),
    .we (we_s),
    .din(suma),
    .q(r_s)
  );
  
endmodule
