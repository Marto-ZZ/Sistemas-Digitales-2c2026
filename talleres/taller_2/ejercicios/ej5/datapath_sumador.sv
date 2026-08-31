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
  // tres registro_4b + sumador_4b (cin=0)
  // R_a y R_b cargan force_in; R_s carga la suma
endmodule
