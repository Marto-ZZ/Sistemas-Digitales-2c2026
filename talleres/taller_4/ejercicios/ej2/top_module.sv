module top_module (
    input logic [3:0] a, b,
    output logic [3:0] sum,
    output logic overflow
);
  overflow_4b overflow_4b (
    .a       (a),
    .b       (b),
    .sum     (sum),
    .overflow(overflow)
  );
  sumador_4b sumador_4b (
    .a   (a),
    .b   (b),
    .cin (1'b0),
    .sum (sum),
    .cout()
  );
  
endmodule
