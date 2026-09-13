module sumador_flags_4b (
    input logic [3:0] a, b,
    output logic [3:0] sum,
    output logic overflow, carry, negativo, zero
);
  sumador_4b sumador_4b (
    .a   (a),
    .b   (b),
    .cin (1'b0),
    .sum (sum),
    .cout(carry)
  );
  overflow_4b overflow_4b (
    .a       (a),
    .b       (b),
    .sum     (sum),
    .overflow(overflow)
  );
  negativo_4b negativo_4b (
    .dato    (sum),
    .negativo(negativo)
  );
  zero_4b zero_4b (
    .dato(sum),
    .zero(zero)
  );

endmodule
