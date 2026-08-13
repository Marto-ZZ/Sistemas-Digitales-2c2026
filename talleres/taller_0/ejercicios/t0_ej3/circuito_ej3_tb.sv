// Testbench para circuito_ej3.sv
// Completar la tabla de verdad esperada (4 casos) antes de correr make sim.

module circuito_ej3_tb;

  // ── Clock & Reset ──────────────────────────────────────────────────────────
  logic clk = 0;
  always #5 clk = ~clk;  // periodo = 10 unidades de tiempo

  logic rst = 1;
  initial begin
    repeat (2) @(posedge clk);
    rst = 0;
  end

  // ── Señales ────────────────────────────────────────────────────────────────
  logic [1:0] value;
  logic       a, b, result, exp;
  logic       pass;
  logic       done;

  assign {a, b} = value;

  // ── DUT ────────────────────────────────────────────────────────────────────
  circuito_ej3 dut (
      .a(a),
      .b(b),
      .y(result)
  );

  // ── Completar acá los 4 casos esperados de y ───────────────────────────────
  // value = {a, b}
  always_comb begin
    case (value)
      2'b00:   exp = 1'b0;  // TODO: a=0, b=0 → y = ? (completar con 1'b0 si quiero que y valga 0, o 1'b1 si quiero que y valga 1)
      2'b01:   exp = 1'b1;  // TODO: a=0, b=1 → y = ? (completar con 1'b0 si quiero que y valga 0, o 1'b1 si quiero que y valga 1)
      2'b10:   exp = 1'b1;  // TODO: a=1, b=0 → y = ? (completar con 1'b0 si quiero que y valga 0, o 1'b1 si quiero que y valga 1)
      2'b11:   exp = 1'b0;  // TODO: a=1, b=1 → y = ? (completar con 1'b0 si quiero que y valga 0, o 1'b1 si quiero que y valga 1)
      default: exp = 1'b0;
    endcase
  end

  assign pass = (result == exp);

  // ── Oracle (recorre todas las combinaciones de entradas) ───────────────────
  oracle_tb #(
      .N(2)
  ) oracle (
      .clk  (clk),
      .rst  (rst),
      .pass (pass),
      .done (done),
      .value(value),
      .dv   ()
  );

  // ── Traza FST y terminación ────────────────────────────────────────────────
  initial begin
    $dumpfile("build/sim.fst");
    $dumpvars(0, circuito_ej3_tb);

    wait (done);

    #1;  // flush de la traza
    $finish;
  end

endmodule
