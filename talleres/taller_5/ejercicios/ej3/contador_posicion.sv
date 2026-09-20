module contador_posicion (
    input logic clk, input logic rst,
    input logic subir, input logic bajar,
    output logic [1:0] posicion
);
  always_ff @(posedge clk) begin
    if (rst) begin
      posicion <= 2'b00;
    end
    else if (subir && (posicion < 2'b11)) begin
      posicion <= posicion + 2'b01;
    end
    else if (bajar && (posicion > 2'b00)) begin
      posicion <= posicion - 2'b01;
    end
  end
endmodule
