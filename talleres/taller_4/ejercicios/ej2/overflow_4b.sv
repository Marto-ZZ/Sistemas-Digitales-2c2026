module overflow_4b (
    input logic [3:0] a, b, sum,
    output logic overflow
);

  assign overflow = (a[3] == b[3]) && (a[3] != sum[3]) ? 1 : 0;

endmodule
