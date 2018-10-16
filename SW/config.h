#include <hls_stream.h>
#include <ap_axi_sdata.h>
#include <ap_fixed.h>
#include <ap_int.h>

typedef float FPGA_DATA;
typedef short FPGA_DATA_FIX;
struct AXI_DMA_IO {
	FPGA_DATA data1;
	bool last;
};

struct AXI_VAL  {
	FPGA_DATA data1;
};

