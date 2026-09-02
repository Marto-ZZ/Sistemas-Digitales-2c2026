module registro_4b (
    input  logic       clk,
    input  logic       rst,
    input  logic       we,
    input  logic [3:0] din,
    output logic [3:0] q
);
  registro_1b regis0 (
    .clk(clk),
    .rst(rst),
    .we (we),
    .din(din[0]),
    .q  (q[0])
  );
  registro_1b regis1 (
    .clk(clk),
    .rst(rst),
    .we (we),
    .din(din[1]),
    .q  (q[1])
  );
  registro_1b regis2 (
    .clk(clk),
    .rst(rst),
    .we (we),
    .din(din[2]),
    .q  (q[2])
  );
  registro_1b regis3 (
    .clk(clk),
    .rst(rst),
    .we (we),
    .din(din[3]),
    .q  (q[3])
  );
endmodule
