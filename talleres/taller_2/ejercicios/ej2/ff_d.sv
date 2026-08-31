module ff_d (
    input  logic clk,
    input  logic rst,
    input  logic d,
    output logic q
);
  // Basicamente always_ff sirve para levantar un flip flop
  // @(postedge clk) significa que el flip flop es sensible al flanco de clk (cuando pasa de 0 a 1)
  always_ff @(posedge clk) begin

    // Si el input rst vale 1 (verdadero)
    if(rst) begin
      q <= 1'b0; // la salida q se vuelve 1 (verdadero)
    end else begin // si no ocurre lo anterior
      q <= d; // la salida q es igual a la entrada d
    end
  end
endmodule
