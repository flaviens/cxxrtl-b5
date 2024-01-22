module top(clkin_data, in_data, out_data, probe_data);
  input [63:0] clkin_data;
  wire [63:0] clkin_data;
  input [31:0] in_data;
  wire [31:0] in_data;
  output [31:0] out_data;
  wire [31:0] out_data;
  output [31:0] probe_data;
  wire [31:0] probe_data;
  reg outreg;
  always_ff @(posedge clkin_data[0], negedge clkin_data[32])
    if (!clkin_data[32]) outreg <= in_data[4];
    else outreg <= 1'b0;
  assign out_data[0] = outreg;
endmodule
