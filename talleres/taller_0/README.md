# Taller 0 — SystemVerilog

Ejercicios de lógica combinatoria en SystemVerilog. Cada carpeta `t0_ej*` es un
ejercicio independiente.

## Abrir el entorno

1. Instalar [Docker Desktop](https://www.docker.com/products/docker-desktop/) y
   VS Code con la extensión **Dev Containers**.
2. Abrir en VS Code la carpeta raíz del repositorio (la que contiene
   `.devcontainer/`).
3. Aceptar *Reopen in Container*. Esperar a que el contenedor termine de armarse.
4. Verificar que estén activas las extensiones **HDL Studio** y
   **SystemVerilog** (slang).

No instalar Verilator ni otras herramientas en la máquina host: ya vienen en el
contenedor.

## Dónde está cada ejercicio

```
ejercicios/
  t0_ej1/                 # Ejercicio 1
    compuerta_misterios.sv
    compuerta_misterios_tb.sv
    Makefile
  t0_ej2/                 # Ejercicio 2
    circuito_ej2.sv
    circuito_ej2_tb.sv
    Makefile
  t0_ej3/                 # Ejercicio 3
    circuito_ej3.sv
    circuito_ej3_tb.sv
    Makefile
  lib/                    # Código compartido (no modificar)
  common.mk               # Reglas de make (no modificar)
```

En cada ejercicio:

| Archivo | Rol |
|---|---|
| `*.sv` (sin `_tb`) | Módulo a leer o completar |
| `*_tb.sv` | Testbench |
| `Makefile` | Comandos de simulación |

Trabajar siempre **dentro** de la carpeta del ejercicio correspondiente.

## Simular

Abrir una terminal integrada en la carpeta del ejercicio y correr:

```bash
cd ejercicios/t0_ej1   # o t0_ej2 / t0_ej3
make sim
```

Si todo está bien, la consola muestra un mensaje de **PASS**. Si falla, muestra
**FAIL** y las combinaciones que no coinciden.

Otros comandos útiles (desde la misma carpeta):

```bash
make wave    # abrir la traza en Surfer
make clean   # borrar build/
```

## Sintetizar y ver el circuito

1. En el explorador, click derecho sobre el `.sv` del módulo (no el `_tb`).
2. Elegir **Create circuit in HDL studio**.
3. En HDL Studio, usar **Synthesize**.
4. Identificar entradas, salidas y compuertas. Se puede cliquear entradas para
   ver cómo cambia la salida.

## Notas

- No modificar archivos en `lib/` ni `common.mk`.
- En el ejercicio 3 sí hay que completar casos esperados dentro del testbench
  (`circuito_ej3_tb.sv`); en los demás, no hace falta tocar el `_tb`.
- El directorio `build/` se genera solo al simular; se puede borrar con
  `make clean`.
