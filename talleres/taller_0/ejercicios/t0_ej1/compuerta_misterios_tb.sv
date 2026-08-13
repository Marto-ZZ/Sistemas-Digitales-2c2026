// Testbench para compuerta_misterios.sv

module compuerta_misterios_tb;

  // ── Clock & Reset ──────────────────────────────────────────────────────────
  logic clk = 0;
  always #5 clk = ~clk;  // periodo = 10 unidades de tiempo

  logic rst = 1;
  initial begin
    repeat (2) @(posedge clk);
    rst = 0;
  end

  // ── Señales ────────────────────────────────────────────────────────────────
  logic [0:0] value;
  logic       a, result;
  logic       pass;
  logic       done;

  assign a = value[0];

  // ── DUT ────────────────────────────────────────────────────────────────────
  compuerta_misterios dut (
      .a(a),
      .y(result)
  );

  assign pass = (result == ~a);

  // ── Oracle (recorre todas las combinaciones de entradas) ───────────────────
  oracle_tb #(
      .N(1)
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
    $dumpvars(0, compuerta_misterios_tb);

    wait (done);

    #1;  // flush de la traza
    $finish;
  end

endmodule
