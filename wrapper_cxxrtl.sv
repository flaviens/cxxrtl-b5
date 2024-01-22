module wrapper_cxxrtl(input logic [31:0] clkin_0,input logic [31:0] clkin_1,input logic [31:0] in_0,output logic [31:0] out_0);
    logic [63:0] clkin_;
    logic [31:0] in_;
    logic [95:0] out_;
    assign clkin_[31:0] = clkin_0;
    assign clkin_[63:32] = clkin_1;
    assign in_[31:0] = in_0;
    assign out_0 = out_[31:0];
    top top_i(clkin_, in_, out_);
endmodule
