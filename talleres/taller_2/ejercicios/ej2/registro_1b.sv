module registro_1b (
    input  logic clk,
    input  logic rst,
    input  logic we,
    input  logic din,
    output logic q
);
  // inicializamos un multiplexor que interactua con el ff 
  logic mux;

  // lo armamos usando un condicional ternario
  // si 'we' vale 1, entonces pasa 'din', sino pasa 'q'
  assign mux = we ? din : q;

  // armo un nuevo ff donde su entrada ahora es el multiplexor
  ff_d nuevo_ff_d (
    .clk(clk),
    .rst(rst),
    .d(mux),
    .q(q)
  );
endmodule
