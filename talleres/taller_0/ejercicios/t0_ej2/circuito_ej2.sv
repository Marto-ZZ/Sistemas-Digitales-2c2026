// Taller 0 · Ejercicio 2
module circuito_ej2 (
    input  logic a,
    input  logic b,
    input  logic c,
    output logic y
);

  logic p, q;

  // TODO: completar las asignaciones
  assign p = a & b;
  assign q = ~a & c;
  assign y = p | q;

endmodule
