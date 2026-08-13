// Testbench para circuito_ej2.sv

module circuito_ej2_tb;

  // ── Clock & Reset ──────────────────────────────────────────────────────────
  logic clk = 0;
  always #5 clk = ~clk;  // periodo = 10 unidades de tiempo

  logic rst = 1;
  initial begin
    repeat (2) @(posedge clk);
    rst = 0;
  end

  // ── Señales ────────────────────────────────────────────────────────────────
  logic [2:0] value;
  logic       a, b, c, result, exp;
  logic       pass;
  logic       done;

  assign {a, b, c} = value;

  // ── DUT ────────────────────────────────────────────────────────────────────
  circuito_ej2 dut (
      .a(a),
      .b(b),
      .c(c),
      .y(result)
  );

  assign exp  = (a & b) | (~a & c);
  assign pass = (result == exp);

  // ── Oracle (recorre todas las combinaciones de entradas) ───────────────────
  oracle_tb #(
      .N(3)
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
    $dumpvars(0, circuito_ej2_tb);

    wait (done);

    #1;  // flush de la traza
    $finish;
  end

endmodule
