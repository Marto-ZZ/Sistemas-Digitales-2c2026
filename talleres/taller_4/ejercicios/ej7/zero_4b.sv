module zero_4b (
    input logic [3:0] dato,
    output logic zero
);
  assign zero = dato[3] == 0 &&
                dato[2] == 0 &&
                dato[1] == 0 &&
                dato[0] == 0 ?
                1 : 0;
endmodule
