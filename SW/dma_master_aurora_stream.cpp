#include "hls_stream.h"
#include "ap_int.h"
#include "config.h"


void dma_master_aurora_stream(
	hls::stream<AXI_VAL >  &in_stream,
	hls::stream<AXI_DMA_IO >  &out_stream

	)
{

//#pragma HLS DATAFLOW
#pragma HLS INTERFACE ap_ctrl_none port=return
#pragma HLS INTERFACE axis port=in_stream
#pragma HLS INTERFACE axis port=out_stream


AXI_DMA_IO val_out;

int data_length_master=500;
int indicator_master=1;
//AXI_DMA_IO val_out_;

	if (indicator_master==1)
	{
		for (int i=0; i<data_length_master;i++)
		{
			if (i < data_length_master-1 )
			{
				AXI_VAL in_stream_temp=in_stream.read();
				val_out.data=in_stream_temp;
				val_out.last=0;
				out_stream.write(val_out);
			}
			else
			{

				AXI_VAL in_stream_temp=in_stream.read();
				val_out.data=in_stream_temp;
				val_out.last=1;
				out_stream.write(val_out);
			}
		}
	}

}
