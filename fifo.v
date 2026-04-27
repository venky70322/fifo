`timescale 1ns/1ps

module fifo (
    input clk,
    input rst,
    input wr_en,
    input rd_en,
    input [7:0] din,
    output reg [7:0] dout,
    output reg full,
    output reg empty
);

reg [7:0] mem [0:3];
reg [1:0] wptr, rptr;
reg [2:0] count;

always @(posedge clk or posedge rst) begin
    if (rst) begin
        wptr  <= 0;
        rptr  <= 0;
        count <= 0;
        full  <= 0;
        empty <= 1;
        dout  <= 0;
    end
    else begin
        if (wr_en && !full) begin
            mem[wptr] <= din;
            wptr <= wptr + 1;
            count <= count + 1;
        end

        if (rd_en && !empty) begin
            dout <= mem[rptr];
            rptr <= rptr + 1;
            count <= count - 1;
        end

        full  <= (count == 4);
        empty <= (count == 0);
    end
end

endmodule
