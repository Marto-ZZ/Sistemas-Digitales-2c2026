module negativo_4b (
    input logic [3:0] dato,
    output logic negativo
);
  assign negativo = dato[3] == 0 ? 0 : 1;
endmodule
