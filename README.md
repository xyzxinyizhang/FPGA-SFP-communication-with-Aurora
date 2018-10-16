# FPGA SFP High Speed Transceiver Communication (ZCU102)

This project provides a basic high speed transceiver design through "DDR-DMA-buffer-AURORA-SFP-AURORA-buffer-DMA-DDR" in one board.

This project is based on Xilinx Aurora IP (64/66b).

The SFP+ connector and Xilinx IP Aurora is used in this project.

This design is aiming at test the communication of two SFP connector. Two Aurora Ip are instantiated in the design and data is looped back 

via a 10G SFP+ Passive Direct Attach Copper Twinax Cable.

Data streaming and DMA are adopted in this project. The IO for streaming data to FPGA can be found in ./SW... 

The design block diagram can be found in the ./HW/block_diagram.pdf.


