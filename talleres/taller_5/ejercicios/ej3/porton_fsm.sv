module porton_fsm_smart (
    input logic clk, input logic rst, input logic button,
    input logic [1:0] posicion,
    output logic abrir, output logic cerrar, output logic pausa,
    output logic abierto, output logic cerrado
);
  typedef enum logic [2:0] {
    CERRADO,
    ABRIENDO,
    PAUSA_ABRIENDO, // ahora le metemos otro tipo de estado que es la pausa mientras se abre
    ABIERTO,
    CERRANDO,
    PAUSA_CERRANDO  // otro nuevo estado, pausado mientras se cierra
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
        // si la posicion es 3 entonces ya llego a estar abierto
        if (posicion == 2'b11) begin
          next_state = ABIERTO;
        end 
        else if (button) begin
          next_state = PAUSA_ABRIENDO;
        end
      end

      PAUSA_ABRIENDO: begin
        // si la posicion llega a 3 estando en pausa_abierto entonces el siguiente estado es abierto
        if (posicion == 2'b11) begin
          next_state = ABIERTO;
        end else if (button) begin
          // si en este estado tocamos el boton entonces pega marcha atras
          next_state = CERRANDO;
        end
      end

      ABIERTO: begin
        if (button) begin
          next_state = CERRANDO;
        end
      end

      CERRANDO: begin
        // si la posicion es 0 esta directamente cerrado ya
        if (posicion == 2'b00) begin
          next_state = CERRADO;
        end 
        else if (button) begin
          next_state = PAUSA_CERRANDO;
        end
      end

      PAUSA_CERRANDO: begin
        // si la posicion llega a 0 en pausa_cerrando entonces el siguiente estado es cerrado
        if (posicion == 2'b00) begin
          next_state = CERRADO;
        end else if (button) begin
          // si se toca el boton hacemos lo contrario a lo que ibamos a hacer
          next_state = ABRIENDO;
        end
      end

      default: begin
        next_state = CERRADO;
      end
    endcase
  end

  assign cerrado = (current_state == CERRADO);
  assign abierto = (current_state == ABIERTO);
  assign abrir   = (current_state == ABRIENDO);
  assign cerrar  = (current_state == CERRANDO);
  assign pausa   = (current_state == PAUSA_ABRIENDO) || (current_state == PAUSA_CERRANDO);
endmodule
