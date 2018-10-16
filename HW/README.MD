# Hardware design tips:

1. In ZCU102, a maximum of 4 AURORA IP can be generated for SFP connector (limited by hardware).

2. One Aurora IP can be chosen as the "master" IP and select "include shared logic in core" in "Share Logic". This Auroroa IP should be the TX one if simplex is selected.

3. A master Aurora IP can provide clock for 3 Aurora IP. QPLL_CONTROL_OUT and QPLL_CONTROL_IN should be connected. All other required signals can be found in BD.

4. If transmission speed is higher than 8 Gb/s, gt_qpllclk_quad_in/out is needed.

5. GR_DIFF_REFCLK shoould come from the high speed transceiver's dedicated osscilator.

6. ini_clk can come from a normal outside osscilator and driven by IBUFDS.
