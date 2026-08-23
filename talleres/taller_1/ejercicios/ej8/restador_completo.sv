module restador_completo (
    input  logic a,
    input  logic b,
    input  logic bin,
    output logic diff,
    output logic bout
);
  logic d1, b1, b2;
  restador_simple r1(
    .a(a),
    .b(b),
    .diff(d1),
    .bout(b1)
  );
  restador_simple r2(
    .a(d1),
    .b(bin),
    .diff(diff),
    .bout(b2)
  );
  assign bout = b1 | b2;
endmodule
