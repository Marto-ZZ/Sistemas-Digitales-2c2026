// Taller 0 · Ejercicio 3
// Interpretar el circuito del enunciado e implementarlo.

module circuito_ej3 (
    input  logic a,
    input  logic b,
    output logic y
);

  // TODO: declarar señales internas si hacen falta
  // TODO: completar las asignaciones según el diagrama
  // (borrar el assign provisional de y)
  logic p, q;

  assign p = ~a & b;
  assign q = a & ~b;
  assign y = p | q;

endmodule
