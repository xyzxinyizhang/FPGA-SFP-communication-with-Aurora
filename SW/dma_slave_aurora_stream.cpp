#include "hls_stream.h"
#include "ap_int.h"
#include "config.h"

void dma_slave_aurora_stream(
	hls::stream<AXI_DMA_IO >  &in_stream,
	hls::stream<AXI_VAL >  &out_stream
//	const unsigned data_length_slave,
//	const unsigned indicator_slave
	)
{

//#pragma HLS DATAFLOW
#pragma HLS INTERFACE ap_ctrl_none port=return
#pragma HLS INTERFACE axis port=in_stream
#pragma HLS INTERFACE axis port=out_stream
//#pragma HLS INTERFACE s_axilite port=data_length_slave
//#pragma HLS INTERFACE s_axilite port=indicator_slave


AXI_VAL out_stream_;


	int indicator_slave=1;
	int data_length_slave=500;

	if (indicator_slave==1)
				{
		for(int i=0; i < data_length_slave; i++)
		{


			AXI_DMA_IO temp = in_stream.read();
			out_stream_=temp.data;
//			out_stream_actual=out_stream_;

			out_stream.write(out_stream_);
			}
		}

}


