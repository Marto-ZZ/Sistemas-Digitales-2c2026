module shifter_4b (
    input logic [3:0] dato,
    input logic aritmetico,
    output logic [3:0] resultado,
    output logic negativo, zero
);
  // COMPLETAR: desplazar dato una posición a derecha según aritmetico.
  // Reutilizar negativo_4b y zero_4b sobre resultado.
  // En modo lógico, ambos flags deben valer 0.
  assign resultado = aritmetico ? {dato[3], dato[3:1]} : {1'b0, dato[3:1]};
  logic flag_n;
  logic flag_z;

  negativo_4b negativo_4b (
    .dato    (resultado),
    .negativo(flag_n)
  );

  zero_4b zero_4b (
    .dato(resultado),
    .zero(flag_z)
  );

  assign negativo = aritmetico ? flag_n : 1'b0;
  assign zero = aritmetico ? flag_z : 1'b0;
endmodule
