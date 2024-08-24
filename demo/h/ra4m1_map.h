#define ACMPLP_BASE          0x40085e00 /* 0x40085e00 - Low-Power Analog Comparator */
#define ADC140_BASE          0x4005c000 /* 0x4005c000 - 14bit A/D Converter */
#define AGT0_BASE            0x40084000 /* 0x40084000 - Asynchronous General purpose Timer 0 */
#define AGT1_BASE            0x40084100 /* 0x40084100 - Asynchronous General purpose Timer 1 */
#define BUS_BASE             0x40003000 /* 0x40003000 - BUS Control */
#define CAC_BASE             0x40044600 /* 0x40044600 - Clock Frequency Accuracy Measurement Circuit */
#define CAN0_BASE            0x40050000 /* 0x40050000 - CAN0 Module */
#define CRC_BASE             0x40074000 /* 0x40074000 - CRC Calculator */
#define CTSU_BASE            0x40081000 /* 0x40081000 - Capacitive Touch Sensing Unit */
#define DAC12_BASE           0x4005e000 /* 0x4005e000 - 12-bit D/A converter */
#define DAC8_BASE            0x4009e000 /* 0x4009e000 - 8-bit D/A converter */
#define DBG_BASE             0x4001b000 /* 0x4001b000 - Debug Function */
#define DMAC0_BASE           0x40005000 /* 0x40005000 - Direct memory access controller 0 */
#define DMAC1_BASE           0x40005040 /* 0x40005040 - Direct memory access controller 1 */
#define DMAC2_BASE           0x40005080 /* 0x40005080 - Direct memory access controller 2 */
#define DMAC3_BASE           0x400050c0 /* 0x400050c0 - Direct memory access controller 3 */
#define DMA_BASE             0x40005200 /* 0x40005200 - DMAC Module Activation */
#define DOC_BASE             0x40054100 /* 0x40054100 - Data Operation Circuit */
#define DTC_BASE             0x40005400 /* 0x40005400 - Data Transfer Controller */
#define ELC_BASE             0x40041000 /* 0x40041000 - Event Link Controller */
#define FCACHE_BASE          0x4001c000 /* 0x4001c000 - Flash Cache */
#define GPT162_BASE          0x40078200 /* 0x40078200 - General PWM Timer 2 (16-bit) */
#define GPT163_BASE          0x40078300 /* 0x40078300 - General PWM Timer 3 (16-bit) */
#define GPT164_BASE          0x40078400 /* 0x40078400 - General PWM Timer 4 (16-bit) */
#define GPT165_BASE          0x40078500 /* 0x40078500 - General PWM Timer 5 (16-bit) */
#define GPT166_BASE          0x40078600 /* 0x40078600 - General PWM Timer 6 (16-bit) */
#define GPT167_BASE          0x40078700 /* 0x40078700 - General PWM Timer 7 (16-bit) */
#define GPT320_BASE          0x40078000 /* 0x40078000 - General PWM Timer 0 (32-bit) */
#define GPT321_BASE          0x40078100 /* 0x40078100 - General PWM Timer 1 (32-bit) */
#define GPT_OPS_BASE         0x40078ff0 /* 0x40078ff0 - Output Phase Switching Controller */
#define ICU_BASE             0x40006000 /* 0x40006000 - Interrupt Controller */
#define IIC0_BASE            0x40053000 /* 0x40053000 - Inter-Integrated Circuit 0 */
#define IIC1_BASE            0x40053100 /* 0x40053100 - Inter-Integrated Circuit 1 */
#define IWDT_BASE            0x40044400 /* 0x40044400 - Independent Watchdog Timer */
#define KINT_BASE            0x40080000 /* 0x40080000 - Key Interrupt Function */
#define MMPU_BASE            0x40000000 /* 0x40000000 - Bus Master MPU */
#define MSTP_BASE            0x40047000 /* 0x40047000 - Module Stop Control B,C,D */
#define OPAMP_BASE           0x40086000 /* 0x40086000 - OperationalAmplifier */
#define PFS_BASE             0x40040800 /* 0x40040800 - Pmn Pin Function Control Register */
#define PMISC_BASE           0x40040d00 /* 0x40040d00 - Miscellaneous Port Control Register */
#define POEG_BASE            0x40042000 /* 0x40042000 - Port Output Enable Module for GPT */
#define PORT0_BASE           0x40040000 /* 0x40040000 - Port 0 Control Registers */
#define PORT1_BASE           0x40040020 /* 0x40040020 - Port 1 Control Registers */
#define PORT2_BASE           0x40040040 /* 0x40040040 - Port 2 Control Registers */
#define PORT3_BASE           0x40040060 /* 0x40040060 - Port 3 Control Registers */
#define PORT4_BASE           0x40040080 /* 0x40040080 - Port 4 Control Registers */
#define PORT5_BASE           0x400400a0 /* 0x400400a0 - Port 5 Control Registers */
#define PORT6_BASE           0x400400c0 /* 0x400400c0 - Port 6 Control Registers */
#define PORT7_BASE           0x400400e0 /* 0x400400e0 - Port 7 Control Registers */
#define PORT8_BASE           0x40040100 /* 0x40040100 - Port 8 Control Registers */
#define PORT9_BASE           0x40040120 /* 0x40040120 - Port 9 Control Registers */
#define RTC_BASE             0x40044000 /* 0x40044000 - Realtime Clock */
#define SCI0_BASE            0x40070000 /* 0x40070000 - Serial Communication Interface 0 */
#define SCI1_BASE            0x40070020 /* 0x40070020 - Serial Communication Interface 1 */
#define SCI2_BASE            0x40070040 /* 0x40070040 - Serial Communication Interface 2 */
#define SCI9_BASE            0x40070120 /* 0x40070120 - Serial Communication Interface 9 */
#define SLCDC_BASE           0x40082000 /* 0x40082000 - Segment LCD Controller/Driver */
#define SMPU_BASE            0x40000c00 /* 0x40000c00 - Bus Slave MPU */
#define SPI0_BASE            0x40072000 /* 0x40072000 - Serial Peripheral Interface 0 */
#define SPI1_BASE            0x40072100 /* 0x40072100 - Serial Peripheral Interface 1 */
#define SPMON_BASE           0x40000d00 /* 0x40000d00 - CPU Stack Pointer Monitor */
#define SRAM_BASE            0x40002000 /* 0x40002000 - SRAM Control */
#define SSIE0_BASE           0x4004e000 /* 0x4004e000 - Serial Sound Interface Ver.2.0 */
#define SYSTEM_BASE          0x4001e000 /* 0x4001e000 - System Control */
#define TSN_BASE             0x407ec000 /* 0x407ec000 - Temperature Sensor */
#define USBFS_BASE           0x40090000 /* 0x40090000 - USB 2.0 FS Module */
#define WDT_BASE             0x40044200 /* 0x40044200 - Watchdog Timer */
