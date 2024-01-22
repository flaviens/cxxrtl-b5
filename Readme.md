# CXXRTL: always_ff triggered even though no sensitivity condition is met

How to reproduce:
```bash
bash run_cxxrtl.sh
```

Yosys version: `Yosys 0.37+21 (git sha1 3d9e44d18, clang 10.0.0-4ubuntu1 -fPIC -Os)`

Expected:
```bash
out 0 = 0
out 1 = 0
out 2 = 0
out 3 = 0
```

Actual:
```bash
out 0 = 0
out 1 = 0
out 2 = 0
out 3 = 1
```

For comparison, the same code in Verilog produces the expected result:
```bash
bash run_verilator.sh
```
