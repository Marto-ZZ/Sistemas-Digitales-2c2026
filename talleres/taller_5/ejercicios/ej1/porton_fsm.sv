module porton_fsm (
    input  logic clk,
    input  logic rst,
    input  logic button,
    output logic cerrado,
    output logic abriendo,
    output logic abierto,
    output logic cerrando
);

  // aca le asignamos un tipo de dato basado en un valor de 2 bits a cada estado
  typedef enum logic [1:0] {
    CERRADO,
    ABRIENDO,
    ABIERTO,
    CERRANDO
  } state_t;

  // entonces current_state y next_state pueden ser cualquiera de los anteriores 4 estados
  state_t current_state, next_state;

  // declaramos un flipflop para actualizar el estados segun el reset
  always_ff @(posedge clk) begin
    // primero evaluamos el rst, si hay reset entonces asignamos que post flanco el estado sea CERRADO
    if (rst) begin
      current_state <= CERRADO;
    // si no hay reset, entonces pasamos al siguiente estado post flanco
    end else begin
      current_state <= next_state;
    end
  end

  // declaramos un multiplexor
  always_comb begin
    // Valor por defecto donde nos quedamos con el mismo estado
    next_state = current_state;

    // evaluamos la variable de current_state
    unique case (current_state)

      // si esta cerrado y el boton es 1, entonces pasamos a abriendo
      CERRADO: begin
        if (button) begin
          next_state = ABRIENDO;
        end
      end

      // sin boton el estado permanece igual, entonces si era abriendo pasa a abierto
      ABRIENDO: begin
        next_state = ABIERTO;
      end

      // abierto si recive el boton entonces pasa a cerrando
      ABIERTO: begin
        if (button) begin
          next_state = CERRANDO;
        end
      end

      // cerrando pasa a cerrado despues de un ciclo independientemente del boton
      CERRANDO: begin
        next_state = CERRADO;
      end

      // si llegase a haber algun valor indefinido entonces el programa se va directo a cerrado
      default: begin
        next_state = CERRADO;
      end
    endcase
  end

  // la caracteristica de las maquinas Moore es que sus salidas dependen exclusivamente del estado interno
  // entonces le asignamos a cada output el estado de current_state
  assign cerrado  = (current_state == CERRADO);
  assign abriendo = (current_state == ABRIENDO);
  assign abierto  = (current_state == ABIERTO);
  assign cerrando = (current_state == CERRANDO);

endmodule
