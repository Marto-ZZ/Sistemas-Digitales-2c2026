module porton_fsm_long (
    input logic clk, input logic rst, input logic button,
    input logic [1:0] posicion,
    output logic subir, output logic bajar,
    output logic abierto, output logic cerrado
);

  typedef enum logic [1:0] {
    CERRADO,
    ABRIENDO,
    ABIERTO,
    CERRANDO
  } state_t;

  state_t current_state, next_state;

  always_ff @(posedge clk) begin
    if (rst) begin
      current_state <= CERRADO;
    end else begin
      current_state <= next_state;
    end
  end

  always_comb begin
    next_state = current_state;

    case (current_state)
      CERRADO: begin
        if (button) begin
          next_state = ABRIENDO;
        end
      end

      ABRIENDO: begin
        if (posicion == 2'b11) begin
          next_state = ABIERTO;
        end
      end

      ABIERTO: begin
        if (button) begin
          next_state = CERRANDO;
        end
      end

      CERRANDO: begin
        if (posicion == 2'b00) begin
          next_state = CERRADO;
        end
      end

      default: begin
        next_state = CERRADO;
      end
    endcase
  end

  assign cerrado = (current_state == CERRADO);
  assign abierto = (current_state == ABIERTO);
  assign subir   = (current_state == ABRIENDO);
  assign bajar   = (current_state == CERRANDO);
endmodule
