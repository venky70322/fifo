compile:
	verilator -Wall --binary --timing --trace fifo.v tb.v
run:
	./obj_dir/Vfifo
all: compile run
