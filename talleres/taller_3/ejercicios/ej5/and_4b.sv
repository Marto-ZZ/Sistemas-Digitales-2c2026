module compuerta_and_4b (
    input  logic [3:0] a,
    input  logic [3:0] b,
    output logic [3:0] result
);
  assign result[0] = a[0] && b[0];
  assign result[1] = a[1] && b[1];
  assign result[2] = a[2] && b[2];
  assign result[3] = a[3] && b[3];
endmodule
