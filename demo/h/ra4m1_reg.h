
/* SYSTEM - System Control */
#define SYSTEM_BASE                       0x4001e000
#define SYSTEM_VBTCR1_OFFSET              0x041f
#define SYSTEM_VBTCR1                     (SYSTEM_BASE + SYSTEM_VBTCR1_OFFSET)
#define SYSTEM_VBTCR1_BPWSWSTP            (1 <<  0) /* 01: Battery Power supply Switch Stop */
#define SYSTEM_VBTCR2_OFFSET              0x04b0
#define SYSTEM_VBTCR2                     (SYSTEM_BASE + SYSTEM_VBTCR2_OFFSET)
#define SYSTEM_VBTCR2_VBTLVDLVL           (2 <<  6) /* 40: VBATT Pin Voltage Low Voltage Detect Level Select Bit */
#define SYSTEM_VBTCR2_VBTLVDLVL_MASK           (0x03)
#define SYSTEM_VBTCR2_VBTLVDEN            (1 <<  4) /* 10: VBATT Pin Low Voltage Detect Enable Bit */
#define SYSTEM_VBTSR_OFFSET               0x04b1
#define SYSTEM_VBTSR                      (SYSTEM_BASE + SYSTEM_VBTSR_OFFSET)
#define SYSTEM_VBTSR_VBTRVLD              (1 <<  4) /* 10: VBATT_R Valid */
#define SYSTEM_VBTSR_VBTBLDF              (1 <<  1) /* 02: VBATT Battery Low voltage Detect Flag */
#define SYSTEM_VBTSR_VBTRDF               (1 <<  0) /* 01: VBAT_R Reset Detect Flag */
#define SYSTEM_VBTCMPCR_OFFSET            0x04b2
#define SYSTEM_VBTCMPCR                   (SYSTEM_BASE + SYSTEM_VBTCMPCR_OFFSET)
#define SYSTEM_VBTCMPCR_VBTCMPE           (1 <<  0) /* 01: VBATT pin low voltage detect circuit output enable */
#define SYSTEM_VBTLVDICR_OFFSET           0x04b4
#define SYSTEM_VBTLVDICR                  (SYSTEM_BASE + SYSTEM_VBTLVDICR_OFFSET)
#define SYSTEM_VBTLVDICR_VBTLVDISEL       (1 <<  1) /* 02: Pin Low Voltage Detect Interrupt Select bit */
#define SYSTEM_VBTLVDICR_VBTLVDIE         (1 <<  0) /* 01: VBATT Pin Low Voltage Detect Interrupt Enable bit */
#define SYSTEM_VBTWCTLR_OFFSET            0x04b6
#define SYSTEM_VBTWCTLR                   (SYSTEM_BASE + SYSTEM_VBTWCTLR_OFFSET)
#define SYSTEM_VBTWCTLR_VWEN              (1 <<  0) /* 01: VBATT wakeup enable */
#define SYSTEM_VBTWCH0OTSR_OFFSET         0x04b8
#define SYSTEM_VBTWCH0OTSR                (SYSTEM_BASE + SYSTEM_VBTWCH0OTSR_OFFSET)
#define SYSTEM_VBTWCH0OTSR_CH0VRTCATE     (1 <<  4) /* 10: VBATWIO0 Output RTC Alarm Signal Enable */
#define SYSTEM_VBTWCH0OTSR_CH0VRTCTE      (1 <<  3) /* 08: VBATWIO0 Output RTC Periodic Signal Enable */
#define SYSTEM_VBTWCH0OTSR_CH0VCH2TE      (1 <<  2) /* 04: VBATWIO0 Output VBATWIO2 Trigger Enable */
#define SYSTEM_VBTWCH0OTSR_CH0VCH1TE      (1 <<  1) /* 02: VBATWIO0 Output VBATWIO1 Trigger Enable */
#define SYSTEM_VBTWCH1OTSR_OFFSET         0x04b9
#define SYSTEM_VBTWCH1OTSR                (SYSTEM_BASE + SYSTEM_VBTWCH1OTSR_OFFSET)
#define SYSTEM_VBTWCH1OTSR_CH1VRTCATE     (1 <<  4) /* 10: VBATWIO1 Output RTC Alarm Signal Enable */
#define SYSTEM_VBTWCH1OTSR_CH1VRTCTE      (1 <<  3) /* 08: VBATWIO1 Output RTC Periodic Signal Enable */
#define SYSTEM_VBTWCH1OTSR_CH1VCH2TE      (1 <<  2) /* 04: VBATWIO1 Output VBATWIO2 Trigger Enable */
#define SYSTEM_VBTWCH1OTSR_CH1VCH0TE      (1 <<  0) /* 01: VBATWIO1 Output VBATWIO0 Trigger Enable */
#define SYSTEM_VBTWCH2OTSR_OFFSET         0x04ba
#define SYSTEM_VBTWCH2OTSR                (SYSTEM_BASE + SYSTEM_VBTWCH2OTSR_OFFSET)
#define SYSTEM_VBTWCH2OTSR_CH2VRTCATE     (1 <<  4) /* 10: VBATWIO2 Output RTC Alarm Signal Enable */
#define SYSTEM_VBTWCH2OTSR_CH2VRTCTE      (1 <<  3) /* 08: VBATWIO2 Output RTC Periodic Signal Enable */
#define SYSTEM_VBTWCH2OTSR_CH2VCH1TE      (1 <<  1) /* 02: VBATWIO2 Output VBATWIO1 Trigger Enable */
#define SYSTEM_VBTWCH2OTSR_CH2VCH0TE      (1 <<  0) /* 01: VBATWIO2 Output VBATWIO0 Trigger Enable */
#define SYSTEM_VBTICTLR_OFFSET            0x04bb
#define SYSTEM_VBTICTLR                   (SYSTEM_BASE + SYSTEM_VBTICTLR_OFFSET)
#define SYSTEM_VBTICTLR_VCH2INEN          (1 <<  2) /* 04: VBATT Wakeup I/O 2 Input Enable */
#define SYSTEM_VBTICTLR_VCH1INEN          (1 <<  1) /* 02: VBATT Wakeup I/O 1 Input Enable */
#define SYSTEM_VBTICTLR_VCH0INEN          (1 <<  0) /* 01: VBATT Wakeup I/O 0 Input Enable */
#define SYSTEM_VBTOCTLR_OFFSET            0x04bc
#define SYSTEM_VBTOCTLR                   (SYSTEM_BASE + SYSTEM_VBTOCTLR_OFFSET)
#define SYSTEM_VBTOCTLR_VOUT2LSEL         (1 <<  5) /* 20: VBATT Wakeup I/O 2 Output Level Selection */
#define SYSTEM_VBTOCTLR_VOUT1LSEL         (1 <<  4) /* 10: VBATT Wakeup I/O 1 Output Level Selection */
#define SYSTEM_VBTOCTLR_VOUT0LSEL         (1 <<  3) /* 08: VBATT Wakeup I/O 0 Output Level Selection */
#define SYSTEM_VBTOCTLR_VCH2OEN           (1 <<  2) /* 04: VBATT Wakeup I/O 2 Output Enable */
#define SYSTEM_VBTOCTLR_VCH1OEN           (1 <<  1) /* 02: VBATT Wakeup I/O 1 Output Enable */
#define SYSTEM_VBTOCTLR_VCH0OEN           (1 <<  0) /* 01: VBATT Wakeup I/O 0 Output Enable */
#define SYSTEM_VBTWTER_OFFSET             0x04bd
#define SYSTEM_VBTWTER                    (SYSTEM_BASE + SYSTEM_VBTWTER_OFFSET)
#define SYSTEM_VBTWTER_VRTCAE             (1 <<  4) /* 10: RTC Alarm Signal Enable */
#define SYSTEM_VBTWTER_VRTCIE             (1 <<  3) /* 08: RTC Periodic Signal Enable */
#define SYSTEM_VBTWTER_VCH2E              (1 <<  2) /* 04: VBATWIO2 Pin Enable */
#define SYSTEM_VBTWTER_VCH1E              (1 <<  1) /* 02: VBATWIO1 Pin Enable */
#define SYSTEM_VBTWTER_VCH0E              (1 <<  0) /* 01: VBATWIO0 Pin Enable */
#define SYSTEM_VBTWEGR_OFFSET             0x04be
#define SYSTEM_VBTWEGR                    (SYSTEM_BASE + SYSTEM_VBTWEGR_OFFSET)
#define SYSTEM_VBTWEGR_VCH2EG             (1 <<  2) /* 04: VBATWIO2 Wakeup Trigger Source Edge Select */
#define SYSTEM_VBTWEGR_VCH1EG             (1 <<  1) /* 02: VBATWIO1 Wakeup Trigger Source Edge Select */
#define SYSTEM_VBTWEGR_VCH0EG             (1 <<  0) /* 01: VBATWIO0 Wakeup Trigger Source Edge Select */
#define SYSTEM_VBTWFR_OFFSET              0x04bf
#define SYSTEM_VBTWFR                     (SYSTEM_BASE + SYSTEM_VBTWFR_OFFSET)
#define SYSTEM_VBTWFR_VRTCAF              (1 <<  4) /* 10: VBATT RTC-Alarm Wakeup Trigger Flag */
#define SYSTEM_VBTWFR_VRTCIF              (1 <<  3) /* 08: VBATT RTC-Interval Wakeup Trigger Flag */
#define SYSTEM_VBTWFR_VCH2F               (1 <<  2) /* 04: VBATWIO2 Wakeup Trigger Flag */
#define SYSTEM_VBTWFR_VCH1F               (1 <<  1) /* 02: VBATWIO1 Wakeup Trigger Flag */
#define SYSTEM_VBTWFR_VCH0F               (1 <<  0) /* 01: VBATWIO0 Wakeup Trigger Flag */
#define SYSTEM_VBTBKR_SIZE                512
#define SYSTEM_VBTBKR_OFFSET              0x0500
#define SYSTEM_VBTBKR(p)                  (SYSTEM_BASE + SYSTEM_VBTBKR_OFFSET + (p)*0x0001)
#define SYSTEM_VBTBKR_VBTBKR              (8 <<  0) /* 01: VBTBKR is a 512-byte readable/writable register to store data powered by VBATT. The value of this register is retained even when VCC is not powered but VBATT is powered. VBTBKR is initialized by VBATT selected voltage power-on-reset. */
#define SYSTEM_VBTBKR_VBTBKR_MASK              (0xff)
#define SYSTEM_SCKDIVCR_OFFSET            0x0020
#define SYSTEM_SCKDIVCR                   (SYSTEM_BASE + SYSTEM_SCKDIVCR_OFFSET)
#define SYSTEM_SCKDIVCR_FCK               (3 << 28) /* 10000000: Flash IF Clock (FCLK) Select */
#define SYSTEM_SCKDIVCR_FCK_MASK               (0x07)
#define SYSTEM_SCKDIVCR_ICK               (3 << 24) /* 1000000: System Clock (ICLK) Select */
#define SYSTEM_SCKDIVCR_ICK_MASK               (0x07)
#define SYSTEM_SCKDIVCR_PCKA              (3 << 12) /* 1000: Peripheral Module Clock A (PCLKA) Select */
#define SYSTEM_SCKDIVCR_PCKA_MASK              (0x07)
#define SYSTEM_SCKDIVCR_PCKB              (3 <<  8) /* 100: Peripheral Module Clock B (PCLKB) Select */
#define SYSTEM_SCKDIVCR_PCKB_MASK              (0x07)
#define SYSTEM_SCKDIVCR_PCKC              (3 <<  4) /* 10: Peripheral Module Clock C (PCLKC) Select */
#define SYSTEM_SCKDIVCR_PCKC_MASK              (0x07)
#define SYSTEM_SCKDIVCR_PCKD              (3 <<  0) /* 01: Peripheral Module Clock D (PCLKD) Select */
#define SYSTEM_SCKDIVCR_PCKD_MASK              (0x07)
#define SYSTEM_SCKSCR_OFFSET              0x0026
#define SYSTEM_SCKSCR                     (SYSTEM_BASE + SYSTEM_SCKSCR_OFFSET)
#define SYSTEM_SCKSCR_CKSEL               (3 <<  0) /* 01: Clock Source Select Selecting the system clock source faster than 32MHz(system clock source > 32MHz ) is prohibit when SCKDIVCR.ICK[2:0] bits select the division-by-1 and MEMWAIT.MEMWAIT =0. */
#define SYSTEM_SCKSCR_CKSEL_MASK               (0x07)
#define SYSTEM_PLLCR_OFFSET               0x002a
#define SYSTEM_PLLCR                      (SYSTEM_BASE + SYSTEM_PLLCR_OFFSET)
#define SYSTEM_PLLCR_PLLSTP               (1 <<  0) /* 01: PLL Stop Control */
#define SYSTEM_PLLCCR2_OFFSET             0x002b
#define SYSTEM_PLLCCR2                    (SYSTEM_BASE + SYSTEM_PLLCCR2_OFFSET)
#define SYSTEM_PLLCCR2_PLODIV             (2 <<  6) /* 40: PLL Output Frequency Division Ratio Select */
#define SYSTEM_PLLCCR2_PLODIV_MASK             (0x03)
#define SYSTEM_PLLCCR2_PLLMUL             (5 <<  0) /* 01: PLL Frequency Multiplication Factor Select */
#define SYSTEM_PLLCCR2_PLLMUL_MASK             (0x1f)
#define SYSTEM_MEMWAIT_OFFSET             0x0031
#define SYSTEM_MEMWAIT                    (SYSTEM_BASE + SYSTEM_MEMWAIT_OFFSET)
#define SYSTEM_MEMWAIT_MEMWAIT            (1 <<  0) /* 01: Memory Wait Cycle Select Note: Writing 0 to the MEMWAIT is prohibited when SCKDIVCR.ICK selects division by 1 and SCKSCR.CKSEL[2:0] bits select the system clock source that is faster than 32 MHz (ICLK > 32 MHz). */
#define SYSTEM_MOSCCR_OFFSET              0x0032
#define SYSTEM_MOSCCR                     (SYSTEM_BASE + SYSTEM_MOSCCR_OFFSET)
#define SYSTEM_MOSCCR_MOSTP               (1 <<  0) /* 01: Main Clock Oscillator Stop Note: MOMCR register must be set before setting MOSTP to 0. */
#define SYSTEM_HOCOCR_OFFSET              0x0036
#define SYSTEM_HOCOCR                     (SYSTEM_BASE + SYSTEM_HOCOCR_OFFSET)
#define SYSTEM_HOCOCR_HCSTP               (1 <<  0) /* 01: HOCO Stop */
#define SYSTEM_MOCOCR_OFFSET              0x0038
#define SYSTEM_MOCOCR                     (SYSTEM_BASE + SYSTEM_MOCOCR_OFFSET)
#define SYSTEM_MOCOCR_MCSTP               (1 <<  0) /* 01: MOCO Stop */
#define SYSTEM_OSCSF_OFFSET               0x003c
#define SYSTEM_OSCSF                      (SYSTEM_BASE + SYSTEM_OSCSF_OFFSET)
#define SYSTEM_OSCSF_PLLSF                (1 <<  5) /* 20: PLL Clock Oscillation Stabilization Flag */
#define SYSTEM_OSCSF_MOSCSF               (1 <<  3) /* 08: Main Clock Oscillation Stabilization Flag */
#define SYSTEM_OSCSF_HOCOSF               (1 <<  0) /* 01: HOCO Clock Oscillation Stabilization Flag NOTE: The HOCOSF bit value after a reset is 1 when the OFS1.HOCOEN bit is 0. It is 0 when the OFS1.HOCOEN bit is 1. */
#define SYSTEM_CKOCR_OFFSET               0x003e
#define SYSTEM_CKOCR                      (SYSTEM_BASE + SYSTEM_CKOCR_OFFSET)
#define SYSTEM_CKOCR_CKOEN                (1 <<  7) /* 80: Clock out enable */
#define SYSTEM_CKOCR_CKODIV               (3 <<  4) /* 10: Clock out input frequency Division Select */
#define SYSTEM_CKOCR_CKODIV_MASK               (0x07)
#define SYSTEM_CKOCR_CKOSEL               (3 <<  0) /* 01: Clock out source select */
#define SYSTEM_CKOCR_CKOSEL_MASK               (0x07)
#define SYSTEM_TRCKCR_OFFSET              0x003f
#define SYSTEM_TRCKCR                     (SYSTEM_BASE + SYSTEM_TRCKCR_OFFSET)
#define SYSTEM_TRCKCR_TRCKEN              (1 <<  7) /* 80: Trace Clock operating enable */
#define SYSTEM_TRCKCR_TRCK                (4 <<  0) /* 01: Trace Clock operating frequency select */
#define SYSTEM_TRCKCR_TRCK_MASK                (0x0f)
#define SYSTEM_OSTDCR_OFFSET              0x0040
#define SYSTEM_OSTDCR                     (SYSTEM_BASE + SYSTEM_OSTDCR_OFFSET)
#define SYSTEM_OSTDCR_OSTDE               (1 <<  7) /* 80: Oscillation Stop Detection Function Enable */
#define SYSTEM_OSTDCR_OSTDIE              (1 <<  0) /* 01: Oscillation Stop Detection Interrupt Enable */
#define SYSTEM_OSTDSR_OFFSET              0x0041
#define SYSTEM_OSTDSR                     (SYSTEM_BASE + SYSTEM_OSTDSR_OFFSET)
#define SYSTEM_OSTDSR_OSTDF               (1 <<  0) /* 01: Oscillation Stop Detection Flag */
#define SYSTEM_SLCDSCKCR_OFFSET           0x0050
#define SYSTEM_SLCDSCKCR                  (SYSTEM_BASE + SYSTEM_SLCDSCKCR_OFFSET)
#define SYSTEM_SLCDSCKCR_LCDSCKEN         (1 <<  7) /* 80: LCD Source Clock Out Enable */
#define SYSTEM_SLCDSCKCR_LCDSCKSEL        (3 <<  0) /* 01: LCD Source Clock (LCDSRCCLK) Select */
#define SYSTEM_SLCDSCKCR_LCDSCKSEL_MASK        (0x07)
#define SYSTEM_MOCOUTCR_OFFSET            0x0061
#define SYSTEM_MOCOUTCR                   (SYSTEM_BASE + SYSTEM_MOCOUTCR_OFFSET)
#define SYSTEM_MOCOUTCR_MOCOUTRM          (8 <<  0) /* 01: MOCO User Trimming 1000_0000 : -128 1000_0001 : -127 1000_0010 : -126 . . . 1111_1111 : -1 0000_0000 : Center Code 0000_0001 : +1 . . . 0111_1101 : +125 0111_1110 : +126 0111_1111 : +127 These bits are added to original MOCO trimming bits */
#define SYSTEM_MOCOUTCR_MOCOUTRM_MASK          (0xff)
#define SYSTEM_HOCOUTCR_OFFSET            0x0062
#define SYSTEM_HOCOUTCR                   (SYSTEM_BASE + SYSTEM_HOCOUTCR_OFFSET)
#define SYSTEM_HOCOUTCR_HOCOUTRM          (8 <<  0) /* 01: HOCO User Trimming 1000_0000 : -128 1000_0001 : -127 1000_0010 : -126 . . . 1111_1111 : -1 0000_0000 : Center Code 0000_0001 : +1 . . . 0111_1101 : +125 0111_1110 : +126 0111_1111 : +127 These bits are added to original HOCO trimming bits */
#define SYSTEM_HOCOUTCR_HOCOUTRM_MASK          (0xff)
#define SYSTEM_MOSCWTCR_OFFSET            0x00a2
#define SYSTEM_MOSCWTCR                   (SYSTEM_BASE + SYSTEM_MOSCWTCR_OFFSET)
#define SYSTEM_MOSCWTCR_MSTS              (4 <<  0) /* 01: Main clock oscillator wait time setting */
#define SYSTEM_MOSCWTCR_MSTS_MASK              (0x0f)
#define SYSTEM_HOCOWTCR_OFFSET            0x00a5
#define SYSTEM_HOCOWTCR                   (SYSTEM_BASE + SYSTEM_HOCOWTCR_OFFSET)
#define SYSTEM_HOCOWTCR_HSTS              (3 <<  0) /* 01: HOCO wait time setting */
#define SYSTEM_HOCOWTCR_HSTS_MASK              (0x07)
#define SYSTEM_USBCKCR_OFFSET             0x00d0
#define SYSTEM_USBCKCR                    (SYSTEM_BASE + SYSTEM_USBCKCR_OFFSET)
#define SYSTEM_USBCKCR_USBCLKSEL          (1 <<  0) /* 01: USB Clock Source Select */
#define SYSTEM_MOMCR_OFFSET               0x0413
#define SYSTEM_MOMCR                      (SYSTEM_BASE + SYSTEM_MOMCR_OFFSET)
#define SYSTEM_MOMCR_MOSEL                (1 <<  6) /* 40: Main Clock Oscillator Switching */
#define SYSTEM_MOMCR_MODRV1               (1 <<  3) /* 08: Main Clock Oscillator Drive Capability 1 Switching */
#define SYSTEM_SOSCCR_OFFSET              0x0480
#define SYSTEM_SOSCCR                     (SYSTEM_BASE + SYSTEM_SOSCCR_OFFSET)
#define SYSTEM_SOSCCR_SOSTP               (1 <<  0) /* 01: Sub-Clock Oscillator Stop */
#define SYSTEM_SOMCR_OFFSET               0x0481
#define SYSTEM_SOMCR                      (SYSTEM_BASE + SYSTEM_SOMCR_OFFSET)
#define SYSTEM_SOMCR_SODRV                (2 <<  0) /* 01: Sub-Clock Oscillator Drive Capability Switching */
#define SYSTEM_SOMCR_SODRV_MASK                (0x03)
#define SYSTEM_LOCOCR_OFFSET              0x0490
#define SYSTEM_LOCOCR                     (SYSTEM_BASE + SYSTEM_LOCOCR_OFFSET)
#define SYSTEM_LOCOCR_LCSTP               (1 <<  0) /* 01: LOCO Stop */
#define SYSTEM_LOCOUTCR_OFFSET            0x0492
#define SYSTEM_LOCOUTCR                   (SYSTEM_BASE + SYSTEM_LOCOUTCR_OFFSET)
#define SYSTEM_LOCOUTCR_LOCOUTRM          (8 <<  0) /* 01: LOCO User Trimming 1000_0000 : -128 1000_0001 : -127 1000_0010 : -126 . . . 1111_1111 : -1 0000_0000 : Center Code 0000_0001 : +1 . . . 0111_1101 : +125 0111_1110 : +126 0111_1111 : +127 These bits are added to original LOCO trimming bits */
#define SYSTEM_LOCOUTCR_LOCOUTRM_MASK          (0xff)
#define SYSTEM_SBYCR_OFFSET               0x000c
#define SYSTEM_SBYCR                      (SYSTEM_BASE + SYSTEM_SBYCR_OFFSET)
#define SYSTEM_SBYCR_SSBY                 (1 << 15) /* 8000: Software Standby */
#define SYSTEM_MSTPCRA_OFFSET             0x001c
#define SYSTEM_MSTPCRA                    (SYSTEM_BASE + SYSTEM_MSTPCRA_OFFSET)
#define SYSTEM_MSTPCRA_MSTPA22            (1 << 22) /* 400000: DMA Controller/Data Transfer Controller Module Stop */
#define SYSTEM_MSTPCRA_MSTPA6             (1 <<  6) /* 40: ECCRAM Module Stop */
#define SYSTEM_MSTPCRA_MSTPA0             (1 <<  0) /* 01: RAM0 Module Stop */
#define SYSTEM_SNZCR_OFFSET               0x0092
#define SYSTEM_SNZCR                      (SYSTEM_BASE + SYSTEM_SNZCR_OFFSET)
#define SYSTEM_SNZCR_SNZE                 (1 <<  7) /* 80: Snooze Mode Enable */
#define SYSTEM_SNZCR_SNZDTCEN             (1 <<  1) /* 02: DTC Enable in Snooze Mode */
#define SYSTEM_SNZCR_RXDREQEN             (1 <<  0) /* 01: RXD0 Snooze Request Enable NOTE: Do not set to 1 other than in asynchronous mode. */
#define SYSTEM_SNZEDCR_OFFSET             0x0094
#define SYSTEM_SNZEDCR                    (SYSTEM_BASE + SYSTEM_SNZEDCR_OFFSET)
#define SYSTEM_SNZEDCR_SCI0UMTED          (1 <<  7) /* 80: SCI0 Address Mismatch Snooze End Enable */
#define SYSTEM_SNZEDCR_AD0UMTED           (1 <<  4) /* 10: ADC140 Compare Mismatch Snooze End Enable */
#define SYSTEM_SNZEDCR_AD0MATED           (1 <<  3) /* 08: ADC140 Compare Match Snooze End Enable */
#define SYSTEM_SNZEDCR_DTCNZRED           (1 <<  2) /* 04: Not Last DTC Transmission Completion Snooze End Enable */
#define SYSTEM_SNZEDCR_DTCZRED            (1 <<  1) /* 02: Last DTC Transmission Completion Snooze End Enable */
#define SYSTEM_SNZEDCR_AGTUNFED           (1 <<  0) /* 01: AGT1 Underflow Snooze End Enable */
#define SYSTEM_SNZREQCR_OFFSET            0x0098
#define SYSTEM_SNZREQCR                   (SYSTEM_BASE + SYSTEM_SNZREQCR_OFFSET)
#define SYSTEM_SNZREQCR_SNZREQEN30        (1 << 30) /* 40000000: Snooze Request Enable 30 Enable AGT1 compare match B snooze request */
#define SYSTEM_SNZREQCR_SNZREQEN29        (1 << 29) /* 20000000: Snooze Request Enable 29 Enable AGT1 compare match A snooze request */
#define SYSTEM_SNZREQCR_SNZREQEN28        (1 << 28) /* 10000000: Snooze Request Enable 28 Enable AGT1 underflow snooze request */
#define SYSTEM_SNZREQCR_SNZREQEN25        (1 << 25) /* 2000000: Snooze Request Enable 25 Enable RTC period snooze request */
#define SYSTEM_SNZREQCR_SNZREQEN24        (1 << 24) /* 1000000: Snooze Request Enable 24 Enable RTC alarm snooze request */
#define SYSTEM_SNZREQCR_SNZREQEN23        (1 << 23) /* 800000: Snooze Request Enable 23 Enable RTC alarm snooze request */
#define SYSTEM_SNZREQCR_SNZREQEN17        (1 << 17) /* 20000: Snooze Request Enable 17 Enable KINT snooze request */
#define SYSTEM_SNZREQCR_SNZREQEN15        (1 << 15) /* 8000: Snooze Request Enable 15 Enable IRQ15 pin snooze request */
#define SYSTEM_SNZREQCR_SNZREQEN14        (1 << 14) /* 4000: Snooze Request Enable 14 Enable IRQ14 pin snooze request */
#define SYSTEM_SNZREQCR_SNZREQEN12        (1 << 12) /* 1000: Snooze Request Enable 12 Enable IRQ12 pin snooze request */
#define SYSTEM_SNZREQCR_SNZREQEN11        (1 << 11) /* 800: Snooze Request Enable 11 Enable IRQ11 pin snooze request */
#define SYSTEM_SNZREQCR_SNZREQEN10        (1 << 10) /* 400: Snooze Request Enable 10 Enable IRQ10 pin snooze request */
#define SYSTEM_SNZREQCR_SNZREQEN9         (1 <<  9) /* 200: Snooze Request Enable 9 Enable IRQ9 pin snooze request */
#define SYSTEM_SNZREQCR_SNZREQEN8         (1 <<  8) /* 100: Snooze Request Enable 8 Enable IRQ8 pin snooze request */
#define SYSTEM_SNZREQCR_SNZREQEN7         (1 <<  7) /* 80: Snooze Request Enable 7 Enable IRQ7 pin snooze request */
#define SYSTEM_SNZREQCR_SNZREQEN6         (1 <<  6) /* 40: Snooze Request Enable 6 Enable IRQ6 pin snooze request */
#define SYSTEM_SNZREQCR_SNZREQEN5         (1 <<  5) /* 20: Snooze Request Enable 5 Enable IRQ5 pin snooze request */
#define SYSTEM_SNZREQCR_SNZREQEN4         (1 <<  4) /* 10: Snooze Request Enable 4 Enable IRQ4 pin snooze request */
#define SYSTEM_SNZREQCR_SNZREQEN3         (1 <<  3) /* 08: Snooze Request Enable 3 Enable IRQ3 pin snooze request */
#define SYSTEM_SNZREQCR_SNZREQEN2         (1 <<  2) /* 04: Snooze Request Enable 2 Enable IRQ2 pin snooze request */
#define SYSTEM_SNZREQCR_SNZREQEN1         (1 <<  1) /* 02: Snooze Request Enable 1 Enable IRQ1 pin snooze request */
#define SYSTEM_SNZREQCR_SNZREQEN0         (1 <<  0) /* 01: Snooze Request Enable 0 Enable IRQ0 pin snooze request */
#define SYSTEM_FLSTOP_OFFSET              0x009e
#define SYSTEM_FLSTOP                     (SYSTEM_BASE + SYSTEM_FLSTOP_OFFSET)
#define SYSTEM_FLSTOP_FLSTPF              (1 <<  4) /* 10: Flash Memory Operation Status Flag */
#define SYSTEM_FLSTOP_FLSTOP              (1 <<  0) /* 01: Selecting ON/OFF of the Flash Memory Operation */
#define SYSTEM_OPCCR_OFFSET               0x00a0
#define SYSTEM_OPCCR                      (SYSTEM_BASE + SYSTEM_OPCCR_OFFSET)
#define SYSTEM_OPCCR_OPCMTSF              (1 <<  4) /* 10: Operating Power Control Mode Transition Status Flag */
#define SYSTEM_OPCCR_OPCM                 (2 <<  0) /* 01: Operating Power Control Mode Select */
#define SYSTEM_OPCCR_OPCM_MASK                 (0x03)
#define SYSTEM_SOPCCR_OFFSET              0x00aa
#define SYSTEM_SOPCCR                     (SYSTEM_BASE + SYSTEM_SOPCCR_OFFSET)
#define SYSTEM_SOPCCR_SOPCMTSF            (1 <<  4) /* 10: Sub Operating Power Control Mode Transition Status Flag */
#define SYSTEM_SOPCCR_SOPCM               (1 <<  0) /* 01: Sub Operating Power Control Mode Select */
#define SYSTEM_SYOCDCR_OFFSET             0x040e
#define SYSTEM_SYOCDCR                    (SYSTEM_BASE + SYSTEM_SYOCDCR_OFFSET)
#define SYSTEM_SYOCDCR_DBGEN              (1 <<  7) /* 80: Debugger Enable bit */
#define SYSTEM_LVCMPCR_OFFSET             0x0417
#define SYSTEM_LVCMPCR                    (SYSTEM_BASE + SYSTEM_LVCMPCR_OFFSET)
#define SYSTEM_LVCMPCR_LVD2E              (1 <<  6) /* 40: Voltage Detection 2 Enable */
#define SYSTEM_LVCMPCR_LVD1E              (1 <<  5) /* 20: Voltage Detection 1 Enable */
#define SYSTEM_LVDLVLR_OFFSET             0x0418
#define SYSTEM_LVDLVLR                    (SYSTEM_BASE + SYSTEM_LVDLVLR_OFFSET)
#define SYSTEM_LVDLVLR_LVD2LVL            (3 <<  5) /* 20: Voltage Detection 2 Level Select (Standard voltage during drop in voltage) */
#define SYSTEM_LVDLVLR_LVD2LVL_MASK            (0x07)
#define SYSTEM_LVDLVLR_LVD1LVL            (5 <<  0) /* 01: Voltage Detection 1 Level Select (Standard voltage during drop in voltage) */
#define SYSTEM_LVDLVLR_LVD1LVL_MASK            (0x1f)
#define SYSTEM_LVDCR0_SIZE                2
#define SYSTEM_LVDCR0_OFFSET              0x041a
#define SYSTEM_LVDCR0(p)                  (SYSTEM_BASE + SYSTEM_LVDCR0_OFFSET + (p)*0x0001)
#define SYSTEM_LVDCR0_RN                  (1 <<  7) /* 80: Voltage Monitor Reset Negate Select */
#define SYSTEM_LVDCR0_RI                  (1 <<  6) /* 40: Voltage Monitor Circuit Mode Select */
#define SYSTEM_LVDCR0_CMPE                (1 <<  2) /* 04: Voltage Monitor Circuit Comparison Result Output Enable */
#define SYSTEM_LVDCR0_RIE                 (1 <<  0) /* 01: Voltage Monitor Interrupt/Reset Enable */
#define SYSTEM_LVDCR1_SIZE                2
#define SYSTEM_LVDCR1_OFFSET              0x00e0
#define SYSTEM_LVDCR1(p)                  (SYSTEM_BASE + SYSTEM_LVDCR1_OFFSET + (p)*0x0002)
#define SYSTEM_LVDCR1_IRQSEL              (1 <<  2) /* 04: Voltage Monitor Interrupt Type Select */
#define SYSTEM_LVDCR1_IDTSEL              (2 <<  0) /* 01: Voltage Monitor Interrupt Generation Condition Select */
#define SYSTEM_LVDCR1_IDTSEL_MASK              (0x03)
#define SYSTEM_LVDSR_SIZE                 2
#define SYSTEM_LVDSR_OFFSET               0x00e1
#define SYSTEM_LVDSR(p)                   (SYSTEM_BASE + SYSTEM_LVDSR_OFFSET + (p)*0x0002)
#define SYSTEM_LVDSR_MON                  (1 <<  1) /* 02: Voltage Monitor 1 Signal Monitor Flag */
#define SYSTEM_LVDSR_DET                  (1 <<  0) /* 01: Voltage Monitor Voltage Change Detection Flag NOTE: Only 0 can be written to this bit. After writing 0 to this bit, it takes 2 system clock cycles for the bit to be read as 0. */
#define SYSTEM_PRCR_OFFSET                0x03fe
#define SYSTEM_PRCR                       (SYSTEM_BASE + SYSTEM_PRCR_OFFSET)
#define SYSTEM_PRCR_PRKEY                 (8 <<  8) /* 100: PRC Key Code */
#define SYSTEM_PRCR_PRKEY_MASK                 (0xff)
#define SYSTEM_PRCR_PRC3                  (1 <<  3) /* 08: Protect Bit 3 */
#define SYSTEM_PRCR_PRC1                  (1 <<  1) /* 02: Protect Bit 1 */
#define SYSTEM_PRCR_PRC0                  (1 <<  0) /* 01: Protect Bit 0 */
#define SYSTEM_RSTSR0_OFFSET              0x0410
#define SYSTEM_RSTSR0                     (SYSTEM_BASE + SYSTEM_RSTSR0_OFFSET)
#define SYSTEM_RSTSR0_LVD2RF              (1 <<  3) /* 08: Voltage Monitor 2 Reset Detect Flag Note: Only 0 can be written to clear the flag. The reset flag must be written with 0 after the reset flag is read as 1. */
#define SYSTEM_RSTSR0_LVD1RF              (1 <<  2) /* 04: Voltage Monitor 1 Reset Detect Flag Note: Only 0 can be written to clear the flag. The reset flag must be written with 0 after the reset flag is read as 1. */
#define SYSTEM_RSTSR0_LVD0RF              (1 <<  1) /* 02: Voltage Monitor 0 Reset Detect Flag Note: Only 0 can be written to clear the flag. The reset flag must be written with 0 after the reset flag is read as 1. */
#define SYSTEM_RSTSR0_PORF                (1 <<  0) /* 01: Power-On Reset Detect Flag Note: Only 0 can be written to clear the flag. The reset flag must be written with 0 after the reset flag is read as 1. */
#define SYSTEM_RSTSR2_OFFSET              0x0411
#define SYSTEM_RSTSR2                     (SYSTEM_BASE + SYSTEM_RSTSR2_OFFSET)
#define SYSTEM_RSTSR2_CWSF                (1 <<  0) /* 01: Cold/Warm Start Determination Flag Note: Only 1 can be written to set the flag. */
#define SYSTEM_RSTSR1_OFFSET              0x00c0
#define SYSTEM_RSTSR1                     (SYSTEM_BASE + SYSTEM_RSTSR1_OFFSET)
#define SYSTEM_RSTSR1_SPERF               (1 << 12) /* 1000: SP Error Reset Detect Flag Note: Only 0 can be written to clear the flag. The reset flag must be written as 0 after the reset flag is read as 1. */
#define SYSTEM_RSTSR1_BUSMRF              (1 << 11) /* 800: Bus Master MPU Reset Detect Flag Note: Only 0 can be written to clear the flag. The reset flag must be written as 0 after the reset flag is read as 1. */
#define SYSTEM_RSTSR1_BUSSRF              (1 << 10) /* 400: Bus Slave MPU Reset Detect Flag Note: Only 0 can be written to clear the flag. The reset flag must be written as 0 after the reset flag is read as 1. */
#define SYSTEM_RSTSR1_REERF               (1 <<  9) /* 200: RAM ECC Error Reset Detect Flag Note: Only 0 can be written to clear the flag. The reset flag must be written as 0 after the reset flag is read as 1. */
#define SYSTEM_RSTSR1_RPERF               (1 <<  8) /* 100: RAM Parity Error Reset Detect Flag Note: Only 0 can be written to clear the flag. The reset flag must be written as 0 after the reset flag is read as 1. */
#define SYSTEM_RSTSR1_SWRF                (1 <<  2) /* 04: Software Reset Detect Flag Note: Only 0 can be written to clear the flag. The reset flag must be written as 0 after the reset flag is read as 1. */
#define SYSTEM_RSTSR1_WDTRF               (1 <<  1) /* 02: Watchdog Timer Reset Detect Flag Note: Only 0 can be written to clear the flag. The reset flag must be written as 0 after the reset flag is read as 1. */
#define SYSTEM_RSTSR1_IWDTRF              (1 <<  0) /* 01: Independent Watchdog Timer Reset Detect Flag Note: Only 0 can be written to clear the flag. The reset flag must be written as 0 after the reset flag is read as 1. */
#define SYSTEM_BKRACR_OFFSET              0x00c6
#define SYSTEM_BKRACR                     (SYSTEM_BASE + SYSTEM_BKRACR_OFFSET)
#define SYSTEM_BKRACR_BKRACS              (3 <<  0) /* 01: Backup Register Access Control Register */
#define SYSTEM_BKRACR_BKRACS_MASK              (0x07)

/* BUS - BUS Control */
#define BUS_BASE                          0x40003000
#define BUS_BUSMCNT_SIZE                  4
#define BUS_BUSMCNT_OFFSET                0x1000
#define BUS_BUSMCNT(p)                    (BUS_BASE + BUS_BUSMCNT_OFFSET + (p)*0x0004)
#define BUS_BUSMCNT_IERES                 (1 << 15) /* 8000: Ignore Error Responses */
#define BUS_BUSSCNTFLI_OFFSET             0x1100
#define BUS_BUSSCNTFLI                    (BUS_BASE + BUS_BUSSCNTFLI_OFFSET)
#define BUS_BUSSCNTFLI_ARBMET             (2 <<  4) /* 10: Arbitration Method Specify the priority between groups */
#define BUS_BUSSCNTFLI_ARBMET_MASK             (0x03)
#define BUS_BUSSCNT_SIZE                  2
#define BUS_BUSSCNT_OFFSET                0x1108
#define BUS_BUSSCNT(p)                    (BUS_BASE + BUS_BUSSCNT_OFFSET + (p)*0x0004)
#define BUS_BUSSCNT_ARBMET                (2 <<  4) /* 10: Arbitration Method Specify the priority between groups */
#define BUS_BUSSCNT_ARBMET_MASK                (0x03)
#define BUS_BUSSCNT_SIZE                  4
#define BUS_BUSSCNT_OFFSET                0x1114
#define BUS_BUSSCNT(p)                    (BUS_BASE + BUS_BUSSCNT_OFFSET + (p)*0x0004)
#define BUS_BUSSCNT_ARBMET                (2 <<  4) /* 10: Arbitration Method Specify the priority between groups */
#define BUS_BUSSCNT_ARBMET_MASK                (0x03)
#define BUS_BUSSCNTP6B_OFFSET             0x1128
#define BUS_BUSSCNTP6B                    (BUS_BASE + BUS_BUSSCNTP6B_OFFSET)
#define BUS_BUSSCNTP6B_ARBMET             (2 <<  4) /* 10: Arbitration Method Specify the priority between groups */
#define BUS_BUSSCNTP6B_ARBMET_MASK             (0x03)
#define BUS_BUSSCNTFBU_OFFSET             0x1130
#define BUS_BUSSCNTFBU                    (BUS_BASE + BUS_BUSSCNTFBU_OFFSET)
#define BUS_BUSSCNTFBU_ARBMET             (2 <<  4) /* 10: Arbitration Method Specify the priority between groups */
#define BUS_BUSSCNTFBU_ARBMET_MASK             (0x03)
#define BUS_BUSERRADD_SIZE                4
#define BUS_BUSERRADD_OFFSET              0x1800
#define BUS_BUSERRADD(p)                  (BUS_BASE + BUS_BUSERRADD_OFFSET + (p)*0x0010)
#define BUS_BUSERRADD_BERAD               (32 <<  0) /* 01: Bus Error Address When a bus error occurs, It stores an error address. */
#define BUS_BUSERRADD_BERAD_MASK               (0xffffffff)
#define BUS_BUSERRSTAT_SIZE               4
#define BUS_BUSERRSTAT_OFFSET             0x1804
#define BUS_BUSERRSTAT(p)                 (BUS_BASE + BUS_BUSERRSTAT_OFFSET + (p)*0x0010)
#define BUS_BUSERRSTAT_ERRSTAT            (1 <<  7) /* 80: Bus Error Status When bus error assert, error flag occurs. */
#define BUS_BUSERRSTAT_ACCSTAT            (1 <<  0) /* 01: Error Access Status The status at the time of the error */

/* CAC - Clock Frequency Accuracy Measurement Circuit */
#define CAC_BASE                          0x40044600
#define CAC_CACR0_OFFSET                  0x0000
#define CAC_CACR0                         (CAC_BASE + CAC_CACR0_OFFSET)
#define CAC_CACR0_CFME                    (1 <<  0) /* 01: Clock Frequency Measurement Enable. */
#define CAC_CACR1_OFFSET                  0x0001
#define CAC_CACR1                         (CAC_BASE + CAC_CACR1_OFFSET)
#define CAC_CACR1_EDGES                   (2 <<  6) /* 40: Valid Edge Select */
#define CAC_CACR1_EDGES_MASK                   (0x03)
#define CAC_CACR1_TCSS                    (2 <<  4) /* 10: Measurement Target Clock Frequency Division Ratio Select */
#define CAC_CACR1_TCSS_MASK                    (0x03)
#define CAC_CACR1_FMCS                    (3 <<  1) /* 02: Measurement Target Clock Select */
#define CAC_CACR1_FMCS_MASK                    (0x07)
#define CAC_CACR1_CACREFE                 (1 <<  0) /* 01: CACREF Pin Input Enable */
#define CAC_CACR2_OFFSET                  0x0002
#define CAC_CACR2                         (CAC_BASE + CAC_CACR2_OFFSET)
#define CAC_CACR2_DFS                     (2 <<  6) /* 40: Digital Filter Selection */
#define CAC_CACR2_DFS_MASK                     (0x03)
#define CAC_CACR2_RCDS                    (2 <<  4) /* 10: Measurement Reference Clock Frequency Division Ratio Select */
#define CAC_CACR2_RCDS_MASK                    (0x03)
#define CAC_CACR2_RSCS                    (3 <<  1) /* 02: Measurement Reference Clock Select */
#define CAC_CACR2_RSCS_MASK                    (0x07)
#define CAC_CACR2_RPS                     (1 <<  0) /* 01: Reference Signal Select */
#define CAC_CAICR_OFFSET                  0x0003
#define CAC_CAICR                         (CAC_BASE + CAC_CAICR_OFFSET)
#define CAC_CAICR_OVFFCL                  (1 <<  6) /* 40: OVFF Clear */
#define CAC_CAICR_MENDFCL                 (1 <<  5) /* 20: MENDF Clear */
#define CAC_CAICR_FERRFCL                 (1 <<  4) /* 10: FERRF Clear */
#define CAC_CAICR_OVFIE                   (1 <<  2) /* 04: Overflow Interrupt Request Enable */
#define CAC_CAICR_MENDIE                  (1 <<  1) /* 02: Measurement End Interrupt Request Enable */
#define CAC_CAICR_FERRIE                  (1 <<  0) /* 01: Frequency Error Interrupt Request Enable */
#define CAC_CASTR_OFFSET                  0x0004
#define CAC_CASTR                         (CAC_BASE + CAC_CASTR_OFFSET)
#define CAC_CASTR_OVFF                    (1 <<  2) /* 04: Counter Overflow Flag */
#define CAC_CASTR_MENDF                   (1 <<  1) /* 02: Measurement End Flag */
#define CAC_CASTR_FERRF                   (1 <<  0) /* 01: Frequency Error Flag */
#define CAC_CAULVR_OFFSET                 0x0006
#define CAC_CAULVR                        (CAC_BASE + CAC_CAULVR_OFFSET)
#define CAC_CAULVR_CAULVR                 (16 <<  0) /* 01: CAULVR is a 16-bit readable/writable register that stores the upper-limit value of the frequency. */
#define CAC_CAULVR_CAULVR_MASK                 (0xffff)
#define CAC_CALLVR_OFFSET                 0x0008
#define CAC_CALLVR                        (CAC_BASE + CAC_CALLVR_OFFSET)
#define CAC_CALLVR_CALLVR                 (16 <<  0) /* 01: CALLVR is a 16-bit readable/writable register that stores the lower-limit value of the frequency. */
#define CAC_CALLVR_CALLVR_MASK                 (0xffff)
#define CAC_CACNTBR_OFFSET                0x000a
#define CAC_CACNTBR                       (CAC_BASE + CAC_CACNTBR_OFFSET)
#define CAC_CACNTBR_CACNTBR               (16 <<  0) /* 01: CACNTBR is a 16-bit read-only register that retains the counter value at the time a valid reference signal edge is input */
#define CAC_CACNTBR_CACNTBR_MASK               (0xffff)

/* CAN0 - CAN0 Module */
#define CAN0_BASE                         0x40050000
#define CAN0_MB_ID_SIZE                   32
#define CAN0_MB_ID_OFFSET                 0x0200
#define CAN0_MB_ID(p)                     (CAN0_BASE + CAN0_MB_ID_OFFSET + (p)*0x0010)
#define CAN0_MB_ID_IDE                    (1 << 31) /* 80000000: ID Extension */
#define CAN0_MB_ID_RTR                    (1 << 30) /* 40000000: Remote Transmission Request */
#define CAN0_MB_ID_SID                    (11 << 18) /* 40000: Standard ID */
#define CAN0_MB_ID_SID_MASK                    (0x7ff)
#define CAN0_MB_ID_EID                    (18 <<  0) /* 01: Extended ID */
#define CAN0_MB_ID_EID_MASK                    (0x3ffff)
#define CAN0_MB_DL_SIZE                   32
#define CAN0_MB_DL_OFFSET                 0x0204
#define CAN0_MB_DL(p)                     (CAN0_BASE + CAN0_MB_DL_OFFSET + (p)*0x0010)
#define CAN0_MB_DL_DLC                    (4 <<  0) /* 01: Data Length Code */
#define CAN0_MB_DL_DLC_MASK                    (0x0f)
#define CAN0_MB_D0_SIZE                   32
#define CAN0_MB_D0_OFFSET                 0x0206
#define CAN0_MB_D0(p)                     (CAN0_BASE + CAN0_MB_D0_OFFSET + (p)*0x0010)
#define CAN0_MB_D0_DATA0                  (8 <<  0) /* 01: Data Bytes 0. DATA0 store the transmitted or received CAN message data. Transmission or reception starts from DATA0. The bit order on the CAN bus is MSB first, and transmission or reception starts from bit 7. */
#define CAN0_MB_D0_DATA0_MASK                  (0xff)
#define CAN0_MB_D1_SIZE                   32
#define CAN0_MB_D1_OFFSET                 0x0207
#define CAN0_MB_D1(p)                     (CAN0_BASE + CAN0_MB_D1_OFFSET + (p)*0x0010)
#define CAN0_MB_D1_DATA1                  (8 <<  0) /* 01: Data Bytes 1 DATA1 store the transmitted or received CAN message data. Transmission or reception starts from DATA0. The bit order on the CAN bus is MSB first, and transmission or reception starts from bit 7. */
#define CAN0_MB_D1_DATA1_MASK                  (0xff)
#define CAN0_MB_D2_SIZE                   32
#define CAN0_MB_D2_OFFSET                 0x0208
#define CAN0_MB_D2(p)                     (CAN0_BASE + CAN0_MB_D2_OFFSET + (p)*0x0010)
#define CAN0_MB_D2_DATA2                  (8 <<  0) /* 01: Data Bytes 2 DATA2 store the transmitted or received CAN message data. Transmission or reception starts from DATA0. The bit order on the CAN bus is MSB first, and transmission or reception starts from bit 7. */
#define CAN0_MB_D2_DATA2_MASK                  (0xff)
#define CAN0_MB_D3_SIZE                   32
#define CAN0_MB_D3_OFFSET                 0x0209
#define CAN0_MB_D3(p)                     (CAN0_BASE + CAN0_MB_D3_OFFSET + (p)*0x0010)
#define CAN0_MB_D3_DATA3                  (8 <<  0) /* 01: Data Bytes 3 DATA3 store the transmitted or received CAN message data. Transmission or reception starts from DATA0. The bit order on the CAN bus is MSB first, and transmission or reception starts from bit 7. */
#define CAN0_MB_D3_DATA3_MASK                  (0xff)
#define CAN0_MB_D4_SIZE                   32
#define CAN0_MB_D4_OFFSET                 0x020a
#define CAN0_MB_D4(p)                     (CAN0_BASE + CAN0_MB_D4_OFFSET + (p)*0x0010)
#define CAN0_MB_D4_DATA4                  (8 <<  0) /* 01: Data Bytes 4 DATA4 store the transmitted or received CAN message data. Transmission or reception starts from DATA0. The bit order on the CAN bus is MSB first, and transmission or reception starts from bit 7. */
#define CAN0_MB_D4_DATA4_MASK                  (0xff)
#define CAN0_MB_D5_SIZE                   32
#define CAN0_MB_D5_OFFSET                 0x020b
#define CAN0_MB_D5(p)                     (CAN0_BASE + CAN0_MB_D5_OFFSET + (p)*0x0010)
#define CAN0_MB_D5_DATA5                  (8 <<  0) /* 01: Data Bytes 5 DATA5 store the transmitted or received CAN message data. Transmission or reception starts from DATA0. The bit order on the CAN bus is MSB first, and transmission or reception starts from bit 7. */
#define CAN0_MB_D5_DATA5_MASK                  (0xff)
#define CAN0_MB_D6_SIZE                   32
#define CAN0_MB_D6_OFFSET                 0x020c
#define CAN0_MB_D6(p)                     (CAN0_BASE + CAN0_MB_D6_OFFSET + (p)*0x0010)
#define CAN0_MB_D6_DATA6                  (8 <<  0) /* 01: Data Bytes 6 DATA6 store the transmitted or received CAN message data. Transmission or reception starts from DATA0. The bit order on the CAN bus is MSB first, and transmission or reception starts from bit 7. */
#define CAN0_MB_D6_DATA6_MASK                  (0xff)
#define CAN0_MB_D7_SIZE                   32
#define CAN0_MB_D7_OFFSET                 0x020d
#define CAN0_MB_D7(p)                     (CAN0_BASE + CAN0_MB_D7_OFFSET + (p)*0x0010)
#define CAN0_MB_D7_DATA7                  (8 <<  0) /* 01: Data Bytes 7 DATA7 store the transmitted or received CAN message data. Transmission or reception starts from DATA0. The bit order on the CAN bus is MSB first, and transmission or reception starts from bit 7. */
#define CAN0_MB_D7_DATA7_MASK                  (0xff)
#define CAN0_MB_TS_SIZE                   32
#define CAN0_MB_TS_OFFSET                 0x020e
#define CAN0_MB_TS(p)                     (CAN0_BASE + CAN0_MB_TS_OFFSET + (p)*0x0010)
#define CAN0_MB_TS_TSH                    (8 <<  8) /* 100: Time Stamp Lower Byte Bits TSH[7:0] store the counter value of the time stamp when received messages are stored in the mailbox. */
#define CAN0_MB_TS_TSH_MASK                    (0xff)
#define CAN0_MB_TS_TSL                    (8 <<  0) /* 01: Time Stamp Higher Byte Bits TSL[7:0] store the counter value of the time stamp when received messages are stored in the mailbox. */
#define CAN0_MB_TS_TSL_MASK                    (0xff)
#define CAN0_MKR_SIZE                     8
#define CAN0_MKR_OFFSET                   0x0400
#define CAN0_MKR(p)                       (CAN0_BASE + CAN0_MKR_OFFSET + (p)*0x0004)
#define CAN0_MKR_SID                      (11 << 18) /* 40000: Standard ID */
#define CAN0_MKR_SID_MASK                      (0x7ff)
#define CAN0_MKR_EID                      (18 <<  0) /* 01: Extended ID */
#define CAN0_MKR_EID_MASK                      (0x3ffff)
#define CAN0_FIDCR_SIZE                   2
#define CAN0_FIDCR_OFFSET                 0x0420
#define CAN0_FIDCR(p)                     (CAN0_BASE + CAN0_FIDCR_OFFSET + (p)*0x0004)
#define CAN0_FIDCR_IDE                    (1 << 31) /* 80000000: ID Extension */
#define CAN0_FIDCR_RTR                    (1 << 30) /* 40000000: Remote Transmission Request */
#define CAN0_FIDCR_SID                    (11 << 18) /* 40000: Standard ID */
#define CAN0_FIDCR_SID_MASK                    (0x7ff)
#define CAN0_FIDCR_EID                    (18 <<  0) /* 01: Extended ID */
#define CAN0_FIDCR_EID_MASK                    (0x3ffff)
#define CAN0_MKIVLR_OFFSET                0x0428
#define CAN0_MKIVLR                       (CAN0_BASE + CAN0_MKIVLR_OFFSET)
#define CAN0_MKIVLR_MB31                  (1 << 31) /* 80000000: mailbox 31 Mask Invalid */
#define CAN0_MKIVLR_MB30                  (1 << 30) /* 40000000: mailbox 30 Mask Invalid */
#define CAN0_MKIVLR_MB29                  (1 << 29) /* 20000000: mailbox 29 Mask Invalid */
#define CAN0_MKIVLR_MB28                  (1 << 28) /* 10000000: mailbox 28 Mask Invalid */
#define CAN0_MKIVLR_MB27                  (1 << 27) /* 8000000: mailbox 27 Mask Invalid */
#define CAN0_MKIVLR_MB26                  (1 << 26) /* 4000000: mailbox 26 Mask Invalid */
#define CAN0_MKIVLR_MB25                  (1 << 25) /* 2000000: mailbox 25 Mask Invalid */
#define CAN0_MKIVLR_MB24                  (1 << 24) /* 1000000: mailbox 24 Mask Invalid */
#define CAN0_MKIVLR_MB23                  (1 << 23) /* 800000: mailbox 23 Mask Invalid */
#define CAN0_MKIVLR_MB22                  (1 << 22) /* 400000: mailbox 22 Mask Invalid */
#define CAN0_MKIVLR_MB21                  (1 << 21) /* 200000: mailbox 21 Mask Invalid */
#define CAN0_MKIVLR_MB20                  (1 << 20) /* 100000: mailbox 20 Mask Invalid */
#define CAN0_MKIVLR_MB19                  (1 << 19) /* 80000: mailbox 19 Mask Invalid */
#define CAN0_MKIVLR_MB18                  (1 << 18) /* 40000: mailbox 18 Mask Invalid */
#define CAN0_MKIVLR_MB17                  (1 << 17) /* 20000: mailbox 17 Mask Invalid */
#define CAN0_MKIVLR_MB16                  (1 << 16) /* 10000: mailbox 16 Mask Invalid */
#define CAN0_MKIVLR_MB15                  (1 << 15) /* 8000: mailbox 15 Mask Invalid */
#define CAN0_MKIVLR_MB14                  (1 << 14) /* 4000: mailbox 14 Mask Invalid */
#define CAN0_MKIVLR_MB13                  (1 << 13) /* 2000: mailbox 13 Mask Invalid */
#define CAN0_MKIVLR_MB12                  (1 << 12) /* 1000: mailbox 12 Mask Invalid */
#define CAN0_MKIVLR_MB11                  (1 << 11) /* 800: mailbox 11 Mask Invalid */
#define CAN0_MKIVLR_MB10                  (1 << 10) /* 400: mailbox 10 Mask Invalid */
#define CAN0_MKIVLR_MB9                   (1 <<  9) /* 200: mailbox 9 Mask Invalid */
#define CAN0_MKIVLR_MB8                   (1 <<  8) /* 100: mailbox 8 Mask Invalid */
#define CAN0_MKIVLR_MB7                   (1 <<  7) /* 80: mailbox 7 Mask Invalid */
#define CAN0_MKIVLR_MB6                   (1 <<  6) /* 40: mailbox 6 Mask Invalid */
#define CAN0_MKIVLR_MB5                   (1 <<  5) /* 20: mailbox 5 Mask Invalid */
#define CAN0_MKIVLR_MB4                   (1 <<  4) /* 10: mailbox 4 Mask Invalid */
#define CAN0_MKIVLR_MB3                   (1 <<  3) /* 08: mailbox 3 Mask Invalid */
#define CAN0_MKIVLR_MB2                   (1 <<  2) /* 04: mailbox 2 Mask Invalid */
#define CAN0_MKIVLR_MB1                   (1 <<  1) /* 02: mailbox 1 Mask Invalid */
#define CAN0_MKIVLR_MB0                   (1 <<  0) /* 01: mailbox 0 Mask Invalid */
#define CAN0_MIER_OFFSET                  0x042c
#define CAN0_MIER                         (CAN0_BASE + CAN0_MIER_OFFSET)
#define CAN0_MIER_MB31                    (1 << 31) /* 80000000: mailbox 31 Interrupt Enable */
#define CAN0_MIER_MB30                    (1 << 30) /* 40000000: mailbox 30 Interrupt Enable */
#define CAN0_MIER_MB29                    (1 << 29) /* 20000000: mailbox 29 Interrupt Enable */
#define CAN0_MIER_MB28                    (1 << 28) /* 10000000: mailbox 28 Interrupt Enable */
#define CAN0_MIER_MB27                    (1 << 27) /* 8000000: mailbox 27 Interrupt Enable */
#define CAN0_MIER_MB26                    (1 << 26) /* 4000000: mailbox 26 Interrupt Enable */
#define CAN0_MIER_MB25                    (1 << 25) /* 2000000: mailbox 25 Interrupt Enable */
#define CAN0_MIER_MB24                    (1 << 24) /* 1000000: mailbox 24 Interrupt Enable */
#define CAN0_MIER_MB23                    (1 << 23) /* 800000: mailbox 23 Interrupt Enable */
#define CAN0_MIER_MB22                    (1 << 22) /* 400000: mailbox 22 Interrupt Enable */
#define CAN0_MIER_MB21                    (1 << 21) /* 200000: mailbox 21 Interrupt Enable */
#define CAN0_MIER_MB20                    (1 << 20) /* 100000: mailbox 20 Interrupt Enable */
#define CAN0_MIER_MB19                    (1 << 19) /* 80000: mailbox 19 Interrupt Enable */
#define CAN0_MIER_MB18                    (1 << 18) /* 40000: mailbox 18 Interrupt Enable */
#define CAN0_MIER_MB17                    (1 << 17) /* 20000: mailbox 17 Interrupt Enable */
#define CAN0_MIER_MB16                    (1 << 16) /* 10000: mailbox 16 Interrupt Enable */
#define CAN0_MIER_MB15                    (1 << 15) /* 8000: mailbox 15 Interrupt Enable */
#define CAN0_MIER_MB14                    (1 << 14) /* 4000: mailbox 14 Interrupt Enable */
#define CAN0_MIER_MB13                    (1 << 13) /* 2000: mailbox 13 Interrupt Enable */
#define CAN0_MIER_MB12                    (1 << 12) /* 1000: mailbox 12 Interrupt Enable */
#define CAN0_MIER_MB11                    (1 << 11) /* 800: mailbox 11 Interrupt Enable */
#define CAN0_MIER_MB10                    (1 << 10) /* 400: mailbox 10 Interrupt Enable */
#define CAN0_MIER_MB9                     (1 <<  9) /* 200: mailbox 9 Interrupt Enable */
#define CAN0_MIER_MB8                     (1 <<  8) /* 100: mailbox 8 Interrupt Enable */
#define CAN0_MIER_MB7                     (1 <<  7) /* 80: mailbox 7 Interrupt Enable */
#define CAN0_MIER_MB6                     (1 <<  6) /* 40: mailbox 6 Interrupt Enable */
#define CAN0_MIER_MB5                     (1 <<  5) /* 20: mailbox 5 Interrupt Enable */
#define CAN0_MIER_MB4                     (1 <<  4) /* 10: mailbox 4 Interrupt Enable */
#define CAN0_MIER_MB3                     (1 <<  3) /* 08: mailbox 3 Interrupt Enable */
#define CAN0_MIER_MB2                     (1 <<  2) /* 04: mailbox 2 Interrupt Enable */
#define CAN0_MIER_MB1                     (1 <<  1) /* 02: mailbox 1 Interrupt Enable */
#define CAN0_MIER_MB0                     (1 <<  0) /* 01: mailbox 0 Interrupt Enable */
#define CAN0_MIER_FIFO_OFFSET             0x042c
#define CAN0_MIER_FIFO                    (CAN0_BASE + CAN0_MIER_FIFO_OFFSET)
#define CAN0_MIER_FIFO_MB29               (1 << 29) /* 20000000: Receive FIFO Interrupt Generation Timing Control */
#define CAN0_MIER_FIFO_MB28               (1 << 28) /* 10000000: Receive FIFO Interrupt Enable */
#define CAN0_MIER_FIFO_MB25               (1 << 25) /* 2000000: Transmit FIFO Interrupt Generation Timing Control */
#define CAN0_MIER_FIFO_MB24               (1 << 24) /* 1000000: Transmit FIFO Interrupt Enable */
#define CAN0_MIER_FIFO_MB23               (1 << 23) /* 800000: mailbox 23 Interrupt Enable */
#define CAN0_MIER_FIFO_MB22               (1 << 22) /* 400000: mailbox 22 Interrupt Enable */
#define CAN0_MIER_FIFO_MB21               (1 << 21) /* 200000: mailbox 21 Interrupt Enable */
#define CAN0_MIER_FIFO_MB20               (1 << 20) /* 100000: mailbox 20 Interrupt Enable */
#define CAN0_MIER_FIFO_MB19               (1 << 19) /* 80000: mailbox 19 Interrupt Enable */
#define CAN0_MIER_FIFO_MB18               (1 << 18) /* 40000: mailbox 18 Interrupt Enable */
#define CAN0_MIER_FIFO_MB17               (1 << 17) /* 20000: mailbox 17 Interrupt Enable */
#define CAN0_MIER_FIFO_MB16               (1 << 16) /* 10000: mailbox 16 Interrupt Enable */
#define CAN0_MIER_FIFO_MB15               (1 << 15) /* 8000: mailbox 15 Interrupt Enable */
#define CAN0_MIER_FIFO_MB14               (1 << 14) /* 4000: mailbox 14 Interrupt Enable */
#define CAN0_MIER_FIFO_MB13               (1 << 13) /* 2000: mailbox 13 Interrupt Enable */
#define CAN0_MIER_FIFO_MB12               (1 << 12) /* 1000: mailbox 12 Interrupt Enable */
#define CAN0_MIER_FIFO_MB11               (1 << 11) /* 800: mailbox 11 Interrupt Enable */
#define CAN0_MIER_FIFO_MB10               (1 << 10) /* 400: mailbox 10 Interrupt Enable */
#define CAN0_MIER_FIFO_MB9                (1 <<  9) /* 200: mailbox 9 Interrupt Enable */
#define CAN0_MIER_FIFO_MB8                (1 <<  8) /* 100: mailbox 8 Interrupt Enable */
#define CAN0_MIER_FIFO_MB7                (1 <<  7) /* 80: mailbox 7 Interrupt Enable */
#define CAN0_MIER_FIFO_MB6                (1 <<  6) /* 40: mailbox 6 Interrupt Enable */
#define CAN0_MIER_FIFO_MB5                (1 <<  5) /* 20: mailbox 5 Interrupt Enable */
#define CAN0_MIER_FIFO_MB4                (1 <<  4) /* 10: mailbox 4 Interrupt Enable */
#define CAN0_MIER_FIFO_MB3                (1 <<  3) /* 08: mailbox 3 Interrupt Enable */
#define CAN0_MIER_FIFO_MB2                (1 <<  2) /* 04: mailbox 2 Interrupt Enable */
#define CAN0_MIER_FIFO_MB1                (1 <<  1) /* 02: mailbox 1 Interrupt Enable */
#define CAN0_MIER_FIFO_MB0                (1 <<  0) /* 01: mailbox 0 Interrupt Enable */
#define CAN0_MCTL_TX_SIZE                 32
#define CAN0_MCTL_TX_OFFSET               0x0820
#define CAN0_MCTL_TX(p)                   (CAN0_BASE + CAN0_MCTL_TX_OFFSET + (p)*0x0001)
#define CAN0_MCTL_TX_TRMREQ               (1 <<  7) /* 80: Transmit Mailbox Request */
#define CAN0_MCTL_TX_RECREQ               (1 <<  6) /* 40: Receive Mailbox Request */
#define CAN0_MCTL_TX_ONESHOT              (1 <<  4) /* 10: One-Shot Enable */
#define CAN0_MCTL_TX_TRMABT               (1 <<  2) /* 04: Transmission Abort Complete Flag (Transmit mailbox setting enabled) */
#define CAN0_MCTL_TX_TRMACTIVE            (1 <<  1) /* 02: Transmission-in-Progress Status Flag (Transmit mailbox setting enabled) */
#define CAN0_MCTL_TX_SENTDATA             (1 <<  0) /* 01: Transmission Complete Flag */
#define CAN0_MCTL_RX_SIZE                 32
#define CAN0_MCTL_RX_OFFSET               0x0820
#define CAN0_MCTL_RX(p)                   (CAN0_BASE + CAN0_MCTL_RX_OFFSET + (p)*0x0001)
#define CAN0_MCTL_RX_TRMREQ               (1 <<  7) /* 80: Transmit Mailbox Request */
#define CAN0_MCTL_RX_RECREQ               (1 <<  6) /* 40: Receive Mailbox Request */
#define CAN0_MCTL_RX_ONESHOT              (1 <<  4) /* 10: One-Shot Enable */
#define CAN0_MCTL_RX_MSGLOST              (1 <<  2) /* 04: Message Lost Flag (Receive mailbox setting enabled) */
#define CAN0_MCTL_RX_INVALDATA            (1 <<  1) /* 02: Reception-in-Progress Status Flag (Receive mailbox setting enabled) */
#define CAN0_MCTL_RX_NEWDATA              (1 <<  0) /* 01: Reception Complete Flag */
#define CAN0_CTLR_OFFSET                  0x0840
#define CAN0_CTLR                         (CAN0_BASE + CAN0_CTLR_OFFSET)
#define CAN0_CTLR_RBOC                    (1 << 13) /* 2000: Forcible Return From Bus-Off */
#define CAN0_CTLR_BOM                     (2 << 11) /* 800: Bus-Off Recovery Mode by a program request */
#define CAN0_CTLR_BOM_MASK                     (0x03)
#define CAN0_CTLR_SLPM                    (1 << 10) /* 400: CAN Sleep Mode */
#define CAN0_CTLR_CANM                    (2 <<  8) /* 100: CAN Operating Mode Select */
#define CAN0_CTLR_CANM_MASK                    (0x03)
#define CAN0_CTLR_TSPS                    (2 <<  6) /* 40: Time Stamp Prescaler Select */
#define CAN0_CTLR_TSPS_MASK                    (0x03)
#define CAN0_CTLR_TSRC                    (1 <<  5) /* 20: Time Stamp Counter Reset Command */
#define CAN0_CTLR_TPM                     (1 <<  4) /* 10: Transmission Priority Mode Select */
#define CAN0_CTLR_MLM                     (1 <<  3) /* 08: Message Lost Mode Select */
#define CAN0_CTLR_IDFM                    (2 <<  1) /* 02: ID Format Mode Select */
#define CAN0_CTLR_IDFM_MASK                    (0x03)
#define CAN0_CTLR_MBM                     (1 <<  0) /* 01: CAN Mailbox Mode Select */
#define CAN0_STR_OFFSET                   0x0842
#define CAN0_STR                          (CAN0_BASE + CAN0_STR_OFFSET)
#define CAN0_STR_RECST                    (1 << 14) /* 4000: Receive Status Flag (receiver) */
#define CAN0_STR_TRMST                    (1 << 13) /* 2000: Transmit Status Flag (transmitter) */
#define CAN0_STR_BOST                     (1 << 12) /* 1000: Bus-Off Status Flag */
#define CAN0_STR_EPST                     (1 << 11) /* 800: Error-Passive Status Flag */
#define CAN0_STR_SLPST                    (1 << 10) /* 400: CAN Sleep Status Flag */
#define CAN0_STR_HLTST                    (1 <<  9) /* 200: CAN Halt Status Flag */
#define CAN0_STR_RSTST                    (1 <<  8) /* 100: CAN Reset Status Flag */
#define CAN0_STR_EST                      (1 <<  7) /* 80: Error Status Flag */
#define CAN0_STR_TABST                    (1 <<  6) /* 40: Transmission Abort Status Flag */
#define CAN0_STR_FMLST                    (1 <<  5) /* 20: FIFO Mailbox Message Lost Status Flag */
#define CAN0_STR_NMLST                    (1 <<  4) /* 10: Normal Mailbox Message Lost Status Flag */
#define CAN0_STR_TFST                     (1 <<  3) /* 08: Transmit FIFO Status Flag */
#define CAN0_STR_RFST                     (1 <<  2) /* 04: Receive FIFO Status Flag */
#define CAN0_STR_SDST                     (1 <<  1) /* 02: SENTDATA Status Flag */
#define CAN0_STR_NDST                     (1 <<  0) /* 01: NEWDATA Status Flag */
#define CAN0_BCR_OFFSET                   0x0844
#define CAN0_BCR                          (CAN0_BASE + CAN0_BCR_OFFSET)
#define CAN0_BCR_TSEG1                    (4 << 28) /* 10000000: Time Segment 1 Control */
#define CAN0_BCR_TSEG1_MASK                    (0x0f)
#define CAN0_BCR_BRP                      (10 << 16) /* 10000: Prescaler Division Ratio Select . These bits set the frequency of the CAN communication clock (fCANCLK). */
#define CAN0_BCR_BRP_MASK                      (0x3ff)
#define CAN0_BCR_SJW                      (2 << 12) /* 1000: Resynchronization Jump Width Control */
#define CAN0_BCR_SJW_MASK                      (0x03)
#define CAN0_BCR_TSEG2                    (3 <<  8) /* 100: Time Segment 2 Control */
#define CAN0_BCR_TSEG2_MASK                    (0x07)
#define CAN0_BCR_CCLKS                    (1 <<  0) /* 01: CAN Clock Source Selection */
#define CAN0_RFCR_OFFSET                  0x0848
#define CAN0_RFCR                         (CAN0_BASE + CAN0_RFCR_OFFSET)
#define CAN0_RFCR_RFEST                   (1 <<  7) /* 80: Receive FIFO Empty Status Flag */
#define CAN0_RFCR_RFWST                   (1 <<  6) /* 40: Receive FIFO Buffer Warning Status Flag */
#define CAN0_RFCR_RFFST                   (1 <<  5) /* 20: Receive FIFO Full Status Flag */
#define CAN0_RFCR_RFMLF                   (1 <<  4) /* 10: Receive FIFO Message Lost Flag */
#define CAN0_RFCR_RFUST                   (3 <<  1) /* 02: Receive FIFO Unread Message Number Status */
#define CAN0_RFCR_RFUST_MASK                   (0x07)
#define CAN0_RFCR_RFE                     (1 <<  0) /* 01: Receive FIFO Enable */
#define CAN0_RFPCR_OFFSET                 0x0849
#define CAN0_RFPCR                        (CAN0_BASE + CAN0_RFPCR_OFFSET)
#define CAN0_RFPCR_RFPCR                  (8 <<  0) /* 01: The CPU-side pointer for the receive FIFO is incremented by writing FFh to RFPCR. */
#define CAN0_RFPCR_RFPCR_MASK                  (0xff)
#define CAN0_TFCR_OFFSET                  0x084a
#define CAN0_TFCR                         (CAN0_BASE + CAN0_TFCR_OFFSET)
#define CAN0_TFCR_TFEST                   (1 <<  7) /* 80: Transmit FIFO Empty Status */
#define CAN0_TFCR_TFFST                   (1 <<  6) /* 40: Transmit FIFO Full Status */
#define CAN0_TFCR_TFUST                   (3 <<  1) /* 02: Transmit FIFO Unsent Message Number Status */
#define CAN0_TFCR_TFUST_MASK                   (0x07)
#define CAN0_TFCR_TFE                     (1 <<  0) /* 01: Transmit FIFO Enable */
#define CAN0_TFPCR_OFFSET                 0x084b
#define CAN0_TFPCR                        (CAN0_BASE + CAN0_TFPCR_OFFSET)
#define CAN0_TFPCR_TFPCR                  (8 <<  0) /* 01: The CPU-side pointer for the transmit FIFO is incremented by writing FFh to TFPCR. */
#define CAN0_TFPCR_TFPCR_MASK                  (0xff)
#define CAN0_EIER_OFFSET                  0x084c
#define CAN0_EIER                         (CAN0_BASE + CAN0_EIER_OFFSET)
#define CAN0_EIER_BLIE                    (1 <<  7) /* 80: Bus Lock Interrupt Enable */
#define CAN0_EIER_OLIE                    (1 <<  6) /* 40: Overload Frame Transmit Interrupt Enable */
#define CAN0_EIER_ORIE                    (1 <<  5) /* 20: Overrun Interrupt Enable */
#define CAN0_EIER_BORIE                   (1 <<  4) /* 10: Bus-Off Recovery Interrupt Enable */
#define CAN0_EIER_BOEIE                   (1 <<  3) /* 08: Bus-Off Entry Interrupt Enable */
#define CAN0_EIER_EPIE                    (1 <<  2) /* 04: Error-Passive Interrupt Enable */
#define CAN0_EIER_EWIE                    (1 <<  1) /* 02: Error-Warning Interrupt Enable */
#define CAN0_EIER_BEIE                    (1 <<  0) /* 01: Bus Error Interrupt Enable */
#define CAN0_EIFR_OFFSET                  0x084d
#define CAN0_EIFR                         (CAN0_BASE + CAN0_EIFR_OFFSET)
#define CAN0_EIFR_BLIF                    (1 <<  7) /* 80: Bus Lock Detect Flag */
#define CAN0_EIFR_OLIF                    (1 <<  6) /* 40: Overload Frame Transmission Detect Flag */
#define CAN0_EIFR_ORIF                    (1 <<  5) /* 20: Receive Overrun Detect Flag */
#define CAN0_EIFR_BORIF                   (1 <<  4) /* 10: Bus-Off Recovery Detect Flag */
#define CAN0_EIFR_BOEIF                   (1 <<  3) /* 08: Bus-Off Entry Detect Flag */
#define CAN0_EIFR_EPIF                    (1 <<  2) /* 04: Error-Passive Detect Flag */
#define CAN0_EIFR_EWIF                    (1 <<  1) /* 02: Error-Warning Detect Flag */
#define CAN0_EIFR_BEIF                    (1 <<  0) /* 01: Bus Error Detect Flag */
#define CAN0_RECR_OFFSET                  0x084e
#define CAN0_RECR                         (CAN0_BASE + CAN0_RECR_OFFSET)
#define CAN0_RECR_RECR                    (8 <<  0) /* 01: Receive error count function RECR increments or decrements the counter value according to the error status of the CAN module during reception. */
#define CAN0_RECR_RECR_MASK                    (0xff)
#define CAN0_TECR_OFFSET                  0x084f
#define CAN0_TECR                         (CAN0_BASE + CAN0_TECR_OFFSET)
#define CAN0_TECR_TECR                    (8 <<  0) /* 01: Transmit error count function TECR increments or decrements the counter value according to the error status of the CAN module during transmission. */
#define CAN0_TECR_TECR_MASK                    (0xff)
#define CAN0_ECSR_OFFSET                  0x0850
#define CAN0_ECSR                         (CAN0_BASE + CAN0_ECSR_OFFSET)
#define CAN0_ECSR_EDPM                    (1 <<  7) /* 80: Error Display Mode Select */
#define CAN0_ECSR_ADEF                    (1 <<  6) /* 40: ACK Delimiter Error Flag */
#define CAN0_ECSR_BE0F                    (1 <<  5) /* 20: Bit Error (dominant) Flag */
#define CAN0_ECSR_BE1F                    (1 <<  4) /* 10: Bit Error (recessive) Flag */
#define CAN0_ECSR_CEF                     (1 <<  3) /* 08: CRC Error Flag */
#define CAN0_ECSR_AEF                     (1 <<  2) /* 04: ACK Error Flag */
#define CAN0_ECSR_FEF                     (1 <<  1) /* 02: Form Error Flag */
#define CAN0_ECSR_SEF                     (1 <<  0) /* 01: Stuff Error Flag */
#define CAN0_CSSR_OFFSET                  0x0851
#define CAN0_CSSR                         (CAN0_BASE + CAN0_CSSR_OFFSET)
#define CAN0_CSSR_CSSR                    (8 <<  0) /* 01: When the value for the channel search is input, the channel number is output to MSSR. */
#define CAN0_CSSR_CSSR_MASK                    (0xff)
#define CAN0_MSSR_OFFSET                  0x0852
#define CAN0_MSSR                         (CAN0_BASE + CAN0_MSSR_OFFSET)
#define CAN0_MSSR_SEST                    (1 <<  7) /* 80: Search Result Status */
#define CAN0_MSSR_MBNST                   (5 <<  0) /* 01: Search Result Mailbox Number Status These bits output the smallest mailbox number that is searched in each mode of MSMR. */
#define CAN0_MSSR_MBNST_MASK                   (0x1f)
#define CAN0_MSMR_OFFSET                  0x0853
#define CAN0_MSMR                         (CAN0_BASE + CAN0_MSMR_OFFSET)
#define CAN0_MSMR_MBSM                    (2 <<  0) /* 01: Mailbox Search Mode Select */
#define CAN0_MSMR_MBSM_MASK                    (0x03)
#define CAN0_TSR_OFFSET                   0x0854
#define CAN0_TSR                          (CAN0_BASE + CAN0_TSR_OFFSET)
#define CAN0_TSR_TSR                      (16 <<  0) /* 01: Free-running counter value for the time stamp function */
#define CAN0_TSR_TSR_MASK                      (0xffff)
#define CAN0_AFSR_OFFSET                  0x0856
#define CAN0_AFSR                         (CAN0_BASE + CAN0_AFSR_OFFSET)
#define CAN0_AFSR_AFSR                    (16 <<  0) /* 01: After the standard ID of a received message is written, the value converted for data table search can be read. */
#define CAN0_AFSR_AFSR_MASK                    (0xffff)
#define CAN0_TCR_OFFSET                   0x0858
#define CAN0_TCR                          (CAN0_BASE + CAN0_TCR_OFFSET)
#define CAN0_TCR_TSTM                     (2 <<  1) /* 02: CAN Test Mode Select */
#define CAN0_TCR_TSTM_MASK                     (0x03)
#define CAN0_TCR_TSTE                     (1 <<  0) /* 01: CAN Test Mode Enable */

/* DBG - Debug Function */
#define DBG_BASE                          0x4001b000
#define DBG_DBGSTR_OFFSET                 0x0000
#define DBG_DBGSTR                        (DBG_BASE + DBG_DBGSTR_OFFSET)
#define DBG_DBGSTR_CDBGPWRUPACK           (1 << 29) /* 20000000: Debug power-up acknowledge */
#define DBG_DBGSTR_CDBGPWRUPREQ           (1 << 28) /* 10000000: Debug power-up request */
#define DBG_DBGSTOPCR_OFFSET              0x0010
#define DBG_DBGSTOPCR                     (DBG_BASE + DBG_DBGSTOPCR_OFFSET)
#define DBG_DBGSTOPCR_DBGSTOP_RECCR       (1 << 25) /* 2000000: Mask bit for RAM ECC error reset/interrupt */
#define DBG_DBGSTOPCR_DBGSTOP_RPER        (1 << 24) /* 1000000: Mask bit for RAM parity error reset/interrupt */
#define DBG_DBGSTOPCR_DBGSTOP_LVD         (3 << 16) /* 10000: b18: Mask bit for LVD2 reset/interrupt (0:enable / 1:Mask) b17: Mask bit for LVD1 reset/interrupt (0:enable / 1:Mask) b16: Mask bit for LVD0 reset (0:enable / 1:Mask) */
#define DBG_DBGSTOPCR_DBGSTOP_LVD_MASK         (0x07)
#define DBG_DBGSTOPCR_DBGSTOP_WDT         (1 <<  1) /* 02: Mask bit for WDT reset/interrupt */
#define DBG_DBGSTOPCR_DBGSTOP_IWDT        (1 <<  0) /* 01: Mask bit for IWDT reset/interrupt */
#define DBG_TRACECTR_OFFSET               0x0020
#define DBG_TRACECTR                      (DBG_BASE + DBG_TRACECTR_OFFSET)
#define DBG_TRACECTR_ENETBFULL            (1 << 31) /* 80000000: Enable bit for halt request by ETB full */

/* CRC - CRC Calculator */
#define CRC_BASE                          0x40074000
#define CRC_CRCCR0_OFFSET                 0x0000
#define CRC_CRCCR0                        (CRC_BASE + CRC_CRCCR0_OFFSET)
#define CRC_CRCCR0_DORCLR                 (1 <<  7) /* 80: CRCDOR Register Clear */
#define CRC_CRCCR0_LMS                    (1 <<  6) /* 40: CRC Calculation Switching */
#define CRC_CRCCR0_GPS                    (3 <<  0) /* 01: CRC Generating Polynomial Switching */
#define CRC_CRCCR0_GPS_MASK                    (0x07)
#define CRC_CRCCR1_OFFSET                 0x0001
#define CRC_CRCCR1                        (CRC_BASE + CRC_CRCCR1_OFFSET)
#define CRC_CRCCR1_CRCSEN                 (1 <<  7) /* 80: Snoop enable bit */
#define CRC_CRCCR1_CRCSWR                 (1 <<  6) /* 40: Snoop-on-write/read switch bit */
#define CRC_CRCDIR_OFFSET                 0x0004
#define CRC_CRCDIR                        (CRC_BASE + CRC_CRCDIR_OFFSET)
#define CRC_CRCDIR_CRCDIR                 (32 <<  0) /* 01: Calculation input Data (Case of CRC-32, CRC-32C ) */
#define CRC_CRCDIR_CRCDIR_MASK                 (0xffffffff)
#define CRC_CRCDIR_BY_OFFSET              0x0004
#define CRC_CRCDIR_BY                     (CRC_BASE + CRC_CRCDIR_BY_OFFSET)
#define CRC_CRCDIR_BY_CRCDIR_BY           (8 <<  0) /* 01: Calculation input Data ( Case of CRC-8, CRC-16 or CRC-CCITT ) */
#define CRC_CRCDIR_BY_CRCDIR_BY_MASK           (0xff)
#define CRC_CRCDOR_OFFSET                 0x0008
#define CRC_CRCDOR                        (CRC_BASE + CRC_CRCDOR_OFFSET)
#define CRC_CRCDOR_CRCDOR                 (32 <<  0) /* 01: Calculation output Data (Case of CRC-32, CRC-32C ) */
#define CRC_CRCDOR_CRCDOR_MASK                 (0xffffffff)
#define CRC_CRCDOR_HA_OFFSET              0x0008
#define CRC_CRCDOR_HA                     (CRC_BASE + CRC_CRCDOR_HA_OFFSET)
#define CRC_CRCDOR_HA_CRCDOR_HA           (16 <<  0) /* 01: Calculation output Data (Case of CRC-16 or CRC-CCITT ) */
#define CRC_CRCDOR_HA_CRCDOR_HA_MASK           (0xffff)
#define CRC_CRCDOR_BY_OFFSET              0x0008
#define CRC_CRCDOR_BY                     (CRC_BASE + CRC_CRCDOR_BY_OFFSET)
#define CRC_CRCDOR_BY_CRCDOR_BY           (8 <<  0) /* 01: Calculation output Data (Case of CRC-8 ) */
#define CRC_CRCDOR_BY_CRCDOR_BY_MASK           (0xff)
#define CRC_CRCSAR_OFFSET                 0x000c
#define CRC_CRCSAR                        (CRC_BASE + CRC_CRCSAR_OFFSET)
#define CRC_CRCSAR_CRCSA                  (14 <<  0) /* 01: snoop address bit Set the I/O register address to snoop */
#define CRC_CRCSAR_CRCSA_MASK                  (0x3fff)

/* CTSU - Capacitive Touch Sensing Unit */
#define CTSU_BASE                         0x40081000
#define CTSU_CTSUCR0_OFFSET               0x0000
#define CTSU_CTSUCR0                      (CTSU_BASE + CTSU_CTSUCR0_OFFSET)
#define CTSU_CTSUCR0_CTSUINIT             (1 <<  4) /* 10: CTSU Control Block Initialization */
#define CTSU_CTSUCR0_CTSUSNZ              (1 <<  2) /* 04: CTSU Wait State Power-Saving Enable */
#define CTSU_CTSUCR0_CTSUCAP              (1 <<  1) /* 02: CTSU Measurement Operation Start Trigger Select */
#define CTSU_CTSUCR0_CTSUSTRT             (1 <<  0) /* 01: CTSU Measurement Operation Start */
#define CTSU_CTSUCR1_OFFSET               0x0001
#define CTSU_CTSUCR1                      (CTSU_BASE + CTSU_CTSUCR1_OFFSET)
#define CTSU_CTSUCR1_CTSUMD               (2 <<  6) /* 40: CTSU Measurement Mode Select */
#define CTSU_CTSUCR1_CTSUMD_MASK               (0x03)
#define CTSU_CTSUCR1_CTSUCLK              (2 <<  4) /* 10: CTSU Operating Clock Select */
#define CTSU_CTSUCR1_CTSUCLK_MASK              (0x03)
#define CTSU_CTSUCR1_CTSUATUNE1           (1 <<  3) /* 08: CTSU Power Supply Capacity Adjustment */
#define CTSU_CTSUCR1_CTSUATUNE0           (1 <<  2) /* 04: CTSU Power Supply Operating Mode Setting */
#define CTSU_CTSUCR1_CTSUCSW              (1 <<  1) /* 02: CTSU LPF Capacitance Charging Control */
#define CTSU_CTSUCR1_CTSUPON              (1 <<  0) /* 01: CTSU Power Supply Enable */
#define CTSU_CTSUSDPRS_OFFSET             0x0002
#define CTSU_CTSUSDPRS                    (CTSU_BASE + CTSU_CTSUSDPRS_OFFSET)
#define CTSU_CTSUSDPRS_CTSUSOFF           (1 <<  6) /* 40: CTSU High-Pass Noise Reduction Function Off Setting */
#define CTSU_CTSUSDPRS_CTSUPRMODE         (2 <<  4) /* 10: CTSU Base Period and Pulse Count Setting */
#define CTSU_CTSUSDPRS_CTSUPRMODE_MASK         (0x03)
#define CTSU_CTSUSDPRS_CTSUPRRATIO        (4 <<  0) /* 01: CTSU Measurement Time and Pulse Count Adjustment Recommended setting: 3 (0011b) */
#define CTSU_CTSUSDPRS_CTSUPRRATIO_MASK        (0x0f)
#define CTSU_CTSUSST_OFFSET               0x0003
#define CTSU_CTSUSST                      (CTSU_BASE + CTSU_CTSUSST_OFFSET)
#define CTSU_CTSUSST_CTSUSST              (8 <<  0) /* 01: CTSU Sensor Stabilization Wait Control NOTE: The value of these bits should be fixed to 00010000b. */
#define CTSU_CTSUSST_CTSUSST_MASK              (0xff)
#define CTSU_CTSUMCH0_OFFSET              0x0004
#define CTSU_CTSUMCH0                     (CTSU_BASE + CTSU_CTSUMCH0_OFFSET)
#define CTSU_CTSUMCH0_CTSUMCH0            (6 <<  0) /* 01: CTSU Measurement Channel 0. Note1: Writing to these bits is only enabled in self-capacitance single-scan mode (CTSUCR1.CTSUMD[1:0] bits = 00b). Note2: If the value of CTSUMCH0 was set to b'111111 in mode other than self-capacitor single scan mode, the measurement is stopped. */
#define CTSU_CTSUMCH0_CTSUMCH0_MASK            (0x3f)
#define CTSU_CTSUMCH1_OFFSET              0x0005
#define CTSU_CTSUMCH1                     (CTSU_BASE + CTSU_CTSUMCH1_OFFSET)
#define CTSU_CTSUMCH1_CTSUMCH1            (6 <<  0) /* 01: CTSU Measurement Channel 1 Note1: If the value of CTSUMCH1 was set to b'111111, the measurement is stopped. */
#define CTSU_CTSUMCH1_CTSUMCH1_MASK            (0x3f)
#define CTSU_CTSUCHAC0_OFFSET             0x0006
#define CTSU_CTSUCHAC0                    (CTSU_BASE + CTSU_CTSUCHAC0_OFFSET)
#define CTSU_CTSUCHAC0_CTSUCHAC0          (8 <<  0) /* 01: CTSU Channel Enable Control 0. 0: Not measurement target 1: Measurement target Note: CTSUCHAC0[0] corresponds to TS00 and CTSUCHAC0[7] corresponds to TS07. but the write value of CTSUCHAC0[2] should be 0. */
#define CTSU_CTSUCHAC0_CTSUCHAC0_MASK          (0xff)
#define CTSU_CTSUCHAC1_OFFSET             0x0007
#define CTSU_CTSUCHAC1                    (CTSU_BASE + CTSU_CTSUCHAC1_OFFSET)
#define CTSU_CTSUCHAC1_CTSUCHAC1          (8 <<  0) /* 01: CTSU Channel Enable Control 1. 0: Not measurement target 1: Measurement target Note: CTSUCHAC1[0] corresponds to TS08 and CTSUCHAC1[7] corresponds to TS15. */
#define CTSU_CTSUCHAC1_CTSUCHAC1_MASK          (0xff)
#define CTSU_CTSUCHAC2_OFFSET             0x0008
#define CTSU_CTSUCHAC2                    (CTSU_BASE + CTSU_CTSUCHAC2_OFFSET)
#define CTSU_CTSUCHAC2_CTSUCHAC2          (8 <<  0) /* 01: CTSU Channel Enable Control 2. 0: Not measurement target 1: Measurement target Note: CTSUCHAC2[0] corresponds to TS16 and CTSUCHAC2[7] corresponds to TS23. */
#define CTSU_CTSUCHAC2_CTSUCHAC2_MASK          (0xff)
#define CTSU_CTSUCHAC3_OFFSET             0x0009
#define CTSU_CTSUCHAC3                    (CTSU_BASE + CTSU_CTSUCHAC3_OFFSET)
#define CTSU_CTSUCHAC3_CTSUCHAC3          (8 <<  0) /* 01: CTSU Channel Enable Control 3. 0: Not measurement target 1: Measurement target Note: CTSUCHAC3[0] corresponds to TS24 and CTSUCHAC3[7] corresponds to TS31. */
#define CTSU_CTSUCHAC3_CTSUCHAC3_MASK          (0xff)
#define CTSU_CTSUCHAC4_OFFSET             0x000a
#define CTSU_CTSUCHAC4                    (CTSU_BASE + CTSU_CTSUCHAC4_OFFSET)
#define CTSU_CTSUCHAC4_CTSUCHAC4          (4 <<  0) /* 01: CTSU Channel Enable Control 4. 0: Not measurement target 1: Measurement target Note: CTSUCHAC4[0] corresponds to TS32 and CTSUCHAC4[3] corresponds to TS35. but the write value of CTSUCHAC0[4],CTSUCHAC4[5],CTSUCHAC4[6],CTSUCHAC4[7] should be 0. */
#define CTSU_CTSUCHAC4_CTSUCHAC4_MASK          (0x0f)
#define CTSU_CTSUCHTRC0_OFFSET            0x000b
#define CTSU_CTSUCHTRC0                   (CTSU_BASE + CTSU_CTSUCHTRC0_OFFSET)
#define CTSU_CTSUCHTRC0_CTSUCHTRC0        (8 <<  0) /* 01: CTSU Channel Transmit/Receive Control 0 */
#define CTSU_CTSUCHTRC0_CTSUCHTRC0_MASK        (0xff)
#define CTSU_CTSUCHTRC1_OFFSET            0x000c
#define CTSU_CTSUCHTRC1                   (CTSU_BASE + CTSU_CTSUCHTRC1_OFFSET)
#define CTSU_CTSUCHTRC1_CTSUCHTRC1        (8 <<  0) /* 01: CTSU Channel Transmit/Receive Control 1 */
#define CTSU_CTSUCHTRC1_CTSUCHTRC1_MASK        (0xff)
#define CTSU_CTSUCHTRC2_OFFSET            0x000d
#define CTSU_CTSUCHTRC2                   (CTSU_BASE + CTSU_CTSUCHTRC2_OFFSET)
#define CTSU_CTSUCHTRC2_CTSUCHTRC2        (8 <<  0) /* 01: CTSU Channel Transmit/Receive Control 2 */
#define CTSU_CTSUCHTRC2_CTSUCHTRC2_MASK        (0xff)
#define CTSU_CTSUCHTRC3_OFFSET            0x000e
#define CTSU_CTSUCHTRC3                   (CTSU_BASE + CTSU_CTSUCHTRC3_OFFSET)
#define CTSU_CTSUCHTRC3_CTSUCHTRC3        (8 <<  0) /* 01: CTSU Channel Transmit/Receive Control 3 */
#define CTSU_CTSUCHTRC3_CTSUCHTRC3_MASK        (0xff)
#define CTSU_CTSUCHTRC4_OFFSET            0x000f
#define CTSU_CTSUCHTRC4                   (CTSU_BASE + CTSU_CTSUCHTRC4_OFFSET)
#define CTSU_CTSUCHTRC4_CTSUCHAC4         (4 <<  0) /* 01: CTSU Channel Transmit/Receive Control 4 */
#define CTSU_CTSUCHTRC4_CTSUCHAC4_MASK         (0x0f)
#define CTSU_CTSUDCLKC_OFFSET             0x0010
#define CTSU_CTSUDCLKC                    (CTSU_BASE + CTSU_CTSUDCLKC_OFFSET)
#define CTSU_CTSUDCLKC_CTSUSSCNT          (2 <<  4) /* 10: CTSU Diffusion Clock Mode Control NOTE: This bit should be set to 11b. */
#define CTSU_CTSUDCLKC_CTSUSSCNT_MASK          (0x03)
#define CTSU_CTSUDCLKC_CTSUSSMOD          (2 <<  0) /* 01: CTSU Diffusion Clock Mode Select NOTE: This bit should be set to 00b. */
#define CTSU_CTSUDCLKC_CTSUSSMOD_MASK          (0x03)
#define CTSU_CTSUST_OFFSET                0x0011
#define CTSU_CTSUST                       (CTSU_BASE + CTSU_CTSUST_OFFSET)
#define CTSU_CTSUST_CTSUPS                (1 <<  7) /* 80: CTSU Mutual Capacitance Status Flag */
#define CTSU_CTSUST_CTSUROVF              (1 <<  6) /* 40: CTSU Reference Counter Overflow Flag */
#define CTSU_CTSUST_CTSUSOVF              (1 <<  5) /* 20: CTSU Sensor Counter Overflow Flag */
#define CTSU_CTSUST_CTSUDTSR              (1 <<  4) /* 10: CTSU Data Transfer Status Flag */
#define CTSU_CTSUST_CTSUSTC               (3 <<  0) /* 01: CTSU Measurement Status Counter */
#define CTSU_CTSUST_CTSUSTC_MASK               (0x07)
#define CTSU_CTSUSSC_OFFSET               0x0012
#define CTSU_CTSUSSC                      (CTSU_BASE + CTSU_CTSUSSC_OFFSET)
#define CTSU_CTSUSSC_CTSUSSDIV            (4 <<  8) /* 100: CTSU Spectrum Diffusion Frequency Division Setting */
#define CTSU_CTSUSSC_CTSUSSDIV_MASK            (0x0f)
#define CTSU_CTSUSO0_OFFSET               0x0014
#define CTSU_CTSUSO0                      (CTSU_BASE + CTSU_CTSUSO0_OFFSET)
#define CTSU_CTSUSO0_CTSUSNUM             (6 << 10) /* 400: CTSU Measurement Count Setting */
#define CTSU_CTSUSO0_CTSUSNUM_MASK             (0x3f)
#define CTSU_CTSUSO0_CTSUSO               (10 <<  0) /* 01: CTSU Sensor Offset Adjustment Current offset amount is CTSUSO ( 0 to 1023 ) */
#define CTSU_CTSUSO0_CTSUSO_MASK               (0x3ff)
#define CTSU_CTSUSO1_OFFSET               0x0016
#define CTSU_CTSUSO1                      (CTSU_BASE + CTSU_CTSUSO1_OFFSET)
#define CTSU_CTSUSO1_CTSUICOG             (2 << 13) /* 2000: CTSU ICO Gain Adjustment */
#define CTSU_CTSUSO1_CTSUICOG_MASK             (0x03)
#define CTSU_CTSUSO1_CTSUSDPA             (5 <<  8) /* 100: CTSU Base Clock Setting Operating clock divided by ( CTSUSDPA + 1 ) x 2 */
#define CTSU_CTSUSO1_CTSUSDPA_MASK             (0x1f)
#define CTSU_CTSUSO1_CTSURICOA            (8 <<  0) /* 01: CTSU Reference ICO Current Adjustment Current offset amount is CTSUSO ( 0 to 255 ) */
#define CTSU_CTSUSO1_CTSURICOA_MASK            (0xff)
#define CTSU_CTSUSC_OFFSET                0x0018
#define CTSU_CTSUSC                       (CTSU_BASE + CTSU_CTSUSC_OFFSET)
#define CTSU_CTSUSC_CTSUSC                (16 <<  0) /* 01: CTSU Sensor Counter These bits indicate the measurement result of the CTSU. These bits indicate FFFFh when an overflow occurs. */
#define CTSU_CTSUSC_CTSUSC_MASK                (0xffff)
#define CTSU_CTSURC_OFFSET                0x001a
#define CTSU_CTSURC                       (CTSU_BASE + CTSU_CTSURC_OFFSET)
#define CTSU_CTSURC_CTSURC                (16 <<  0) /* 01: CTSU Reference Counter These bits indicate the measurement result of the reference ICO. These bits indicate FFFFh when an overflow occurs. */
#define CTSU_CTSURC_CTSURC_MASK                (0xffff)
#define CTSU_CTSUERRS_OFFSET              0x001c
#define CTSU_CTSUERRS                     (CTSU_BASE + CTSU_CTSUERRS_OFFSET)
#define CTSU_CTSUERRS_CTSUICOMP           (1 << 15) /* 8000: TSCAP Voltage Error Monitor */

/* DAC12 - 12-bit D/A converter */
#define DAC12_BASE                        0x4005e000
#define DAC12_DADR0_OFFSET                0x0000
#define DAC12_DADR0                       (DAC12_BASE + DAC12_DADR0_OFFSET)
#define DAC12_DADR0_DADR                  (16 <<  0) /* 01: D/A Data Register NOTE: When DADPR.DPSEL = 0, the high-order 4 bits are fixed to 0: right justified format. When DADPR.DPSEL = 1, the low-order 4 bits are fixed to 0: left justified format. */
#define DAC12_DADR0_DADR_MASK                  (0xffff)
#define DAC12_DACR_OFFSET                 0x0004
#define DAC12_DACR                        (DAC12_BASE + DAC12_DACR_OFFSET)
#define DAC12_DACR_DAOE0                  (1 <<  6) /* 40: D/A Output Enable 0 */
#define DAC12_DADPR_OFFSET                0x0005
#define DAC12_DADPR                       (DAC12_BASE + DAC12_DADPR_OFFSET)
#define DAC12_DADPR_DPSEL                 (1 <<  7) /* 80: DADRm Format Select */
#define DAC12_DAADSCR_OFFSET              0x0006
#define DAC12_DAADSCR                     (DAC12_BASE + DAC12_DAADSCR_OFFSET)
#define DAC12_DAADSCR_DAADST              (1 <<  7) /* 80: D/A-A/D Synchronous Conversion */
#define DAC12_DAVREFCR_OFFSET             0x0007
#define DAC12_DAVREFCR                    (DAC12_BASE + DAC12_DAVREFCR_OFFSET)
#define DAC12_DAVREFCR_REF                (3 <<  0) /* 01: D/A Reference Voltage Select */
#define DAC12_DAVREFCR_REF_MASK                (0x07)

/* DAC8 - 8-bit D/A converter */
#define DAC8_BASE                         0x4009e000
#define DAC8_DACS_SIZE                    2
#define DAC8_DACS_OFFSET                  0x0000
#define DAC8_DACS(p)                      (DAC8_BASE + DAC8_DACS_OFFSET + (p)*0x0001)
#define DAC8_DACS_DACS                    (8 <<  0) /* 01: DACS D/A conversion store data note: When 8-bit D/A Converter output is selected as the reference input for the ACMPLP in the COMPSEL1 register, and ACMPLP operation is enabled (COMPMDR.CnENB = 1), changing the DACS[7:0] bits for the channel in use is prohibited. */
#define DAC8_DACS_DACS_MASK                    (0xff)
#define DAC8_DAM_OFFSET                   0x0003
#define DAC8_DAM                          (DAC8_BASE + DAC8_DAM_OFFSET)
#define DAC8_DAM_DACE1                    (1 <<  5) /* 20: D/A Operation Enable 1 */
#define DAC8_DAM_DACE0                    (1 <<  4) /* 10: D/A Operation Enable 0 */

/* DMAC0 - Direct memory access controller 0 */
#define DMAC0_BASE                        0x40005000
#define DMAC0_DMSAR_OFFSET                0x0000
#define DMAC0_DMSAR                       (DMAC0_BASE + DMAC0_DMSAR_OFFSET)
#define DMAC0_DMSAR_DMSAR                 (32 <<  0) /* 01: Specifies the transfer source start address. */
#define DMAC0_DMSAR_DMSAR_MASK                 (0xffffffff)
#define DMAC0_DMDAR_OFFSET                0x0004
#define DMAC0_DMDAR                       (DMAC0_BASE + DMAC0_DMDAR_OFFSET)
#define DMAC0_DMDAR_DMDAR                 (32 <<  0) /* 01: Specifies the transfer destination start address. */
#define DMAC0_DMDAR_DMDAR_MASK                 (0xffffffff)
#define DMAC0_DMCRA_OFFSET                0x0008
#define DMAC0_DMCRA                       (DMAC0_BASE + DMAC0_DMCRA_OFFSET)
#define DMAC0_DMCRA_DMCRAH                (10 << 16) /* 10000: Upper bits of transfer count */
#define DMAC0_DMCRA_DMCRAH_MASK                (0x3ff)
#define DMAC0_DMCRA_DMCRAL                (16 <<  0) /* 01: Lower bits of transfer count */
#define DMAC0_DMCRA_DMCRAL_MASK                (0xffff)
#define DMAC0_DMCRB_OFFSET                0x000c
#define DMAC0_DMCRB                       (DMAC0_BASE + DMAC0_DMCRB_OFFSET)
#define DMAC0_DMCRB_DMCRB                 (16 <<  0) /* 01: Specifies the number of block transfer operations or repeat transfer operations. */
#define DMAC0_DMCRB_DMCRB_MASK                 (0xffff)
#define DMAC0_DMTMD_OFFSET                0x0010
#define DMAC0_DMTMD                       (DMAC0_BASE + DMAC0_DMTMD_OFFSET)
#define DMAC0_DMTMD_MD                    (2 << 14) /* 4000: Transfer Mode Select */
#define DMAC0_DMTMD_MD_MASK                    (0x03)
#define DMAC0_DMTMD_DTS                   (2 << 12) /* 1000: Repeat Area Select */
#define DMAC0_DMTMD_DTS_MASK                   (0x03)
#define DMAC0_DMTMD_SZ                    (2 <<  8) /* 100: Transfer Data Size Select */
#define DMAC0_DMTMD_SZ_MASK                    (0x03)
#define DMAC0_DMTMD_DCTG                  (2 <<  0) /* 01: Transfer Request Source Select */
#define DMAC0_DMTMD_DCTG_MASK                  (0x03)
#define DMAC0_DMINT_OFFSET                0x0013
#define DMAC0_DMINT                       (DMAC0_BASE + DMAC0_DMINT_OFFSET)
#define DMAC0_DMINT_DTIE                  (1 <<  4) /* 10: Transfer End Interrupt Enable */
#define DMAC0_DMINT_ESIE                  (1 <<  3) /* 08: Transfer Escape End Interrupt Enable */
#define DMAC0_DMINT_RPTIE                 (1 <<  2) /* 04: Repeat Size End Interrupt Enable */
#define DMAC0_DMINT_SARIE                 (1 <<  1) /* 02: Source Address Extended Repeat Area Overflow Interrupt Enable */
#define DMAC0_DMINT_DARIE                 (1 <<  0) /* 01: Destination Address Extended Repeat Area Overflow Interrupt Enable */
#define DMAC0_DMAMD_OFFSET                0x0014
#define DMAC0_DMAMD                       (DMAC0_BASE + DMAC0_DMAMD_OFFSET)
#define DMAC0_DMAMD_SM                    (2 << 14) /* 4000: Source Address Update Mode */
#define DMAC0_DMAMD_SM_MASK                    (0x03)
#define DMAC0_DMAMD_SARA                  (5 <<  8) /* 100: Source Address Extended Repeat Area Specifies the extended repeat area on the source address. For details on the settings. */
#define DMAC0_DMAMD_SARA_MASK                  (0x1f)
#define DMAC0_DMAMD_DM                    (2 <<  6) /* 40: Destination Address Update Mode */
#define DMAC0_DMAMD_DM_MASK                    (0x03)
#define DMAC0_DMAMD_DARA                  (5 <<  0) /* 01: Destination Address Extended Repeat Area Specifies the extended repeat area on the destination address. For details on the settings. */
#define DMAC0_DMAMD_DARA_MASK                  (0x1f)
#define DMAC0_DMOFR_OFFSET                0x0018
#define DMAC0_DMOFR                       (DMAC0_BASE + DMAC0_DMOFR_OFFSET)
#define DMAC0_DMOFR_DMOFR                 (32 <<  0) /* 01: Specifies the offset when offset addition is selected as the address update mode for transfer source or destination. */
#define DMAC0_DMOFR_DMOFR_MASK                 (0xffffffff)
#define DMAC0_DMCNT_OFFSET                0x001c
#define DMAC0_DMCNT                       (DMAC0_BASE + DMAC0_DMCNT_OFFSET)
#define DMAC0_DMCNT_DTE                   (1 <<  0) /* 01: DMA Transfer Enable */
#define DMAC0_DMREQ_OFFSET                0x001d
#define DMAC0_DMREQ                       (DMAC0_BASE + DMAC0_DMREQ_OFFSET)
#define DMAC0_DMREQ_CLRS                  (1 <<  4) /* 10: DMA Software Start Bit Auto Clear Select */
#define DMAC0_DMREQ_SWREQ                 (1 <<  0) /* 01: DMA Software Start */
#define DMAC0_DMSTS_OFFSET                0x001e
#define DMAC0_DMSTS                       (DMAC0_BASE + DMAC0_DMSTS_OFFSET)
#define DMAC0_DMSTS_ACT                   (1 <<  7) /* 80: DMA Active Flag */
#define DMAC0_DMSTS_DTIF                  (1 <<  4) /* 10: Transfer End Interrupt Flag */
#define DMAC0_DMSTS_ESIF                  (1 <<  0) /* 01: Transfer Escape End Interrupt Flag */

/* No registers defined for peripheral DMAC1. Using those of DMAC0. */
#define DMAC1_BASE                        0x40005040
#define DMAC1_DMSAR_OFFSET                DMAC0_DMSAR_OFFSET
#define DMAC1_DMSAR                       DMAC0_DMSAR
#define DMAC1_DMSAR_DMSAR                 DMAC0_DMSAR_DMSAR
#define DMAC1_DMSAR_DMSAR_MASK            DMAC0_DMSAR_DMSAR_MASK
#define DMAC1_DMDAR_OFFSET                DMAC0_DMDAR_OFFSET
#define DMAC1_DMDAR                       DMAC0_DMDAR
#define DMAC1_DMDAR_DMDAR                 DMAC0_DMDAR_DMDAR
#define DMAC1_DMDAR_DMDAR_MASK            DMAC0_DMDAR_DMDAR_MASK
#define DMAC1_DMCRA_OFFSET                DMAC0_DMCRA_OFFSET
#define DMAC1_DMCRA                       DMAC0_DMCRA
#define DMAC1_DMCRA_DMCRAH                DMAC0_DMCRA_DMCRAH
#define DMAC1_DMCRA_DMCRAH_MASK           DMAC0_DMCRA_DMCRAH_MASK
#define DMAC1_DMCRA_DMCRAL                DMAC0_DMCRA_DMCRAL
#define DMAC1_DMCRA_DMCRAL_MASK           DMAC0_DMCRA_DMCRAL_MASK
#define DMAC1_DMCRB_OFFSET                DMAC0_DMCRB_OFFSET
#define DMAC1_DMCRB                       DMAC0_DMCRB
#define DMAC1_DMCRB_DMCRB                 DMAC0_DMCRB_DMCRB
#define DMAC1_DMCRB_DMCRB_MASK            DMAC0_DMCRB_DMCRB_MASK
#define DMAC1_DMTMD_OFFSET                DMAC0_DMTMD_OFFSET
#define DMAC1_DMTMD                       DMAC0_DMTMD
#define DMAC1_DMTMD_MD                    DMAC0_DMTMD_MD
#define DMAC1_DMTMD_MD_MASK               DMAC0_DMTMD_MD_MASK
#define DMAC1_DMTMD_DTS                   DMAC0_DMTMD_DTS
#define DMAC1_DMTMD_DTS_MASK              DMAC0_DMTMD_DTS_MASK
#define DMAC1_DMTMD_SZ                    DMAC0_DMTMD_SZ
#define DMAC1_DMTMD_SZ_MASK               DMAC0_DMTMD_SZ_MASK
#define DMAC1_DMTMD_DCTG                  DMAC0_DMTMD_DCTG
#define DMAC1_DMTMD_DCTG_MASK             DMAC0_DMTMD_DCTG_MASK
#define DMAC1_DMINT_OFFSET                DMAC0_DMINT_OFFSET
#define DMAC1_DMINT                       DMAC0_DMINT
#define DMAC1_DMINT_DTIE                  DMAC0_DMINT_DTIE
#define DMAC1_DMINT_ESIE                  DMAC0_DMINT_ESIE
#define DMAC1_DMINT_RPTIE                 DMAC0_DMINT_RPTIE
#define DMAC1_DMINT_SARIE                 DMAC0_DMINT_SARIE
#define DMAC1_DMINT_DARIE                 DMAC0_DMINT_DARIE
#define DMAC1_DMAMD_OFFSET                DMAC0_DMAMD_OFFSET
#define DMAC1_DMAMD                       DMAC0_DMAMD
#define DMAC1_DMAMD_SM                    DMAC0_DMAMD_SM
#define DMAC1_DMAMD_SM_MASK               DMAC0_DMAMD_SM_MASK
#define DMAC1_DMAMD_SARA                  DMAC0_DMAMD_SARA
#define DMAC1_DMAMD_SARA_MASK             DMAC0_DMAMD_SARA_MASK
#define DMAC1_DMAMD_DM                    DMAC0_DMAMD_DM
#define DMAC1_DMAMD_DM_MASK               DMAC0_DMAMD_DM_MASK
#define DMAC1_DMAMD_DARA                  DMAC0_DMAMD_DARA
#define DMAC1_DMAMD_DARA_MASK             DMAC0_DMAMD_DARA_MASK
#define DMAC1_DMOFR_OFFSET                DMAC0_DMOFR_OFFSET
#define DMAC1_DMOFR                       DMAC0_DMOFR
#define DMAC1_DMOFR_DMOFR                 DMAC0_DMOFR_DMOFR
#define DMAC1_DMOFR_DMOFR_MASK            DMAC0_DMOFR_DMOFR_MASK
#define DMAC1_DMCNT_OFFSET                DMAC0_DMCNT_OFFSET
#define DMAC1_DMCNT                       DMAC0_DMCNT
#define DMAC1_DMCNT_DTE                   DMAC0_DMCNT_DTE
#define DMAC1_DMREQ_OFFSET                DMAC0_DMREQ_OFFSET
#define DMAC1_DMREQ                       DMAC0_DMREQ
#define DMAC1_DMREQ_CLRS                  DMAC0_DMREQ_CLRS
#define DMAC1_DMREQ_SWREQ                 DMAC0_DMREQ_SWREQ
#define DMAC1_DMSTS_OFFSET                DMAC0_DMSTS_OFFSET
#define DMAC1_DMSTS                       DMAC0_DMSTS
#define DMAC1_DMSTS_ACT                   DMAC0_DMSTS_ACT
#define DMAC1_DMSTS_DTIF                  DMAC0_DMSTS_DTIF
#define DMAC1_DMSTS_ESIF                  DMAC0_DMSTS_ESIF

/* No registers defined for peripheral DMAC2. Using those of DMAC0. */
#define DMAC2_BASE                        0x40005080
#define DMAC2_DMSAR_OFFSET                DMAC0_DMSAR_OFFSET
#define DMAC2_DMSAR                       DMAC0_DMSAR
#define DMAC2_DMSAR_DMSAR                 DMAC0_DMSAR_DMSAR
#define DMAC2_DMSAR_DMSAR_MASK            DMAC0_DMSAR_DMSAR_MASK
#define DMAC2_DMDAR_OFFSET                DMAC0_DMDAR_OFFSET
#define DMAC2_DMDAR                       DMAC0_DMDAR
#define DMAC2_DMDAR_DMDAR                 DMAC0_DMDAR_DMDAR
#define DMAC2_DMDAR_DMDAR_MASK            DMAC0_DMDAR_DMDAR_MASK
#define DMAC2_DMCRA_OFFSET                DMAC0_DMCRA_OFFSET
#define DMAC2_DMCRA                       DMAC0_DMCRA
#define DMAC2_DMCRA_DMCRAH                DMAC0_DMCRA_DMCRAH
#define DMAC2_DMCRA_DMCRAH_MASK           DMAC0_DMCRA_DMCRAH_MASK
#define DMAC2_DMCRA_DMCRAL                DMAC0_DMCRA_DMCRAL
#define DMAC2_DMCRA_DMCRAL_MASK           DMAC0_DMCRA_DMCRAL_MASK
#define DMAC2_DMCRB_OFFSET                DMAC0_DMCRB_OFFSET
#define DMAC2_DMCRB                       DMAC0_DMCRB
#define DMAC2_DMCRB_DMCRB                 DMAC0_DMCRB_DMCRB
#define DMAC2_DMCRB_DMCRB_MASK            DMAC0_DMCRB_DMCRB_MASK
#define DMAC2_DMTMD_OFFSET                DMAC0_DMTMD_OFFSET
#define DMAC2_DMTMD                       DMAC0_DMTMD
#define DMAC2_DMTMD_MD                    DMAC0_DMTMD_MD
#define DMAC2_DMTMD_MD_MASK               DMAC0_DMTMD_MD_MASK
#define DMAC2_DMTMD_DTS                   DMAC0_DMTMD_DTS
#define DMAC2_DMTMD_DTS_MASK              DMAC0_DMTMD_DTS_MASK
#define DMAC2_DMTMD_SZ                    DMAC0_DMTMD_SZ
#define DMAC2_DMTMD_SZ_MASK               DMAC0_DMTMD_SZ_MASK
#define DMAC2_DMTMD_DCTG                  DMAC0_DMTMD_DCTG
#define DMAC2_DMTMD_DCTG_MASK             DMAC0_DMTMD_DCTG_MASK
#define DMAC2_DMINT_OFFSET                DMAC0_DMINT_OFFSET
#define DMAC2_DMINT                       DMAC0_DMINT
#define DMAC2_DMINT_DTIE                  DMAC0_DMINT_DTIE
#define DMAC2_DMINT_ESIE                  DMAC0_DMINT_ESIE
#define DMAC2_DMINT_RPTIE                 DMAC0_DMINT_RPTIE
#define DMAC2_DMINT_SARIE                 DMAC0_DMINT_SARIE
#define DMAC2_DMINT_DARIE                 DMAC0_DMINT_DARIE
#define DMAC2_DMAMD_OFFSET                DMAC0_DMAMD_OFFSET
#define DMAC2_DMAMD                       DMAC0_DMAMD
#define DMAC2_DMAMD_SM                    DMAC0_DMAMD_SM
#define DMAC2_DMAMD_SM_MASK               DMAC0_DMAMD_SM_MASK
#define DMAC2_DMAMD_SARA                  DMAC0_DMAMD_SARA
#define DMAC2_DMAMD_SARA_MASK             DMAC0_DMAMD_SARA_MASK
#define DMAC2_DMAMD_DM                    DMAC0_DMAMD_DM
#define DMAC2_DMAMD_DM_MASK               DMAC0_DMAMD_DM_MASK
#define DMAC2_DMAMD_DARA                  DMAC0_DMAMD_DARA
#define DMAC2_DMAMD_DARA_MASK             DMAC0_DMAMD_DARA_MASK
#define DMAC2_DMOFR_OFFSET                DMAC0_DMOFR_OFFSET
#define DMAC2_DMOFR                       DMAC0_DMOFR
#define DMAC2_DMOFR_DMOFR                 DMAC0_DMOFR_DMOFR
#define DMAC2_DMOFR_DMOFR_MASK            DMAC0_DMOFR_DMOFR_MASK
#define DMAC2_DMCNT_OFFSET                DMAC0_DMCNT_OFFSET
#define DMAC2_DMCNT                       DMAC0_DMCNT
#define DMAC2_DMCNT_DTE                   DMAC0_DMCNT_DTE
#define DMAC2_DMREQ_OFFSET                DMAC0_DMREQ_OFFSET
#define DMAC2_DMREQ                       DMAC0_DMREQ
#define DMAC2_DMREQ_CLRS                  DMAC0_DMREQ_CLRS
#define DMAC2_DMREQ_SWREQ                 DMAC0_DMREQ_SWREQ
#define DMAC2_DMSTS_OFFSET                DMAC0_DMSTS_OFFSET
#define DMAC2_DMSTS                       DMAC0_DMSTS
#define DMAC2_DMSTS_ACT                   DMAC0_DMSTS_ACT
#define DMAC2_DMSTS_DTIF                  DMAC0_DMSTS_DTIF
#define DMAC2_DMSTS_ESIF                  DMAC0_DMSTS_ESIF

/* No registers defined for peripheral DMAC3. Using those of DMAC0. */
#define DMAC3_BASE                        0x400050c0
#define DMAC3_DMSAR_OFFSET                DMAC0_DMSAR_OFFSET
#define DMAC3_DMSAR                       DMAC0_DMSAR
#define DMAC3_DMSAR_DMSAR                 DMAC0_DMSAR_DMSAR
#define DMAC3_DMSAR_DMSAR_MASK            DMAC0_DMSAR_DMSAR_MASK
#define DMAC3_DMDAR_OFFSET                DMAC0_DMDAR_OFFSET
#define DMAC3_DMDAR                       DMAC0_DMDAR
#define DMAC3_DMDAR_DMDAR                 DMAC0_DMDAR_DMDAR
#define DMAC3_DMDAR_DMDAR_MASK            DMAC0_DMDAR_DMDAR_MASK
#define DMAC3_DMCRA_OFFSET                DMAC0_DMCRA_OFFSET
#define DMAC3_DMCRA                       DMAC0_DMCRA
#define DMAC3_DMCRA_DMCRAH                DMAC0_DMCRA_DMCRAH
#define DMAC3_DMCRA_DMCRAH_MASK           DMAC0_DMCRA_DMCRAH_MASK
#define DMAC3_DMCRA_DMCRAL                DMAC0_DMCRA_DMCRAL
#define DMAC3_DMCRA_DMCRAL_MASK           DMAC0_DMCRA_DMCRAL_MASK
#define DMAC3_DMCRB_OFFSET                DMAC0_DMCRB_OFFSET
#define DMAC3_DMCRB                       DMAC0_DMCRB
#define DMAC3_DMCRB_DMCRB                 DMAC0_DMCRB_DMCRB
#define DMAC3_DMCRB_DMCRB_MASK            DMAC0_DMCRB_DMCRB_MASK
#define DMAC3_DMTMD_OFFSET                DMAC0_DMTMD_OFFSET
#define DMAC3_DMTMD                       DMAC0_DMTMD
#define DMAC3_DMTMD_MD                    DMAC0_DMTMD_MD
#define DMAC3_DMTMD_MD_MASK               DMAC0_DMTMD_MD_MASK
#define DMAC3_DMTMD_DTS                   DMAC0_DMTMD_DTS
#define DMAC3_DMTMD_DTS_MASK              DMAC0_DMTMD_DTS_MASK
#define DMAC3_DMTMD_SZ                    DMAC0_DMTMD_SZ
#define DMAC3_DMTMD_SZ_MASK               DMAC0_DMTMD_SZ_MASK
#define DMAC3_DMTMD_DCTG                  DMAC0_DMTMD_DCTG
#define DMAC3_DMTMD_DCTG_MASK             DMAC0_DMTMD_DCTG_MASK
#define DMAC3_DMINT_OFFSET                DMAC0_DMINT_OFFSET
#define DMAC3_DMINT                       DMAC0_DMINT
#define DMAC3_DMINT_DTIE                  DMAC0_DMINT_DTIE
#define DMAC3_DMINT_ESIE                  DMAC0_DMINT_ESIE
#define DMAC3_DMINT_RPTIE                 DMAC0_DMINT_RPTIE
#define DMAC3_DMINT_SARIE                 DMAC0_DMINT_SARIE
#define DMAC3_DMINT_DARIE                 DMAC0_DMINT_DARIE
#define DMAC3_DMAMD_OFFSET                DMAC0_DMAMD_OFFSET
#define DMAC3_DMAMD                       DMAC0_DMAMD
#define DMAC3_DMAMD_SM                    DMAC0_DMAMD_SM
#define DMAC3_DMAMD_SM_MASK               DMAC0_DMAMD_SM_MASK
#define DMAC3_DMAMD_SARA                  DMAC0_DMAMD_SARA
#define DMAC3_DMAMD_SARA_MASK             DMAC0_DMAMD_SARA_MASK
#define DMAC3_DMAMD_DM                    DMAC0_DMAMD_DM
#define DMAC3_DMAMD_DM_MASK               DMAC0_DMAMD_DM_MASK
#define DMAC3_DMAMD_DARA                  DMAC0_DMAMD_DARA
#define DMAC3_DMAMD_DARA_MASK             DMAC0_DMAMD_DARA_MASK
#define DMAC3_DMOFR_OFFSET                DMAC0_DMOFR_OFFSET
#define DMAC3_DMOFR                       DMAC0_DMOFR
#define DMAC3_DMOFR_DMOFR                 DMAC0_DMOFR_DMOFR
#define DMAC3_DMOFR_DMOFR_MASK            DMAC0_DMOFR_DMOFR_MASK
#define DMAC3_DMCNT_OFFSET                DMAC0_DMCNT_OFFSET
#define DMAC3_DMCNT                       DMAC0_DMCNT
#define DMAC3_DMCNT_DTE                   DMAC0_DMCNT_DTE
#define DMAC3_DMREQ_OFFSET                DMAC0_DMREQ_OFFSET
#define DMAC3_DMREQ                       DMAC0_DMREQ
#define DMAC3_DMREQ_CLRS                  DMAC0_DMREQ_CLRS
#define DMAC3_DMREQ_SWREQ                 DMAC0_DMREQ_SWREQ
#define DMAC3_DMSTS_OFFSET                DMAC0_DMSTS_OFFSET
#define DMAC3_DMSTS                       DMAC0_DMSTS
#define DMAC3_DMSTS_ACT                   DMAC0_DMSTS_ACT
#define DMAC3_DMSTS_DTIF                  DMAC0_DMSTS_DTIF
#define DMAC3_DMSTS_ESIF                  DMAC0_DMSTS_ESIF

/* DMA - DMAC Module Activation */
#define DMA_BASE                          0x40005200
#define DMA_DMAST_OFFSET                  0x0000
#define DMA_DMAST                         (DMA_BASE + DMA_DMAST_OFFSET)
#define DMA_DMAST_DMST                    (1 <<  0) /* 01: DMAC Operation Enable */

/* DOC - Data Operation Circuit */
#define DOC_BASE                          0x40054100
#define DOC_DOCR_OFFSET                   0x0000
#define DOC_DOCR                          (DOC_BASE + DOC_DOCR_OFFSET)
#define DOC_DOCR_DOPCFCL                  (1 <<  6) /* 40: DOPCF Clear */
#define DOC_DOCR_DOPCF                    (1 <<  5) /* 20: Data Operation Circuit Flag Indicates the result of an operation. */
#define DOC_DOCR_DCSEL                    (1 <<  2) /* 04: Detection Condition Select */
#define DOC_DOCR_OMS                      (2 <<  0) /* 01: Operating Mode Select */
#define DOC_DOCR_OMS_MASK                      (0x03)
#define DOC_DODIR_OFFSET                  0x0002
#define DOC_DODIR                         (DOC_BASE + DOC_DODIR_OFFSET)
#define DOC_DODIR_DODIR                   (16 <<  0) /* 01: 16-bit read-write register in which 16-bit data for use in the operations are stored. */
#define DOC_DODIR_DODIR_MASK                   (0xffff)
#define DOC_DODSR_OFFSET                  0x0004
#define DOC_DODSR                         (DOC_BASE + DOC_DODSR_OFFSET)
#define DOC_DODSR_DODSR                   (16 <<  0) /* 01: This register stores 16-bit data for use as a reference in data comparison mode. This register also stores the results of operations in data addition and data subtraction modes. */
#define DOC_DODSR_DODSR_MASK                   (0xffff)

/* DTC - Data Transfer Controller */
#define DTC_BASE                          0x40005400
#define DTC_DTCCR_OFFSET                  0x0000
#define DTC_DTCCR                         (DTC_BASE + DTC_DTCCR_OFFSET)
#define DTC_DTCCR_RRS                     (1 <<  4) /* 10: DTC Transfer Information Read Skip Enable. */
#define DTC_DTCVBR_OFFSET                 0x0004
#define DTC_DTCVBR                        (DTC_BASE + DTC_DTCVBR_OFFSET)
#define DTC_DTCVBR_DTCVBR                 (32 <<  0) /* 01: DTC Vector Base Address. Note: A value cannot be set in the lower-order 10 bits. These bits are fixed to 0. */
#define DTC_DTCVBR_DTCVBR_MASK                 (0xffffffff)
#define DTC_DTCST_OFFSET                  0x000c
#define DTC_DTCST                         (DTC_BASE + DTC_DTCST_OFFSET)
#define DTC_DTCST_DTCST                   (1 <<  0) /* 01: DTC Module Start */
#define DTC_DTCSTS_OFFSET                 0x000e
#define DTC_DTCSTS                        (DTC_BASE + DTC_DTCSTS_OFFSET)
#define DTC_DTCSTS_ACT                    (1 << 15) /* 8000: DTC Active Flag */
#define DTC_DTCSTS_VECN                   (8 <<  0) /* 01: DTC-Activating Vector Number Monitoring These bits indicate the vector number for the activating source when DTC transfer is in progress. The value is only valid if DTC transfer is in progress (the value of the ACT flag is 1) */
#define DTC_DTCSTS_VECN_MASK                   (0xff)

/* ELC - Event Link Controller */
#define ELC_BASE                          0x40041000
#define ELC_ELCR_OFFSET                   0x0000
#define ELC_ELCR                          (ELC_BASE + ELC_ELCR_OFFSET)
#define ELC_ELCR_ELCON                    (1 <<  7) /* 80: All Event Link Enable */
#define ELC_ELSEGR_SIZE                   2
#define ELC_ELSEGR_OFFSET                 0x0002
#define ELC_ELSEGR(p)                     (ELC_BASE + ELC_ELSEGR_OFFSET + (p)*0x0002)
#define ELC_ELSEGR_WI                     (1 <<  7) /* 80: ELSEGR Register Write Disable */
#define ELC_ELSEGR_WE                     (1 <<  6) /* 40: SEG Bit Write Enable */
#define ELC_ELSEGR_SEG                    (1 <<  0) /* 01: Software Event Generation */
#define ELC_ELSR_SIZE                     10
#define ELC_ELSR_OFFSET                   0x0010
#define ELC_ELSR(p)                       (ELC_BASE + ELC_ELSR_OFFSET + (p)*0x0004)
#define ELC_ELSR_ELS                      (8 <<  0) /* 01: Event Link Select */
#define ELC_ELSR_ELS_MASK                      (0xff)
#define ELC_ELSR12_OFFSET                 0x0040
#define ELC_ELSR12                        (ELC_BASE + ELC_ELSR12_OFFSET)
#define ELC_ELSR12_ELS                    (8 <<  0) /* 01: Event Link Select */
#define ELC_ELSR12_ELS_MASK                    (0xff)
#define ELC_ELSR_SIZE                     5
#define ELC_ELSR_OFFSET                   0x0048
#define ELC_ELSR(p)                       (ELC_BASE + ELC_ELSR_OFFSET + (p)*0x0004)
#define ELC_ELSR_ELS                      (8 <<  0) /* 01: Event Link Select */
#define ELC_ELSR_ELS_MASK                      (0xff)

/* FCACHE - Flash Cache */
#define FCACHE_BASE                       0x4001c000
#define FCACHE_FCACHEE_OFFSET             0x0100
#define FCACHE_FCACHEE                    (FCACHE_BASE + FCACHE_FCACHEE_OFFSET)
#define FCACHE_FCACHEE_FCACHEEN           (1 <<  0) /* 01: FCACHE Enable */
#define FCACHE_FCACHEIV_OFFSET            0x0104
#define FCACHE_FCACHEIV                   (FCACHE_BASE + FCACHE_FCACHEIV_OFFSET)
#define FCACHE_FCACHEIV_FCACHEIV          (1 <<  0) /* 01: FCACHE Invalidation */
#define FCACHE_FLWT_OFFSET                0x011c
#define FCACHE_FLWT                       (FCACHE_BASE + FCACHE_FLWT_OFFSET)
#define FCACHE_FLWT_FLWT                  (3 <<  0) /* 01: These bits represent the ratio of the CPU clock period to the Flash memory access time. */
#define FCACHE_FLWT_FLWT_MASK                  (0x07)

/* PORT0 - Port 0 Control Registers */
#define PORT0_BASE                        0x40040000
#define PORT0_PCNTR1_OFFSET               0x0000
#define PORT0_PCNTR1                      (PORT0_BASE + PORT0_PCNTR1_OFFSET)
#define PORT0_PCNTR1_PODR                 (16 << 16) /* 10000: Pmn Output Data */
#define PORT0_PCNTR1_PODR_MASK                 (0xffff)
#define PORT0_PCNTR1_PDR                  (16 <<  0) /* 01: Pmn Direction */
#define PORT0_PCNTR1_PDR_MASK                  (0xffff)
#define PORT0_PODR_OFFSET                 0x0000
#define PORT0_PODR                        (PORT0_BASE + PORT0_PODR_OFFSET)
#define PORT0_PODR_PODR                   (16 <<  0) /* 01: Pmn Output Data */
#define PORT0_PODR_PODR_MASK                   (0xffff)
#define PORT0_PDR_OFFSET                  0x0002
#define PORT0_PDR                         (PORT0_BASE + PORT0_PDR_OFFSET)
#define PORT0_PDR_PDR                     (16 <<  0) /* 01: Pmn Direction */
#define PORT0_PDR_PDR_MASK                     (0xffff)
#define PORT0_PCNTR2_OFFSET               0x0004
#define PORT0_PCNTR2                      (PORT0_BASE + PORT0_PCNTR2_OFFSET)
#define PORT0_PCNTR2_PIDR                 (16 <<  0) /* 01: Pmn Input Data */
#define PORT0_PCNTR2_PIDR_MASK                 (0xffff)
#define PORT0_PIDR_OFFSET                 0x0006
#define PORT0_PIDR                        (PORT0_BASE + PORT0_PIDR_OFFSET)
#define PORT0_PIDR_PIDR                   (16 <<  0) /* 01: Pmn Input Data */
#define PORT0_PIDR_PIDR_MASK                   (0xffff)
#define PORT0_PCNTR3_OFFSET               0x0008
#define PORT0_PCNTR3                      (PORT0_BASE + PORT0_PCNTR3_OFFSET)
#define PORT0_PCNTR3_PORR                 (16 << 16) /* 10000: Pmn Output Reset */
#define PORT0_PCNTR3_PORR_MASK                 (0xffff)
#define PORT0_PCNTR3_POSR                 (16 <<  0) /* 01: Pmn Output Set */
#define PORT0_PCNTR3_POSR_MASK                 (0xffff)
#define PORT0_PORR_OFFSET                 0x0008
#define PORT0_PORR                        (PORT0_BASE + PORT0_PORR_OFFSET)
#define PORT0_PORR_PORR                   (16 <<  0) /* 01: Pmn Output Reset */
#define PORT0_PORR_PORR_MASK                   (0xffff)
#define PORT0_POSR_OFFSET                 0x000a
#define PORT0_POSR                        (PORT0_BASE + PORT0_POSR_OFFSET)
#define PORT0_POSR_POSR                   (16 <<  0) /* 01: Pmn Output Set */
#define PORT0_POSR_POSR_MASK                   (0xffff)

/* PORT1 - Port 1 Control Registers */
#define PORT1_BASE                        0x40040020
#define PORT1_PCNTR1_OFFSET               0x0000
#define PORT1_PCNTR1                      (PORT1_BASE + PORT1_PCNTR1_OFFSET)
#define PORT1_PCNTR1_PODR                 (16 << 16) /* 10000: Pmn Output Data */
#define PORT1_PCNTR1_PODR_MASK                 (0xffff)
#define PORT1_PCNTR1_PDR                  (16 <<  0) /* 01: Pmn Direction */
#define PORT1_PCNTR1_PDR_MASK                  (0xffff)
#define PORT1_PODR_OFFSET                 0x0000
#define PORT1_PODR                        (PORT1_BASE + PORT1_PODR_OFFSET)
#define PORT1_PODR_PODR                   (16 <<  0) /* 01: Pmn Output Data */
#define PORT1_PODR_PODR_MASK                   (0xffff)
#define PORT1_PDR_OFFSET                  0x0002
#define PORT1_PDR                         (PORT1_BASE + PORT1_PDR_OFFSET)
#define PORT1_PDR_PDR                     (16 <<  0) /* 01: Pmn Direction */
#define PORT1_PDR_PDR_MASK                     (0xffff)
#define PORT1_PCNTR2_OFFSET               0x0004
#define PORT1_PCNTR2                      (PORT1_BASE + PORT1_PCNTR2_OFFSET)
#define PORT1_PCNTR2_EIDR                 (16 << 16) /* 10000: Pmn Event Input Data */
#define PORT1_PCNTR2_EIDR_MASK                 (0xffff)
#define PORT1_PCNTR2_PIDR                 (16 <<  0) /* 01: Pmn Input Data */
#define PORT1_PCNTR2_PIDR_MASK                 (0xffff)
#define PORT1_EIDR_OFFSET                 0x0004
#define PORT1_EIDR                        (PORT1_BASE + PORT1_EIDR_OFFSET)
#define PORT1_EIDR_EIDR                   (16 <<  0) /* 01: Pmn Event Input Data */
#define PORT1_EIDR_EIDR_MASK                   (0xffff)
#define PORT1_PIDR_OFFSET                 0x0006
#define PORT1_PIDR                        (PORT1_BASE + PORT1_PIDR_OFFSET)
#define PORT1_PIDR_PIDR                   (16 <<  0) /* 01: Pmn Input Data */
#define PORT1_PIDR_PIDR_MASK                   (0xffff)
#define PORT1_PCNTR3_OFFSET               0x0008
#define PORT1_PCNTR3                      (PORT1_BASE + PORT1_PCNTR3_OFFSET)
#define PORT1_PCNTR3_PORR                 (16 << 16) /* 10000: Pmn Output Reset */
#define PORT1_PCNTR3_PORR_MASK                 (0xffff)
#define PORT1_PCNTR3_POSR                 (16 <<  0) /* 01: Pmn Output Set */
#define PORT1_PCNTR3_POSR_MASK                 (0xffff)
#define PORT1_PORR_OFFSET                 0x0008
#define PORT1_PORR                        (PORT1_BASE + PORT1_PORR_OFFSET)
#define PORT1_PORR_PORR                   (16 <<  0) /* 01: Pmn Output Reset */
#define PORT1_PORR_PORR_MASK                   (0xffff)
#define PORT1_POSR_OFFSET                 0x000a
#define PORT1_POSR                        (PORT1_BASE + PORT1_POSR_OFFSET)
#define PORT1_POSR_POSR                   (16 <<  0) /* 01: Pmn Output Set */
#define PORT1_POSR_POSR_MASK                   (0xffff)
#define PORT1_PCNTR4_OFFSET               0x000c
#define PORT1_PCNTR4                      (PORT1_BASE + PORT1_PCNTR4_OFFSET)
#define PORT1_PCNTR4_EORR                 (16 << 16) /* 10000: Pmn Event Output Reset */
#define PORT1_PCNTR4_EORR_MASK                 (0xffff)
#define PORT1_PCNTR4_EOSR                 (16 <<  0) /* 01: Pmn Event Output Set */
#define PORT1_PCNTR4_EOSR_MASK                 (0xffff)
#define PORT1_EORR_OFFSET                 0x000c
#define PORT1_EORR                        (PORT1_BASE + PORT1_EORR_OFFSET)
#define PORT1_EORR_EORR                   (16 <<  0) /* 01: Pmn Event Output Reset */
#define PORT1_EORR_EORR_MASK                   (0xffff)
#define PORT1_EOSR_OFFSET                 0x000e
#define PORT1_EOSR                        (PORT1_BASE + PORT1_EOSR_OFFSET)
#define PORT1_EOSR_EOSR                   (16 <<  0) /* 01: Pmn Event Output Set */
#define PORT1_EOSR_EOSR_MASK                   (0xffff)

/* No registers defined for peripheral PORT2. Using those of PORT1. */
#define PORT2_BASE                        0x40040040
#define PORT2_PCNTR1_OFFSET               PORT1_PCNTR1_OFFSET
#define PORT2_PCNTR1                      PORT1_PCNTR1
#define PORT2_PCNTR1_PODR                 PORT1_PCNTR1_PODR
#define PORT2_PCNTR1_PODR_MASK            PORT1_PCNTR1_PODR_MASK
#define PORT2_PCNTR1_PDR                  PORT1_PCNTR1_PDR
#define PORT2_PCNTR1_PDR_MASK             PORT1_PCNTR1_PDR_MASK
#define PORT2_PODR_OFFSET                 PORT1_PODR_OFFSET
#define PORT2_PODR                        PORT1_PODR
#define PORT2_PODR_PODR                   PORT1_PODR_PODR
#define PORT2_PODR_PODR_MASK              PORT1_PODR_PODR_MASK
#define PORT2_PDR_OFFSET                  PORT1_PDR_OFFSET
#define PORT2_PDR                         PORT1_PDR
#define PORT2_PDR_PDR                     PORT1_PDR_PDR
#define PORT2_PDR_PDR_MASK                PORT1_PDR_PDR_MASK
#define PORT2_PCNTR2_OFFSET               PORT1_PCNTR2_OFFSET
#define PORT2_PCNTR2                      PORT1_PCNTR2
#define PORT2_PCNTR2_EIDR                 PORT1_PCNTR2_EIDR
#define PORT2_PCNTR2_EIDR_MASK            PORT1_PCNTR2_EIDR_MASK
#define PORT2_PCNTR2_PIDR                 PORT1_PCNTR2_PIDR
#define PORT2_PCNTR2_PIDR_MASK            PORT1_PCNTR2_PIDR_MASK
#define PORT2_EIDR_OFFSET                 PORT1_EIDR_OFFSET
#define PORT2_EIDR                        PORT1_EIDR
#define PORT2_EIDR_EIDR                   PORT1_EIDR_EIDR
#define PORT2_EIDR_EIDR_MASK              PORT1_EIDR_EIDR_MASK
#define PORT2_PIDR_OFFSET                 PORT1_PIDR_OFFSET
#define PORT2_PIDR                        PORT1_PIDR
#define PORT2_PIDR_PIDR                   PORT1_PIDR_PIDR
#define PORT2_PIDR_PIDR_MASK              PORT1_PIDR_PIDR_MASK
#define PORT2_PCNTR3_OFFSET               PORT1_PCNTR3_OFFSET
#define PORT2_PCNTR3                      PORT1_PCNTR3
#define PORT2_PCNTR3_PORR                 PORT1_PCNTR3_PORR
#define PORT2_PCNTR3_PORR_MASK            PORT1_PCNTR3_PORR_MASK
#define PORT2_PCNTR3_POSR                 PORT1_PCNTR3_POSR
#define PORT2_PCNTR3_POSR_MASK            PORT1_PCNTR3_POSR_MASK
#define PORT2_PORR_OFFSET                 PORT1_PORR_OFFSET
#define PORT2_PORR                        PORT1_PORR
#define PORT2_PORR_PORR                   PORT1_PORR_PORR
#define PORT2_PORR_PORR_MASK              PORT1_PORR_PORR_MASK
#define PORT2_POSR_OFFSET                 PORT1_POSR_OFFSET
#define PORT2_POSR                        PORT1_POSR
#define PORT2_POSR_POSR                   PORT1_POSR_POSR
#define PORT2_POSR_POSR_MASK              PORT1_POSR_POSR_MASK
#define PORT2_PCNTR4_OFFSET               PORT1_PCNTR4_OFFSET
#define PORT2_PCNTR4                      PORT1_PCNTR4
#define PORT2_PCNTR4_EORR                 PORT1_PCNTR4_EORR
#define PORT2_PCNTR4_EORR_MASK            PORT1_PCNTR4_EORR_MASK
#define PORT2_PCNTR4_EOSR                 PORT1_PCNTR4_EOSR
#define PORT2_PCNTR4_EOSR_MASK            PORT1_PCNTR4_EOSR_MASK
#define PORT2_EORR_OFFSET                 PORT1_EORR_OFFSET
#define PORT2_EORR                        PORT1_EORR
#define PORT2_EORR_EORR                   PORT1_EORR_EORR
#define PORT2_EORR_EORR_MASK              PORT1_EORR_EORR_MASK
#define PORT2_EOSR_OFFSET                 PORT1_EOSR_OFFSET
#define PORT2_EOSR                        PORT1_EOSR
#define PORT2_EOSR_EOSR                   PORT1_EOSR_EOSR
#define PORT2_EOSR_EOSR_MASK              PORT1_EOSR_EOSR_MASK

/* No registers defined for peripheral PORT3. Using those of PORT1. */
#define PORT3_BASE                        0x40040060
#define PORT3_PCNTR1_OFFSET               PORT1_PCNTR1_OFFSET
#define PORT3_PCNTR1                      PORT1_PCNTR1
#define PORT3_PCNTR1_PODR                 PORT1_PCNTR1_PODR
#define PORT3_PCNTR1_PODR_MASK            PORT1_PCNTR1_PODR_MASK
#define PORT3_PCNTR1_PDR                  PORT1_PCNTR1_PDR
#define PORT3_PCNTR1_PDR_MASK             PORT1_PCNTR1_PDR_MASK
#define PORT3_PODR_OFFSET                 PORT1_PODR_OFFSET
#define PORT3_PODR                        PORT1_PODR
#define PORT3_PODR_PODR                   PORT1_PODR_PODR
#define PORT3_PODR_PODR_MASK              PORT1_PODR_PODR_MASK
#define PORT3_PDR_OFFSET                  PORT1_PDR_OFFSET
#define PORT3_PDR                         PORT1_PDR
#define PORT3_PDR_PDR                     PORT1_PDR_PDR
#define PORT3_PDR_PDR_MASK                PORT1_PDR_PDR_MASK
#define PORT3_PCNTR2_OFFSET               PORT1_PCNTR2_OFFSET
#define PORT3_PCNTR2                      PORT1_PCNTR2
#define PORT3_PCNTR2_EIDR                 PORT1_PCNTR2_EIDR
#define PORT3_PCNTR2_EIDR_MASK            PORT1_PCNTR2_EIDR_MASK
#define PORT3_PCNTR2_PIDR                 PORT1_PCNTR2_PIDR
#define PORT3_PCNTR2_PIDR_MASK            PORT1_PCNTR2_PIDR_MASK
#define PORT3_EIDR_OFFSET                 PORT1_EIDR_OFFSET
#define PORT3_EIDR                        PORT1_EIDR
#define PORT3_EIDR_EIDR                   PORT1_EIDR_EIDR
#define PORT3_EIDR_EIDR_MASK              PORT1_EIDR_EIDR_MASK
#define PORT3_PIDR_OFFSET                 PORT1_PIDR_OFFSET
#define PORT3_PIDR                        PORT1_PIDR
#define PORT3_PIDR_PIDR                   PORT1_PIDR_PIDR
#define PORT3_PIDR_PIDR_MASK              PORT1_PIDR_PIDR_MASK
#define PORT3_PCNTR3_OFFSET               PORT1_PCNTR3_OFFSET
#define PORT3_PCNTR3                      PORT1_PCNTR3
#define PORT3_PCNTR3_PORR                 PORT1_PCNTR3_PORR
#define PORT3_PCNTR3_PORR_MASK            PORT1_PCNTR3_PORR_MASK
#define PORT3_PCNTR3_POSR                 PORT1_PCNTR3_POSR
#define PORT3_PCNTR3_POSR_MASK            PORT1_PCNTR3_POSR_MASK
#define PORT3_PORR_OFFSET                 PORT1_PORR_OFFSET
#define PORT3_PORR                        PORT1_PORR
#define PORT3_PORR_PORR                   PORT1_PORR_PORR
#define PORT3_PORR_PORR_MASK              PORT1_PORR_PORR_MASK
#define PORT3_POSR_OFFSET                 PORT1_POSR_OFFSET
#define PORT3_POSR                        PORT1_POSR
#define PORT3_POSR_POSR                   PORT1_POSR_POSR
#define PORT3_POSR_POSR_MASK              PORT1_POSR_POSR_MASK
#define PORT3_PCNTR4_OFFSET               PORT1_PCNTR4_OFFSET
#define PORT3_PCNTR4                      PORT1_PCNTR4
#define PORT3_PCNTR4_EORR                 PORT1_PCNTR4_EORR
#define PORT3_PCNTR4_EORR_MASK            PORT1_PCNTR4_EORR_MASK
#define PORT3_PCNTR4_EOSR                 PORT1_PCNTR4_EOSR
#define PORT3_PCNTR4_EOSR_MASK            PORT1_PCNTR4_EOSR_MASK
#define PORT3_EORR_OFFSET                 PORT1_EORR_OFFSET
#define PORT3_EORR                        PORT1_EORR
#define PORT3_EORR_EORR                   PORT1_EORR_EORR
#define PORT3_EORR_EORR_MASK              PORT1_EORR_EORR_MASK
#define PORT3_EOSR_OFFSET                 PORT1_EOSR_OFFSET
#define PORT3_EOSR                        PORT1_EOSR
#define PORT3_EOSR_EOSR                   PORT1_EOSR_EOSR
#define PORT3_EOSR_EOSR_MASK              PORT1_EOSR_EOSR_MASK

/* No registers defined for peripheral PORT4. Using those of PORT1. */
#define PORT4_BASE                        0x40040080
#define PORT4_PCNTR1_OFFSET               PORT1_PCNTR1_OFFSET
#define PORT4_PCNTR1                      PORT1_PCNTR1
#define PORT4_PCNTR1_PODR                 PORT1_PCNTR1_PODR
#define PORT4_PCNTR1_PODR_MASK            PORT1_PCNTR1_PODR_MASK
#define PORT4_PCNTR1_PDR                  PORT1_PCNTR1_PDR
#define PORT4_PCNTR1_PDR_MASK             PORT1_PCNTR1_PDR_MASK
#define PORT4_PODR_OFFSET                 PORT1_PODR_OFFSET
#define PORT4_PODR                        PORT1_PODR
#define PORT4_PODR_PODR                   PORT1_PODR_PODR
#define PORT4_PODR_PODR_MASK              PORT1_PODR_PODR_MASK
#define PORT4_PDR_OFFSET                  PORT1_PDR_OFFSET
#define PORT4_PDR                         PORT1_PDR
#define PORT4_PDR_PDR                     PORT1_PDR_PDR
#define PORT4_PDR_PDR_MASK                PORT1_PDR_PDR_MASK
#define PORT4_PCNTR2_OFFSET               PORT1_PCNTR2_OFFSET
#define PORT4_PCNTR2                      PORT1_PCNTR2
#define PORT4_PCNTR2_EIDR                 PORT1_PCNTR2_EIDR
#define PORT4_PCNTR2_EIDR_MASK            PORT1_PCNTR2_EIDR_MASK
#define PORT4_PCNTR2_PIDR                 PORT1_PCNTR2_PIDR
#define PORT4_PCNTR2_PIDR_MASK            PORT1_PCNTR2_PIDR_MASK
#define PORT4_EIDR_OFFSET                 PORT1_EIDR_OFFSET
#define PORT4_EIDR                        PORT1_EIDR
#define PORT4_EIDR_EIDR                   PORT1_EIDR_EIDR
#define PORT4_EIDR_EIDR_MASK              PORT1_EIDR_EIDR_MASK
#define PORT4_PIDR_OFFSET                 PORT1_PIDR_OFFSET
#define PORT4_PIDR                        PORT1_PIDR
#define PORT4_PIDR_PIDR                   PORT1_PIDR_PIDR
#define PORT4_PIDR_PIDR_MASK              PORT1_PIDR_PIDR_MASK
#define PORT4_PCNTR3_OFFSET               PORT1_PCNTR3_OFFSET
#define PORT4_PCNTR3                      PORT1_PCNTR3
#define PORT4_PCNTR3_PORR                 PORT1_PCNTR3_PORR
#define PORT4_PCNTR3_PORR_MASK            PORT1_PCNTR3_PORR_MASK
#define PORT4_PCNTR3_POSR                 PORT1_PCNTR3_POSR
#define PORT4_PCNTR3_POSR_MASK            PORT1_PCNTR3_POSR_MASK
#define PORT4_PORR_OFFSET                 PORT1_PORR_OFFSET
#define PORT4_PORR                        PORT1_PORR
#define PORT4_PORR_PORR                   PORT1_PORR_PORR
#define PORT4_PORR_PORR_MASK              PORT1_PORR_PORR_MASK
#define PORT4_POSR_OFFSET                 PORT1_POSR_OFFSET
#define PORT4_POSR                        PORT1_POSR
#define PORT4_POSR_POSR                   PORT1_POSR_POSR
#define PORT4_POSR_POSR_MASK              PORT1_POSR_POSR_MASK
#define PORT4_PCNTR4_OFFSET               PORT1_PCNTR4_OFFSET
#define PORT4_PCNTR4                      PORT1_PCNTR4
#define PORT4_PCNTR4_EORR                 PORT1_PCNTR4_EORR
#define PORT4_PCNTR4_EORR_MASK            PORT1_PCNTR4_EORR_MASK
#define PORT4_PCNTR4_EOSR                 PORT1_PCNTR4_EOSR
#define PORT4_PCNTR4_EOSR_MASK            PORT1_PCNTR4_EOSR_MASK
#define PORT4_EORR_OFFSET                 PORT1_EORR_OFFSET
#define PORT4_EORR                        PORT1_EORR
#define PORT4_EORR_EORR                   PORT1_EORR_EORR
#define PORT4_EORR_EORR_MASK              PORT1_EORR_EORR_MASK
#define PORT4_EOSR_OFFSET                 PORT1_EOSR_OFFSET
#define PORT4_EOSR                        PORT1_EOSR
#define PORT4_EOSR_EOSR                   PORT1_EOSR_EOSR
#define PORT4_EOSR_EOSR_MASK              PORT1_EOSR_EOSR_MASK

/* No registers defined for peripheral PORT5. Using those of PORT0. */
#define PORT5_BASE                        0x400400a0
#define PORT5_PCNTR1_OFFSET               PORT0_PCNTR1_OFFSET
#define PORT5_PCNTR1                      PORT0_PCNTR1
#define PORT5_PCNTR1_PODR                 PORT0_PCNTR1_PODR
#define PORT5_PCNTR1_PODR_MASK            PORT0_PCNTR1_PODR_MASK
#define PORT5_PCNTR1_PDR                  PORT0_PCNTR1_PDR
#define PORT5_PCNTR1_PDR_MASK             PORT0_PCNTR1_PDR_MASK
#define PORT5_PODR_OFFSET                 PORT0_PODR_OFFSET
#define PORT5_PODR                        PORT0_PODR
#define PORT5_PODR_PODR                   PORT0_PODR_PODR
#define PORT5_PODR_PODR_MASK              PORT0_PODR_PODR_MASK
#define PORT5_PDR_OFFSET                  PORT0_PDR_OFFSET
#define PORT5_PDR                         PORT0_PDR
#define PORT5_PDR_PDR                     PORT0_PDR_PDR
#define PORT5_PDR_PDR_MASK                PORT0_PDR_PDR_MASK
#define PORT5_PCNTR2_OFFSET               PORT0_PCNTR2_OFFSET
#define PORT5_PCNTR2                      PORT0_PCNTR2
#define PORT5_PCNTR2_PIDR                 PORT0_PCNTR2_PIDR
#define PORT5_PCNTR2_PIDR_MASK            PORT0_PCNTR2_PIDR_MASK
#define PORT5_PIDR_OFFSET                 PORT0_PIDR_OFFSET
#define PORT5_PIDR                        PORT0_PIDR
#define PORT5_PIDR_PIDR                   PORT0_PIDR_PIDR
#define PORT5_PIDR_PIDR_MASK              PORT0_PIDR_PIDR_MASK
#define PORT5_PCNTR3_OFFSET               PORT0_PCNTR3_OFFSET
#define PORT5_PCNTR3                      PORT0_PCNTR3
#define PORT5_PCNTR3_PORR                 PORT0_PCNTR3_PORR
#define PORT5_PCNTR3_PORR_MASK            PORT0_PCNTR3_PORR_MASK
#define PORT5_PCNTR3_POSR                 PORT0_PCNTR3_POSR
#define PORT5_PCNTR3_POSR_MASK            PORT0_PCNTR3_POSR_MASK
#define PORT5_PORR_OFFSET                 PORT0_PORR_OFFSET
#define PORT5_PORR                        PORT0_PORR
#define PORT5_PORR_PORR                   PORT0_PORR_PORR
#define PORT5_PORR_PORR_MASK              PORT0_PORR_PORR_MASK
#define PORT5_POSR_OFFSET                 PORT0_POSR_OFFSET
#define PORT5_POSR                        PORT0_POSR
#define PORT5_POSR_POSR                   PORT0_POSR_POSR
#define PORT5_POSR_POSR_MASK              PORT0_POSR_POSR_MASK

/* No registers defined for peripheral PORT6. Using those of PORT0. */
#define PORT6_BASE                        0x400400c0
#define PORT6_PCNTR1_OFFSET               PORT0_PCNTR1_OFFSET
#define PORT6_PCNTR1                      PORT0_PCNTR1
#define PORT6_PCNTR1_PODR                 PORT0_PCNTR1_PODR
#define PORT6_PCNTR1_PODR_MASK            PORT0_PCNTR1_PODR_MASK
#define PORT6_PCNTR1_PDR                  PORT0_PCNTR1_PDR
#define PORT6_PCNTR1_PDR_MASK             PORT0_PCNTR1_PDR_MASK
#define PORT6_PODR_OFFSET                 PORT0_PODR_OFFSET
#define PORT6_PODR                        PORT0_PODR
#define PORT6_PODR_PODR                   PORT0_PODR_PODR
#define PORT6_PODR_PODR_MASK              PORT0_PODR_PODR_MASK
#define PORT6_PDR_OFFSET                  PORT0_PDR_OFFSET
#define PORT6_PDR                         PORT0_PDR
#define PORT6_PDR_PDR                     PORT0_PDR_PDR
#define PORT6_PDR_PDR_MASK                PORT0_PDR_PDR_MASK
#define PORT6_PCNTR2_OFFSET               PORT0_PCNTR2_OFFSET
#define PORT6_PCNTR2                      PORT0_PCNTR2
#define PORT6_PCNTR2_PIDR                 PORT0_PCNTR2_PIDR
#define PORT6_PCNTR2_PIDR_MASK            PORT0_PCNTR2_PIDR_MASK
#define PORT6_PIDR_OFFSET                 PORT0_PIDR_OFFSET
#define PORT6_PIDR                        PORT0_PIDR
#define PORT6_PIDR_PIDR                   PORT0_PIDR_PIDR
#define PORT6_PIDR_PIDR_MASK              PORT0_PIDR_PIDR_MASK
#define PORT6_PCNTR3_OFFSET               PORT0_PCNTR3_OFFSET
#define PORT6_PCNTR3                      PORT0_PCNTR3
#define PORT6_PCNTR3_PORR                 PORT0_PCNTR3_PORR
#define PORT6_PCNTR3_PORR_MASK            PORT0_PCNTR3_PORR_MASK
#define PORT6_PCNTR3_POSR                 PORT0_PCNTR3_POSR
#define PORT6_PCNTR3_POSR_MASK            PORT0_PCNTR3_POSR_MASK
#define PORT6_PORR_OFFSET                 PORT0_PORR_OFFSET
#define PORT6_PORR                        PORT0_PORR
#define PORT6_PORR_PORR                   PORT0_PORR_PORR
#define PORT6_PORR_PORR_MASK              PORT0_PORR_PORR_MASK
#define PORT6_POSR_OFFSET                 PORT0_POSR_OFFSET
#define PORT6_POSR                        PORT0_POSR
#define PORT6_POSR_POSR                   PORT0_POSR_POSR
#define PORT6_POSR_POSR_MASK              PORT0_POSR_POSR_MASK

/* No registers defined for peripheral PORT7. Using those of PORT0. */
#define PORT7_BASE                        0x400400e0
#define PORT7_PCNTR1_OFFSET               PORT0_PCNTR1_OFFSET
#define PORT7_PCNTR1                      PORT0_PCNTR1
#define PORT7_PCNTR1_PODR                 PORT0_PCNTR1_PODR
#define PORT7_PCNTR1_PODR_MASK            PORT0_PCNTR1_PODR_MASK
#define PORT7_PCNTR1_PDR                  PORT0_PCNTR1_PDR
#define PORT7_PCNTR1_PDR_MASK             PORT0_PCNTR1_PDR_MASK
#define PORT7_PODR_OFFSET                 PORT0_PODR_OFFSET
#define PORT7_PODR                        PORT0_PODR
#define PORT7_PODR_PODR                   PORT0_PODR_PODR
#define PORT7_PODR_PODR_MASK              PORT0_PODR_PODR_MASK
#define PORT7_PDR_OFFSET                  PORT0_PDR_OFFSET
#define PORT7_PDR                         PORT0_PDR
#define PORT7_PDR_PDR                     PORT0_PDR_PDR
#define PORT7_PDR_PDR_MASK                PORT0_PDR_PDR_MASK
#define PORT7_PCNTR2_OFFSET               PORT0_PCNTR2_OFFSET
#define PORT7_PCNTR2                      PORT0_PCNTR2
#define PORT7_PCNTR2_PIDR                 PORT0_PCNTR2_PIDR
#define PORT7_PCNTR2_PIDR_MASK            PORT0_PCNTR2_PIDR_MASK
#define PORT7_PIDR_OFFSET                 PORT0_PIDR_OFFSET
#define PORT7_PIDR                        PORT0_PIDR
#define PORT7_PIDR_PIDR                   PORT0_PIDR_PIDR
#define PORT7_PIDR_PIDR_MASK              PORT0_PIDR_PIDR_MASK
#define PORT7_PCNTR3_OFFSET               PORT0_PCNTR3_OFFSET
#define PORT7_PCNTR3                      PORT0_PCNTR3
#define PORT7_PCNTR3_PORR                 PORT0_PCNTR3_PORR
#define PORT7_PCNTR3_PORR_MASK            PORT0_PCNTR3_PORR_MASK
#define PORT7_PCNTR3_POSR                 PORT0_PCNTR3_POSR
#define PORT7_PCNTR3_POSR_MASK            PORT0_PCNTR3_POSR_MASK
#define PORT7_PORR_OFFSET                 PORT0_PORR_OFFSET
#define PORT7_PORR                        PORT0_PORR
#define PORT7_PORR_PORR                   PORT0_PORR_PORR
#define PORT7_PORR_PORR_MASK              PORT0_PORR_PORR_MASK
#define PORT7_POSR_OFFSET                 PORT0_POSR_OFFSET
#define PORT7_POSR                        PORT0_POSR
#define PORT7_POSR_POSR                   PORT0_POSR_POSR
#define PORT7_POSR_POSR_MASK              PORT0_POSR_POSR_MASK

/* No registers defined for peripheral PORT8. Using those of PORT0. */
#define PORT8_BASE                        0x40040100
#define PORT8_PCNTR1_OFFSET               PORT0_PCNTR1_OFFSET
#define PORT8_PCNTR1                      PORT0_PCNTR1
#define PORT8_PCNTR1_PODR                 PORT0_PCNTR1_PODR
#define PORT8_PCNTR1_PODR_MASK            PORT0_PCNTR1_PODR_MASK
#define PORT8_PCNTR1_PDR                  PORT0_PCNTR1_PDR
#define PORT8_PCNTR1_PDR_MASK             PORT0_PCNTR1_PDR_MASK
#define PORT8_PODR_OFFSET                 PORT0_PODR_OFFSET
#define PORT8_PODR                        PORT0_PODR
#define PORT8_PODR_PODR                   PORT0_PODR_PODR
#define PORT8_PODR_PODR_MASK              PORT0_PODR_PODR_MASK
#define PORT8_PDR_OFFSET                  PORT0_PDR_OFFSET
#define PORT8_PDR                         PORT0_PDR
#define PORT8_PDR_PDR                     PORT0_PDR_PDR
#define PORT8_PDR_PDR_MASK                PORT0_PDR_PDR_MASK
#define PORT8_PCNTR2_OFFSET               PORT0_PCNTR2_OFFSET
#define PORT8_PCNTR2                      PORT0_PCNTR2
#define PORT8_PCNTR2_PIDR                 PORT0_PCNTR2_PIDR
#define PORT8_PCNTR2_PIDR_MASK            PORT0_PCNTR2_PIDR_MASK
#define PORT8_PIDR_OFFSET                 PORT0_PIDR_OFFSET
#define PORT8_PIDR                        PORT0_PIDR
#define PORT8_PIDR_PIDR                   PORT0_PIDR_PIDR
#define PORT8_PIDR_PIDR_MASK              PORT0_PIDR_PIDR_MASK
#define PORT8_PCNTR3_OFFSET               PORT0_PCNTR3_OFFSET
#define PORT8_PCNTR3                      PORT0_PCNTR3
#define PORT8_PCNTR3_PORR                 PORT0_PCNTR3_PORR
#define PORT8_PCNTR3_PORR_MASK            PORT0_PCNTR3_PORR_MASK
#define PORT8_PCNTR3_POSR                 PORT0_PCNTR3_POSR
#define PORT8_PCNTR3_POSR_MASK            PORT0_PCNTR3_POSR_MASK
#define PORT8_PORR_OFFSET                 PORT0_PORR_OFFSET
#define PORT8_PORR                        PORT0_PORR
#define PORT8_PORR_PORR                   PORT0_PORR_PORR
#define PORT8_PORR_PORR_MASK              PORT0_PORR_PORR_MASK
#define PORT8_POSR_OFFSET                 PORT0_POSR_OFFSET
#define PORT8_POSR                        PORT0_POSR
#define PORT8_POSR_POSR                   PORT0_POSR_POSR
#define PORT8_POSR_POSR_MASK              PORT0_POSR_POSR_MASK

/* No registers defined for peripheral PORT9. Using those of PORT0. */
#define PORT9_BASE                        0x40040120
#define PORT9_PCNTR1_OFFSET               PORT0_PCNTR1_OFFSET
#define PORT9_PCNTR1                      PORT0_PCNTR1
#define PORT9_PCNTR1_PODR                 PORT0_PCNTR1_PODR
#define PORT9_PCNTR1_PODR_MASK            PORT0_PCNTR1_PODR_MASK
#define PORT9_PCNTR1_PDR                  PORT0_PCNTR1_PDR
#define PORT9_PCNTR1_PDR_MASK             PORT0_PCNTR1_PDR_MASK
#define PORT9_PODR_OFFSET                 PORT0_PODR_OFFSET
#define PORT9_PODR                        PORT0_PODR
#define PORT9_PODR_PODR                   PORT0_PODR_PODR
#define PORT9_PODR_PODR_MASK              PORT0_PODR_PODR_MASK
#define PORT9_PDR_OFFSET                  PORT0_PDR_OFFSET
#define PORT9_PDR                         PORT0_PDR
#define PORT9_PDR_PDR                     PORT0_PDR_PDR
#define PORT9_PDR_PDR_MASK                PORT0_PDR_PDR_MASK
#define PORT9_PCNTR2_OFFSET               PORT0_PCNTR2_OFFSET
#define PORT9_PCNTR2                      PORT0_PCNTR2
#define PORT9_PCNTR2_PIDR                 PORT0_PCNTR2_PIDR
#define PORT9_PCNTR2_PIDR_MASK            PORT0_PCNTR2_PIDR_MASK
#define PORT9_PIDR_OFFSET                 PORT0_PIDR_OFFSET
#define PORT9_PIDR                        PORT0_PIDR
#define PORT9_PIDR_PIDR                   PORT0_PIDR_PIDR
#define PORT9_PIDR_PIDR_MASK              PORT0_PIDR_PIDR_MASK
#define PORT9_PCNTR3_OFFSET               PORT0_PCNTR3_OFFSET
#define PORT9_PCNTR3                      PORT0_PCNTR3
#define PORT9_PCNTR3_PORR                 PORT0_PCNTR3_PORR
#define PORT9_PCNTR3_PORR_MASK            PORT0_PCNTR3_PORR_MASK
#define PORT9_PCNTR3_POSR                 PORT0_PCNTR3_POSR
#define PORT9_PCNTR3_POSR_MASK            PORT0_PCNTR3_POSR_MASK
#define PORT9_PORR_OFFSET                 PORT0_PORR_OFFSET
#define PORT9_PORR                        PORT0_PORR
#define PORT9_PORR_PORR                   PORT0_PORR_PORR
#define PORT9_PORR_PORR_MASK              PORT0_PORR_PORR_MASK
#define PORT9_POSR_OFFSET                 PORT0_POSR_OFFSET
#define PORT9_POSR                        PORT0_POSR
#define PORT9_POSR_POSR                   PORT0_POSR_POSR
#define PORT9_POSR_POSR_MASK              PORT0_POSR_POSR_MASK

/* PFS - Pmn Pin Function Control Register */
#define PFS_BASE                          0x40040800
#define PFS_P000PFS_OFFSET                0x0000
#define PFS_P000PFS                       (PFS_BASE + PFS_P000PFS_OFFSET)
#define PFS_P000PFS_PSEL                  (5 << 24) /* 1000000: Port Function Select These bits select the peripheral function. For individual pin functions, see the MPC table */
#define PFS_P000PFS_PSEL_MASK                  (0x1f)
#define PFS_P000PFS_PMR                   (1 << 16) /* 10000: Port Mode Control */
#define PFS_P000PFS_ASEL                  (1 << 15) /* 8000: Analog Input enable */
#define PFS_P000PFS_ISEL                  (1 << 14) /* 4000: IRQ input enable */
#define PFS_P000PFS_DSCR                  (1 << 10) /* 400: Port Drive Capability */
#define PFS_P000PFS_NCODR                 (1 <<  6) /* 40: N-Channel Open Drain Control */
#define PFS_P000PFS_PCR                   (1 <<  4) /* 10: Pull-up Control */
#define PFS_P000PFS_PDR                   (1 <<  2) /* 04: Port Direction */
#define PFS_P000PFS_PIDR                  (1 <<  1) /* 02: Port Input Data */
#define PFS_P000PFS_PODR                  (1 <<  0) /* 01: Port Output Data */
#define PFS_P000PFS_HA_OFFSET             0x0002
#define PFS_P000PFS_HA                    (PFS_BASE + PFS_P000PFS_HA_OFFSET)
#define PFS_P000PFS_HA_ASEL               (1 << 15) /* 8000: Analog Input enable */
#define PFS_P000PFS_HA_ISEL               (1 << 14) /* 4000: IRQ input enable */
#define PFS_P000PFS_HA_DSCR               (1 << 10) /* 400: Port Drive Capability */
#define PFS_P000PFS_HA_NCODR              (1 <<  6) /* 40: N-Channel Open Drain Control */
#define PFS_P000PFS_HA_PCR                (1 <<  4) /* 10: Pull-up Control */
#define PFS_P000PFS_HA_PDR                (1 <<  2) /* 04: Port Direction */
#define PFS_P000PFS_HA_PIDR               (1 <<  1) /* 02: Port Input Data */
#define PFS_P000PFS_HA_PODR               (1 <<  0) /* 01: Port Output Data */
#define PFS_P000PFS_BY_OFFSET             0x0003
#define PFS_P000PFS_BY                    (PFS_BASE + PFS_P000PFS_BY_OFFSET)
#define PFS_P000PFS_BY_NCODR              (1 <<  6) /* 40: N-Channel Open Drain Control */
#define PFS_P000PFS_BY_PCR                (1 <<  4) /* 10: Pull-up Control */
#define PFS_P000PFS_BY_PDR                (1 <<  2) /* 04: Port Direction */
#define PFS_P000PFS_BY_PIDR               (1 <<  1) /* 02: Port Input Data */
#define PFS_P000PFS_BY_PODR               (1 <<  0) /* 01: Port Output Data */
#define PFS_P00PFS_SIZE                   8
#define PFS_P00PFS_OFFSET                 0x0004
#define PFS_P00PFS(p)                     (PFS_BASE + PFS_P00PFS_OFFSET + (p)*0x0004)
#define PFS_P00PFS_HA_SIZE                8
#define PFS_P00PFS_HA_OFFSET              0x0006
#define PFS_P00PFS_HA(p)                  (PFS_BASE + PFS_P00PFS_HA_OFFSET + (p)*0x0004)
#define PFS_P00PFS_BY_SIZE                8
#define PFS_P00PFS_BY_OFFSET              0x0007
#define PFS_P00PFS_BY(p)                  (PFS_BASE + PFS_P00PFS_BY_OFFSET + (p)*0x0004)
#define PFS_P0PFS_SIZE                    6
#define PFS_P0PFS_OFFSET                  0x0028
#define PFS_P0PFS(p)                      (PFS_BASE + PFS_P0PFS_OFFSET + (p)*0x0004)
#define PFS_P0PFS_HA_SIZE                 6
#define PFS_P0PFS_HA_OFFSET               0x002a
#define PFS_P0PFS_HA(p)                   (PFS_BASE + PFS_P0PFS_HA_OFFSET + (p)*0x0004)
#define PFS_P0PFS_BY_SIZE                 6
#define PFS_P0PFS_BY_OFFSET               0x002b
#define PFS_P0PFS_BY(p)                   (PFS_BASE + PFS_P0PFS_BY_OFFSET + (p)*0x0004)
#define PFS_P10PFS_SIZE                   8
#define PFS_P10PFS_OFFSET                 0x0040
#define PFS_P10PFS(p)                     (PFS_BASE + PFS_P10PFS_OFFSET + (p)*0x0004)
#define PFS_P10PFS_HA_SIZE                8
#define PFS_P10PFS_HA_OFFSET              0x0042
#define PFS_P10PFS_HA(p)                  (PFS_BASE + PFS_P10PFS_HA_OFFSET + (p)*0x0004)
#define PFS_P10PFS_BY_SIZE                8
#define PFS_P10PFS_BY_OFFSET              0x0043
#define PFS_P10PFS_BY(p)                  (PFS_BASE + PFS_P10PFS_BY_OFFSET + (p)*0x0004)
#define PFS_P108PFS_OFFSET                0x0060
#define PFS_P108PFS                       (PFS_BASE + PFS_P108PFS_OFFSET)
#define PFS_P108PFS_PSEL                  (5 << 24) /* 1000000: Port Function Select These bits select the peripheral function. For individual pin functions, see the setting table. */
#define PFS_P108PFS_PSEL_MASK                  (0x1f)
#define PFS_P108PFS_PMR                   (1 << 16) /* 10000: Port Mode Control */
#define PFS_P108PFS_ASEL                  (1 << 15) /* 8000: Analog Input enable */
#define PFS_P108PFS_ISEL                  (1 << 14) /* 4000: IRQ input enable */
#define PFS_P108PFS_EOF                   (1 << 13) /* 2000: Event on Failing */
#define PFS_P108PFS_EOR                   (1 << 12) /* 1000: Event on Rising */
#define PFS_P108PFS_DSCR                  (1 << 10) /* 400: Port Drive Capability */
#define PFS_P108PFS_NCODR                 (1 <<  6) /* 40: N-Channel Open Drain Control */
#define PFS_P108PFS_PCR                   (1 <<  4) /* 10: Pull-up Control */
#define PFS_P108PFS_PDR                   (1 <<  2) /* 04: Port Direction */
#define PFS_P108PFS_PIDR                  (1 <<  1) /* 02: Port Input Data */
#define PFS_P108PFS_PODR                  (1 <<  0) /* 01: Port Output Data */
#define PFS_P108PFS_HA_OFFSET             0x0062
#define PFS_P108PFS_HA                    (PFS_BASE + PFS_P108PFS_HA_OFFSET)
#define PFS_P108PFS_HA_ASEL               (1 << 15) /* 8000: Analog Input enable */
#define PFS_P108PFS_HA_ISEL               (1 << 14) /* 4000: IRQ input enable */
#define PFS_P108PFS_HA_EOF                (1 << 13) /* 2000: Event on Failing */
#define PFS_P108PFS_HA_EOR                (1 << 12) /* 1000: Event on Rising */
#define PFS_P108PFS_HA_DSCR               (1 << 10) /* 400: Port Drive Capability */
#define PFS_P108PFS_HA_NCODR              (1 <<  6) /* 40: N-Channel Open Drain Control */
#define PFS_P108PFS_HA_PCR                (1 <<  4) /* 10: Pull-up Control */
#define PFS_P108PFS_HA_PDR                (1 <<  2) /* 04: Port Direction */
#define PFS_P108PFS_HA_PIDR               (1 <<  1) /* 02: Port Input Data */
#define PFS_P108PFS_HA_PODR               (1 <<  0) /* 01: Port Output Data */
#define PFS_P108PFS_BY_OFFSET             0x0063
#define PFS_P108PFS_BY                    (PFS_BASE + PFS_P108PFS_BY_OFFSET)
#define PFS_P108PFS_BY_NCODR              (1 <<  6) /* 40: N-Channel Open Drain Control */
#define PFS_P108PFS_BY_PCR                (1 <<  4) /* 10: Pull-up Control */
#define PFS_P108PFS_BY_PDR                (1 <<  2) /* 04: Port Direction */
#define PFS_P108PFS_BY_PIDR               (1 <<  1) /* 02: Port Input Data */
#define PFS_P108PFS_BY_PODR               (1 <<  0) /* 01: Port Output Data */
#define PFS_P109PFS_OFFSET                0x0064
#define PFS_P109PFS                       (PFS_BASE + PFS_P109PFS_OFFSET)
#define PFS_P109PFS_PSEL                  (5 << 24) /* 1000000: Port Function Select These bits select the peripheral function. For individual pin functions, see the setting table. */
#define PFS_P109PFS_PSEL_MASK                  (0x1f)
#define PFS_P109PFS_PMR                   (1 << 16) /* 10000: Port Mode Control */
#define PFS_P109PFS_ASEL                  (1 << 15) /* 8000: Analog Input enable */
#define PFS_P109PFS_ISEL                  (1 << 14) /* 4000: IRQ input enable */
#define PFS_P109PFS_EOF                   (1 << 13) /* 2000: Event on Failing */
#define PFS_P109PFS_EOR                   (1 << 12) /* 1000: Event on Rising */
#define PFS_P109PFS_DSCR                  (1 << 10) /* 400: Port Drive Capability */
#define PFS_P109PFS_NCODR                 (1 <<  6) /* 40: N-Channel Open Drain Control */
#define PFS_P109PFS_PCR                   (1 <<  4) /* 10: Pull-up Control */
#define PFS_P109PFS_PDR                   (1 <<  2) /* 04: Port Direction */
#define PFS_P109PFS_PIDR                  (1 <<  1) /* 02: Port Input Data */
#define PFS_P109PFS_PODR                  (1 <<  0) /* 01: Port Output Data */
#define PFS_P109PFS_HA_OFFSET             0x0066
#define PFS_P109PFS_HA                    (PFS_BASE + PFS_P109PFS_HA_OFFSET)
#define PFS_P109PFS_HA_ASEL               (1 << 15) /* 8000: Analog Input enable */
#define PFS_P109PFS_HA_ISEL               (1 << 14) /* 4000: IRQ input enable */
#define PFS_P109PFS_HA_EOF                (1 << 13) /* 2000: Event on Failing */
#define PFS_P109PFS_HA_EOR                (1 << 12) /* 1000: Event on Rising */
#define PFS_P109PFS_HA_DSCR               (1 << 10) /* 400: Port Drive Capability */
#define PFS_P109PFS_HA_NCODR              (1 <<  6) /* 40: N-Channel Open Drain Control */
#define PFS_P109PFS_HA_PCR                (1 <<  4) /* 10: Pull-up Control */
#define PFS_P109PFS_HA_PDR                (1 <<  2) /* 04: Port Direction */
#define PFS_P109PFS_HA_PIDR               (1 <<  1) /* 02: Port Input Data */
#define PFS_P109PFS_HA_PODR               (1 <<  0) /* 01: Port Output Data */
#define PFS_P109PFS_BY_OFFSET             0x0067
#define PFS_P109PFS_BY                    (PFS_BASE + PFS_P109PFS_BY_OFFSET)
#define PFS_P109PFS_BY_NCODR              (1 <<  6) /* 40: N-Channel Open Drain Control */
#define PFS_P109PFS_BY_PCR                (1 <<  4) /* 10: Pull-up Control */
#define PFS_P109PFS_BY_PDR                (1 <<  2) /* 04: Port Direction */
#define PFS_P109PFS_BY_PIDR               (1 <<  1) /* 02: Port Input Data */
#define PFS_P109PFS_BY_PODR               (1 <<  0) /* 01: Port Output Data */
#define PFS_P110PFS_OFFSET                0x0068
#define PFS_P110PFS                       (PFS_BASE + PFS_P110PFS_OFFSET)
#define PFS_P110PFS_HA_OFFSET             0x006a
#define PFS_P110PFS_HA                    (PFS_BASE + PFS_P110PFS_HA_OFFSET)
#define PFS_P110PFS_BY_OFFSET             0x006b
#define PFS_P110PFS_BY                    (PFS_BASE + PFS_P110PFS_BY_OFFSET)
#define PFS_P1PFS_SIZE                    5
#define PFS_P1PFS_OFFSET                  0x006c
#define PFS_P1PFS(p)                      (PFS_BASE + PFS_P1PFS_OFFSET + (p)*0x0004)
#define PFS_P1PFS_HA_SIZE                 5
#define PFS_P1PFS_HA_OFFSET               0x006e
#define PFS_P1PFS_HA(p)                   (PFS_BASE + PFS_P1PFS_HA_OFFSET + (p)*0x0004)
#define PFS_P1PFS_BY_SIZE                 5
#define PFS_P1PFS_BY_OFFSET               0x006f
#define PFS_P1PFS_BY(p)                   (PFS_BASE + PFS_P1PFS_BY_OFFSET + (p)*0x0004)
#define PFS_P200PFS_OFFSET                0x0080
#define PFS_P200PFS                       (PFS_BASE + PFS_P200PFS_OFFSET)
#define PFS_P200PFS_HA_OFFSET             0x0082
#define PFS_P200PFS_HA                    (PFS_BASE + PFS_P200PFS_HA_OFFSET)
#define PFS_P200PFS_BY_OFFSET             0x0083
#define PFS_P200PFS_BY                    (PFS_BASE + PFS_P200PFS_BY_OFFSET)
#define PFS_P201PFS_OFFSET                0x0084
#define PFS_P201PFS                       (PFS_BASE + PFS_P201PFS_OFFSET)
#define PFS_P201PFS_PSEL                  (5 << 24) /* 1000000: Port Function Select These bits select the peripheral function. For individual pin functions, see the setting table. */
#define PFS_P201PFS_PSEL_MASK                  (0x1f)
#define PFS_P201PFS_PMR                   (1 << 16) /* 10000: Port Mode Control */
#define PFS_P201PFS_ASEL                  (1 << 15) /* 8000: Analog Input enable */
#define PFS_P201PFS_ISEL                  (1 << 14) /* 4000: IRQ input enable */
#define PFS_P201PFS_EOF                   (1 << 13) /* 2000: Event on Falling */
#define PFS_P201PFS_EOR                   (1 << 12) /* 1000: Event on Rising */
#define PFS_P201PFS_DSCR                  (1 << 10) /* 400: Drive Strength Control Register */
#define PFS_P201PFS_NCODR                 (1 <<  6) /* 40: N-Channel Open Drain Control */
#define PFS_P201PFS_PCR                   (1 <<  4) /* 10: Pull-up Control */
#define PFS_P201PFS_PDR                   (1 <<  2) /* 04: Port Direction */
#define PFS_P201PFS_PIDR                  (1 <<  1) /* 02: Port Input Data */
#define PFS_P201PFS_PODR                  (1 <<  0) /* 01: Port Output Data */
#define PFS_P201PFS_HA_OFFSET             0x0086
#define PFS_P201PFS_HA                    (PFS_BASE + PFS_P201PFS_HA_OFFSET)
#define PFS_P201PFS_HA_ASEL               (1 << 15) /* 8000: Analog Input enable */
#define PFS_P201PFS_HA_ISEL               (1 << 14) /* 4000: IRQ input enable */
#define PFS_P201PFS_HA_EOF                (1 << 13) /* 2000: Event on Falling */
#define PFS_P201PFS_HA_EOR                (1 << 12) /* 1000: Event on Rising */
#define PFS_P201PFS_HA_DSCR               (1 << 10) /* 400: Drive Strength Control Register */
#define PFS_P201PFS_HA_NCODR              (1 <<  6) /* 40: N-Channel Open Drain Control */
#define PFS_P201PFS_HA_PCR                (1 <<  4) /* 10: Pull-up Control */
#define PFS_P201PFS_HA_PDR                (1 <<  2) /* 04: Port Direction */
#define PFS_P201PFS_HA_PIDR               (1 <<  1) /* 02: Port Input Data */
#define PFS_P201PFS_HA_PODR               (1 <<  0) /* 01: Port Output Data */
#define PFS_P201PFS_BY_OFFSET             0x0087
#define PFS_P201PFS_BY                    (PFS_BASE + PFS_P201PFS_BY_OFFSET)
#define PFS_P201PFS_BY_NCODR              (1 <<  6) /* 40: N-Channel Open Drain Control */
#define PFS_P201PFS_BY_PCR                (1 <<  4) /* 10: Pull-up Control */
#define PFS_P201PFS_BY_PDR                (1 <<  2) /* 04: Port Direction */
#define PFS_P201PFS_BY_PIDR               (1 <<  1) /* 02: Port Input Data */
#define PFS_P201PFS_BY_PODR               (1 <<  0) /* 01: Port Output Data */
#define PFS_P20PFS_SIZE                   5
#define PFS_P20PFS_OFFSET                 0x0088
#define PFS_P20PFS(p)                     (PFS_BASE + PFS_P20PFS_OFFSET + (p)*0x0004)
#define PFS_P20PFS_HA_SIZE                5
#define PFS_P20PFS_HA_OFFSET              0x008a
#define PFS_P20PFS_HA(p)                  (PFS_BASE + PFS_P20PFS_HA_OFFSET + (p)*0x0004)
#define PFS_P20PFS_BY_SIZE                5
#define PFS_P20PFS_BY_OFFSET              0x008b
#define PFS_P20PFS_BY(p)                  (PFS_BASE + PFS_P20PFS_BY_OFFSET + (p)*0x0004)
#define PFS_P2PFS_SIZE                    4
#define PFS_P2PFS_OFFSET                  0x00b0
#define PFS_P2PFS(p)                      (PFS_BASE + PFS_P2PFS_OFFSET + (p)*0x0004)
#define PFS_P2PFS_HA_SIZE                 4
#define PFS_P2PFS_HA_OFFSET               0x00b2
#define PFS_P2PFS_HA(p)                   (PFS_BASE + PFS_P2PFS_HA_OFFSET + (p)*0x0004)
#define PFS_P2PFS_BY_SIZE                 4
#define PFS_P2PFS_BY_OFFSET               0x00b3
#define PFS_P2PFS_BY(p)                   (PFS_BASE + PFS_P2PFS_BY_OFFSET + (p)*0x0004)
#define PFS_P300PFS_OFFSET                0x00c0
#define PFS_P300PFS                       (PFS_BASE + PFS_P300PFS_OFFSET)
#define PFS_P300PFS_HA_OFFSET             0x00c2
#define PFS_P300PFS_HA                    (PFS_BASE + PFS_P300PFS_HA_OFFSET)
#define PFS_P300PFS_BY_OFFSET             0x00c3
#define PFS_P300PFS_BY                    (PFS_BASE + PFS_P300PFS_BY_OFFSET)
#define PFS_P30PFS_SIZE                   7
#define PFS_P30PFS_OFFSET                 0x00c4
#define PFS_P30PFS(p)                     (PFS_BASE + PFS_P30PFS_OFFSET + (p)*0x0004)
#define PFS_P30PFS_HA_SIZE                7
#define PFS_P30PFS_HA_OFFSET              0x00c6
#define PFS_P30PFS_HA(p)                  (PFS_BASE + PFS_P30PFS_HA_OFFSET + (p)*0x0004)
#define PFS_P30PFS_BY_SIZE                7
#define PFS_P30PFS_BY_OFFSET              0x00c7
#define PFS_P30PFS_BY(p)                  (PFS_BASE + PFS_P30PFS_BY_OFFSET + (p)*0x0004)
#define PFS_P40PFS_SIZE                   8
#define PFS_P40PFS_OFFSET                 0x0100
#define PFS_P40PFS(p)                     (PFS_BASE + PFS_P40PFS_OFFSET + (p)*0x0004)
#define PFS_P40PFS_HA_SIZE                8
#define PFS_P40PFS_HA_OFFSET              0x0102
#define PFS_P40PFS_HA(p)                  (PFS_BASE + PFS_P40PFS_HA_OFFSET + (p)*0x0004)
#define PFS_P40PFS_BY_SIZE                8
#define PFS_P40PFS_BY_OFFSET              0x0103
#define PFS_P40PFS_BY(p)                  (PFS_BASE + PFS_P40PFS_BY_OFFSET + (p)*0x0004)
#define PFS_P408PFS_OFFSET                0x0120
#define PFS_P408PFS                       (PFS_BASE + PFS_P408PFS_OFFSET)
#define PFS_P408PFS_PSEL                  (5 << 24) /* 1000000: Port Function Select These bits select the peripheral function. For individual pin functions, see the setting table. */
#define PFS_P408PFS_PSEL_MASK                  (0x1f)
#define PFS_P408PFS_PMR                   (1 << 16) /* 10000: Port Mode Control */
#define PFS_P408PFS_ASEL                  (1 << 15) /* 8000: Analog Input enable */
#define PFS_P408PFS_ISEL                  (1 << 14) /* 4000: IRQ input enable */
#define PFS_P408PFS_EOF                   (1 << 13) /* 2000: Event on Falling */
#define PFS_P408PFS_EOR                   (1 << 12) /* 1000: Event on Rising */
#define PFS_P408PFS_DSCR1                 (1 << 11) /* 800: Drive Strength Control Register */
#define PFS_P408PFS_DSCR                  (1 << 10) /* 400: Drive Strength Control Register */
#define PFS_P408PFS_NCODR                 (1 <<  6) /* 40: N-Channel Open Drain Control */
#define PFS_P408PFS_PCR                   (1 <<  4) /* 10: Pull-up Control */
#define PFS_P408PFS_PDR                   (1 <<  2) /* 04: Port Direction */
#define PFS_P408PFS_PIDR                  (1 <<  1) /* 02: Port Input Data */
#define PFS_P408PFS_PODR                  (1 <<  0) /* 01: Port Output Data */
#define PFS_P408PFS_HA_OFFSET             0x0122
#define PFS_P408PFS_HA                    (PFS_BASE + PFS_P408PFS_HA_OFFSET)
#define PFS_P408PFS_HA_ASEL               (1 << 15) /* 8000: Analog Input enable */
#define PFS_P408PFS_HA_ISEL               (1 << 14) /* 4000: IRQ input enable */
#define PFS_P408PFS_HA_EOF                (1 << 13) /* 2000: Event on Falling */
#define PFS_P408PFS_HA_EOR                (1 << 12) /* 1000: Event on Rising */
#define PFS_P408PFS_HA_DSCR1              (1 << 11) /* 800: Drive Strength Control Register */
#define PFS_P408PFS_HA_DSCR               (1 << 10) /* 400: Drive Strength Control Register */
#define PFS_P408PFS_HA_NCODR              (1 <<  6) /* 40: N-Channel Open Drain Control */
#define PFS_P408PFS_HA_PCR                (1 <<  4) /* 10: Pull-up Control */
#define PFS_P408PFS_HA_PDR                (1 <<  2) /* 04: Port Direction */
#define PFS_P408PFS_HA_PIDR               (1 <<  1) /* 02: Port Input Data */
#define PFS_P408PFS_HA_PODR               (1 <<  0) /* 01: Port Output Data */
#define PFS_P408PFS_BY_OFFSET             0x0123
#define PFS_P408PFS_BY                    (PFS_BASE + PFS_P408PFS_BY_OFFSET)
#define PFS_P408PFS_BY_NCODR              (1 <<  6) /* 40: N-Channel Open Drain Control */
#define PFS_P408PFS_BY_PCR                (1 <<  4) /* 10: Pull-up Control */
#define PFS_P408PFS_BY_PDR                (1 <<  2) /* 04: Port Direction */
#define PFS_P408PFS_BY_PIDR               (1 <<  1) /* 02: Port Input Data */
#define PFS_P408PFS_BY_PODR               (1 <<  0) /* 01: Port Output Data */
#define PFS_P409PFS_OFFSET                0x0124
#define PFS_P409PFS                       (PFS_BASE + PFS_P409PFS_OFFSET)
#define PFS_P409PFS_HA_OFFSET             0x0126
#define PFS_P409PFS_HA                    (PFS_BASE + PFS_P409PFS_HA_OFFSET)
#define PFS_P409PFS_BY_OFFSET             0x0127
#define PFS_P409PFS_BY                    (PFS_BASE + PFS_P409PFS_BY_OFFSET)
#define PFS_P4PFS_SIZE                    6
#define PFS_P4PFS_OFFSET                  0x0128
#define PFS_P4PFS(p)                      (PFS_BASE + PFS_P4PFS_OFFSET + (p)*0x0004)
#define PFS_P4PFS_HA_SIZE                 6
#define PFS_P4PFS_HA_OFFSET               0x012a
#define PFS_P4PFS_HA(p)                   (PFS_BASE + PFS_P4PFS_HA_OFFSET + (p)*0x0004)
#define PFS_P4PFS_BY_SIZE                 6
#define PFS_P4PFS_BY_OFFSET               0x012b
#define PFS_P4PFS_BY(p)                   (PFS_BASE + PFS_P4PFS_BY_OFFSET + (p)*0x0004)
#define PFS_P50PFS_SIZE                   6
#define PFS_P50PFS_OFFSET                 0x0140
#define PFS_P50PFS(p)                     (PFS_BASE + PFS_P50PFS_OFFSET + (p)*0x0004)
#define PFS_P50PFS_HA_SIZE                6
#define PFS_P50PFS_HA_OFFSET              0x0142
#define PFS_P50PFS_HA(p)                  (PFS_BASE + PFS_P50PFS_HA_OFFSET + (p)*0x0004)
#define PFS_P50PFS_BY_SIZE                6
#define PFS_P50PFS_BY_OFFSET              0x0143
#define PFS_P50PFS_BY(p)                  (PFS_BASE + PFS_P50PFS_BY_OFFSET + (p)*0x0004)
#define PFS_P60PFS_SIZE                   4
#define PFS_P60PFS_OFFSET                 0x0180
#define PFS_P60PFS(p)                     (PFS_BASE + PFS_P60PFS_OFFSET + (p)*0x0004)
#define PFS_P60PFS_HA_SIZE                4
#define PFS_P60PFS_HA_OFFSET              0x0182
#define PFS_P60PFS_HA(p)                  (PFS_BASE + PFS_P60PFS_HA_OFFSET + (p)*0x0004)
#define PFS_P60PFS_BY_SIZE                4
#define PFS_P60PFS_BY_OFFSET              0x0183
#define PFS_P60PFS_BY(p)                  (PFS_BASE + PFS_P60PFS_BY_OFFSET + (p)*0x0004)
#define PFS_P60PFS_SIZE                   2
#define PFS_P60PFS_OFFSET                 0x01a0
#define PFS_P60PFS(p)                     (PFS_BASE + PFS_P60PFS_OFFSET + (p)*0x0004)
#define PFS_P60PFS_HA_SIZE                2
#define PFS_P60PFS_HA_OFFSET              0x01a2
#define PFS_P60PFS_HA(p)                  (PFS_BASE + PFS_P60PFS_HA_OFFSET + (p)*0x0004)
#define PFS_P60PFS_BY_SIZE                2
#define PFS_P60PFS_BY_OFFSET              0x01a3
#define PFS_P60PFS_BY(p)                  (PFS_BASE + PFS_P60PFS_BY_OFFSET + (p)*0x0004)
#define PFS_P610PFS_OFFSET                0x01a8
#define PFS_P610PFS                       (PFS_BASE + PFS_P610PFS_OFFSET)
#define PFS_P610PFS_HA_OFFSET             0x01aa
#define PFS_P610PFS_HA                    (PFS_BASE + PFS_P610PFS_HA_OFFSET)
#define PFS_P610PFS_BY_OFFSET             0x01ab
#define PFS_P610PFS_BY                    (PFS_BASE + PFS_P610PFS_BY_OFFSET)
#define PFS_P708PFS_OFFSET                0x01e0
#define PFS_P708PFS                       (PFS_BASE + PFS_P708PFS_OFFSET)
#define PFS_P708PFS_HA_OFFSET             0x01e2
#define PFS_P708PFS_HA                    (PFS_BASE + PFS_P708PFS_HA_OFFSET)
#define PFS_P708PFS_BY_OFFSET             0x01e3
#define PFS_P708PFS_BY                    (PFS_BASE + PFS_P708PFS_BY_OFFSET)
#define PFS_P80PFS_SIZE                   2
#define PFS_P80PFS_OFFSET                 0x0220
#define PFS_P80PFS(p)                     (PFS_BASE + PFS_P80PFS_OFFSET + (p)*0x0004)
#define PFS_P80PFS_HA_SIZE                2
#define PFS_P80PFS_HA_OFFSET              0x0222
#define PFS_P80PFS_HA(p)                  (PFS_BASE + PFS_P80PFS_HA_OFFSET + (p)*0x0004)
#define PFS_P80PFS_BY_SIZE                2
#define PFS_P80PFS_BY_OFFSET              0x0223
#define PFS_P80PFS_BY(p)                  (PFS_BASE + PFS_P80PFS_BY_OFFSET + (p)*0x0004)
#define PFS_P9PFS_SIZE                    2
#define PFS_P9PFS_OFFSET                  0x0278
#define PFS_P9PFS(p)                      (PFS_BASE + PFS_P9PFS_OFFSET + (p)*0x0004)
#define PFS_P9PFS_HA_SIZE                 2
#define PFS_P9PFS_HA_OFFSET               0x027a
#define PFS_P9PFS_HA(p)                   (PFS_BASE + PFS_P9PFS_HA_OFFSET + (p)*0x0004)
#define PFS_P9PFS_BY_SIZE                 2
#define PFS_P9PFS_BY_OFFSET               0x027b
#define PFS_P9PFS_BY(p)                   (PFS_BASE + PFS_P9PFS_BY_OFFSET + (p)*0x0004)

/* PMISC - Miscellaneous Port Control Register */
#define PMISC_BASE                        0x40040d00
#define PMISC_PWPR_OFFSET                 0x0003
#define PMISC_PWPR                        (PMISC_BASE + PMISC_PWPR_OFFSET)
#define PMISC_PWPR_B0WI                   (1 <<  7) /* 80: PFSWE Bit Write Disable */
#define PMISC_PWPR_PFSWE                  (1 <<  6) /* 40: PFS Register Write Enable */

/* ICU - Interrupt Controller */
#define ICU_BASE                          0x40006000
#define ICU_IRQCR_SIZE                    13
#define ICU_IRQCR_OFFSET                  0x0000
#define ICU_IRQCR(p)                      (ICU_BASE + ICU_IRQCR_OFFSET + (p)*0x0001)
#define ICU_IRQCR_FLTEN                   (1 <<  7) /* 80: IRQ Digital Filter Enable */
#define ICU_IRQCR_FCLKSEL                 (2 <<  4) /* 10: IRQ Digital Filter Sampling Clock Select */
#define ICU_IRQCR_FCLKSEL_MASK                 (0x03)
#define ICU_IRQCR_IRQMD                   (2 <<  0) /* 01: IRQ Detection Sense Select */
#define ICU_IRQCR_IRQMD_MASK                   (0x03)
#define ICU_IRQCR_SIZE                    2
#define ICU_IRQCR_OFFSET                  0x000e
#define ICU_IRQCR(p)                      (ICU_BASE + ICU_IRQCR_OFFSET + (p)*0x0001)
#define ICU_IRQCR_FLTEN                   (1 <<  7) /* 80: IRQ Digital Filter Enable */
#define ICU_IRQCR_FCLKSEL                 (2 <<  4) /* 10: IRQ Digital Filter Sampling Clock Select */
#define ICU_IRQCR_FCLKSEL_MASK                 (0x03)
#define ICU_IRQCR_IRQMD                   (2 <<  0) /* 01: IRQ Detection Sense Select */
#define ICU_IRQCR_IRQMD_MASK                   (0x03)
#define ICU_NMISR_OFFSET                  0x0140
#define ICU_NMISR                         (ICU_BASE + ICU_NMISR_OFFSET)
#define ICU_NMISR_SPEST                   (1 << 12) /* 1000: CPU Stack pointer monitor Interrupt Status Flag */
#define ICU_NMISR_BUSMST                  (1 << 11) /* 800: MPU Bus Master Error Interrupt Status Flag */
#define ICU_NMISR_BUSSST                  (1 << 10) /* 400: MPU Bus Slave Error Interrupt Status Flag */
#define ICU_NMISR_RECCST                  (1 <<  9) /* 200: RAM ECC Error Interrupt Status Flag */
#define ICU_NMISR_RPEST                   (1 <<  8) /* 100: RAM Parity Error Interrupt Status Flag */
#define ICU_NMISR_NMIST                   (1 <<  7) /* 80: NMI Status Flag */
#define ICU_NMISR_OSTST                   (1 <<  6) /* 40: Oscillation Stop Detection Interrupt Status Flag */
#define ICU_NMISR_VBATTST                 (1 <<  4) /* 10: VBATT monitor Interrupt Status Flag */
#define ICU_NMISR_LVD2ST                  (1 <<  3) /* 08: Voltage-Monitoring 2 Interrupt Status Flag */
#define ICU_NMISR_LVD1ST                  (1 <<  2) /* 04: Voltage-Monitoring 1 Interrupt Status Flag */
#define ICU_NMISR_WDTST                   (1 <<  1) /* 02: WDT Underflow/Refresh Error Status Flag */
#define ICU_NMISR_IWDTST                  (1 <<  0) /* 01: IWDT Underflow/Refresh Error Status Flag */
#define ICU_NMIER_OFFSET                  0x0120
#define ICU_NMIER                         (ICU_BASE + ICU_NMIER_OFFSET)
#define ICU_NMIER_SPEEN                   (1 << 12) /* 1000: CPU Stack pointer monitor Interrupt Enable */
#define ICU_NMIER_BUSMEN                  (1 << 11) /* 800: MPU Bus Master Error Interrupt Enable */
#define ICU_NMIER_BUSSEN                  (1 << 10) /* 400: MPU Bus Slave Error Interrupt Enable */
#define ICU_NMIER_RECCEN                  (1 <<  9) /* 200: RAM ECC Error Interrupt Enable */
#define ICU_NMIER_RPEEN                   (1 <<  8) /* 100: RAM Parity Error Interrupt Enable */
#define ICU_NMIER_NMIEN                   (1 <<  7) /* 80: NMI Pin Interrupt Enable */
#define ICU_NMIER_OSTEN                   (1 <<  6) /* 40: Oscillation Stop Detection Interrupt Enable */
#define ICU_NMIER_VBATTEN                 (1 <<  4) /* 10: VBATT monitor Interrupt Enable */
#define ICU_NMIER_LVD2EN                  (1 <<  3) /* 08: Voltage-Monitoring 2 Interrupt Enable */
#define ICU_NMIER_LVD1EN                  (1 <<  2) /* 04: Voltage-Monitoring 1 Interrupt Enable */
#define ICU_NMIER_WDTEN                   (1 <<  1) /* 02: WDT Underflow/Refresh Error Interrupt Enable */
#define ICU_NMIER_IWDTEN                  (1 <<  0) /* 01: IWDT Underflow/Refresh Error Interrupt Enable */
#define ICU_NMICLR_OFFSET                 0x0130
#define ICU_NMICLR                        (ICU_BASE + ICU_NMICLR_OFFSET)
#define ICU_NMICLR_SPECLR                 (1 << 12) /* 1000: CPU Stack Pointer Monitor Interrupt Clear */
#define ICU_NMICLR_BUSMCLR                (1 << 11) /* 800: Bus Master Error Clear */
#define ICU_NMICLR_BUSSCLR                (1 << 10) /* 400: Bus Slave Error Clear */
#define ICU_NMICLR_RECCCLR                (1 <<  9) /* 200: SRAM ECC Error Clear */
#define ICU_NMICLR_RPECLR                 (1 <<  8) /* 100: SRAM Parity Error Clear */
#define ICU_NMICLR_NMICLR                 (1 <<  7) /* 80: NMI Clear */
#define ICU_NMICLR_OSTCLR                 (1 <<  6) /* 40: OST Clear */
#define ICU_NMICLR_VBATTCLR               (1 <<  4) /* 10: VBATT Clear */
#define ICU_NMICLR_LVD2CLR                (1 <<  3) /* 08: LVD2 Clear */
#define ICU_NMICLR_LVD1CLR                (1 <<  2) /* 04: LVD1 Clear */
#define ICU_NMICLR_WDTCLR                 (1 <<  1) /* 02: WDT Clear */
#define ICU_NMICLR_IWDTCLR                (1 <<  0) /* 01: IWDT Clear */
#define ICU_NMICR_OFFSET                  0x0100
#define ICU_NMICR                         (ICU_BASE + ICU_NMICR_OFFSET)
#define ICU_NMICR_NFLTEN                  (1 <<  7) /* 80: NMI Digital Filter Enable */
#define ICU_NMICR_NFCLKSEL                (2 <<  4) /* 10: NMI Digital Filter Sampling Clock Select */
#define ICU_NMICR_NFCLKSEL_MASK                (0x03)
#define ICU_NMICR_NMIMD                   (1 <<  0) /* 01: NMI Detection Set */
#define ICU_IELSR_SIZE                    32
#define ICU_IELSR_OFFSET                  0x0300
#define ICU_IELSR(p)                      (ICU_BASE + ICU_IELSR_OFFSET + (p)*0x0004)
#define ICU_IELSR_DTCE                    (1 << 24) /* 1000000: DTC Activation Enable */
#define ICU_IELSR_IR                      (1 << 16) /* 10000: Interrupt Status Flag */
#define ICU_IELSR_IELS                    (8 <<  0) /* 01: ICU Event selection to NVIC Set the number for the event signal to be linked . */
#define ICU_IELSR_IELS_MASK                    (0xff)
#define ICU_DELSR_SIZE                    4
#define ICU_DELSR_OFFSET                  0x0280
#define ICU_DELSR(p)                      (ICU_BASE + ICU_DELSR_OFFSET + (p)*0x0004)
#define ICU_DELSR_DELS                    (8 <<  0) /* 01: Event selection to DMAC Start request */
#define ICU_DELSR_DELS_MASK                    (0xff)
#define ICU_SELSR0_OFFSET                 0x0200
#define ICU_SELSR0                        (ICU_BASE + ICU_SELSR0_OFFSET)
#define ICU_SELSR0_SELS                   (8 <<  0) /* 01: SYS Event Link Select */
#define ICU_SELSR0_SELS_MASK                   (0xff)
#define ICU_WUPEN_OFFSET                  0x01a0
#define ICU_WUPEN                         (ICU_BASE + ICU_WUPEN_OFFSET)
#define ICU_WUPEN_IIC0WUPEN               (1 << 31) /* 80000000: IIC0 address match interrupt S/W standby returns enable */
#define ICU_WUPEN_AGT1CBWUPEN             (1 << 30) /* 40000000: AGT1 compare match B interrupt S/W standby returns enable */
#define ICU_WUPEN_AGT1CAWUPEN             (1 << 29) /* 20000000: AGT1 compare match A interrupt S/W standby returns enable */
#define ICU_WUPEN_AGT1UDWUPEN             (1 << 28) /* 10000000: AGT1 underflow interrupt S/W standby returns enable */
#define ICU_WUPEN_USBFSWUPEN              (1 << 27) /* 8000000: USBFS interrupt S/W standby returns enable */
#define ICU_WUPEN_RTCPRDWUPEN             (1 << 25) /* 2000000: RCT period interrupt S/W standby returns enable */
#define ICU_WUPEN_RTCALMWUPEN             (1 << 24) /* 1000000: RTC alarm interrupt S/W standby returns enable */
#define ICU_WUPEN_ACMPLP0WUPEN            (1 << 23) /* 800000: ACMPLP0 interrupt S/W standby returns enable */
#define ICU_WUPEN_VBATTWUPEN              (1 << 20) /* 100000: VBATT monitor interrupt S/W standby returns enable */
#define ICU_WUPEN_LVD2WUPEN               (1 << 19) /* 80000: LVD2 interrupt S/W standby returns enable */
#define ICU_WUPEN_LVD1WUPEN               (1 << 18) /* 40000: LVD1 interrupt S/W standby returns enable */
#define ICU_WUPEN_KEYWUPEN                (1 << 17) /* 20000: Key interrupt S/W standby returns enable */
#define ICU_WUPEN_IWDTWUPEN               (1 << 16) /* 10000: IWDT interrupt S/W standby returns enable */
#define ICU_WUPEN_IRQWUPEN15              (1 << 15) /* 8000: IRQ15 interrupt S/W standby returns enable */
#define ICU_WUPEN_IRQWUPEN14              (1 << 14) /* 4000: IRQ14 interrupt S/W standby returns enable */
#define ICU_WUPEN_IRQWUPEN12              (1 << 12) /* 1000: IRQ12 interrupt S/W standby returns enable */
#define ICU_WUPEN_IRQWUPEN11              (1 << 11) /* 800: IRQ11 interrupt S/W standby returns enable */
#define ICU_WUPEN_IRQWUPEN10              (1 << 10) /* 400: IRQ10 interrupt S/W standby returns enable */
#define ICU_WUPEN_IRQWUPEN9               (1 <<  9) /* 200: IRQ9 interrupt S/W standby returns enable */
#define ICU_WUPEN_IRQWUPEN8               (1 <<  8) /* 100: IRQ8 interrupt S/W standby returns enable */
#define ICU_WUPEN_IRQWUPEN7               (1 <<  7) /* 80: IRQ7 interrupt S/W standby returns enable */
#define ICU_WUPEN_IRQWUPEN6               (1 <<  6) /* 40: IRQ6 interrupt S/W standby returns enable */
#define ICU_WUPEN_IRQWUPEN5               (1 <<  5) /* 20: IRQ5 interrupt S/W standby returns enable */
#define ICU_WUPEN_IRQWUPEN4               (1 <<  4) /* 10: IRQ4 interrupt S/W standby returns enable */
#define ICU_WUPEN_IRQWUPEN3               (1 <<  3) /* 08: IRQ3 interrupt S/W standby returns enable */
#define ICU_WUPEN_IRQWUPEN2               (1 <<  2) /* 04: IRQ2 interrupt S/W standby returns enable */
#define ICU_WUPEN_IRQWUPEN1               (1 <<  1) /* 02: IRQ1 interrupt S/W standby returns enable */
#define ICU_WUPEN_IRQWUPEN0               (1 <<  0) /* 01: IRQ0 interrupt S/W standby returns enable */

/* IIC0 - Inter-Integrated Circuit 0 */
#define IIC0_BASE                         0x40053000
#define IIC0_ICCR1_OFFSET                 0x0000
#define IIC0_ICCR1                        (IIC0_BASE + IIC0_ICCR1_OFFSET)
#define IIC0_ICCR1_ICE                    (1 <<  7) /* 80: I2C Bus Interface Enable */
#define IIC0_ICCR1_IICRST                 (1 <<  6) /* 40: I2C Bus Interface Internal Reset Note:If an internal reset is initiated using the IICRST bit for a bus hang-up occurred during communication with the master device in slave mode, the states may become different between the slave device and the master device (due to the difference in the bit counter information). */
#define IIC0_ICCR1_CLO                    (1 <<  5) /* 20: Extra SCL Clock Cycle Output */
#define IIC0_ICCR1_SOWP                   (1 <<  4) /* 10: SCLO/SDAO Write Protect */
#define IIC0_ICCR1_SCLO                   (1 <<  3) /* 08: SCL Output Control/Monitor */
#define IIC0_ICCR1_SDAO                   (1 <<  2) /* 04: SDA Output Control/Monitor */
#define IIC0_ICCR1_SCLI                   (1 <<  1) /* 02: SCL Line Monitor */
#define IIC0_ICCR1_SDAI                   (1 <<  0) /* 01: SDA Line Monitor */
#define IIC0_ICCR2_OFFSET                 0x0001
#define IIC0_ICCR2                        (IIC0_BASE + IIC0_ICCR2_OFFSET)
#define IIC0_ICCR2_BBSY                   (1 <<  7) /* 80: Bus Busy Detection Flag */
#define IIC0_ICCR2_MST                    (1 <<  6) /* 40: Master/Slave Mode */
#define IIC0_ICCR2_TRS                    (1 <<  5) /* 20: Transmit/Receive Mode */
#define IIC0_ICCR2_SP                     (1 <<  3) /* 08: Stop Condition Issuance Request Note: Writing to the SP bit is not possible while the setting of the BBSY flag is 0 (bus free state). Note: Do not set the SP bit to 1 while a restart condition is being issued. */
#define IIC0_ICCR2_RS                     (1 <<  2) /* 04: Restart Condition Issuance Request Note: Do not set the RS bit to 1 while issuing a stop condition. */
#define IIC0_ICCR2_ST                     (1 <<  1) /* 02: Start Condition Issuance Request Set the ST bit to 1 (start condition issuance request) when the BBSY flag is set to 0 (bus free state). */
#define IIC0_ICMR1_OFFSET                 0x0002
#define IIC0_ICMR1                        (IIC0_BASE + IIC0_ICMR1_OFFSET)
#define IIC0_ICMR1_MTWP                   (1 <<  7) /* 80: MST/TRS Write Protect */
#define IIC0_ICMR1_CKS                    (3 <<  4) /* 10: Internal Reference Clock (fIIC) Selection ( fIIC = PCLKB / 2^CKS ) */
#define IIC0_ICMR1_CKS_MASK                    (0x07)
#define IIC0_ICMR1_BCWP                   (1 <<  3) /* 08: BC Write Protect (This bit is read as 1.) */
#define IIC0_ICMR1_BC                     (3 <<  0) /* 01: Bit Counter */
#define IIC0_ICMR1_BC_MASK                     (0x07)
#define IIC0_ICMR2_OFFSET                 0x0003
#define IIC0_ICMR2                        (IIC0_BASE + IIC0_ICMR2_OFFSET)
#define IIC0_ICMR2_DLCS                   (1 <<  7) /* 80: SDA Output Delay Clock Source Select */
#define IIC0_ICMR2_SDDL                   (3 <<  4) /* 10: SDA Output Delay Counter */
#define IIC0_ICMR2_SDDL_MASK                   (0x07)
#define IIC0_ICMR2_TMOH                   (1 <<  2) /* 04: Timeout H Count Control */
#define IIC0_ICMR2_TMOL                   (1 <<  1) /* 02: Timeout L Count Control */
#define IIC0_ICMR2_TMOS                   (1 <<  0) /* 01: Timeout Detection Time Select */
#define IIC0_ICMR3_OFFSET                 0x0004
#define IIC0_ICMR3                        (IIC0_BASE + IIC0_ICMR3_OFFSET)
#define IIC0_ICMR3_SMBS                   (1 <<  7) /* 80: SMBus/I2C Bus Selection */
#define IIC0_ICMR3_WAIT                   (1 <<  6) /* 40: WAIT Note: When the value of the WAIT bit is to be read, be sure to read the ICDRR beforehand. */
#define IIC0_ICMR3_RDRFS                  (1 <<  5) /* 20: RDRF Flag Set Timing Selection */
#define IIC0_ICMR3_ACKWP                  (1 <<  4) /* 10: ACKBT Write Protect */
#define IIC0_ICMR3_ACKBT                  (1 <<  3) /* 08: Transmit Acknowledge */
#define IIC0_ICMR3_ACKBR                  (1 <<  2) /* 04: Receive Acknowledge */
#define IIC0_ICMR3_NF                     (2 <<  0) /* 01: Noise Filter Stage Selection */
#define IIC0_ICMR3_NF_MASK                     (0x03)
#define IIC0_ICFER_OFFSET                 0x0005
#define IIC0_ICFER                        (IIC0_BASE + IIC0_ICFER_OFFSET)
#define IIC0_ICFER_SCLE                   (1 <<  6) /* 40: SCL Synchronous Circuit Enable */
#define IIC0_ICFER_NFE                    (1 <<  5) /* 20: Digital Noise Filter Circuit Enable */
#define IIC0_ICFER_NACKE                  (1 <<  4) /* 10: NACK Reception Transfer Suspension Enable */
#define IIC0_ICFER_SALE                   (1 <<  3) /* 08: Slave Arbitration-Lost Detection Enable */
#define IIC0_ICFER_NALE                   (1 <<  2) /* 04: NACK Transmission Arbitration-Lost Detection Enable */
#define IIC0_ICFER_MALE                   (1 <<  1) /* 02: Master Arbitration-Lost Detection Enable */
#define IIC0_ICFER_TMOE                   (1 <<  0) /* 01: Timeout Function Enable */
#define IIC0_ICSER_OFFSET                 0x0006
#define IIC0_ICSER                        (IIC0_BASE + IIC0_ICSER_OFFSET)
#define IIC0_ICSER_HOAE                   (1 <<  7) /* 80: Host Address Enable */
#define IIC0_ICSER_DIDE                   (1 <<  5) /* 20: Device-ID Address Detection Enable */
#define IIC0_ICSER_GCAE                   (1 <<  3) /* 08: General Call Address Enable */
#define IIC0_ICSER_SAR2E                  (1 <<  2) /* 04: Slave Address Register 2 Enable */
#define IIC0_ICSER_SAR1E                  (1 <<  1) /* 02: Slave Address Register 1 Enable */
#define IIC0_ICSER_SAR0E                  (1 <<  0) /* 01: Slave Address Register 0 Enable */
#define IIC0_ICIER_OFFSET                 0x0007
#define IIC0_ICIER                        (IIC0_BASE + IIC0_ICIER_OFFSET)
#define IIC0_ICIER_TIE                    (1 <<  7) /* 80: Transmit Data Empty Interrupt Request Enable */
#define IIC0_ICIER_TEIE                   (1 <<  6) /* 40: Transmit End Interrupt Request Enable */
#define IIC0_ICIER_RIE                    (1 <<  5) /* 20: Receive Data Full Interrupt Request Enable */
#define IIC0_ICIER_NAKIE                  (1 <<  4) /* 10: NACK Reception Interrupt Request Enable */
#define IIC0_ICIER_SPIE                   (1 <<  3) /* 08: Stop Condition Detection Interrupt Request Enable */
#define IIC0_ICIER_STIE                   (1 <<  2) /* 04: Start Condition Detection Interrupt Request Enable */
#define IIC0_ICIER_ALIE                   (1 <<  1) /* 02: Arbitration-Lost Interrupt Request Enable */
#define IIC0_ICIER_TMOIE                  (1 <<  0) /* 01: Timeout Interrupt Request Enable */
#define IIC0_ICSR1_OFFSET                 0x0008
#define IIC0_ICSR1                        (IIC0_BASE + IIC0_ICSR1_OFFSET)
#define IIC0_ICSR1_HOA                    (1 <<  7) /* 80: Host Address Detection Flag */
#define IIC0_ICSR1_DID                    (1 <<  5) /* 20: Device-ID Address Detection Flag */
#define IIC0_ICSR1_GCA                    (1 <<  3) /* 08: General Call Address Detection Flag */
#define IIC0_ICSR1_AAS2                   (1 <<  2) /* 04: Slave Address 2 Detection Flag */
#define IIC0_ICSR1_AAS1                   (1 <<  1) /* 02: Slave Address 1 Detection Flag */
#define IIC0_ICSR1_AAS0                   (1 <<  0) /* 01: Slave Address 0 Detection Flag */
#define IIC0_ICSR2_OFFSET                 0x0009
#define IIC0_ICSR2                        (IIC0_BASE + IIC0_ICSR2_OFFSET)
#define IIC0_ICSR2_TDRE                   (1 <<  7) /* 80: Transmit Data Empty Flag */
#define IIC0_ICSR2_TEND                   (1 <<  6) /* 40: Transmit End Flag */
#define IIC0_ICSR2_RDRF                   (1 <<  5) /* 20: Receive Data Full Flag */
#define IIC0_ICSR2_NACKF                  (1 <<  4) /* 10: NACK Detection Flag */
#define IIC0_ICSR2_STOP                   (1 <<  3) /* 08: Stop Condition Detection Flag */
#define IIC0_ICSR2_START                  (1 <<  2) /* 04: Start Condition Detection Flag */
#define IIC0_ICSR2_AL                     (1 <<  1) /* 02: Arbitration-Lost Flag */
#define IIC0_ICSR2_TMOF                   (1 <<  0) /* 01: Timeout Detection Flag */
#define IIC0_SARL_SIZE                    3
#define IIC0_SARL_OFFSET                  0x000a
#define IIC0_SARL(p)                      (IIC0_BASE + IIC0_SARL_OFFSET + (p)*0x0002)
#define IIC0_SARL_SVA                     (8 <<  0) /* 01: A slave address is set. 7-Bit Address = SVA[7:1] 10-Bit Address = { SVA9,SVA8,SVA[7:0] } */
#define IIC0_SARL_SVA_MASK                     (0xff)
#define IIC0_SARU_SIZE                    3
#define IIC0_SARU_OFFSET                  0x000b
#define IIC0_SARU(p)                      (IIC0_BASE + IIC0_SARU_OFFSET + (p)*0x0002)
#define IIC0_SARU_SVA9                    (1 <<  2) /* 04: 10-Bit Address(bit9) */
#define IIC0_SARU_SVA8                    (1 <<  1) /* 02: 10-Bit Address(bit8) */
#define IIC0_SARU_FS                      (1 <<  0) /* 01: 7-Bit/10-Bit Address Format Selection */
#define IIC0_ICBRL_OFFSET                 0x0010
#define IIC0_ICBRL                        (IIC0_BASE + IIC0_ICBRL_OFFSET)
#define IIC0_ICBRL_BRL                    (5 <<  0) /* 01: Bit Rate Low-Level Period (Low-level period of SCL clock) */
#define IIC0_ICBRL_BRL_MASK                    (0x1f)
#define IIC0_ICBRH_OFFSET                 0x0011
#define IIC0_ICBRH                        (IIC0_BASE + IIC0_ICBRH_OFFSET)
#define IIC0_ICBRH_BRH                    (5 <<  0) /* 01: Bit Rate High-Level Period (High-level period of SCL clock) */
#define IIC0_ICBRH_BRH_MASK                    (0x1f)
#define IIC0_ICDRT_OFFSET                 0x0012
#define IIC0_ICDRT                        (IIC0_BASE + IIC0_ICDRT_OFFSET)
#define IIC0_ICDRT_ICDRT                  (8 <<  0) /* 01: 8-bit read-write register that stores transmit data. */
#define IIC0_ICDRT_ICDRT_MASK                  (0xff)
#define IIC0_ICDRR_OFFSET                 0x0013
#define IIC0_ICDRR                        (IIC0_BASE + IIC0_ICDRR_OFFSET)
#define IIC0_ICDRR_ICDRR                  (8 <<  0) /* 01: 8-bit register that stores the received data */
#define IIC0_ICDRR_ICDRR_MASK                  (0xff)
#define IIC0_ICWUR_OFFSET                 0x0016
#define IIC0_ICWUR                        (IIC0_BASE + IIC0_ICWUR_OFFSET)
#define IIC0_ICWUR_WUE                    (1 <<  7) /* 80: Wakeup Function Enable */
#define IIC0_ICWUR_WUIE                   (1 <<  6) /* 40: Wakeup Interrupt Request Enable */
#define IIC0_ICWUR_WUF                    (1 <<  5) /* 20: Wakeup Event Occurrence Flag */
#define IIC0_ICWUR_WUACK                  (1 <<  4) /* 10: ACK bit for Wakeup Mode */
#define IIC0_ICWUR_WUAFA                  (1 <<  0) /* 01: Wakeup Analog Filter Additional Selection */
#define IIC0_ICWUR2_OFFSET                0x0017
#define IIC0_ICWUR2                       (IIC0_BASE + IIC0_ICWUR2_OFFSET)
#define IIC0_ICWUR2_WUSYF                 (1 <<  2) /* 04: Wake-up Function Synchronous Operation Status Flag */
#define IIC0_ICWUR2_WUASYF                (1 <<  1) /* 02: Wake-up Function Asynchronous Operation Status Flag */
#define IIC0_ICWUR2_WUSEN                 (1 <<  0) /* 01: Wake-up Function Synchronous Enable */

/* IIC1 - Inter-Integrated Circuit 1 */
#define IIC1_BASE                         0x40053100
#define IIC1_ICCR1_OFFSET                 0x0000
#define IIC1_ICCR1                        (IIC1_BASE + IIC1_ICCR1_OFFSET)
#define IIC1_ICCR1_ICE                    (1 <<  7) /* 80: I2C Bus Interface Enable */
#define IIC1_ICCR1_IICRST                 (1 <<  6) /* 40: I2C Bus Interface Internal Reset Note:If an internal reset is initiated using the IICRST bit for a bus hang-up occurred during communication with the master device in slave mode, the states may become different between the slave device and the master device (due to the difference in the bit counter information). */
#define IIC1_ICCR1_CLO                    (1 <<  5) /* 20: Extra SCL Clock Cycle Output */
#define IIC1_ICCR1_SOWP                   (1 <<  4) /* 10: SCLO/SDAO Write Protect */
#define IIC1_ICCR1_SCLO                   (1 <<  3) /* 08: SCL Output Control/Monitor */
#define IIC1_ICCR1_SDAO                   (1 <<  2) /* 04: SDA Output Control/Monitor */
#define IIC1_ICCR1_SCLI                   (1 <<  1) /* 02: SCL Line Monitor */
#define IIC1_ICCR1_SDAI                   (1 <<  0) /* 01: SDA Line Monitor */
#define IIC1_ICCR2_OFFSET                 0x0001
#define IIC1_ICCR2                        (IIC1_BASE + IIC1_ICCR2_OFFSET)
#define IIC1_ICCR2_BBSY                   (1 <<  7) /* 80: Bus Busy Detection Flag */
#define IIC1_ICCR2_MST                    (1 <<  6) /* 40: Master/Slave Mode */
#define IIC1_ICCR2_TRS                    (1 <<  5) /* 20: Transmit/Receive Mode */
#define IIC1_ICCR2_SP                     (1 <<  3) /* 08: Stop Condition Issuance Request Note: Writing to the SP bit is not possible while the setting of the BBSY flag is 0 (bus free state). Note: Do not set the SP bit to 1 while a restart condition is being issued. */
#define IIC1_ICCR2_RS                     (1 <<  2) /* 04: Restart Condition Issuance Request Note: Do not set the RS bit to 1 while issuing a stop condition. */
#define IIC1_ICCR2_ST                     (1 <<  1) /* 02: Start Condition Issuance Request Set the ST bit to 1 (start condition issuance request) when the BBSY flag is set to 0 (bus free state). */
#define IIC1_ICMR1_OFFSET                 0x0002
#define IIC1_ICMR1                        (IIC1_BASE + IIC1_ICMR1_OFFSET)
#define IIC1_ICMR1_MTWP                   (1 <<  7) /* 80: MST/TRS Write Protect */
#define IIC1_ICMR1_CKS                    (3 <<  4) /* 10: Internal Reference Clock (fIIC) Selection ( fIIC = PCLKB / 2^CKS ) */
#define IIC1_ICMR1_CKS_MASK                    (0x07)
#define IIC1_ICMR1_BCWP                   (1 <<  3) /* 08: BC Write Protect (This bit is read as 1.) */
#define IIC1_ICMR1_BC                     (3 <<  0) /* 01: Bit Counter */
#define IIC1_ICMR1_BC_MASK                     (0x07)
#define IIC1_ICMR2_OFFSET                 0x0003
#define IIC1_ICMR2                        (IIC1_BASE + IIC1_ICMR2_OFFSET)
#define IIC1_ICMR2_DLCS                   (1 <<  7) /* 80: SDA Output Delay Clock Source Select */
#define IIC1_ICMR2_SDDL                   (3 <<  4) /* 10: SDA Output Delay Counter */
#define IIC1_ICMR2_SDDL_MASK                   (0x07)
#define IIC1_ICMR2_TMOH                   (1 <<  2) /* 04: Timeout H Count Control */
#define IIC1_ICMR2_TMOL                   (1 <<  1) /* 02: Timeout L Count Control */
#define IIC1_ICMR2_TMOS                   (1 <<  0) /* 01: Timeout Detection Time Select */
#define IIC1_ICMR3_OFFSET                 0x0004
#define IIC1_ICMR3                        (IIC1_BASE + IIC1_ICMR3_OFFSET)
#define IIC1_ICMR3_SMBS                   (1 <<  7) /* 80: SMBus/I2C Bus Selection */
#define IIC1_ICMR3_WAIT                   (1 <<  6) /* 40: WAIT Note: When the value of the WAIT bit is to be read, be sure to read the ICDRR beforehand. */
#define IIC1_ICMR3_RDRFS                  (1 <<  5) /* 20: RDRF Flag Set Timing Selection */
#define IIC1_ICMR3_ACKWP                  (1 <<  4) /* 10: ACKBT Write Protect */
#define IIC1_ICMR3_ACKBT                  (1 <<  3) /* 08: Transmit Acknowledge */
#define IIC1_ICMR3_ACKBR                  (1 <<  2) /* 04: Receive Acknowledge */
#define IIC1_ICMR3_NF                     (2 <<  0) /* 01: Noise Filter Stage Selection */
#define IIC1_ICMR3_NF_MASK                     (0x03)
#define IIC1_ICFER_OFFSET                 0x0005
#define IIC1_ICFER                        (IIC1_BASE + IIC1_ICFER_OFFSET)
#define IIC1_ICFER_SCLE                   (1 <<  6) /* 40: SCL Synchronous Circuit Enable */
#define IIC1_ICFER_NFE                    (1 <<  5) /* 20: Digital Noise Filter Circuit Enable */
#define IIC1_ICFER_NACKE                  (1 <<  4) /* 10: NACK Reception Transfer Suspension Enable */
#define IIC1_ICFER_SALE                   (1 <<  3) /* 08: Slave Arbitration-Lost Detection Enable */
#define IIC1_ICFER_NALE                   (1 <<  2) /* 04: NACK Transmission Arbitration-Lost Detection Enable */
#define IIC1_ICFER_MALE                   (1 <<  1) /* 02: Master Arbitration-Lost Detection Enable */
#define IIC1_ICFER_TMOE                   (1 <<  0) /* 01: Timeout Function Enable */
#define IIC1_ICSER_OFFSET                 0x0006
#define IIC1_ICSER                        (IIC1_BASE + IIC1_ICSER_OFFSET)
#define IIC1_ICSER_HOAE                   (1 <<  7) /* 80: Host Address Enable */
#define IIC1_ICSER_DIDE                   (1 <<  5) /* 20: Device-ID Address Detection Enable */
#define IIC1_ICSER_GCAE                   (1 <<  3) /* 08: General Call Address Enable */
#define IIC1_ICSER_SAR2E                  (1 <<  2) /* 04: Slave Address Register 2 Enable */
#define IIC1_ICSER_SAR1E                  (1 <<  1) /* 02: Slave Address Register 1 Enable */
#define IIC1_ICSER_SAR0E                  (1 <<  0) /* 01: Slave Address Register 0 Enable */
#define IIC1_ICIER_OFFSET                 0x0007
#define IIC1_ICIER                        (IIC1_BASE + IIC1_ICIER_OFFSET)
#define IIC1_ICIER_TIE                    (1 <<  7) /* 80: Transmit Data Empty Interrupt Request Enable */
#define IIC1_ICIER_TEIE                   (1 <<  6) /* 40: Transmit End Interrupt Request Enable */
#define IIC1_ICIER_RIE                    (1 <<  5) /* 20: Receive Data Full Interrupt Request Enable */
#define IIC1_ICIER_NAKIE                  (1 <<  4) /* 10: NACK Reception Interrupt Request Enable */
#define IIC1_ICIER_SPIE                   (1 <<  3) /* 08: Stop Condition Detection Interrupt Request Enable */
#define IIC1_ICIER_STIE                   (1 <<  2) /* 04: Start Condition Detection Interrupt Request Enable */
#define IIC1_ICIER_ALIE                   (1 <<  1) /* 02: Arbitration-Lost Interrupt Request Enable */
#define IIC1_ICIER_TMOIE                  (1 <<  0) /* 01: Timeout Interrupt Request Enable */
#define IIC1_ICSR1_OFFSET                 0x0008
#define IIC1_ICSR1                        (IIC1_BASE + IIC1_ICSR1_OFFSET)
#define IIC1_ICSR1_HOA                    (1 <<  7) /* 80: Host Address Detection Flag */
#define IIC1_ICSR1_DID                    (1 <<  5) /* 20: Device-ID Address Detection Flag */
#define IIC1_ICSR1_GCA                    (1 <<  3) /* 08: General Call Address Detection Flag */
#define IIC1_ICSR1_AAS2                   (1 <<  2) /* 04: Slave Address 2 Detection Flag */
#define IIC1_ICSR1_AAS1                   (1 <<  1) /* 02: Slave Address 1 Detection Flag */
#define IIC1_ICSR1_AAS0                   (1 <<  0) /* 01: Slave Address 0 Detection Flag */
#define IIC1_ICSR2_OFFSET                 0x0009
#define IIC1_ICSR2                        (IIC1_BASE + IIC1_ICSR2_OFFSET)
#define IIC1_ICSR2_TDRE                   (1 <<  7) /* 80: Transmit Data Empty Flag */
#define IIC1_ICSR2_TEND                   (1 <<  6) /* 40: Transmit End Flag */
#define IIC1_ICSR2_RDRF                   (1 <<  5) /* 20: Receive Data Full Flag */
#define IIC1_ICSR2_NACKF                  (1 <<  4) /* 10: NACK Detection Flag */
#define IIC1_ICSR2_STOP                   (1 <<  3) /* 08: Stop Condition Detection Flag */
#define IIC1_ICSR2_START                  (1 <<  2) /* 04: Start Condition Detection Flag */
#define IIC1_ICSR2_AL                     (1 <<  1) /* 02: Arbitration-Lost Flag */
#define IIC1_ICSR2_TMOF                   (1 <<  0) /* 01: Timeout Detection Flag */
#define IIC1_SARL_SIZE                    3
#define IIC1_SARL_OFFSET                  0x000a
#define IIC1_SARL(p)                      (IIC1_BASE + IIC1_SARL_OFFSET + (p)*0x0002)
#define IIC1_SARL_SVA                     (8 <<  0) /* 01: A slave address is set. 7-Bit Address = SVA[7:1] 10-Bit Address = { SVA9,SVA8,SVA[7:0] } */
#define IIC1_SARL_SVA_MASK                     (0xff)
#define IIC1_SARU_SIZE                    3
#define IIC1_SARU_OFFSET                  0x000b
#define IIC1_SARU(p)                      (IIC1_BASE + IIC1_SARU_OFFSET + (p)*0x0002)
#define IIC1_SARU_SVA9                    (1 <<  2) /* 04: 10-Bit Address(bit9) */
#define IIC1_SARU_SVA8                    (1 <<  1) /* 02: 10-Bit Address(bit8) */
#define IIC1_SARU_FS                      (1 <<  0) /* 01: 7-Bit/10-Bit Address Format Selection */
#define IIC1_ICBRL_OFFSET                 0x0010
#define IIC1_ICBRL                        (IIC1_BASE + IIC1_ICBRL_OFFSET)
#define IIC1_ICBRL_BRL                    (5 <<  0) /* 01: Bit Rate Low-Level Period (Low-level period of SCL clock) */
#define IIC1_ICBRL_BRL_MASK                    (0x1f)
#define IIC1_ICBRH_OFFSET                 0x0011
#define IIC1_ICBRH                        (IIC1_BASE + IIC1_ICBRH_OFFSET)
#define IIC1_ICBRH_BRH                    (5 <<  0) /* 01: Bit Rate High-Level Period (High-level period of SCL clock) */
#define IIC1_ICBRH_BRH_MASK                    (0x1f)
#define IIC1_ICDRT_OFFSET                 0x0012
#define IIC1_ICDRT                        (IIC1_BASE + IIC1_ICDRT_OFFSET)
#define IIC1_ICDRT_ICDRT                  (8 <<  0) /* 01: 8-bit read-write register that stores transmit data. */
#define IIC1_ICDRT_ICDRT_MASK                  (0xff)
#define IIC1_ICDRR_OFFSET                 0x0013
#define IIC1_ICDRR                        (IIC1_BASE + IIC1_ICDRR_OFFSET)
#define IIC1_ICDRR_ICDRR                  (8 <<  0) /* 01: 8-bit register that stores the received data */
#define IIC1_ICDRR_ICDRR_MASK                  (0xff)

/* IWDT - Independent Watchdog Timer */
#define IWDT_BASE                         0x40044400
#define IWDT_IWDTRR_OFFSET                0x0000
#define IWDT_IWDTRR                       (IWDT_BASE + IWDT_IWDTRR_OFFSET)
#define IWDT_IWDTRR_IWDTRR                (8 <<  0) /* 01: The counter is refreshed by writing 0x00 and then writing 0xFF to this register. */
#define IWDT_IWDTRR_IWDTRR_MASK                (0xff)
#define IWDT_IWDTSR_OFFSET                0x0004
#define IWDT_IWDTSR                       (IWDT_BASE + IWDT_IWDTSR_OFFSET)
#define IWDT_IWDTSR_REFEF                 (1 << 15) /* 8000: Refresh Error Flag */
#define IWDT_IWDTSR_UNDFF                 (1 << 14) /* 4000: Underflow Flag */
#define IWDT_IWDTSR_CNTVAL                (14 <<  0) /* 01: Counter Value Value counted by the counter */
#define IWDT_IWDTSR_CNTVAL_MASK                (0x3fff)

/* KINT - Key Interrupt Function */
#define KINT_BASE                         0x40080000
#define KINT_KRCTL_OFFSET                 0x0000
#define KINT_KRCTL                        (KINT_BASE + KINT_KRCTL_OFFSET)
#define KINT_KRCTL_KRMD                   (1 <<  7) /* 80: Usage of Key Interrupt Flags(KR0 to KR7) */
#define KINT_KRCTL_KREG                   (1 <<  0) /* 01: Detection Edge Selection (KRF0 to KRF7) */
#define KINT_KRF_OFFSET                   0x0004
#define KINT_KRF                          (KINT_BASE + KINT_KRF_OFFSET)
#define KINT_KRF_KRF7                     (1 <<  7) /* 80: Key interrupt flag 7 */
#define KINT_KRF_KRF6                     (1 <<  6) /* 40: Key interrupt flag 6 */
#define KINT_KRF_KRF5                     (1 <<  5) /* 20: Key interrupt flag 5 */
#define KINT_KRF_KRF4                     (1 <<  4) /* 10: Key interrupt flag 4 */
#define KINT_KRF_KRF3                     (1 <<  3) /* 08: Key interrupt flag 3 */
#define KINT_KRF_KRF2                     (1 <<  2) /* 04: Key interrupt flag 2 */
#define KINT_KRF_KRF1                     (1 <<  1) /* 02: Key interrupt flag 1 */
#define KINT_KRF_KRF0                     (1 <<  0) /* 01: Key interrupt flag 0 */
#define KINT_KRM_OFFSET                   0x0008
#define KINT_KRM                          (KINT_BASE + KINT_KRM_OFFSET)
#define KINT_KRM_KRM7                     (1 <<  7) /* 80: Key interrupt mode control 7 */
#define KINT_KRM_KRM6                     (1 <<  6) /* 40: Key interrupt mode control 6 */
#define KINT_KRM_KRM5                     (1 <<  5) /* 20: Key interrupt mode control 5 */
#define KINT_KRM_KRM4                     (1 <<  4) /* 10: Key interrupt mode control 4 */
#define KINT_KRM_KRM3                     (1 <<  3) /* 08: Key interrupt mode control 3 */
#define KINT_KRM_KRM2                     (1 <<  2) /* 04: Key interrupt mode control 2 */
#define KINT_KRM_KRM1                     (1 <<  1) /* 02: Key interrupt mode control 1 */
#define KINT_KRM_KRM0                     (1 <<  0) /* 01: Key interrupt mode control 0 */

/* MSTP - Module Stop Control B,C,D */
#define MSTP_BASE                         0x40047000
#define MSTP_MSTPCRB_OFFSET               0x0000
#define MSTP_MSTPCRB                      (MSTP_BASE + MSTP_MSTPCRB_OFFSET)
#define MSTP_MSTPCRB_MSTPB31              (1 << 31) /* 80000000: Serial Communication Interface 0 Module Stop */
#define MSTP_MSTPCRB_MSTPB30              (1 << 30) /* 40000000: Serial Communication Interface 1 Module Stop */
#define MSTP_MSTPCRB_MSTPB29              (1 << 29) /* 20000000: Serial Communication Interface 2 Module Stop */
#define MSTP_MSTPCRB_MSTPB22              (1 << 22) /* 400000: Serial Communication Interface 9 Module Stop */
#define MSTP_MSTPCRB_MSTPB19              (1 << 19) /* 80000: Serial Peripheral Interface 0 Module Stop */
#define MSTP_MSTPCRB_MSTPB18              (1 << 18) /* 40000: Serial Peripheral Interface 1 Module Stop */
#define MSTP_MSTPCRB_MSTPB11              (1 << 11) /* 800: Universal Serial Bus 2.0 FS Interface Module Stop */
#define MSTP_MSTPCRB_MSTPB9               (1 <<  9) /* 200: I2C Bus Interface 0 Module Stop */
#define MSTP_MSTPCRB_MSTPB8               (1 <<  8) /* 100: I2C Bus Interface 1 Module Stop */
#define MSTP_MSTPCRB_MSTPB2               (1 <<  2) /* 04: Controller Area Network Module Stop */
#define MSTP_MSTPCRC_OFFSET               0x0004
#define MSTP_MSTPCRC                      (MSTP_BASE + MSTP_MSTPCRC_OFFSET)
#define MSTP_MSTPCRC_MSTPC31              (1 << 31) /* 80000000: SCE5 Module Stop */
#define MSTP_MSTPCRC_MSTPC14              (1 << 14) /* 4000: Event Link Controller Module Stop */
#define MSTP_MSTPCRC_MSTPC13              (1 << 13) /* 2000: Data Operation Circuit Module Stop */
#define MSTP_MSTPCRC_MSTPC8               (1 <<  8) /* 100: Synchronous Serial Interface 0 Module Stop */
#define MSTP_MSTPCRC_MSTPC4               (1 <<  4) /* 10: Segment LCD Controller Module Stop */
#define MSTP_MSTPCRC_MSTPC3               (1 <<  3) /* 08: Capacitive Touch Sensing Unit Module Stop */
#define MSTP_MSTPCRC_MSTPC1               (1 <<  1) /* 02: Cyclic Redundancy Check Calculator Module Stop */
#define MSTP_MSTPCRC_MSTPC0               (1 <<  0) /* 01: Clock Frequency Accuracy Measurement Circuit Module Stop */
#define MSTP_MSTPCRD_OFFSET               0x0008
#define MSTP_MSTPCRD                      (MSTP_BASE + MSTP_MSTPCRD_OFFSET)
#define MSTP_MSTPCRD_MSTPD31              (1 << 31) /* 80000000: Operational Amplifier Module Stop */
#define MSTP_MSTPCRD_MSTPD29              (1 << 29) /* 20000000: Low-Power Analog Comparator Module Stop */
#define MSTP_MSTPCRD_MSTPD20              (1 << 20) /* 100000: 12-Bit D/A Converter Module Stop */
#define MSTP_MSTPCRD_MSTPD19              (1 << 19) /* 80000: 8-bit D/A Converter Module Stop */
#define MSTP_MSTPCRD_MSTPD16              (1 << 16) /* 10000: 14-Bit A/D Converter Module Stop */
#define MSTP_MSTPCRD_MSTPD14              (1 << 14) /* 4000: Port Output Enable for GPT Module Stop */
#define MSTP_MSTPCRD_MSTPD6               (1 <<  6) /* 40: General PWM Timer 169 to 164 Module Stop */
#define MSTP_MSTPCRD_MSTPD5               (1 <<  5) /* 20: General PWM Timer 323 to 320 Module Stop */
#define MSTP_MSTPCRD_MSTPD3               (1 <<  3) /* 08: Asynchronous General Purpose Timer 0 Module Stop */
#define MSTP_MSTPCRD_MSTPD2               (1 <<  2) /* 04: Asynchronous General Purpose Timer 1 Module Stop */

/* MMPU - Bus Master MPU */
#define MMPU_BASE                         0x40000000
#define MMPU_MMPUCTLA_OFFSET              0x0000
#define MMPU_MMPUCTLA                     (MMPU_BASE + MMPU_MMPUCTLA_OFFSET)
#define MMPU_MMPUCTLA_KEY                 (8 <<  8) /* 100: Key Code These bits are used to enable or disable writing of the OAD and ENABLE bit. */
#define MMPU_MMPUCTLA_KEY_MASK                 (0xff)
#define MMPU_MMPUCTLA_OAD                 (1 <<  1) /* 02: Operation after detection */
#define MMPU_MMPUCTLA_ENABLE              (1 <<  0) /* 01: Master Group enable */
#define MMPU_MMPUACA_SIZE                 16
#define MMPU_MMPUACA_OFFSET               0x0200
#define MMPU_MMPUACA(p)                   (MMPU_BASE + MMPU_MMPUACA_OFFSET + (p)*0x0010)
#define MMPU_MMPUACA_WP                   (1 <<  2) /* 04: Write protection */
#define MMPU_MMPUACA_RP                   (1 <<  1) /* 02: Read protection */
#define MMPU_MMPUACA_ENABLE               (1 <<  0) /* 01: Region enable */
#define MMPU_MMPUSA_SIZE                  16
#define MMPU_MMPUSA_OFFSET                0x0204
#define MMPU_MMPUSA(p)                    (MMPU_BASE + MMPU_MMPUSA_OFFSET + (p)*0x0010)
#define MMPU_MMPUSA_MMPUSA                (32 <<  0) /* 01: Address where the region starts, for use in region determination. NOTE: The low-order 2 bits are fixed to 0. */
#define MMPU_MMPUSA_MMPUSA_MASK                (0xffffffff)
#define MMPU_MMPUEA_SIZE                  16
#define MMPU_MMPUEA_OFFSET                0x0208
#define MMPU_MMPUEA(p)                    (MMPU_BASE + MMPU_MMPUEA_OFFSET + (p)*0x0010)
#define MMPU_MMPUEA_MMPUEA                (32 <<  0) /* 01: Region end address register Address where the region end, for use in region determination. NOTE: The low-order 2 bits are fixed to 1. */
#define MMPU_MMPUEA_MMPUEA_MASK                (0xffffffff)
#define MMPU_MMPUPTA_OFFSET               0x0102
#define MMPU_MMPUPTA                      (MMPU_BASE + MMPU_MMPUPTA_OFFSET)
#define MMPU_MMPUPTA_KEY                  (8 <<  8) /* 100: Write Keyword The data written to these bits are not stored. */
#define MMPU_MMPUPTA_KEY_MASK                  (0xff)
#define MMPU_MMPUPTA_PROTECT              (1 <<  0) /* 01: Protection of register (MMPUSAn, MMPUEAn and MMPUACAn) */

/* SMPU - Bus Slave MPU */
#define SMPU_BASE                         0x40000c00
#define SMPU_SMPUCTL_OFFSET               0x0000
#define SMPU_SMPUCTL                      (SMPU_BASE + SMPU_SMPUCTL_OFFSET)
#define SMPU_SMPUCTL_KEY                  (8 <<  8) /* 100: Key Code This bit is used to enable or disable rewriting of the PROTECT and OAD bit. */
#define SMPU_SMPUCTL_KEY_MASK                  (0xff)
#define SMPU_SMPUCTL_PROTECT              (1 <<  1) /* 02: Protection of register */
#define SMPU_SMPUCTL_OAD                  (1 <<  0) /* 01: Master Group enable */
#define SMPU_SMPUMBIU_OFFSET              0x0010
#define SMPU_SMPUMBIU                     (SMPU_BASE + SMPU_SMPUMBIU_OFFSET)
#define SMPU_SMPUMBIU_WPGRPA              (1 <<  3) /* 08: Master Group A Write protection */
#define SMPU_SMPUMBIU_RPGRPA              (1 <<  2) /* 04: Master Group A Read protection */
#define SMPU_SMPUFBIU_OFFSET              0x0014
#define SMPU_SMPUFBIU                     (SMPU_BASE + SMPU_SMPUFBIU_OFFSET)
#define SMPU_SMPUFBIU_WPGRPA              (1 <<  3) /* 08: Master Group A Write protection */
#define SMPU_SMPUFBIU_RPGRPA              (1 <<  2) /* 04: Master Group A Read protection */
#define SMPU_SMPUFBIU_WPCPU               (1 <<  1) /* 02: CPU Write protection */
#define SMPU_SMPUFBIU_RPCPU               (1 <<  0) /* 01: CPU Read protection */
#define SMPU_SMPUSRAM0_OFFSET             0x0018
#define SMPU_SMPUSRAM0                    (SMPU_BASE + SMPU_SMPUSRAM0_OFFSET)
#define SMPU_SMPUSRAM0_WPGRPA             (1 <<  3) /* 08: Master Group A Write protection */
#define SMPU_SMPUSRAM0_RPGRPA             (1 <<  2) /* 04: Master Group A Read protection */
#define SMPU_SMPUSRAM0_WPCPU              (1 <<  1) /* 02: CPU Write protection */
#define SMPU_SMPUSRAM0_RPCPU              (1 <<  0) /* 01: CPU Read protection */
#define SMPU_SMPUPBIU_SIZE                3
#define SMPU_SMPUPBIU_OFFSET              0x0020
#define SMPU_SMPUPBIU(p)                  (SMPU_BASE + SMPU_SMPUPBIU_OFFSET + (p)*0x0004)
#define SMPU_SMPUPBIU_WPGRPA              (1 <<  3) /* 08: Master Group A Write protection */
#define SMPU_SMPUPBIU_RPGRPA              (1 <<  2) /* 04: Master Group A Read protection */
#define SMPU_SMPUPBIU_WPCPU               (1 <<  1) /* 02: CPU Write protection */
#define SMPU_SMPUPBIU_RPCPU               (1 <<  0) /* 01: CPU Read protection */

/* SPMON - CPU Stack Pointer Monitor */
#define SPMON_BASE                        0x40000d00
#define SPMON_MSPMPUOAD_OFFSET            0x0000
#define SPMON_MSPMPUOAD                   (SPMON_BASE + SPMON_MSPMPUOAD_OFFSET)
#define SPMON_MSPMPUOAD_KEY               (8 <<  8) /* 100: Write Keyword The data written to these bits are not stored. */
#define SPMON_MSPMPUOAD_KEY_MASK               (0xff)
#define SPMON_MSPMPUOAD_OAD               (1 <<  0) /* 01: Operation after detection */
#define SPMON_MSPMPUCTL_OFFSET            0x0004
#define SPMON_MSPMPUCTL                   (SPMON_BASE + SPMON_MSPMPUCTL_OFFSET)
#define SPMON_MSPMPUCTL_ERROR             (1 <<  8) /* 100: Stack Pointer Monitor Error Flag */
#define SPMON_MSPMPUCTL_ENABLE            (1 <<  0) /* 01: Stack Pointer Monitor Enable */
#define SPMON_MSPMPUPT_OFFSET             0x0006
#define SPMON_MSPMPUPT                    (SPMON_BASE + SPMON_MSPMPUPT_OFFSET)
#define SPMON_MSPMPUPT_KEY                (8 <<  8) /* 100: Write Keyword The data written to these bits are not stored. */
#define SPMON_MSPMPUPT_KEY_MASK                (0xff)
#define SPMON_MSPMPUPT_PROTECT            (1 <<  0) /* 01: Protection of register (MSPMPUAC, MSPMPUSA and MSPMPUSE) */
#define SPMON_MSPMPUSA_OFFSET             0x0008
#define SPMON_MSPMPUSA                    (SPMON_BASE + SPMON_MSPMPUSA_OFFSET)
#define SPMON_MSPMPUSA_MSPMPUSA           (32 <<  0) /* 01: Region start address register Address where the region starts, for use in region determination. NOTE: Range: 0x1FF00000-0x200FFFFC The low-order 2 bits are fixed to 0. */
#define SPMON_MSPMPUSA_MSPMPUSA_MASK           (0xffffffff)
#define SPMON_MSPMPUEA_OFFSET             0x000c
#define SPMON_MSPMPUEA                    (SPMON_BASE + SPMON_MSPMPUEA_OFFSET)
#define SPMON_MSPMPUEA_MSPMPUEA           (32 <<  0) /* 01: Region end address register Address where the region starts, for use in region determination. NOTE: Range: 0x1FF00003-0x200FFFFF The low-order 2 bits are fixed to 1. */
#define SPMON_MSPMPUEA_MSPMPUEA_MASK           (0xffffffff)
#define SPMON_PSPMPUOAD_OFFSET            0x0010
#define SPMON_PSPMPUOAD                   (SPMON_BASE + SPMON_PSPMPUOAD_OFFSET)
#define SPMON_PSPMPUOAD_KEY               (8 <<  8) /* 100: Key Code The data written to these bits are not stored. */
#define SPMON_PSPMPUOAD_KEY_MASK               (0xff)
#define SPMON_PSPMPUOAD_OAD               (1 <<  0) /* 01: Operation after detection */
#define SPMON_PSPMPUCTL_OFFSET            0x0014
#define SPMON_PSPMPUCTL                   (SPMON_BASE + SPMON_PSPMPUCTL_OFFSET)
#define SPMON_PSPMPUCTL_ERROR             (1 <<  8) /* 100: Stack Pointer Monitor Error Flag */
#define SPMON_PSPMPUCTL_ENABLE            (1 <<  0) /* 01: Stack Pointer Monitor Enable */
#define SPMON_PSPMPUPT_OFFSET             0x0016
#define SPMON_PSPMPUPT                    (SPMON_BASE + SPMON_PSPMPUPT_OFFSET)
#define SPMON_PSPMPUPT_KEY                (8 <<  8) /* 100: Key Code The data written to these bits are not stored. */
#define SPMON_PSPMPUPT_KEY_MASK                (0xff)
#define SPMON_PSPMPUPT_PROTECT            (1 <<  0) /* 01: Protection register (PSPMPUAC, PSPMPUSA and PSPMPUSE) */
#define SPMON_PSPMPUSA_OFFSET             0x0018
#define SPMON_PSPMPUSA                    (SPMON_BASE + SPMON_PSPMPUSA_OFFSET)
#define SPMON_PSPMPUSA_PSPMPUSA           (32 <<  0) /* 01: Region start address register Address where the region starts, for use in region determination. NOTE: Range: 0x1FF00000-0x200FFFFC The low-order 2 bits are fixed to 0. */
#define SPMON_PSPMPUSA_PSPMPUSA_MASK           (0xffffffff)
#define SPMON_PSPMPUEA_OFFSET             0x001c
#define SPMON_PSPMPUEA                    (SPMON_BASE + SPMON_PSPMPUEA_OFFSET)
#define SPMON_PSPMPUEA_PSPMPUEA           (32 <<  0) /* 01: Region end address register Address where the region starts, for use in region determination. NOTE: Range: 0x1FF00003-0x200FFFFF The low-order 2 bits are fixed to 1. */
#define SPMON_PSPMPUEA_PSPMPUEA_MASK           (0xffffffff)

/* OPAMP - OperationalAmplifier */
#define OPAMP_BASE                        0x40086000
#define OPAMP_AMPMC_OFFSET                0x0008
#define OPAMP_AMPMC                       (OPAMP_BASE + OPAMP_AMPMC_OFFSET)
#define OPAMP_AMPMC_AMPSP                 (1 <<  7) /* 80: Operation mode selection */
#define OPAMP_AMPMC_AMPPC3                (1 <<  3) /* 08: Operational amplifier precharge control status */
#define OPAMP_AMPMC_AMPPC2                (1 <<  2) /* 04: Operational amplifier precharge control status */
#define OPAMP_AMPMC_AMPPC1                (1 <<  1) /* 02: Operational amplifier precharge control status */
#define OPAMP_AMPMC_AMPPC0                (1 <<  0) /* 01: Operational amplifier precharge control status */
#define OPAMP_AMPTRM_OFFSET               0x0009
#define OPAMP_AMPTRM                      (OPAMP_BASE + OPAMP_AMPTRM_OFFSET)
#define OPAMP_AMPTRM_AMPTRM31             (1 <<  7) /* 80: Operational amplifier function activation/stop trigger control */
#define OPAMP_AMPTRM_AMPTRM30             (1 <<  6) /* 40: Operational amplifier function activation/stop trigger control */
#define OPAMP_AMPTRM_AMPTRM21             (1 <<  5) /* 20: Operational amplifier function activation/stop trigger control */
#define OPAMP_AMPTRM_AMPTRM20             (1 <<  4) /* 10: Operational amplifier function activation/stop trigger control */
#define OPAMP_AMPTRM_AMPTRM11             (1 <<  3) /* 08: Operational amplifier function activation/stop trigger control */
#define OPAMP_AMPTRM_AMPTRM10             (1 <<  2) /* 04: Operational amplifier function activation/stop trigger control */
#define OPAMP_AMPTRM_AMPTRM01             (1 <<  1) /* 02: Operational amplifier function activation/stop trigger control */
#define OPAMP_AMPTRM_AMPTRM00             (1 <<  0) /* 01: Operational amplifier function activation/stop trigger control */
#define OPAMP_AMPTRS_OFFSET               0x000a
#define OPAMP_AMPTRS                      (OPAMP_BASE + OPAMP_AMPTRS_OFFSET)
#define OPAMP_AMPTRS_AMPTRS               (2 <<  0) /* 01: ELC trigger selection Do not change the value of the AMPTRS register after setting the AMPTRM register. */
#define OPAMP_AMPTRS_AMPTRS_MASK               (0x03)
#define OPAMP_AMPC_OFFSET                 0x000b
#define OPAMP_AMPC                        (OPAMP_BASE + OPAMP_AMPC_OFFSET)
#define OPAMP_AMPC_IREFE                  (1 <<  7) /* 80: Operation control of operational amplifier reference current circuit */
#define OPAMP_AMPC_AMPE3                  (1 <<  3) /* 08: Operation control of operational amplifier(UNIT3) */
#define OPAMP_AMPC_AMPE2                  (1 <<  2) /* 04: Operation control of operational amplifier(UNIT2) */
#define OPAMP_AMPC_AMPE1                  (1 <<  1) /* 02: Operation control of operational amplifier(UNIT1) */
#define OPAMP_AMPC_AMPE0                  (1 <<  0) /* 01: Operation control of operational amplifier(UNIT0) */
#define OPAMP_AMPMON_OFFSET               0x000c
#define OPAMP_AMPMON                      (OPAMP_BASE + OPAMP_AMPMON_OFFSET)
#define OPAMP_AMPMON_AMPMON3              (1 <<  3) /* 08: Operational amplifier status(UNIT3) */
#define OPAMP_AMPMON_AMPMON2              (1 <<  2) /* 04: Operational amplifier status(UNIT2) */
#define OPAMP_AMPMON_AMPMON1              (1 <<  1) /* 02: Operational amplifier status(UNIT1) */
#define OPAMP_AMPMON_AMPMON0              (1 <<  0) /* 01: Operational amplifier status(UNIT0) */

/* POEG - Port Output Enable Module for GPT */
#define POEG_BASE                         0x40042000
#define POEG_POEGG_SIZE                   2
#define POEG_POEGG_OFFSET                 0x0000
#define POEG_POEGG(p)                     (POEG_BASE + POEG_POEGG_OFFSET + (p)*0x0100)
#define POEG_POEGG_NFCS                   (2 << 30) /* 40000000: Noise Filter Clock Select */
#define POEG_POEGG_NFCS_MASK                   (0x03)
#define POEG_POEGG_NFEN                   (1 << 29) /* 20000000: Noise Filter Enable */
#define POEG_POEGG_INV                    (1 << 28) /* 10000000: GTETRG Input Reverse */
#define POEG_POEGG_ST                     (1 << 16) /* 10000: GTETRG Input Status Flag */
#define POEG_POEGG_OSTPE                  (1 <<  6) /* 40: Oscillation Stop Detection Enable Note: Can be modified only once after a reset. */
#define POEG_POEGG_IOCE                   (1 <<  5) /* 20: Output-disable Request Enable from GPT Note: Can be modified only once after a reset. */
#define POEG_POEGG_PIDE                   (1 <<  4) /* 10: Port Input Detection Enable Note: Can be modified only once after a reset. */
#define POEG_POEGG_SSF                    (1 <<  3) /* 08: Software Stop Flag */
#define POEG_POEGG_OSTPF                  (1 <<  2) /* 04: Oscillation Stop Detection Flag */
#define POEG_POEGG_IOCF                   (1 <<  1) /* 02: Output-disable Request Detection Flag from GPT */
#define POEG_POEGG_PIDF                   (1 <<  0) /* 01: Port Input Detection Flag */

/* SRAM - SRAM Control */
#define SRAM_BASE                         0x40002000
#define SRAM_PARIOAD_OFFSET               0x0000
#define SRAM_PARIOAD                      (SRAM_BASE + SRAM_PARIOAD_OFFSET)
#define SRAM_PARIOAD_OAD                  (1 <<  0) /* 01: Operation after Detection */
#define SRAM_SRAMPRCR_OFFSET              0x0004
#define SRAM_SRAMPRCR                     (SRAM_BASE + SRAM_SRAMPRCR_OFFSET)
#define SRAM_SRAMPRCR_KW                  (7 <<  1) /* 02: Write Key Code */
#define SRAM_SRAMPRCR_KW_MASK                  (0x7f)
#define SRAM_SRAMPRCR_SRAMPRCR            (1 <<  0) /* 01: Register Write Control */
#define SRAM_ECCMODE_OFFSET               0x00c0
#define SRAM_ECCMODE                      (SRAM_BASE + SRAM_ECCMODE_OFFSET)
#define SRAM_ECCMODE_ECCMOD               (2 <<  0) /* 01: ECC Operating Mode Select */
#define SRAM_ECCMODE_ECCMOD_MASK               (0x03)
#define SRAM_ECC2STS_OFFSET               0x00c1
#define SRAM_ECC2STS                      (SRAM_BASE + SRAM_ECC2STS_OFFSET)
#define SRAM_ECC2STS_ECC2ERR              (1 <<  0) /* 01: ECC 2-Bit Error Status */
#define SRAM_ECC1STSEN_OFFSET             0x00c2
#define SRAM_ECC1STSEN                    (SRAM_BASE + SRAM_ECC1STSEN_OFFSET)
#define SRAM_ECC1STSEN_E1STSEN            (1 <<  0) /* 01: ECC 1-Bit Error Information Update Enable */
#define SRAM_ECC1STS_OFFSET               0x00c3
#define SRAM_ECC1STS                      (SRAM_BASE + SRAM_ECC1STS_OFFSET)
#define SRAM_ECC1STS_ECC1ERR              (1 <<  0) /* 01: ECC 1-Bit Error Status */
#define SRAM_ECCPRCR_OFFSET               0x00c4
#define SRAM_ECCPRCR                      (SRAM_BASE + SRAM_ECCPRCR_OFFSET)
#define SRAM_ECCPRCR_KW                   (7 <<  1) /* 02: Write Key Code */
#define SRAM_ECCPRCR_KW_MASK                   (0x7f)
#define SRAM_ECCPRCR_ECCPRCR              (1 <<  0) /* 01: Register Write Control */
#define SRAM_ECCPRCR2_OFFSET              0x00d0
#define SRAM_ECCPRCR2                     (SRAM_BASE + SRAM_ECCPRCR2_OFFSET)
#define SRAM_ECCPRCR2_KW2                 (7 <<  1) /* 02: Write Key Code */
#define SRAM_ECCPRCR2_KW2_MASK                 (0x7f)
#define SRAM_ECCPRCR2_ECCPRCR2            (1 <<  0) /* 01: Register Write Control */
#define SRAM_ECCETST_OFFSET               0x00d4
#define SRAM_ECCETST                      (SRAM_BASE + SRAM_ECCETST_OFFSET)
#define SRAM_ECCETST_TSTBYP               (1 <<  0) /* 01: ECC Bypass Select */
#define SRAM_ECCOAD_OFFSET                0x00d8
#define SRAM_ECCOAD                       (SRAM_BASE + SRAM_ECCOAD_OFFSET)
#define SRAM_ECCOAD_OAD                   (1 <<  0) /* 01: Operation after Detection */

/* RTC - Realtime Clock */
#define RTC_BASE                          0x40044000
#define RTC_R64CNT_OFFSET                 0x0000
#define RTC_R64CNT                        (RTC_BASE + RTC_R64CNT_OFFSET)
#define RTC_R64CNT_F1HZ                   (1 <<  6) /* 40: 1Hz */
#define RTC_R64CNT_F2HZ                   (1 <<  5) /* 20: 2Hz */
#define RTC_R64CNT_F4HZ                   (1 <<  4) /* 10: 4Hz */
#define RTC_R64CNT_F8HZ                   (1 <<  3) /* 08: 8Hz */
#define RTC_R64CNT_F16HZ                  (1 <<  2) /* 04: 16Hz */
#define RTC_R64CNT_F32HZ                  (1 <<  1) /* 02: 32Hz */
#define RTC_R64CNT_F64HZ                  (1 <<  0) /* 01: 64Hz */
#define RTC_RSECCNT_OFFSET                0x0002
#define RTC_RSECCNT                       (RTC_BASE + RTC_RSECCNT_OFFSET)
#define RTC_RSECCNT_SEC10                 (3 <<  4) /* 10: 10-Second Count Counts from 0 to 5 for 60-second counting. */
#define RTC_RSECCNT_SEC10_MASK                 (0x07)
#define RTC_RSECCNT_SEC1                  (4 <<  0) /* 01: 1-Second Count Counts from 0 to 9 every second. When a carry is generated, 1 is added to the tens place. */
#define RTC_RSECCNT_SEC1_MASK                  (0x0f)
#define RTC_BCNT0_OFFSET                  0x0002
#define RTC_BCNT0                         (RTC_BASE + RTC_BCNT0_OFFSET)
#define RTC_BCNT0_BCNT0                   (8 <<  0) /* 01: The BCNT0 counter is a readable/writable 32-bit binary counter b7 to b0. */
#define RTC_BCNT0_BCNT0_MASK                   (0xff)
#define RTC_RMINCNT_OFFSET                0x0004
#define RTC_RMINCNT                       (RTC_BASE + RTC_RMINCNT_OFFSET)
#define RTC_RMINCNT_MIN10                 (3 <<  4) /* 10: 10-Minute Count Counts from 0 to 5 for 60-minute counting. */
#define RTC_RMINCNT_MIN10_MASK                 (0x07)
#define RTC_RMINCNT_MIN1                  (4 <<  0) /* 01: 1-Minute Count Counts from 0 to 9 every minute. When a carry is generated, 1 is added to the tens place. */
#define RTC_RMINCNT_MIN1_MASK                  (0x0f)
#define RTC_BCNT1_OFFSET                  0x0004
#define RTC_BCNT1                         (RTC_BASE + RTC_BCNT1_OFFSET)
#define RTC_BCNT1_BCNT1                   (8 <<  0) /* 01: The BCNT1 counter is a readable/writable 32-bit binary counter b15 to b8. */
#define RTC_BCNT1_BCNT1_MASK                   (0xff)
#define RTC_RHRCNT_OFFSET                 0x0006
#define RTC_RHRCNT                        (RTC_BASE + RTC_RHRCNT_OFFSET)
#define RTC_RHRCNT_PM                     (1 <<  6) /* 40: Time Counter Setting for a.m./p.m. */
#define RTC_RHRCNT_HR10                   (2 <<  4) /* 10: 10-Hour Count Counts from 0 to 2 once per carry from the ones place. */
#define RTC_RHRCNT_HR10_MASK                   (0x03)
#define RTC_RHRCNT_HR1                    (4 <<  0) /* 01: 1-Hour Count Counts from 0 to 9 once per hour. When a carry is generated, 1 is added to the tens place. */
#define RTC_RHRCNT_HR1_MASK                    (0x0f)
#define RTC_BCNT2_OFFSET                  0x0006
#define RTC_BCNT2                         (RTC_BASE + RTC_BCNT2_OFFSET)
#define RTC_BCNT2_BCNT2                   (8 <<  0) /* 01: The BCNT2 counter is a readable/writable 32-bit binary counter b23 to b16. */
#define RTC_BCNT2_BCNT2_MASK                   (0xff)
#define RTC_RWKCNT_OFFSET                 0x0008
#define RTC_RWKCNT                        (RTC_BASE + RTC_RWKCNT_OFFSET)
#define RTC_RWKCNT_DAYW                   (3 <<  0) /* 01: Day-of-Week Counting */
#define RTC_RWKCNT_DAYW_MASK                   (0x07)
#define RTC_BCNT3_OFFSET                  0x0008
#define RTC_BCNT3                         (RTC_BASE + RTC_BCNT3_OFFSET)
#define RTC_BCNT3_BCNT3                   (8 <<  0) /* 01: The BCNT3 counter is a readable/writable 32-bit binary counter b31 to b24. */
#define RTC_BCNT3_BCNT3_MASK                   (0xff)
#define RTC_RDAYCNT_OFFSET                0x000a
#define RTC_RDAYCNT                       (RTC_BASE + RTC_RDAYCNT_OFFSET)
#define RTC_RDAYCNT_DATE10                (2 <<  4) /* 10: 10-Day Count Counts from 0 to 3 once per carry from the ones place. */
#define RTC_RDAYCNT_DATE10_MASK                (0x03)
#define RTC_RDAYCNT_DATE1                 (4 <<  0) /* 01: 1-Day Count Counts from 0 to 9 once per day. When a carry is generated, 1 is added to the tens place. */
#define RTC_RDAYCNT_DATE1_MASK                 (0x0f)
#define RTC_RMONCNT_OFFSET                0x000c
#define RTC_RMONCNT                       (RTC_BASE + RTC_RMONCNT_OFFSET)
#define RTC_RMONCNT_MON10                 (1 <<  4) /* 10: 10-Month Count Counts from 0 to 1 once per carry from the ones place. */
#define RTC_RMONCNT_MON1                  (4 <<  0) /* 01: 1-Month Count Counts from 0 to 9 once per month. When a carry is generated, 1 is added to the tens place. */
#define RTC_RMONCNT_MON1_MASK                  (0x0f)
#define RTC_RYRCNT_OFFSET                 0x000e
#define RTC_RYRCNT                        (RTC_BASE + RTC_RYRCNT_OFFSET)
#define RTC_RYRCNT_YR10                   (4 <<  4) /* 10: 10-Year Count Counts from 0 to 9 once per carry from ones place. When a carry is generated in the tens place, 1 is added to the hundreds place. */
#define RTC_RYRCNT_YR10_MASK                   (0x0f)
#define RTC_RYRCNT_YR1                    (4 <<  0) /* 01: 1-Year Count Counts from 0 to 9 once per year. When a carry is generated, 1 is added to the tens place. */
#define RTC_RYRCNT_YR1_MASK                    (0x0f)
#define RTC_RSECAR_OFFSET                 0x0010
#define RTC_RSECAR                        (RTC_BASE + RTC_RSECAR_OFFSET)
#define RTC_RSECAR_ENB                    (1 <<  7) /* 80: Compare enable */
#define RTC_RSECAR_SEC10                  (3 <<  4) /* 10: 10-Seconds Value for the tens place of seconds */
#define RTC_RSECAR_SEC10_MASK                  (0x07)
#define RTC_RSECAR_SEC1                   (4 <<  0) /* 01: 1-Second Value for the ones place of seconds */
#define RTC_RSECAR_SEC1_MASK                   (0x0f)
#define RTC_BCNT0AR_OFFSET                0x0010
#define RTC_BCNT0AR                       (RTC_BASE + RTC_BCNT0AR_OFFSET)
#define RTC_BCNT0AR_BCNT0AR               (8 <<  0) /* 01: he BCNT0AR counter is a readable/writable alarm register corresponding to 32-bit binary counter b7 to b0. */
#define RTC_BCNT0AR_BCNT0AR_MASK               (0xff)
#define RTC_RMINAR_OFFSET                 0x0012
#define RTC_RMINAR                        (RTC_BASE + RTC_RMINAR_OFFSET)
#define RTC_RMINAR_ENB                    (1 <<  7) /* 80: Compare enable */
#define RTC_RMINAR_MIN10                  (3 <<  4) /* 10: 10-Minute Count Value for the tens place of minutes */
#define RTC_RMINAR_MIN10_MASK                  (0x07)
#define RTC_RMINAR_MIN1                   (4 <<  0) /* 01: 1-Minute Count Value for the ones place of minutes */
#define RTC_RMINAR_MIN1_MASK                   (0x0f)
#define RTC_BCNT1AR_OFFSET                0x0012
#define RTC_BCNT1AR                       (RTC_BASE + RTC_BCNT1AR_OFFSET)
#define RTC_BCNT1AR_BCNT1AR               (8 <<  0) /* 01: he BCNT1AR counter is a readable/writable alarm register corresponding to 32-bit binary counter b15 to b8. */
#define RTC_BCNT1AR_BCNT1AR_MASK               (0xff)
#define RTC_RHRAR_OFFSET                  0x0014
#define RTC_RHRAR                         (RTC_BASE + RTC_RHRAR_OFFSET)
#define RTC_RHRAR_ENB                     (1 <<  7) /* 80: Compare enable */
#define RTC_RHRAR_PM                      (1 <<  6) /* 40: Time Counter Setting for a.m./p.m. */
#define RTC_RHRAR_HR10                    (2 <<  4) /* 10: 10-Hour Count Value for the tens place of hours */
#define RTC_RHRAR_HR10_MASK                    (0x03)
#define RTC_RHRAR_HR1                     (4 <<  0) /* 01: 1-Hour Count Value for the ones place of hours */
#define RTC_RHRAR_HR1_MASK                     (0x0f)
#define RTC_BCNT2AR_OFFSET                0x0014
#define RTC_BCNT2AR                       (RTC_BASE + RTC_BCNT2AR_OFFSET)
#define RTC_BCNT2AR_BCNT2AR               (8 <<  0) /* 01: The BCNT2AR counter is a readable/writable 32-bit binary counter b23 to b16. */
#define RTC_BCNT2AR_BCNT2AR_MASK               (0xff)
#define RTC_RWKAR_OFFSET                  0x0016
#define RTC_RWKAR                         (RTC_BASE + RTC_RWKAR_OFFSET)
#define RTC_RWKAR_ENB                     (1 <<  7) /* 80: Compare enable */
#define RTC_RWKAR_DAYW                    (3 <<  0) /* 01: Day-of-Week Counting */
#define RTC_RWKAR_DAYW_MASK                    (0x07)
#define RTC_BCNT3AR_OFFSET                0x0016
#define RTC_BCNT3AR                       (RTC_BASE + RTC_BCNT3AR_OFFSET)
#define RTC_BCNT3AR_BCNT3AR               (8 <<  0) /* 01: The BCNT3AR counter is a readable/writable 32-bit binary counter b31 to b24. */
#define RTC_BCNT3AR_BCNT3AR_MASK               (0xff)
#define RTC_RDAYAR_OFFSET                 0x0018
#define RTC_RDAYAR                        (RTC_BASE + RTC_RDAYAR_OFFSET)
#define RTC_RDAYAR_ENB                    (1 <<  7) /* 80: Compare enable */
#define RTC_RDAYAR_DATE10                 (2 <<  4) /* 10: 10 Days Value for the tens place of days */
#define RTC_RDAYAR_DATE10_MASK                 (0x03)
#define RTC_RDAYAR_DATE1                  (4 <<  0) /* 01: 1 Day Value for the ones place of days */
#define RTC_RDAYAR_DATE1_MASK                  (0x0f)
#define RTC_BCNT0AER_OFFSET               0x0018
#define RTC_BCNT0AER                      (RTC_BASE + RTC_BCNT0AER_OFFSET)
#define RTC_BCNT0AER_ENB                  (8 <<  0) /* 01: The BCNT0AER register is a readable/writable register for setting the alarm enable corresponding to 32-bit binary counter b7 to b0. */
#define RTC_BCNT0AER_ENB_MASK                  (0xff)
#define RTC_RMONAR_OFFSET                 0x001a
#define RTC_RMONAR                        (RTC_BASE + RTC_RMONAR_OFFSET)
#define RTC_RMONAR_ENB                    (1 <<  7) /* 80: Compare enable */
#define RTC_RMONAR_MON10                  (1 <<  4) /* 10: 10 Months Value for the tens place of months */
#define RTC_RMONAR_MON1                   (4 <<  0) /* 01: 1 Month Value for the ones place of months */
#define RTC_RMONAR_MON1_MASK                   (0x0f)
#define RTC_BCNT1AER_OFFSET               0x001a
#define RTC_BCNT1AER                      (RTC_BASE + RTC_BCNT1AER_OFFSET)
#define RTC_BCNT1AER_ENB                  (8 <<  0) /* 01: The BCNT1AER register is a readable/writable register for setting the alarm enable corresponding to 32-bit binary counter b15 to b8. */
#define RTC_BCNT1AER_ENB_MASK                  (0xff)
#define RTC_RYRAR_OFFSET                  0x001c
#define RTC_RYRAR                         (RTC_BASE + RTC_RYRAR_OFFSET)
#define RTC_RYRAR_YR10                    (4 <<  4) /* 10: 10 Years Value for the tens place of years */
#define RTC_RYRAR_YR10_MASK                    (0x0f)
#define RTC_RYRAR_YR1                     (4 <<  0) /* 01: 1 Year Value for the ones place of years */
#define RTC_RYRAR_YR1_MASK                     (0x0f)
#define RTC_BCNT2AER_OFFSET               0x001c
#define RTC_BCNT2AER                      (RTC_BASE + RTC_BCNT2AER_OFFSET)
#define RTC_BCNT2AER_ENB                  (8 <<  0) /* 01: The BCNT2AER register is a readable/writable register for setting the alarm enable corresponding to 32-bit binary counter b23 to b16. */
#define RTC_BCNT2AER_ENB_MASK                  (0xff)
#define RTC_RYRAREN_OFFSET                0x001e
#define RTC_RYRAREN                       (RTC_BASE + RTC_RYRAREN_OFFSET)
#define RTC_RYRAREN_ENB                   (1 <<  7) /* 80: Compare enable */
#define RTC_BCNT3AER_OFFSET               0x001e
#define RTC_BCNT3AER                      (RTC_BASE + RTC_BCNT3AER_OFFSET)
#define RTC_BCNT3AER_ENB                  (8 <<  0) /* 01: The BCNT3AER register is a readable/writable register for setting the alarm enable corresponding to 32-bit binary counter b31 to b24. */
#define RTC_BCNT3AER_ENB_MASK                  (0xff)
#define RTC_RCR1_OFFSET                   0x0022
#define RTC_RCR1                          (RTC_BASE + RTC_RCR1_OFFSET)
#define RTC_RCR1_PES                      (4 <<  4) /* 10: Periodic Interrupt Select */
#define RTC_RCR1_PES_MASK                      (0x0f)
#define RTC_RCR1_RTCOS                    (1 <<  3) /* 08: RTCOUT Output Select */
#define RTC_RCR1_PIE                      (1 <<  2) /* 04: Periodic Interrupt Enable */
#define RTC_RCR1_CIE                      (1 <<  1) /* 02: Carry Interrupt Enable */
#define RTC_RCR1_AIE                      (1 <<  0) /* 01: Alarm Interrupt Enable */
#define RTC_RCR2_OFFSET                   0x0024
#define RTC_RCR2                          (RTC_BASE + RTC_RCR2_OFFSET)
#define RTC_RCR2_CNTMD                    (1 <<  7) /* 80: Count Mode Select */
#define RTC_RCR2_HR24                     (1 <<  6) /* 40: Hours Mode */
#define RTC_RCR2_AADJP                    (1 <<  5) /* 20: Automatic Adjustment Period Select (When the LOCO clock is selected, the setting of this bit is disabled.) */
#define RTC_RCR2_AADJE                    (1 <<  4) /* 10: Automatic Adjustment Enable (When the LOCO clock is selected, the setting of this bit is disabled.) */
#define RTC_RCR2_RTCOE                    (1 <<  3) /* 08: RTCOUT Output Enable */
#define RTC_RCR2_ADJ30                    (1 <<  2) /* 04: 30-Second Adjustment */
#define RTC_RCR2_RESET                    (1 <<  1) /* 02: RTC Software Reset */
#define RTC_RCR2_START                    (1 <<  0) /* 01: Start */
#define RTC_RCR4_OFFSET                   0x0028
#define RTC_RCR4                          (RTC_BASE + RTC_RCR4_OFFSET)
#define RTC_RCR4_RCKSEL                   (1 <<  0) /* 01: Count Source Select */
#define RTC_RFRH_OFFSET                   0x002a
#define RTC_RFRH                          (RTC_BASE + RTC_RFRH_OFFSET)
#define RTC_RFRH_RFC16                    (1 <<  0) /* 01: Frequency Comparison Value (b16) To generate the operating clock from the LOCOclock, this bit sets the comparison value of the 128-Hz clock cycle. */
#define RTC_RFRL_OFFSET                   0x002c
#define RTC_RFRL                          (RTC_BASE + RTC_RFRL_OFFSET)
#define RTC_RFRL_RFC                      (16 <<  0) /* 01: Frequency Comparison Value(b15-b0) To generate the operating clock from the main clock, this bit sets the comparison value of the 128-Hz clock cycle. */
#define RTC_RFRL_RFC_MASK                      (0xffff)
#define RTC_RADJ_OFFSET                   0x002e
#define RTC_RADJ                          (RTC_BASE + RTC_RADJ_OFFSET)
#define RTC_RADJ_PMADJ                    (2 <<  6) /* 40: Plus-Minus */
#define RTC_RADJ_PMADJ_MASK                    (0x03)
#define RTC_RADJ_ADJ                      (6 <<  0) /* 01: Adjustment Value These bits specify the adjustment value from the prescaler. */
#define RTC_RADJ_ADJ_MASK                      (0x3f)
#define RTC_RTCCR_SIZE                    3
#define RTC_RTCCR_OFFSET                  0x0040
#define RTC_RTCCR(p)                      (RTC_BASE + RTC_RTCCR_OFFSET + (p)*0x0002)
#define RTC_RTCCR_TCNF                    (2 <<  4) /* 10: Time Capture Noise Filter Control */
#define RTC_RTCCR_TCNF_MASK                    (0x03)
#define RTC_RTCCR_TCST                    (1 <<  2) /* 04: Time Capture Status */
#define RTC_RTCCR_TCCT                    (2 <<  0) /* 01: Time Capture Control */
#define RTC_RTCCR_TCCT_MASK                    (0x03)
#define RTC_RSECCP_SIZE                   3
#define RTC_RSECCP_OFFSET                 0x0052
#define RTC_RSECCP(p)                     (RTC_BASE + RTC_RSECCP_OFFSET + (p)*0x0010)
#define RTC_RSECCP_SEC10                  (3 <<  4) /* 10: 10-Second Capture Capture value for the tens place of seconds */
#define RTC_RSECCP_SEC10_MASK                  (0x07)
#define RTC_RSECCP_SEC1                   (4 <<  0) /* 01: 1-Second Capture Capture value for the ones place of seconds */
#define RTC_RSECCP_SEC1_MASK                   (0x0f)
#define RTC_BCNT0CP_SIZE                  3
#define RTC_BCNT0CP_OFFSET                0x0052
#define RTC_BCNT0CP(p)                    (RTC_BASE + RTC_BCNT0CP_OFFSET + (p)*0x0010)
#define RTC_BCNT0CP_BCNT0CP               (8 <<  0) /* 01: BCNT0CP is a read-only register that captures the BCNT0 value when a time capture event is detected. */
#define RTC_BCNT0CP_BCNT0CP_MASK               (0xff)
#define RTC_RMINCP_SIZE                   3
#define RTC_RMINCP_OFFSET                 0x0054
#define RTC_RMINCP(p)                     (RTC_BASE + RTC_RMINCP_OFFSET + (p)*0x0010)
#define RTC_RMINCP_MIN10                  (3 <<  4) /* 10: 10-Minute Capture Capture value for the tens place of minutes */
#define RTC_RMINCP_MIN10_MASK                  (0x07)
#define RTC_RMINCP_MIN1                   (4 <<  0) /* 01: 1-Minute Capture Capture value for the ones place of minutes */
#define RTC_RMINCP_MIN1_MASK                   (0x0f)
#define RTC_BCNT1CP_SIZE                  3
#define RTC_BCNT1CP_OFFSET                0x0054
#define RTC_BCNT1CP(p)                    (RTC_BASE + RTC_BCNT1CP_OFFSET + (p)*0x0010)
#define RTC_BCNT1CP_BCNT1CP               (8 <<  0) /* 01: BCNT1CP is a read-only register that captures the BCNT1 value when a time capture event is detected. */
#define RTC_BCNT1CP_BCNT1CP_MASK               (0xff)
#define RTC_RHRCP_SIZE                    3
#define RTC_RHRCP_OFFSET                  0x0056
#define RTC_RHRCP(p)                      (RTC_BASE + RTC_RHRCP_OFFSET + (p)*0x0010)
#define RTC_RHRCP_PM                      (1 <<  6) /* 40: A.m./p.m. select for time counter setting. */
#define RTC_RHRCP_HR10                    (2 <<  4) /* 10: 10-Minute Capture Capture value for the tens place of minutes */
#define RTC_RHRCP_HR10_MASK                    (0x03)
#define RTC_RHRCP_HR1                     (4 <<  0) /* 01: 1-Minute Capture Capture value for the ones place of minutes */
#define RTC_RHRCP_HR1_MASK                     (0x0f)
#define RTC_BCNT2CP_SIZE                  3
#define RTC_BCNT2CP_OFFSET                0x0056
#define RTC_BCNT2CP(p)                    (RTC_BASE + RTC_BCNT2CP_OFFSET + (p)*0x0010)
#define RTC_BCNT2CP_BCNT2CP               (8 <<  0) /* 01: BCNT2CP is a read-only register that captures the BCNT2 value when a time capture event is detected. */
#define RTC_BCNT2CP_BCNT2CP_MASK               (0xff)
#define RTC_RDAYCP_SIZE                   3
#define RTC_RDAYCP_OFFSET                 0x005a
#define RTC_RDAYCP(p)                     (RTC_BASE + RTC_RDAYCP_OFFSET + (p)*0x0010)
#define RTC_RDAYCP_DATE10                 (2 <<  4) /* 10: 10-Day Capture Capture value for the tens place of minutes */
#define RTC_RDAYCP_DATE10_MASK                 (0x03)
#define RTC_RDAYCP_DATE1                  (4 <<  0) /* 01: 1-Day Capture Capture value for the ones place of minutes */
#define RTC_RDAYCP_DATE1_MASK                  (0x0f)
#define RTC_BCNT3CP_SIZE                  3
#define RTC_BCNT3CP_OFFSET                0x005a
#define RTC_BCNT3CP(p)                    (RTC_BASE + RTC_BCNT3CP_OFFSET + (p)*0x0010)
#define RTC_BCNT3CP_BCNT3CP               (8 <<  0) /* 01: BCNT3CP is a read-only register that captures the BCNT3 value when a time capture event is detected. */
#define RTC_BCNT3CP_BCNT3CP_MASK               (0xff)
#define RTC_RMONCP_SIZE                   3
#define RTC_RMONCP_OFFSET                 0x005c
#define RTC_RMONCP(p)                     (RTC_BASE + RTC_RMONCP_OFFSET + (p)*0x0010)
#define RTC_RMONCP_MON10                  (1 <<  4) /* 10: 10-Month Capture Capture value for the tens place of months */
#define RTC_RMONCP_MON1                   (4 <<  0) /* 01: 1-Month Capture Capture value for the ones place of months */
#define RTC_RMONCP_MON1_MASK                   (0x0f)

/* SCI0 - Serial Communication Interface 0 */
#define SCI0_BASE                         0x40070000
#define SCI0_SMR_OFFSET                   0x0000
#define SCI0_SMR                          (SCI0_BASE + SCI0_SMR_OFFSET)
#define SCI0_SMR_CM                       (1 <<  7) /* 80: Communication Mode */
#define SCI0_SMR_CHR                      (1 <<  6) /* 40: Character Length (Valid only in asynchronous mode) */
#define SCI0_SMR_PE                       (1 <<  5) /* 20: Parity Enable (Valid only in asynchronous mode) */
#define SCI0_SMR_PM                       (1 <<  4) /* 10: Parity Mode (Valid only when the PE bit is 1) */
#define SCI0_SMR_STOP                     (1 <<  3) /* 08: Stop Bit Length (Valid only in asynchronous mode) */
#define SCI0_SMR_MP                       (1 <<  2) /* 04: Multi-Processor Mode (Valid only in asynchronous mode) */
#define SCI0_SMR_CKS                      (2 <<  0) /* 01: Clock Select */
#define SCI0_SMR_CKS_MASK                      (0x03)
#define SCI0_SMR_SMCI_OFFSET              0x0000
#define SCI0_SMR_SMCI                     (SCI0_BASE + SCI0_SMR_SMCI_OFFSET)
#define SCI0_SMR_SMCI_GM                  (1 <<  7) /* 80: GSM Mode */
#define SCI0_SMR_SMCI_BLK                 (1 <<  6) /* 40: Block Transfer Mode */
#define SCI0_SMR_SMCI_PE                  (1 <<  5) /* 20: Parity Enable (Valid only in asynchronous mode) */
#define SCI0_SMR_SMCI_PM                  (1 <<  4) /* 10: Parity Mode (Valid only when the PE bit is 1) */
#define SCI0_SMR_SMCI_BCP                 (2 <<  2) /* 04: Base Clock Pulse (Valid only in asynchronous mode) */
#define SCI0_SMR_SMCI_BCP_MASK                 (0x03)
#define SCI0_SMR_SMCI_CKS                 (2 <<  0) /* 01: Clock Select */
#define SCI0_SMR_SMCI_CKS_MASK                 (0x03)
#define SCI0_BRR_OFFSET                   0x0001
#define SCI0_BRR                          (SCI0_BASE + SCI0_BRR_OFFSET)
#define SCI0_BRR_BRR                      (8 <<  0) /* 01: BRR is an 8-bit register that adjusts the bit rate. */
#define SCI0_BRR_BRR_MASK                      (0xff)
#define SCI0_SCR_OFFSET                   0x0002
#define SCI0_SCR                          (SCI0_BASE + SCI0_SCR_OFFSET)
#define SCI0_SCR_TIE                      (1 <<  7) /* 80: Transmit Interrupt Enable */
#define SCI0_SCR_RIE                      (1 <<  6) /* 40: Receive Interrupt Enable */
#define SCI0_SCR_TE                       (1 <<  5) /* 20: Transmit Enable */
#define SCI0_SCR_RE                       (1 <<  4) /* 10: Receive Enable */
#define SCI0_SCR_MPIE                     (1 <<  3) /* 08: Multi-Processor Interrupt Enable (Valid in asynchronous mode when SMR.MP = 1) */
#define SCI0_SCR_TEIE                     (1 <<  2) /* 04: Transmit End Interrupt Enable */
#define SCI0_SCR_CKE                      (2 <<  0) /* 01: Clock Enable */
#define SCI0_SCR_CKE_MASK                      (0x03)
#define SCI0_SCR_SMCI_OFFSET              0x0002
#define SCI0_SCR_SMCI                     (SCI0_BASE + SCI0_SCR_SMCI_OFFSET)
#define SCI0_SCR_SMCI_TIE                 (1 <<  7) /* 80: Transmit Interrupt Enable */
#define SCI0_SCR_SMCI_RIE                 (1 <<  6) /* 40: Receive Interrupt Enable */
#define SCI0_SCR_SMCI_TE                  (1 <<  5) /* 20: Transmit Enable */
#define SCI0_SCR_SMCI_RE                  (1 <<  4) /* 10: Receive Enable */
#define SCI0_SCR_SMCI_MPIE                (1 <<  3) /* 08: Multi-Processor Interrupt Enable */
#define SCI0_SCR_SMCI_TEIE                (1 <<  2) /* 04: Transmit End Interrupt Enable */
#define SCI0_SCR_SMCI_CKE                 (2 <<  0) /* 01: Clock Enable */
#define SCI0_SCR_SMCI_CKE_MASK                 (0x03)
#define SCI0_TDR_OFFSET                   0x0003
#define SCI0_TDR                          (SCI0_BASE + SCI0_TDR_OFFSET)
#define SCI0_TDR_TDR                      (8 <<  0) /* 01: TDR is an 8-bit register that stores transmit data. */
#define SCI0_TDR_TDR_MASK                      (0xff)
#define SCI0_SSR_OFFSET                   0x0004
#define SCI0_SSR                          (SCI0_BASE + SCI0_SSR_OFFSET)
#define SCI0_SSR_TDRE                     (1 <<  7) /* 80: Transmit Data Empty Flag */
#define SCI0_SSR_RDRF                     (1 <<  6) /* 40: Receive Data Full Flag */
#define SCI0_SSR_ORER                     (1 <<  5) /* 20: Overrun Error Flag */
#define SCI0_SSR_FER                      (1 <<  4) /* 10: Framing Error Flag */
#define SCI0_SSR_PER                      (1 <<  3) /* 08: Parity Error Flag */
#define SCI0_SSR_TEND                     (1 <<  2) /* 04: Transmit End Flag */
#define SCI0_SSR_MPB                      (1 <<  1) /* 02: Multi-Processor */
#define SCI0_SSR_MPBT                     (1 <<  0) /* 01: Multi-Processor Bit Transfer */
#define SCI0_SSR_FIFO_OFFSET              0x0004
#define SCI0_SSR_FIFO                     (SCI0_BASE + SCI0_SSR_FIFO_OFFSET)
#define SCI0_SSR_FIFO_TDFE                (1 <<  7) /* 80: Transmit FIFO data empty flag */
#define SCI0_SSR_FIFO_RDF                 (1 <<  6) /* 40: Receive FIFO data full flag */
#define SCI0_SSR_FIFO_ORER                (1 <<  5) /* 20: Overrun Error Flag */
#define SCI0_SSR_FIFO_FER                 (1 <<  4) /* 10: Framing Error Flag */
#define SCI0_SSR_FIFO_PER                 (1 <<  3) /* 08: Parity Error Flag */
#define SCI0_SSR_FIFO_TEND                (1 <<  2) /* 04: Transmit End Flag */
#define SCI0_SSR_FIFO_DR                  (1 <<  0) /* 01: Receive Data Ready flag (Valid only in asynchronous mode(including multi-processor) and FIFO selected) */
#define SCI0_SSR_SMCI_OFFSET              0x0004
#define SCI0_SSR_SMCI                     (SCI0_BASE + SCI0_SSR_SMCI_OFFSET)
#define SCI0_SSR_SMCI_TDRE                (1 <<  7) /* 80: Transmit Data Empty Flag */
#define SCI0_SSR_SMCI_RDRF                (1 <<  6) /* 40: Receive Data Full Flag */
#define SCI0_SSR_SMCI_ORER                (1 <<  5) /* 20: Overrun Error Flag */
#define SCI0_SSR_SMCI_ERS                 (1 <<  4) /* 10: Error Signal Status Flag */
#define SCI0_SSR_SMCI_PER                 (1 <<  3) /* 08: Parity Error Flag */
#define SCI0_SSR_SMCI_TEND                (1 <<  2) /* 04: Transmit End Flag */
#define SCI0_SSR_SMCI_MPB                 (1 <<  1) /* 02: Multi-Processor This bit should be 0 in smart card interface mode. */
#define SCI0_SSR_SMCI_MPBT                (1 <<  0) /* 01: Multi-Processor Bit Transfer This bit should be 0 in smart card interface mode. */
#define SCI0_RDR_OFFSET                   0x0005
#define SCI0_RDR                          (SCI0_BASE + SCI0_RDR_OFFSET)
#define SCI0_RDR_RDR                      (8 <<  0) /* 01: RDR is an 8-bit register that stores receive data. */
#define SCI0_RDR_RDR_MASK                      (0xff)
#define SCI0_SCMR_OFFSET                  0x0006
#define SCI0_SCMR                         (SCI0_BASE + SCI0_SCMR_OFFSET)
#define SCI0_SCMR_BCP2                    (1 <<  7) /* 80: Base Clock Pulse 2 Selects the number of base clock cycles in combination with the SMR.BCP[1:0] bits */
#define SCI0_SCMR_CHR1                    (1 <<  4) /* 10: Character Length 1 (Only valid in asynchronous mode) */
#define SCI0_SCMR_SDIR                    (1 <<  3) /* 08: Transmitted/Received Data Transfer Direction NOTE: The setting is invalid and a fixed data length of 8 bits is used in modes other than asynchronous mode. Set this bit to 1 if operation is to be in simple I2C mode. */
#define SCI0_SCMR_SINV                    (1 <<  2) /* 04: Transmitted/Received Data Invert Set this bit to 0 if operation is to be in simple I2C mode. */
#define SCI0_SCMR_SMIF                    (1 <<  0) /* 01: Smart Card Interface Mode Select */
#define SCI0_SEMR_OFFSET                  0x0007
#define SCI0_SEMR                         (SCI0_BASE + SCI0_SEMR_OFFSET)
#define SCI0_SEMR_RXDESEL                 (1 <<  7) /* 80: Asynchronous Start Bit Edge Detection Select (Valid only in asynchronous mode) */
#define SCI0_SEMR_BGDM                    (1 <<  6) /* 40: Baud Rate Generator Double-Speed Mode Select (Only valid the CKE[1] bit in SCR is 0 in asynchronous mode). */
#define SCI0_SEMR_NFEN                    (1 <<  5) /* 20: Digital Noise Filter Function Enable (The NFEN bit should be 0 without simple I2C mode and asynchronous mode.) In asynchronous mode, for RXDn input only. In simple I2C mode, for RXDn/TxDn input. */
#define SCI0_SEMR_ABCS                    (1 <<  4) /* 10: Asynchronous Mode Base Clock Select (Valid only in asynchronous mode) */
#define SCI0_SEMR_ABCSE                   (1 <<  3) /* 08: Asynchronous Mode Extended Base Clock Select 1 (Valid only in asynchronous mode and SCR.CKE[1]=0) */
#define SCI0_SEMR_BRME                    (1 <<  2) /* 04: Bit Rate Modulation Enable */
#define SCI0_SNFR_OFFSET                  0x0008
#define SCI0_SNFR                         (SCI0_BASE + SCI0_SNFR_OFFSET)
#define SCI0_SNFR_NFCS                    (3 <<  0) /* 01: Noise Filter Clock Select */
#define SCI0_SNFR_NFCS_MASK                    (0x07)
#define SCI0_SIMR1_OFFSET                 0x0009
#define SCI0_SIMR1                        (SCI0_BASE + SCI0_SIMR1_OFFSET)
#define SCI0_SIMR1_IICDL                  (5 <<  3) /* 08: SDA Delay Output Select Cycles below are of the clock signal from the on-chip baud rate generator. */
#define SCI0_SIMR1_IICDL_MASK                  (0x1f)
#define SCI0_SIMR1_IICM                   (1 <<  0) /* 01: Simple I2C Mode Select */
#define SCI0_SIMR2_OFFSET                 0x000a
#define SCI0_SIMR2                        (SCI0_BASE + SCI0_SIMR2_OFFSET)
#define SCI0_SIMR2_IICACKT                (1 <<  5) /* 20: ACK Transmission Data */
#define SCI0_SIMR2_IICCSC                 (1 <<  1) /* 02: Clock Synchronization */
#define SCI0_SIMR2_IICINTM                (1 <<  0) /* 01: I2C Interrupt Mode Select */
#define SCI0_SIMR3_OFFSET                 0x000b
#define SCI0_SIMR3                        (SCI0_BASE + SCI0_SIMR3_OFFSET)
#define SCI0_SIMR3_IICSCLS                (2 <<  6) /* 40: SCL Output Select */
#define SCI0_SIMR3_IICSCLS_MASK                (0x03)
#define SCI0_SIMR3_IICSDAS                (2 <<  4) /* 10: SDA Output Select */
#define SCI0_SIMR3_IICSDAS_MASK                (0x03)
#define SCI0_SIMR3_IICSTIF                (1 <<  3) /* 08: Issuing of Start, Restart, or Stop Condition Completed Flag (When 0 is written to IICSTIF, it is cleared to 0.) */
#define SCI0_SIMR3_IICSTPREQ              (1 <<  2) /* 04: Stop Condition Generation */
#define SCI0_SIMR3_IICRSTAREQ             (1 <<  1) /* 02: Restart Condition Generation */
#define SCI0_SIMR3_IICSTAREQ              (1 <<  0) /* 01: Start Condition Generation */
#define SCI0_SISR_OFFSET                  0x000c
#define SCI0_SISR                         (SCI0_BASE + SCI0_SISR_OFFSET)
#define SCI0_SISR_IICACKR                 (1 <<  0) /* 01: ACK Reception Data Flag */
#define SCI0_SPMR_OFFSET                  0x000d
#define SCI0_SPMR                         (SCI0_BASE + SCI0_SPMR_OFFSET)
#define SCI0_SPMR_CKPH                    (1 <<  7) /* 80: Clock Phase Select */
#define SCI0_SPMR_CKPOL                   (1 <<  6) /* 40: Clock Polarity Select */
#define SCI0_SPMR_MFF                     (1 <<  4) /* 10: Mode Fault Flag */
#define SCI0_SPMR_MSS                     (1 <<  2) /* 04: Master Slave Select */
#define SCI0_SPMR_CTSE                    (1 <<  1) /* 02: CTS Enable */
#define SCI0_SPMR_SSE                     (1 <<  0) /* 01: SSn Pin Function Enable */
#define SCI0_TDRHL_OFFSET                 0x000e
#define SCI0_TDRHL                        (SCI0_BASE + SCI0_TDRHL_OFFSET)
#define SCI0_TDRHL_TDRHL                  (16 <<  0) /* 01: TDRHL is a 16-bit register that stores transmit data. */
#define SCI0_TDRHL_TDRHL_MASK                  (0xffff)
#define SCI0_FTDRHL_OFFSET                0x000e
#define SCI0_FTDRHL                       (SCI0_BASE + SCI0_FTDRHL_OFFSET)
#define SCI0_FTDRHL_MPBT                  (1 <<  9) /* 200: Multi-processor transfer bit flag (Valid only in asynchronous mode and SMR.MP=1 and FIFO selected) */
#define SCI0_FTDRHL_TDAT                  (9 <<  0) /* 01: Serial transmit data (Valid only in asynchronous mode(including multi-processor) or clock synchronous mode, and FIFO selected) */
#define SCI0_FTDRHL_TDAT_MASK                  (0x1ff)
#define SCI0_FTDRH_OFFSET                 0x000e
#define SCI0_FTDRH                        (SCI0_BASE + SCI0_FTDRH_OFFSET)
#define SCI0_FTDRH_MPBT                   (1 <<  1) /* 02: Multi-processor transfer bit flag (Valid only in asynchronous mode and SMR.MP=1 and FIFO selected) */
#define SCI0_FTDRH_TDATH                  (1 <<  0) /* 01: Serial transmit data (b8) (Valid only in asynchronous mode(including multi-processor) or clock synchronous mode, and FIFO selected) */
#define SCI0_FTDRL_OFFSET                 0x000f
#define SCI0_FTDRL                        (SCI0_BASE + SCI0_FTDRL_OFFSET)
#define SCI0_FTDRL_TDATL                  (8 <<  0) /* 01: Serial transmit data(b7-b0) (Valid only in asynchronous mode(including multi-processor) or clock synchronous mode, and FIFO selected) */
#define SCI0_FTDRL_TDATL_MASK                  (0xff)
#define SCI0_RDRHL_OFFSET                 0x0010
#define SCI0_RDRHL                        (SCI0_BASE + SCI0_RDRHL_OFFSET)
#define SCI0_RDRHL_RDRHL                  (16 <<  0) /* 01: RDRHL is an 16-bit register that stores receive data. */
#define SCI0_RDRHL_RDRHL_MASK                  (0xffff)
#define SCI0_FRDRHL_OFFSET                0x0010
#define SCI0_FRDRHL                       (SCI0_BASE + SCI0_FRDRHL_OFFSET)
#define SCI0_FRDRHL_RDF                   (1 << 14) /* 4000: Receive FIFO data full flag (It is same as SSR.RDF) */
#define SCI0_FRDRHL_ORER                  (1 << 13) /* 2000: Overrun error flag (It is same as SSR.ORER) */
#define SCI0_FRDRHL_FER                   (1 << 12) /* 1000: Framing error flag */
#define SCI0_FRDRHL_PER                   (1 << 11) /* 800: Parity error flag */
#define SCI0_FRDRHL_DR                    (1 << 10) /* 400: Receive data ready flag (It is same as SSR.DR) */
#define SCI0_FRDRHL_MPB                   (1 <<  9) /* 200: Multi-processor bit flag (Valid only in asynchronous mode with SMR.MP=1 and FIFO selected) It can read multi-processor bit corresponded to serial receive data(RDATA[8:0]) */
#define SCI0_FRDRHL_RDAT                  (9 <<  0) /* 01: Serial receive data (Valid only in asynchronous mode(including multi-processor) or clock synchronous mode, and FIFO selected) */
#define SCI0_FRDRHL_RDAT_MASK                  (0x1ff)
#define SCI0_FRDRH_OFFSET                 0x0010
#define SCI0_FRDRH                        (SCI0_BASE + SCI0_FRDRH_OFFSET)
#define SCI0_FRDRH_RDF                    (1 <<  6) /* 40: Receive FIFO data full flag (It is same as SSR.RDF) */
#define SCI0_FRDRH_ORER                   (1 <<  5) /* 20: Overrun error flag (It is same as SSR.ORER) */
#define SCI0_FRDRH_FER                    (1 <<  4) /* 10: Framing error flag */
#define SCI0_FRDRH_PER                    (1 <<  3) /* 08: Parity error flag */
#define SCI0_FRDRH_DR                     (1 <<  2) /* 04: Receive data ready flag (It is same as SSR.DR) */
#define SCI0_FRDRH_MPB                    (1 <<  1) /* 02: Multi-processor bit flag (Valid only in asynchronous mode with SMR.MP=1 and FIFO selected) It can read multi-processor bit corresponded to serial receive data(RDATA[8:0]) */
#define SCI0_FRDRH_RDATH                  (1 <<  0) /* 01: Serial receive data(b8) (Valid only in asynchronous mode(including multi-processor) or clock synchronous mode, and FIFO selected) */
#define SCI0_FRDRL_OFFSET                 0x0011
#define SCI0_FRDRL                        (SCI0_BASE + SCI0_FRDRL_OFFSET)
#define SCI0_FRDRL_RDATL                  (8 <<  0) /* 01: Serial receive data (Valid only in asynchronous mode(including multi-processor) or clock synchronous mode, and FIFO selected) NOTE: When reading both of FRDRH register and FRDRL register, please read by an order of the FRDRH register and the FRDRL register. */
#define SCI0_FRDRL_RDATL_MASK                  (0xff)
#define SCI0_MDDR_OFFSET                  0x0012
#define SCI0_MDDR                         (SCI0_BASE + SCI0_MDDR_OFFSET)
#define SCI0_MDDR_MDDR                    (8 <<  0) /* 01: MDDR corrects the bit rate adjusted by the BRR register. */
#define SCI0_MDDR_MDDR_MASK                    (0xff)
#define SCI0_DCCR_OFFSET                  0x0013
#define SCI0_DCCR                         (SCI0_BASE + SCI0_DCCR_OFFSET)
#define SCI0_DCCR_DCME                    (1 <<  7) /* 80: Data Compare Match Enable (Valid only in asynchronous mode(including multi-processor) */
#define SCI0_DCCR_IDSEL                   (1 <<  6) /* 40: ID frame select (Valid only in asynchronous mode(including multi-processor) */
#define SCI0_DCCR_DFER                    (1 <<  4) /* 10: Data Compare Match Framing Error Flag */
#define SCI0_DCCR_DPER                    (1 <<  3) /* 08: Data Compare Match Parity Error Flag */
#define SCI0_DCCR_DCMF                    (1 <<  0) /* 01: Data Compare Match Flag */
#define SCI0_FCR_OFFSET                   0x0014
#define SCI0_FCR                          (SCI0_BASE + SCI0_FCR_OFFSET)
#define SCI0_FCR_RSTRG                    (4 << 12) /* 1000: RTS Output Active Trigger Number Select (Valid only in asynchronous mode(including multi-processor) or clock synchronous mode) */
#define SCI0_FCR_RSTRG_MASK                    (0x0f)
#define SCI0_FCR_RTRG                     (4 <<  8) /* 100: Receive FIFO data trigger number (Valid only in asynchronous mode(including multi-processor) or clock synchronous mode) */
#define SCI0_FCR_RTRG_MASK                     (0x0f)
#define SCI0_FCR_TTRG                     (4 <<  4) /* 10: Transmit FIFO data trigger number (Valid only in asynchronous mode(including multi-processor) or clock synchronous mode) */
#define SCI0_FCR_TTRG_MASK                     (0x0f)
#define SCI0_FCR_DRES                     (1 <<  3) /* 08: Receive data ready error select bit (When detecting a reception data ready, the interrupt request is selected.) */
#define SCI0_FCR_TFRST                    (1 <<  2) /* 04: Transmit FIFO Data Register Reset (Valid only in FCR.FM=1) */
#define SCI0_FCR_RFRST                    (1 <<  1) /* 02: Receive FIFO Data Register Reset (Valid only in FCR.FM=1) */
#define SCI0_FCR_FM                       (1 <<  0) /* 01: FIFO Mode Select (Valid only in asynchronous mode(including multi-processor) or clock synchronous mode) */
#define SCI0_FDR_OFFSET                   0x0016
#define SCI0_FDR                          (SCI0_BASE + SCI0_FDR_OFFSET)
#define SCI0_FDR_T                        (5 <<  8) /* 100: Transmit FIFO Data Count Indicate the quantity of non-transmit data stored in FTDRH and FTDRL (Valid only in asynchronous mode(including multi-processor) or clock synchronous mode, while FCR.FM=1) */
#define SCI0_FDR_T_MASK                        (0x1f)
#define SCI0_FDR_R                        (5 <<  0) /* 01: Receive FIFO Data Count Indicate the quantity of receive data stored in FRDRH and FRDRL (Valid only in asynchronous mode(including multi-processor) or clock synchronous mode, while FCR.FM=1) */
#define SCI0_FDR_R_MASK                        (0x1f)
#define SCI0_LSR_OFFSET                   0x0018
#define SCI0_LSR                          (SCI0_BASE + SCI0_LSR_OFFSET)
#define SCI0_LSR_PNUM                     (5 <<  8) /* 100: Parity Error Count Indicates the quantity of data with a parity error among the receive data stored in the receive FIFO data register (FRDRH and FRDRL). */
#define SCI0_LSR_PNUM_MASK                     (0x1f)
#define SCI0_LSR_FNUM                     (5 <<  2) /* 04: Framing Error Count Indicates the quantity of data with a framing error among the receive data stored in the receive FIFO data register (FRDRH and FRDRL). */
#define SCI0_LSR_FNUM_MASK                     (0x1f)
#define SCI0_LSR_ORER                     (1 <<  0) /* 01: Overrun Error Flag (Valid only in asynchronous mode(including multi-processor) or clock synchronous mode, and FIFO selected) */
#define SCI0_CDR_OFFSET                   0x001a
#define SCI0_CDR                          (SCI0_BASE + SCI0_CDR_OFFSET)
#define SCI0_CDR_CMPD                     (9 <<  0) /* 01: Compare Match Data Compare data pattern for address match wake-up function */
#define SCI0_CDR_CMPD_MASK                     (0x1ff)
#define SCI0_SPTR_OFFSET                  0x001c
#define SCI0_SPTR                         (SCI0_BASE + SCI0_SPTR_OFFSET)
#define SCI0_SPTR_SPB2IO                  (1 <<  2) /* 04: Serial port break I/O bit (It's selected whether the value of SPB2DT is output to TxD terminal.) */
#define SCI0_SPTR_SPB2DT                  (1 <<  1) /* 02: Serial port break data select bit (The output level of TxD terminal is selected when SCR.TE = 0.) */
#define SCI0_SPTR_RXDMON                  (1 <<  0) /* 01: Serial input data monitor bit (The state of the RXD terminal is shown.) */

/* No registers defined for peripheral SCI1. Using those of SCI0. */
#define SCI1_BASE                         0x40070020
#define SCI1_SMR_OFFSET                   SCI0_SMR_OFFSET
#define SCI1_SMR                          SCI0_SMR
#define SCI1_SMR_CM                       SCI0_SMR_CM
#define SCI1_SMR_CHR                      SCI0_SMR_CHR
#define SCI1_SMR_PE                       SCI0_SMR_PE
#define SCI1_SMR_PM                       SCI0_SMR_PM
#define SCI1_SMR_STOP                     SCI0_SMR_STOP
#define SCI1_SMR_MP                       SCI0_SMR_MP
#define SCI1_SMR_CKS                      SCI0_SMR_CKS
#define SCI1_SMR_CKS_MASK                 SCI0_SMR_CKS_MASK
#define SCI1_SMR_SMCI_OFFSET              SCI0_SMR_SMCI_OFFSET
#define SCI1_SMR_SMCI                     SCI0_SMR_SMCI
#define SCI1_SMR_SMCI_GM                  SCI0_SMR_SMCI_GM
#define SCI1_SMR_SMCI_BLK                 SCI0_SMR_SMCI_BLK
#define SCI1_SMR_SMCI_PE                  SCI0_SMR_SMCI_PE
#define SCI1_SMR_SMCI_PM                  SCI0_SMR_SMCI_PM
#define SCI1_SMR_SMCI_BCP                 SCI0_SMR_SMCI_BCP
#define SCI1_SMR_SMCI_BCP_MASK            SCI0_SMR_SMCI_BCP_MASK
#define SCI1_SMR_SMCI_CKS                 SCI0_SMR_SMCI_CKS
#define SCI1_SMR_SMCI_CKS_MASK            SCI0_SMR_SMCI_CKS_MASK
#define SCI1_BRR_OFFSET                   SCI0_BRR_OFFSET
#define SCI1_BRR                          SCI0_BRR
#define SCI1_BRR_BRR                      SCI0_BRR_BRR
#define SCI1_BRR_BRR_MASK                 SCI0_BRR_BRR_MASK
#define SCI1_SCR_OFFSET                   SCI0_SCR_OFFSET
#define SCI1_SCR                          SCI0_SCR
#define SCI1_SCR_TIE                      SCI0_SCR_TIE
#define SCI1_SCR_RIE                      SCI0_SCR_RIE
#define SCI1_SCR_TE                       SCI0_SCR_TE
#define SCI1_SCR_RE                       SCI0_SCR_RE
#define SCI1_SCR_MPIE                     SCI0_SCR_MPIE
#define SCI1_SCR_TEIE                     SCI0_SCR_TEIE
#define SCI1_SCR_CKE                      SCI0_SCR_CKE
#define SCI1_SCR_CKE_MASK                 SCI0_SCR_CKE_MASK
#define SCI1_SCR_SMCI_OFFSET              SCI0_SCR_SMCI_OFFSET
#define SCI1_SCR_SMCI                     SCI0_SCR_SMCI
#define SCI1_SCR_SMCI_TIE                 SCI0_SCR_SMCI_TIE
#define SCI1_SCR_SMCI_RIE                 SCI0_SCR_SMCI_RIE
#define SCI1_SCR_SMCI_TE                  SCI0_SCR_SMCI_TE
#define SCI1_SCR_SMCI_RE                  SCI0_SCR_SMCI_RE
#define SCI1_SCR_SMCI_MPIE                SCI0_SCR_SMCI_MPIE
#define SCI1_SCR_SMCI_TEIE                SCI0_SCR_SMCI_TEIE
#define SCI1_SCR_SMCI_CKE                 SCI0_SCR_SMCI_CKE
#define SCI1_SCR_SMCI_CKE_MASK            SCI0_SCR_SMCI_CKE_MASK
#define SCI1_TDR_OFFSET                   SCI0_TDR_OFFSET
#define SCI1_TDR                          SCI0_TDR
#define SCI1_TDR_TDR                      SCI0_TDR_TDR
#define SCI1_TDR_TDR_MASK                 SCI0_TDR_TDR_MASK
#define SCI1_SSR_OFFSET                   SCI0_SSR_OFFSET
#define SCI1_SSR                          SCI0_SSR
#define SCI1_SSR_TDRE                     SCI0_SSR_TDRE
#define SCI1_SSR_RDRF                     SCI0_SSR_RDRF
#define SCI1_SSR_ORER                     SCI0_SSR_ORER
#define SCI1_SSR_FER                      SCI0_SSR_FER
#define SCI1_SSR_PER                      SCI0_SSR_PER
#define SCI1_SSR_TEND                     SCI0_SSR_TEND
#define SCI1_SSR_MPB                      SCI0_SSR_MPB
#define SCI1_SSR_MPBT                     SCI0_SSR_MPBT
#define SCI1_SSR_FIFO_OFFSET              SCI0_SSR_FIFO_OFFSET
#define SCI1_SSR_FIFO                     SCI0_SSR_FIFO
#define SCI1_SSR_FIFO_TDFE                SCI0_SSR_FIFO_TDFE
#define SCI1_SSR_FIFO_RDF                 SCI0_SSR_FIFO_RDF
#define SCI1_SSR_FIFO_ORER                SCI0_SSR_FIFO_ORER
#define SCI1_SSR_FIFO_FER                 SCI0_SSR_FIFO_FER
#define SCI1_SSR_FIFO_PER                 SCI0_SSR_FIFO_PER
#define SCI1_SSR_FIFO_TEND                SCI0_SSR_FIFO_TEND
#define SCI1_SSR_FIFO_DR                  SCI0_SSR_FIFO_DR
#define SCI1_SSR_SMCI_OFFSET              SCI0_SSR_SMCI_OFFSET
#define SCI1_SSR_SMCI                     SCI0_SSR_SMCI
#define SCI1_SSR_SMCI_TDRE                SCI0_SSR_SMCI_TDRE
#define SCI1_SSR_SMCI_RDRF                SCI0_SSR_SMCI_RDRF
#define SCI1_SSR_SMCI_ORER                SCI0_SSR_SMCI_ORER
#define SCI1_SSR_SMCI_ERS                 SCI0_SSR_SMCI_ERS
#define SCI1_SSR_SMCI_PER                 SCI0_SSR_SMCI_PER
#define SCI1_SSR_SMCI_TEND                SCI0_SSR_SMCI_TEND
#define SCI1_SSR_SMCI_MPB                 SCI0_SSR_SMCI_MPB
#define SCI1_SSR_SMCI_MPBT                SCI0_SSR_SMCI_MPBT
#define SCI1_RDR_OFFSET                   SCI0_RDR_OFFSET
#define SCI1_RDR                          SCI0_RDR
#define SCI1_RDR_RDR                      SCI0_RDR_RDR
#define SCI1_RDR_RDR_MASK                 SCI0_RDR_RDR_MASK
#define SCI1_SCMR_OFFSET                  SCI0_SCMR_OFFSET
#define SCI1_SCMR                         SCI0_SCMR
#define SCI1_SCMR_BCP2                    SCI0_SCMR_BCP2
#define SCI1_SCMR_CHR1                    SCI0_SCMR_CHR1
#define SCI1_SCMR_SDIR                    SCI0_SCMR_SDIR
#define SCI1_SCMR_SINV                    SCI0_SCMR_SINV
#define SCI1_SCMR_SMIF                    SCI0_SCMR_SMIF
#define SCI1_SEMR_OFFSET                  SCI0_SEMR_OFFSET
#define SCI1_SEMR                         SCI0_SEMR
#define SCI1_SEMR_RXDESEL                 SCI0_SEMR_RXDESEL
#define SCI1_SEMR_BGDM                    SCI0_SEMR_BGDM
#define SCI1_SEMR_NFEN                    SCI0_SEMR_NFEN
#define SCI1_SEMR_ABCS                    SCI0_SEMR_ABCS
#define SCI1_SEMR_ABCSE                   SCI0_SEMR_ABCSE
#define SCI1_SEMR_BRME                    SCI0_SEMR_BRME
#define SCI1_SNFR_OFFSET                  SCI0_SNFR_OFFSET
#define SCI1_SNFR                         SCI0_SNFR
#define SCI1_SNFR_NFCS                    SCI0_SNFR_NFCS
#define SCI1_SNFR_NFCS_MASK               SCI0_SNFR_NFCS_MASK
#define SCI1_SIMR1_OFFSET                 SCI0_SIMR1_OFFSET
#define SCI1_SIMR1                        SCI0_SIMR1
#define SCI1_SIMR1_IICDL                  SCI0_SIMR1_IICDL
#define SCI1_SIMR1_IICDL_MASK             SCI0_SIMR1_IICDL_MASK
#define SCI1_SIMR1_IICM                   SCI0_SIMR1_IICM
#define SCI1_SIMR2_OFFSET                 SCI0_SIMR2_OFFSET
#define SCI1_SIMR2                        SCI0_SIMR2
#define SCI1_SIMR2_IICACKT                SCI0_SIMR2_IICACKT
#define SCI1_SIMR2_IICCSC                 SCI0_SIMR2_IICCSC
#define SCI1_SIMR2_IICINTM                SCI0_SIMR2_IICINTM
#define SCI1_SIMR3_OFFSET                 SCI0_SIMR3_OFFSET
#define SCI1_SIMR3                        SCI0_SIMR3
#define SCI1_SIMR3_IICSCLS                SCI0_SIMR3_IICSCLS
#define SCI1_SIMR3_IICSCLS_MASK           SCI0_SIMR3_IICSCLS_MASK
#define SCI1_SIMR3_IICSDAS                SCI0_SIMR3_IICSDAS
#define SCI1_SIMR3_IICSDAS_MASK           SCI0_SIMR3_IICSDAS_MASK
#define SCI1_SIMR3_IICSTIF                SCI0_SIMR3_IICSTIF
#define SCI1_SIMR3_IICSTPREQ              SCI0_SIMR3_IICSTPREQ
#define SCI1_SIMR3_IICRSTAREQ             SCI0_SIMR3_IICRSTAREQ
#define SCI1_SIMR3_IICSTAREQ              SCI0_SIMR3_IICSTAREQ
#define SCI1_SISR_OFFSET                  SCI0_SISR_OFFSET
#define SCI1_SISR                         SCI0_SISR
#define SCI1_SISR_IICACKR                 SCI0_SISR_IICACKR
#define SCI1_SPMR_OFFSET                  SCI0_SPMR_OFFSET
#define SCI1_SPMR                         SCI0_SPMR
#define SCI1_SPMR_CKPH                    SCI0_SPMR_CKPH
#define SCI1_SPMR_CKPOL                   SCI0_SPMR_CKPOL
#define SCI1_SPMR_MFF                     SCI0_SPMR_MFF
#define SCI1_SPMR_MSS                     SCI0_SPMR_MSS
#define SCI1_SPMR_CTSE                    SCI0_SPMR_CTSE
#define SCI1_SPMR_SSE                     SCI0_SPMR_SSE
#define SCI1_TDRHL_OFFSET                 SCI0_TDRHL_OFFSET
#define SCI1_TDRHL                        SCI0_TDRHL
#define SCI1_TDRHL_TDRHL                  SCI0_TDRHL_TDRHL
#define SCI1_TDRHL_TDRHL_MASK             SCI0_TDRHL_TDRHL_MASK
#define SCI1_FTDRHL_OFFSET                SCI0_FTDRHL_OFFSET
#define SCI1_FTDRHL                       SCI0_FTDRHL
#define SCI1_FTDRHL_MPBT                  SCI0_FTDRHL_MPBT
#define SCI1_FTDRHL_TDAT                  SCI0_FTDRHL_TDAT
#define SCI1_FTDRHL_TDAT_MASK             SCI0_FTDRHL_TDAT_MASK
#define SCI1_FTDRH_OFFSET                 SCI0_FTDRH_OFFSET
#define SCI1_FTDRH                        SCI0_FTDRH
#define SCI1_FTDRH_MPBT                   SCI0_FTDRH_MPBT
#define SCI1_FTDRH_TDATH                  SCI0_FTDRH_TDATH
#define SCI1_FTDRL_OFFSET                 SCI0_FTDRL_OFFSET
#define SCI1_FTDRL                        SCI0_FTDRL
#define SCI1_FTDRL_TDATL                  SCI0_FTDRL_TDATL
#define SCI1_FTDRL_TDATL_MASK             SCI0_FTDRL_TDATL_MASK
#define SCI1_RDRHL_OFFSET                 SCI0_RDRHL_OFFSET
#define SCI1_RDRHL                        SCI0_RDRHL
#define SCI1_RDRHL_RDRHL                  SCI0_RDRHL_RDRHL
#define SCI1_RDRHL_RDRHL_MASK             SCI0_RDRHL_RDRHL_MASK
#define SCI1_FRDRHL_OFFSET                SCI0_FRDRHL_OFFSET
#define SCI1_FRDRHL                       SCI0_FRDRHL
#define SCI1_FRDRHL_RDF                   SCI0_FRDRHL_RDF
#define SCI1_FRDRHL_ORER                  SCI0_FRDRHL_ORER
#define SCI1_FRDRHL_FER                   SCI0_FRDRHL_FER
#define SCI1_FRDRHL_PER                   SCI0_FRDRHL_PER
#define SCI1_FRDRHL_DR                    SCI0_FRDRHL_DR
#define SCI1_FRDRHL_MPB                   SCI0_FRDRHL_MPB
#define SCI1_FRDRHL_RDAT                  SCI0_FRDRHL_RDAT
#define SCI1_FRDRHL_RDAT_MASK             SCI0_FRDRHL_RDAT_MASK
#define SCI1_FRDRH_OFFSET                 SCI0_FRDRH_OFFSET
#define SCI1_FRDRH                        SCI0_FRDRH
#define SCI1_FRDRH_RDF                    SCI0_FRDRH_RDF
#define SCI1_FRDRH_ORER                   SCI0_FRDRH_ORER
#define SCI1_FRDRH_FER                    SCI0_FRDRH_FER
#define SCI1_FRDRH_PER                    SCI0_FRDRH_PER
#define SCI1_FRDRH_DR                     SCI0_FRDRH_DR
#define SCI1_FRDRH_MPB                    SCI0_FRDRH_MPB
#define SCI1_FRDRH_RDATH                  SCI0_FRDRH_RDATH
#define SCI1_FRDRL_OFFSET                 SCI0_FRDRL_OFFSET
#define SCI1_FRDRL                        SCI0_FRDRL
#define SCI1_FRDRL_RDATL                  SCI0_FRDRL_RDATL
#define SCI1_FRDRL_RDATL_MASK             SCI0_FRDRL_RDATL_MASK
#define SCI1_MDDR_OFFSET                  SCI0_MDDR_OFFSET
#define SCI1_MDDR                         SCI0_MDDR
#define SCI1_MDDR_MDDR                    SCI0_MDDR_MDDR
#define SCI1_MDDR_MDDR_MASK               SCI0_MDDR_MDDR_MASK
#define SCI1_DCCR_OFFSET                  SCI0_DCCR_OFFSET
#define SCI1_DCCR                         SCI0_DCCR
#define SCI1_DCCR_DCME                    SCI0_DCCR_DCME
#define SCI1_DCCR_IDSEL                   SCI0_DCCR_IDSEL
#define SCI1_DCCR_DFER                    SCI0_DCCR_DFER
#define SCI1_DCCR_DPER                    SCI0_DCCR_DPER
#define SCI1_DCCR_DCMF                    SCI0_DCCR_DCMF
#define SCI1_FCR_OFFSET                   SCI0_FCR_OFFSET
#define SCI1_FCR                          SCI0_FCR
#define SCI1_FCR_RSTRG                    SCI0_FCR_RSTRG
#define SCI1_FCR_RSTRG_MASK               SCI0_FCR_RSTRG_MASK
#define SCI1_FCR_RTRG                     SCI0_FCR_RTRG
#define SCI1_FCR_RTRG_MASK                SCI0_FCR_RTRG_MASK
#define SCI1_FCR_TTRG                     SCI0_FCR_TTRG
#define SCI1_FCR_TTRG_MASK                SCI0_FCR_TTRG_MASK
#define SCI1_FCR_DRES                     SCI0_FCR_DRES
#define SCI1_FCR_TFRST                    SCI0_FCR_TFRST
#define SCI1_FCR_RFRST                    SCI0_FCR_RFRST
#define SCI1_FCR_FM                       SCI0_FCR_FM
#define SCI1_FDR_OFFSET                   SCI0_FDR_OFFSET
#define SCI1_FDR                          SCI0_FDR
#define SCI1_FDR_T                        SCI0_FDR_T
#define SCI1_FDR_T_MASK                   SCI0_FDR_T_MASK
#define SCI1_FDR_R                        SCI0_FDR_R
#define SCI1_FDR_R_MASK                   SCI0_FDR_R_MASK
#define SCI1_LSR_OFFSET                   SCI0_LSR_OFFSET
#define SCI1_LSR                          SCI0_LSR
#define SCI1_LSR_PNUM                     SCI0_LSR_PNUM
#define SCI1_LSR_PNUM_MASK                SCI0_LSR_PNUM_MASK
#define SCI1_LSR_FNUM                     SCI0_LSR_FNUM
#define SCI1_LSR_FNUM_MASK                SCI0_LSR_FNUM_MASK
#define SCI1_LSR_ORER                     SCI0_LSR_ORER
#define SCI1_CDR_OFFSET                   SCI0_CDR_OFFSET
#define SCI1_CDR                          SCI0_CDR
#define SCI1_CDR_CMPD                     SCI0_CDR_CMPD
#define SCI1_CDR_CMPD_MASK                SCI0_CDR_CMPD_MASK
#define SCI1_SPTR_OFFSET                  SCI0_SPTR_OFFSET
#define SCI1_SPTR                         SCI0_SPTR
#define SCI1_SPTR_SPB2IO                  SCI0_SPTR_SPB2IO
#define SCI1_SPTR_SPB2DT                  SCI0_SPTR_SPB2DT
#define SCI1_SPTR_RXDMON                  SCI0_SPTR_RXDMON

/* SCI2 - Serial Communication Interface 2 */
#define SCI2_BASE                         0x40070040
#define SCI2_SMR_OFFSET                   0x0000
#define SCI2_SMR                          (SCI2_BASE + SCI2_SMR_OFFSET)
#define SCI2_SMR_CM                       (1 <<  7) /* 80: Communication Mode */
#define SCI2_SMR_CHR                      (1 <<  6) /* 40: Character Length (Valid only in asynchronous mode) */
#define SCI2_SMR_PE                       (1 <<  5) /* 20: Parity Enable (Valid only in asynchronous mode) */
#define SCI2_SMR_PM                       (1 <<  4) /* 10: Parity Mode (Valid only when the PE bit is 1) */
#define SCI2_SMR_STOP                     (1 <<  3) /* 08: Stop Bit Length (Valid only in asynchronous mode) */
#define SCI2_SMR_MP                       (1 <<  2) /* 04: Multi-Processor Mode (Valid only in asynchronous mode) */
#define SCI2_SMR_CKS                      (2 <<  0) /* 01: Clock Select */
#define SCI2_SMR_CKS_MASK                      (0x03)
#define SCI2_SMR_SMCI_OFFSET              0x0000
#define SCI2_SMR_SMCI                     (SCI2_BASE + SCI2_SMR_SMCI_OFFSET)
#define SCI2_SMR_SMCI_GM                  (1 <<  7) /* 80: GSM Mode */
#define SCI2_SMR_SMCI_BLK                 (1 <<  6) /* 40: Block Transfer Mode */
#define SCI2_SMR_SMCI_PE                  (1 <<  5) /* 20: Parity Enable (Valid only in asynchronous mode) */
#define SCI2_SMR_SMCI_PM                  (1 <<  4) /* 10: Parity Mode (Valid only when the PE bit is 1) */
#define SCI2_SMR_SMCI_BCP                 (2 <<  2) /* 04: Base Clock Pulse (Valid only in asynchronous mode) */
#define SCI2_SMR_SMCI_BCP_MASK                 (0x03)
#define SCI2_SMR_SMCI_CKS                 (2 <<  0) /* 01: Clock Select */
#define SCI2_SMR_SMCI_CKS_MASK                 (0x03)
#define SCI2_BRR_OFFSET                   0x0001
#define SCI2_BRR                          (SCI2_BASE + SCI2_BRR_OFFSET)
#define SCI2_BRR_BRR                      (8 <<  0) /* 01: BRR is an 8-bit register that adjusts the bit rate. */
#define SCI2_BRR_BRR_MASK                      (0xff)
#define SCI2_SCR_OFFSET                   0x0002
#define SCI2_SCR                          (SCI2_BASE + SCI2_SCR_OFFSET)
#define SCI2_SCR_TIE                      (1 <<  7) /* 80: Transmit Interrupt Enable */
#define SCI2_SCR_RIE                      (1 <<  6) /* 40: Receive Interrupt Enable */
#define SCI2_SCR_TE                       (1 <<  5) /* 20: Transmit Enable */
#define SCI2_SCR_RE                       (1 <<  4) /* 10: Receive Enable */
#define SCI2_SCR_MPIE                     (1 <<  3) /* 08: Multi-Processor Interrupt Enable (Valid in asynchronous mode when SMR.MP = 1) */
#define SCI2_SCR_TEIE                     (1 <<  2) /* 04: Transmit End Interrupt Enable */
#define SCI2_SCR_CKE                      (2 <<  0) /* 01: Clock Enable */
#define SCI2_SCR_CKE_MASK                      (0x03)
#define SCI2_SCR_SMCI_OFFSET              0x0002
#define SCI2_SCR_SMCI                     (SCI2_BASE + SCI2_SCR_SMCI_OFFSET)
#define SCI2_SCR_SMCI_TIE                 (1 <<  7) /* 80: Transmit Interrupt Enable */
#define SCI2_SCR_SMCI_RIE                 (1 <<  6) /* 40: Receive Interrupt Enable */
#define SCI2_SCR_SMCI_TE                  (1 <<  5) /* 20: Transmit Enable */
#define SCI2_SCR_SMCI_RE                  (1 <<  4) /* 10: Receive Enable */
#define SCI2_SCR_SMCI_MPIE                (1 <<  3) /* 08: Multi-Processor Interrupt Enable */
#define SCI2_SCR_SMCI_TEIE                (1 <<  2) /* 04: Transmit End Interrupt Enable */
#define SCI2_SCR_SMCI_CKE                 (2 <<  0) /* 01: Clock Enable */
#define SCI2_SCR_SMCI_CKE_MASK                 (0x03)
#define SCI2_TDR_OFFSET                   0x0003
#define SCI2_TDR                          (SCI2_BASE + SCI2_TDR_OFFSET)
#define SCI2_TDR_TDR                      (8 <<  0) /* 01: TDR is an 8-bit register that stores transmit data. */
#define SCI2_TDR_TDR_MASK                      (0xff)
#define SCI2_SSR_OFFSET                   0x0004
#define SCI2_SSR                          (SCI2_BASE + SCI2_SSR_OFFSET)
#define SCI2_SSR_TDRE                     (1 <<  7) /* 80: Transmit Data Empty Flag */
#define SCI2_SSR_RDRF                     (1 <<  6) /* 40: Receive Data Full Flag */
#define SCI2_SSR_ORER                     (1 <<  5) /* 20: Overrun Error Flag */
#define SCI2_SSR_FER                      (1 <<  4) /* 10: Framing Error Flag */
#define SCI2_SSR_PER                      (1 <<  3) /* 08: Parity Error Flag */
#define SCI2_SSR_TEND                     (1 <<  2) /* 04: Transmit End Flag */
#define SCI2_SSR_MPB                      (1 <<  1) /* 02: Multi-Processor */
#define SCI2_SSR_MPBT                     (1 <<  0) /* 01: Multi-Processor Bit Transfer */
#define SCI2_SSR_SMCI_OFFSET              0x0004
#define SCI2_SSR_SMCI                     (SCI2_BASE + SCI2_SSR_SMCI_OFFSET)
#define SCI2_SSR_SMCI_TDRE                (1 <<  7) /* 80: Transmit Data Empty Flag */
#define SCI2_SSR_SMCI_RDRF                (1 <<  6) /* 40: Receive Data Full Flag */
#define SCI2_SSR_SMCI_ORER                (1 <<  5) /* 20: Overrun Error Flag */
#define SCI2_SSR_SMCI_ERS                 (1 <<  4) /* 10: Error Signal Status Flag */
#define SCI2_SSR_SMCI_PER                 (1 <<  3) /* 08: Parity Error Flag */
#define SCI2_SSR_SMCI_TEND                (1 <<  2) /* 04: Transmit End Flag */
#define SCI2_SSR_SMCI_MPB                 (1 <<  1) /* 02: Multi-Processor This bit should be 0 in smart card interface mode. */
#define SCI2_SSR_SMCI_MPBT                (1 <<  0) /* 01: Multi-Processor Bit Transfer This bit should be 0 in smart card interface mode. */
#define SCI2_RDR_OFFSET                   0x0005
#define SCI2_RDR                          (SCI2_BASE + SCI2_RDR_OFFSET)
#define SCI2_RDR_RDR                      (8 <<  0) /* 01: RDR is an 8-bit register that stores receive data. */
#define SCI2_RDR_RDR_MASK                      (0xff)
#define SCI2_SCMR_OFFSET                  0x0006
#define SCI2_SCMR                         (SCI2_BASE + SCI2_SCMR_OFFSET)
#define SCI2_SCMR_BCP2                    (1 <<  7) /* 80: Base Clock Pulse 2 Selects the number of base clock cycles in combination with the SMR.BCP[1:0] bits */
#define SCI2_SCMR_CHR1                    (1 <<  4) /* 10: Character Length 1 (Only valid in asynchronous mode) */
#define SCI2_SCMR_SDIR                    (1 <<  3) /* 08: Transmitted/Received Data Transfer Direction NOTE: The setting is invalid and a fixed data length of 8 bits is used in modes other than asynchronous mode. Set this bit to 1 if operation is to be in simple I2C mode. */
#define SCI2_SCMR_SINV                    (1 <<  2) /* 04: Transmitted/Received Data Invert Set this bit to 0 if operation is to be in simple I2C mode. */
#define SCI2_SCMR_SMIF                    (1 <<  0) /* 01: Smart Card Interface Mode Select */
#define SCI2_SEMR_OFFSET                  0x0007
#define SCI2_SEMR                         (SCI2_BASE + SCI2_SEMR_OFFSET)
#define SCI2_SEMR_RXDESEL                 (1 <<  7) /* 80: Asynchronous Start Bit Edge Detection Select (Valid only in asynchronous mode) */
#define SCI2_SEMR_BGDM                    (1 <<  6) /* 40: Baud Rate Generator Double-Speed Mode Select (Only valid the CKE[1] bit in SCR is 0 in asynchronous mode). */
#define SCI2_SEMR_NFEN                    (1 <<  5) /* 20: Digital Noise Filter Function Enable (The NFEN bit should be 0 without simple I2C mode and asynchronous mode.) In asynchronous mode, for RXDn input only. In simple I2C mode, for RXDn/TxDn input. */
#define SCI2_SEMR_ABCS                    (1 <<  4) /* 10: Asynchronous Mode Base Clock Select (Valid only in asynchronous mode) */
#define SCI2_SEMR_ABCSE                   (1 <<  3) /* 08: Asynchronous Mode Extended Base Clock Select 1 (Valid only in asynchronous mode and SCR.CKE[1]=0) */
#define SCI2_SEMR_BRME                    (1 <<  2) /* 04: Bit Rate Modulation Enable */
#define SCI2_SNFR_OFFSET                  0x0008
#define SCI2_SNFR                         (SCI2_BASE + SCI2_SNFR_OFFSET)
#define SCI2_SNFR_NFCS                    (3 <<  0) /* 01: Noise Filter Clock Select */
#define SCI2_SNFR_NFCS_MASK                    (0x07)
#define SCI2_SIMR1_OFFSET                 0x0009
#define SCI2_SIMR1                        (SCI2_BASE + SCI2_SIMR1_OFFSET)
#define SCI2_SIMR1_IICDL                  (5 <<  3) /* 08: SDA Delay Output Select Cycles below are of the clock signal from the on-chip baud rate generator. */
#define SCI2_SIMR1_IICDL_MASK                  (0x1f)
#define SCI2_SIMR1_IICM                   (1 <<  0) /* 01: Simple I2C Mode Select */
#define SCI2_SIMR2_OFFSET                 0x000a
#define SCI2_SIMR2                        (SCI2_BASE + SCI2_SIMR2_OFFSET)
#define SCI2_SIMR2_IICACKT                (1 <<  5) /* 20: ACK Transmission Data */
#define SCI2_SIMR2_IICCSC                 (1 <<  1) /* 02: Clock Synchronization */
#define SCI2_SIMR2_IICINTM                (1 <<  0) /* 01: I2C Interrupt Mode Select */
#define SCI2_SIMR3_OFFSET                 0x000b
#define SCI2_SIMR3                        (SCI2_BASE + SCI2_SIMR3_OFFSET)
#define SCI2_SIMR3_IICSCLS                (2 <<  6) /* 40: SCL Output Select */
#define SCI2_SIMR3_IICSCLS_MASK                (0x03)
#define SCI2_SIMR3_IICSDAS                (2 <<  4) /* 10: SDA Output Select */
#define SCI2_SIMR3_IICSDAS_MASK                (0x03)
#define SCI2_SIMR3_IICSTIF                (1 <<  3) /* 08: Issuing of Start, Restart, or Stop Condition Completed Flag (When 0 is written to IICSTIF, it is cleared to 0.) */
#define SCI2_SIMR3_IICSTPREQ              (1 <<  2) /* 04: Stop Condition Generation */
#define SCI2_SIMR3_IICRSTAREQ             (1 <<  1) /* 02: Restart Condition Generation */
#define SCI2_SIMR3_IICSTAREQ              (1 <<  0) /* 01: Start Condition Generation */
#define SCI2_SISR_OFFSET                  0x000c
#define SCI2_SISR                         (SCI2_BASE + SCI2_SISR_OFFSET)
#define SCI2_SISR_IICACKR                 (1 <<  0) /* 01: ACK Reception Data Flag */
#define SCI2_SPMR_OFFSET                  0x000d
#define SCI2_SPMR                         (SCI2_BASE + SCI2_SPMR_OFFSET)
#define SCI2_SPMR_CKPH                    (1 <<  7) /* 80: Clock Phase Select */
#define SCI2_SPMR_CKPOL                   (1 <<  6) /* 40: Clock Polarity Select */
#define SCI2_SPMR_MFF                     (1 <<  4) /* 10: Mode Fault Flag */
#define SCI2_SPMR_MSS                     (1 <<  2) /* 04: Master Slave Select */
#define SCI2_SPMR_CTSE                    (1 <<  1) /* 02: CTS Enable */
#define SCI2_SPMR_SSE                     (1 <<  0) /* 01: SSn Pin Function Enable */
#define SCI2_TDRHL_OFFSET                 0x000e
#define SCI2_TDRHL                        (SCI2_BASE + SCI2_TDRHL_OFFSET)
#define SCI2_TDRHL_TDRHL                  (16 <<  0) /* 01: TDRHL is a 16-bit register that stores transmit data. */
#define SCI2_TDRHL_TDRHL_MASK                  (0xffff)
#define SCI2_RDRHL_OFFSET                 0x0010
#define SCI2_RDRHL                        (SCI2_BASE + SCI2_RDRHL_OFFSET)
#define SCI2_RDRHL_RDRHL                  (16 <<  0) /* 01: RDRHL is an 16-bit register that stores receive data. */
#define SCI2_RDRHL_RDRHL_MASK                  (0xffff)
#define SCI2_MDDR_OFFSET                  0x0012
#define SCI2_MDDR                         (SCI2_BASE + SCI2_MDDR_OFFSET)
#define SCI2_MDDR_MDDR                    (8 <<  0) /* 01: MDDR corrects the bit rate adjusted by the BRR register. */
#define SCI2_MDDR_MDDR_MASK                    (0xff)
#define SCI2_DCCR_OFFSET                  0x0013
#define SCI2_DCCR                         (SCI2_BASE + SCI2_DCCR_OFFSET)
#define SCI2_DCCR_DCME                    (1 <<  7) /* 80: Data Compare Match Enable (Valid only in asynchronous mode(including multi-processor) */
#define SCI2_DCCR_IDSEL                   (1 <<  6) /* 40: ID frame select (Valid only in asynchronous mode(including multi-processor) */
#define SCI2_DCCR_DFER                    (1 <<  4) /* 10: Data Compare Match Framing Error Flag */
#define SCI2_DCCR_DPER                    (1 <<  3) /* 08: Data Compare Match Parity Error Flag */
#define SCI2_DCCR_DCMF                    (1 <<  0) /* 01: Data Compare Match Flag */
#define SCI2_CDR_OFFSET                   0x001a
#define SCI2_CDR                          (SCI2_BASE + SCI2_CDR_OFFSET)
#define SCI2_CDR_CMPD                     (9 <<  0) /* 01: Compare Match Data Compare data pattern for address match wake-up function */
#define SCI2_CDR_CMPD_MASK                     (0x1ff)
#define SCI2_SPTR_OFFSET                  0x001c
#define SCI2_SPTR                         (SCI2_BASE + SCI2_SPTR_OFFSET)
#define SCI2_SPTR_SPB2IO                  (1 <<  2) /* 04: Serial port break I/O bit (It's selected whether the value of SPB2DT is output to TxD terminal.) */
#define SCI2_SPTR_SPB2DT                  (1 <<  1) /* 02: Serial port break data select bit (The output level of TxD terminal is selected when SCR.TE = 0.) */
#define SCI2_SPTR_RXDMON                  (1 <<  0) /* 01: Serial input data monitor bit (The state of the RXD terminal is shown.) */

/* No registers defined for peripheral SCI9. Using those of SCI2. */
#define SCI9_BASE                         0x40070120
#define SCI9_SMR_OFFSET                   SCI2_SMR_OFFSET
#define SCI9_SMR                          SCI2_SMR
#define SCI9_SMR_CM                       SCI2_SMR_CM
#define SCI9_SMR_CHR                      SCI2_SMR_CHR
#define SCI9_SMR_PE                       SCI2_SMR_PE
#define SCI9_SMR_PM                       SCI2_SMR_PM
#define SCI9_SMR_STOP                     SCI2_SMR_STOP
#define SCI9_SMR_MP                       SCI2_SMR_MP
#define SCI9_SMR_CKS                      SCI2_SMR_CKS
#define SCI9_SMR_CKS_MASK                 SCI2_SMR_CKS_MASK
#define SCI9_SMR_SMCI_OFFSET              SCI2_SMR_SMCI_OFFSET
#define SCI9_SMR_SMCI                     SCI2_SMR_SMCI
#define SCI9_SMR_SMCI_GM                  SCI2_SMR_SMCI_GM
#define SCI9_SMR_SMCI_BLK                 SCI2_SMR_SMCI_BLK
#define SCI9_SMR_SMCI_PE                  SCI2_SMR_SMCI_PE
#define SCI9_SMR_SMCI_PM                  SCI2_SMR_SMCI_PM
#define SCI9_SMR_SMCI_BCP                 SCI2_SMR_SMCI_BCP
#define SCI9_SMR_SMCI_BCP_MASK            SCI2_SMR_SMCI_BCP_MASK
#define SCI9_SMR_SMCI_CKS                 SCI2_SMR_SMCI_CKS
#define SCI9_SMR_SMCI_CKS_MASK            SCI2_SMR_SMCI_CKS_MASK
#define SCI9_BRR_OFFSET                   SCI2_BRR_OFFSET
#define SCI9_BRR                          SCI2_BRR
#define SCI9_BRR_BRR                      SCI2_BRR_BRR
#define SCI9_BRR_BRR_MASK                 SCI2_BRR_BRR_MASK
#define SCI9_SCR_OFFSET                   SCI2_SCR_OFFSET
#define SCI9_SCR                          SCI2_SCR
#define SCI9_SCR_TIE                      SCI2_SCR_TIE
#define SCI9_SCR_RIE                      SCI2_SCR_RIE
#define SCI9_SCR_TE                       SCI2_SCR_TE
#define SCI9_SCR_RE                       SCI2_SCR_RE
#define SCI9_SCR_MPIE                     SCI2_SCR_MPIE
#define SCI9_SCR_TEIE                     SCI2_SCR_TEIE
#define SCI9_SCR_CKE                      SCI2_SCR_CKE
#define SCI9_SCR_CKE_MASK                 SCI2_SCR_CKE_MASK
#define SCI9_SCR_SMCI_OFFSET              SCI2_SCR_SMCI_OFFSET
#define SCI9_SCR_SMCI                     SCI2_SCR_SMCI
#define SCI9_SCR_SMCI_TIE                 SCI2_SCR_SMCI_TIE
#define SCI9_SCR_SMCI_RIE                 SCI2_SCR_SMCI_RIE
#define SCI9_SCR_SMCI_TE                  SCI2_SCR_SMCI_TE
#define SCI9_SCR_SMCI_RE                  SCI2_SCR_SMCI_RE
#define SCI9_SCR_SMCI_MPIE                SCI2_SCR_SMCI_MPIE
#define SCI9_SCR_SMCI_TEIE                SCI2_SCR_SMCI_TEIE
#define SCI9_SCR_SMCI_CKE                 SCI2_SCR_SMCI_CKE
#define SCI9_SCR_SMCI_CKE_MASK            SCI2_SCR_SMCI_CKE_MASK
#define SCI9_TDR_OFFSET                   SCI2_TDR_OFFSET
#define SCI9_TDR                          SCI2_TDR
#define SCI9_TDR_TDR                      SCI2_TDR_TDR
#define SCI9_TDR_TDR_MASK                 SCI2_TDR_TDR_MASK
#define SCI9_SSR_OFFSET                   SCI2_SSR_OFFSET
#define SCI9_SSR                          SCI2_SSR
#define SCI9_SSR_TDRE                     SCI2_SSR_TDRE
#define SCI9_SSR_RDRF                     SCI2_SSR_RDRF
#define SCI9_SSR_ORER                     SCI2_SSR_ORER
#define SCI9_SSR_FER                      SCI2_SSR_FER
#define SCI9_SSR_PER                      SCI2_SSR_PER
#define SCI9_SSR_TEND                     SCI2_SSR_TEND
#define SCI9_SSR_MPB                      SCI2_SSR_MPB
#define SCI9_SSR_MPBT                     SCI2_SSR_MPBT
#define SCI9_SSR_SMCI_OFFSET              SCI2_SSR_SMCI_OFFSET
#define SCI9_SSR_SMCI                     SCI2_SSR_SMCI
#define SCI9_SSR_SMCI_TDRE                SCI2_SSR_SMCI_TDRE
#define SCI9_SSR_SMCI_RDRF                SCI2_SSR_SMCI_RDRF
#define SCI9_SSR_SMCI_ORER                SCI2_SSR_SMCI_ORER
#define SCI9_SSR_SMCI_ERS                 SCI2_SSR_SMCI_ERS
#define SCI9_SSR_SMCI_PER                 SCI2_SSR_SMCI_PER
#define SCI9_SSR_SMCI_TEND                SCI2_SSR_SMCI_TEND
#define SCI9_SSR_SMCI_MPB                 SCI2_SSR_SMCI_MPB
#define SCI9_SSR_SMCI_MPBT                SCI2_SSR_SMCI_MPBT
#define SCI9_RDR_OFFSET                   SCI2_RDR_OFFSET
#define SCI9_RDR                          SCI2_RDR
#define SCI9_RDR_RDR                      SCI2_RDR_RDR
#define SCI9_RDR_RDR_MASK                 SCI2_RDR_RDR_MASK
#define SCI9_SCMR_OFFSET                  SCI2_SCMR_OFFSET
#define SCI9_SCMR                         SCI2_SCMR
#define SCI9_SCMR_BCP2                    SCI2_SCMR_BCP2
#define SCI9_SCMR_CHR1                    SCI2_SCMR_CHR1
#define SCI9_SCMR_SDIR                    SCI2_SCMR_SDIR
#define SCI9_SCMR_SINV                    SCI2_SCMR_SINV
#define SCI9_SCMR_SMIF                    SCI2_SCMR_SMIF
#define SCI9_SEMR_OFFSET                  SCI2_SEMR_OFFSET
#define SCI9_SEMR                         SCI2_SEMR
#define SCI9_SEMR_RXDESEL                 SCI2_SEMR_RXDESEL
#define SCI9_SEMR_BGDM                    SCI2_SEMR_BGDM
#define SCI9_SEMR_NFEN                    SCI2_SEMR_NFEN
#define SCI9_SEMR_ABCS                    SCI2_SEMR_ABCS
#define SCI9_SEMR_ABCSE                   SCI2_SEMR_ABCSE
#define SCI9_SEMR_BRME                    SCI2_SEMR_BRME
#define SCI9_SNFR_OFFSET                  SCI2_SNFR_OFFSET
#define SCI9_SNFR                         SCI2_SNFR
#define SCI9_SNFR_NFCS                    SCI2_SNFR_NFCS
#define SCI9_SNFR_NFCS_MASK               SCI2_SNFR_NFCS_MASK
#define SCI9_SIMR1_OFFSET                 SCI2_SIMR1_OFFSET
#define SCI9_SIMR1                        SCI2_SIMR1
#define SCI9_SIMR1_IICDL                  SCI2_SIMR1_IICDL
#define SCI9_SIMR1_IICDL_MASK             SCI2_SIMR1_IICDL_MASK
#define SCI9_SIMR1_IICM                   SCI2_SIMR1_IICM
#define SCI9_SIMR2_OFFSET                 SCI2_SIMR2_OFFSET
#define SCI9_SIMR2                        SCI2_SIMR2
#define SCI9_SIMR2_IICACKT                SCI2_SIMR2_IICACKT
#define SCI9_SIMR2_IICCSC                 SCI2_SIMR2_IICCSC
#define SCI9_SIMR2_IICINTM                SCI2_SIMR2_IICINTM
#define SCI9_SIMR3_OFFSET                 SCI2_SIMR3_OFFSET
#define SCI9_SIMR3                        SCI2_SIMR3
#define SCI9_SIMR3_IICSCLS                SCI2_SIMR3_IICSCLS
#define SCI9_SIMR3_IICSCLS_MASK           SCI2_SIMR3_IICSCLS_MASK
#define SCI9_SIMR3_IICSDAS                SCI2_SIMR3_IICSDAS
#define SCI9_SIMR3_IICSDAS_MASK           SCI2_SIMR3_IICSDAS_MASK
#define SCI9_SIMR3_IICSTIF                SCI2_SIMR3_IICSTIF
#define SCI9_SIMR3_IICSTPREQ              SCI2_SIMR3_IICSTPREQ
#define SCI9_SIMR3_IICRSTAREQ             SCI2_SIMR3_IICRSTAREQ
#define SCI9_SIMR3_IICSTAREQ              SCI2_SIMR3_IICSTAREQ
#define SCI9_SISR_OFFSET                  SCI2_SISR_OFFSET
#define SCI9_SISR                         SCI2_SISR
#define SCI9_SISR_IICACKR                 SCI2_SISR_IICACKR
#define SCI9_SPMR_OFFSET                  SCI2_SPMR_OFFSET
#define SCI9_SPMR                         SCI2_SPMR
#define SCI9_SPMR_CKPH                    SCI2_SPMR_CKPH
#define SCI9_SPMR_CKPOL                   SCI2_SPMR_CKPOL
#define SCI9_SPMR_MFF                     SCI2_SPMR_MFF
#define SCI9_SPMR_MSS                     SCI2_SPMR_MSS
#define SCI9_SPMR_CTSE                    SCI2_SPMR_CTSE
#define SCI9_SPMR_SSE                     SCI2_SPMR_SSE
#define SCI9_TDRHL_OFFSET                 SCI2_TDRHL_OFFSET
#define SCI9_TDRHL                        SCI2_TDRHL
#define SCI9_TDRHL_TDRHL                  SCI2_TDRHL_TDRHL
#define SCI9_TDRHL_TDRHL_MASK             SCI2_TDRHL_TDRHL_MASK
#define SCI9_RDRHL_OFFSET                 SCI2_RDRHL_OFFSET
#define SCI9_RDRHL                        SCI2_RDRHL
#define SCI9_RDRHL_RDRHL                  SCI2_RDRHL_RDRHL
#define SCI9_RDRHL_RDRHL_MASK             SCI2_RDRHL_RDRHL_MASK
#define SCI9_MDDR_OFFSET                  SCI2_MDDR_OFFSET
#define SCI9_MDDR                         SCI2_MDDR
#define SCI9_MDDR_MDDR                    SCI2_MDDR_MDDR
#define SCI9_MDDR_MDDR_MASK               SCI2_MDDR_MDDR_MASK
#define SCI9_DCCR_OFFSET                  SCI2_DCCR_OFFSET
#define SCI9_DCCR                         SCI2_DCCR
#define SCI9_DCCR_DCME                    SCI2_DCCR_DCME
#define SCI9_DCCR_IDSEL                   SCI2_DCCR_IDSEL
#define SCI9_DCCR_DFER                    SCI2_DCCR_DFER
#define SCI9_DCCR_DPER                    SCI2_DCCR_DPER
#define SCI9_DCCR_DCMF                    SCI2_DCCR_DCMF
#define SCI9_CDR_OFFSET                   SCI2_CDR_OFFSET
#define SCI9_CDR                          SCI2_CDR
#define SCI9_CDR_CMPD                     SCI2_CDR_CMPD
#define SCI9_CDR_CMPD_MASK                SCI2_CDR_CMPD_MASK
#define SCI9_SPTR_OFFSET                  SCI2_SPTR_OFFSET
#define SCI9_SPTR                         SCI2_SPTR
#define SCI9_SPTR_SPB2IO                  SCI2_SPTR_SPB2IO
#define SCI9_SPTR_SPB2DT                  SCI2_SPTR_SPB2DT
#define SCI9_SPTR_RXDMON                  SCI2_SPTR_RXDMON

/* SLCDC - Segment LCD Controller/Driver */
#define SLCDC_BASE                        0x40082000
#define SLCDC_LCDM0_OFFSET                0x0000
#define SLCDC_LCDM0                       (SLCDC_BASE + SLCDC_LCDM0_OFFSET)
#define SLCDC_LCDM0_MDSET                 (2 <<  6) /* 40: LCD drive voltage generator selection */
#define SLCDC_LCDM0_MDSET_MASK                 (0x03)
#define SLCDC_LCDM0_LWAVE                 (1 <<  5) /* 20: LCD display waveform selection */
#define SLCDC_LCDM0_LDTY                  (3 <<  2) /* 04: Time Slice of LCD Display Select */
#define SLCDC_LCDM0_LDTY_MASK                  (0x07)
#define SLCDC_LCDM0_LBAS                  (2 <<  0) /* 01: LCD Display Bias Method Select */
#define SLCDC_LCDM0_LBAS_MASK                  (0x03)
#define SLCDC_LCDM1_OFFSET                0x0001
#define SLCDC_LCDM1                       (SLCDC_BASE + SLCDC_LCDM1_OFFSET)
#define SLCDC_LCDM1_LCDON                 (1 <<  7) /* 80: LCD Display Enable/Disable */
#define SLCDC_LCDM1_SCOC                  (1 <<  6) /* 40: LCD Display Enable/Disable */
#define SLCDC_LCDM1_VLCON                 (1 <<  5) /* 20: Voltage boost circuit or capacitor split circuit operation enable/disable */
#define SLCDC_LCDM1_BLON                  (1 <<  4) /* 10: Display data area control */
#define SLCDC_LCDM1_LCDSEL                (1 <<  3) /* 08: Display data area control */
#define SLCDC_LCDM1_LCDVLM                (1 <<  0) /* 01: Voltage Boosting Pin Initial Value Switching Control */
#define SLCDC_LCDC0_OFFSET                0x0002
#define SLCDC_LCDC0                       (SLCDC_BASE + SLCDC_LCDC0_OFFSET)
#define SLCDC_LCDC0_LCDC                  (6 <<  0) /* 01: LCD clock (LCDCL) */
#define SLCDC_LCDC0_LCDC_MASK                  (0x3f)
#define SLCDC_VLCD_OFFSET                 0x0003
#define SLCDC_VLCD                        (SLCDC_BASE + SLCDC_VLCD_OFFSET)
#define SLCDC_VLCD_VLCD                   (5 <<  0) /* 01: Reference Voltage(Contrast Adjustment) Select */
#define SLCDC_VLCD_VLCD_MASK                   (0x1f)
#define SLCDC_SEG_SIZE                    38
#define SLCDC_SEG_OFFSET                  0x0100
#define SLCDC_SEG(p)                      (SLCDC_BASE + SLCDC_SEG_OFFSET + (p)*0x0001)
#define SLCDC_SEG_SEG                     (8 <<  0) /* 01: LCD Display Data */
#define SLCDC_SEG_SEG_MASK                     (0xff)

/* SPI0 - Serial Peripheral Interface 0 */
#define SPI0_BASE                         0x40072000
#define SPI0_SPCR_OFFSET                  0x0000
#define SPI0_SPCR                         (SPI0_BASE + SPI0_SPCR_OFFSET)
#define SPI0_SPCR_SPRIE                   (1 <<  7) /* 80: SPI Receive Buffer Full Interrupt Enable */
#define SPI0_SPCR_SPE                     (1 <<  6) /* 40: SPI Function Enable */
#define SPI0_SPCR_SPTIE                   (1 <<  5) /* 20: Transmit Buffer Empty Interrupt Enable */
#define SPI0_SPCR_SPEIE                   (1 <<  4) /* 10: SPI Error Interrupt Enable */
#define SPI0_SPCR_MSTR                    (1 <<  3) /* 08: SPI Master/Slave Mode Select */
#define SPI0_SPCR_MODFEN                  (1 <<  2) /* 04: Mode Fault Error Detection Enable */
#define SPI0_SPCR_TXMD                    (1 <<  1) /* 02: Communications Operating Mode Select */
#define SPI0_SPCR_SPMS                    (1 <<  0) /* 01: SPI Mode Select */
#define SPI0_SSLP_OFFSET                  0x0001
#define SPI0_SSLP                         (SPI0_BASE + SPI0_SSLP_OFFSET)
#define SPI0_SSLP_SSL3P                   (1 <<  3) /* 08: SSL3 Signal Polarity Setting */
#define SPI0_SSLP_SSL2P                   (1 <<  2) /* 04: SSL2 Signal Polarity Setting */
#define SPI0_SSLP_SSL1P                   (1 <<  1) /* 02: SSL1 Signal Polarity Setting */
#define SPI0_SSLP_SSL0P                   (1 <<  0) /* 01: SSL0 Signal Polarity Setting */
#define SPI0_SPPCR_OFFSET                 0x0002
#define SPI0_SPPCR                        (SPI0_BASE + SPI0_SPPCR_OFFSET)
#define SPI0_SPPCR_MOIFE                  (1 <<  5) /* 20: MOSI Idle Value Fixing Enable */
#define SPI0_SPPCR_MOIFV                  (1 <<  4) /* 10: MOSI Idle Fixed Value */
#define SPI0_SPPCR_SPLP2                  (1 <<  1) /* 02: RSPI Loopback 2 */
#define SPI0_SPPCR_SPLP                   (1 <<  0) /* 01: RSPI Loopback */
#define SPI0_SPSR_OFFSET                  0x0003
#define SPI0_SPSR                         (SPI0_BASE + SPI0_SPSR_OFFSET)
#define SPI0_SPSR_SPRF                    (1 <<  7) /* 80: SPI Receive Buffer Full Flag */
#define SPI0_SPSR_SPTEF                   (1 <<  5) /* 20: SPI Transmit Buffer Empty Flag */
#define SPI0_SPSR_UDRF                    (1 <<  4) /* 10: Underrun Error Flag (When MODF is 0, This bit is invalid.) */
#define SPI0_SPSR_PERF                    (1 <<  3) /* 08: Parity Error Flag */
#define SPI0_SPSR_MODF                    (1 <<  2) /* 04: Mode Fault Error Flag */
#define SPI0_SPSR_IDLNF                   (1 <<  1) /* 02: SPI Idle Flag */
#define SPI0_SPSR_OVRF                    (1 <<  0) /* 01: Overrun Error Flag */
#define SPI0_SPDR_OFFSET                  0x0004
#define SPI0_SPDR                         (SPI0_BASE + SPI0_SPDR_OFFSET)
#define SPI0_SPDR_SPDR                    (32 <<  0) /* 01: SPDR is the interface with the buffers that hold data for transmission and reception by the RSPI. When accessing in word (SPDCR.SPLW=1), access SPDR. */
#define SPI0_SPDR_SPDR_MASK                    (0xffffffff)
#define SPI0_SPDR_HA_OFFSET               0x0004
#define SPI0_SPDR_HA                      (SPI0_BASE + SPI0_SPDR_HA_OFFSET)
#define SPI0_SPDR_HA_SPDR_HA              (16 <<  0) /* 01: SPDR is the interface with the buffers that hold data for transmission and reception by the RSPI. When accessing in halfword (SPDCR.SPLW=0), access SPDR_HA. */
#define SPI0_SPDR_HA_SPDR_HA_MASK              (0xffff)
#define SPI0_SPBR_OFFSET                  0x000a
#define SPI0_SPBR                         (SPI0_BASE + SPI0_SPBR_OFFSET)
#define SPI0_SPBR_SPR                     (8 <<  0) /* 01: SPBR sets the bit rate in master mode. */
#define SPI0_SPBR_SPR_MASK                     (0xff)
#define SPI0_SPDCR_OFFSET                 0x000b
#define SPI0_SPDCR                        (SPI0_BASE + SPI0_SPDCR_OFFSET)
#define SPI0_SPDCR_SPLW                   (1 <<  5) /* 20: SPI Word Access/Halfword Access Specification */
#define SPI0_SPDCR_SPRDTD                 (1 <<  4) /* 10: RSPI Receive/Transmit Data Selection */
#define SPI0_SPCKD_OFFSET                 0x000c
#define SPI0_SPCKD                        (SPI0_BASE + SPI0_SPCKD_OFFSET)
#define SPI0_SPCKD_SCKDL                  (3 <<  0) /* 01: RSPCK Delay Setting */
#define SPI0_SPCKD_SCKDL_MASK                  (0x07)
#define SPI0_SSLND_OFFSET                 0x000d
#define SPI0_SSLND                        (SPI0_BASE + SPI0_SSLND_OFFSET)
#define SPI0_SSLND_SLNDL                  (3 <<  0) /* 01: SSL Negation Delay Setting */
#define SPI0_SSLND_SLNDL_MASK                  (0x07)
#define SPI0_SPND_OFFSET                  0x000e
#define SPI0_SPND                         (SPI0_BASE + SPI0_SPND_OFFSET)
#define SPI0_SPND_SPNDL                   (3 <<  0) /* 01: SPI Next-Access Delay Setting */
#define SPI0_SPND_SPNDL_MASK                   (0x07)
#define SPI0_SPCR2_OFFSET                 0x000f
#define SPI0_SPCR2                        (SPI0_BASE + SPI0_SPCR2_OFFSET)
#define SPI0_SPCR2_SCKASE                 (1 <<  4) /* 10: RSPCK Auto-Stop Function Enable */
#define SPI0_SPCR2_PTE                    (1 <<  3) /* 08: Parity Self-Testing */
#define SPI0_SPCR2_SPIIE                  (1 <<  2) /* 04: SPI Idle Interrupt Enable */
#define SPI0_SPCR2_SPOE                   (1 <<  1) /* 02: Parity Mode */
#define SPI0_SPCR2_SPPE                   (1 <<  0) /* 01: Parity Enable */
#define SPI0_SPCMD0_OFFSET                0x0010
#define SPI0_SPCMD0                       (SPI0_BASE + SPI0_SPCMD0_OFFSET)
#define SPI0_SPCMD0_SCKDEN                (1 << 15) /* 8000: RSPCK Delay Setting Enable */
#define SPI0_SPCMD0_SLNDEN                (1 << 14) /* 4000: SSL Negation Delay Setting Enable */
#define SPI0_SPCMD0_SPNDEN                (1 << 13) /* 2000: RSPI Next-Access Delay Enable */
#define SPI0_SPCMD0_LSBF                  (1 << 12) /* 1000: RSPI LSB First */
#define SPI0_SPCMD0_SPB                   (4 <<  8) /* 100: RSPI Data Length Setting */
#define SPI0_SPCMD0_SPB_MASK                   (0x0f)
#define SPI0_SPCMD0_SSLA                  (3 <<  4) /* 10: SSL Signal Assertion Setting */
#define SPI0_SPCMD0_SSLA_MASK                  (0x07)
#define SPI0_SPCMD0_BRDV                  (2 <<  2) /* 04: Bit Rate Division Setting */
#define SPI0_SPCMD0_BRDV_MASK                  (0x03)
#define SPI0_SPCMD0_CPOL                  (1 <<  1) /* 02: RSPCK Polarity Setting */
#define SPI0_SPCMD0_CPHA                  (1 <<  0) /* 01: RSPCK Phase Setting */

/* SPI1 - Serial Peripheral Interface 1 */
#define SPI1_BASE                         0x40072100
#define SPI1_SPCR_OFFSET                  0x0000
#define SPI1_SPCR                         (SPI1_BASE + SPI1_SPCR_OFFSET)
#define SPI1_SPCR_SPRIE                   (1 <<  7) /* 80: SPI Receive Buffer Full Interrupt Enable */
#define SPI1_SPCR_SPE                     (1 <<  6) /* 40: SPI Function Enable */
#define SPI1_SPCR_SPTIE                   (1 <<  5) /* 20: Transmit Buffer Empty Interrupt Enable */
#define SPI1_SPCR_SPEIE                   (1 <<  4) /* 10: SPI Error Interrupt Enable */
#define SPI1_SPCR_MSTR                    (1 <<  3) /* 08: SPI Master/Slave Mode Select */
#define SPI1_SPCR_MODFEN                  (1 <<  2) /* 04: Mode Fault Error Detection Enable */
#define SPI1_SPCR_TXMD                    (1 <<  1) /* 02: Communications Operating Mode Select */
#define SPI1_SPCR_SPMS                    (1 <<  0) /* 01: SPI Mode Select */
#define SPI1_SSLP_OFFSET                  0x0001
#define SPI1_SSLP                         (SPI1_BASE + SPI1_SSLP_OFFSET)
#define SPI1_SSLP_SSL3P                   (1 <<  3) /* 08: SSL3 Signal Polarity Setting */
#define SPI1_SSLP_SSL2P                   (1 <<  2) /* 04: SSL2 Signal Polarity Setting */
#define SPI1_SSLP_SSL1P                   (1 <<  1) /* 02: SSL1 Signal Polarity Setting */
#define SPI1_SSLP_SSL0P                   (1 <<  0) /* 01: SSL0 Signal Polarity Setting */
#define SPI1_SPPCR_OFFSET                 0x0002
#define SPI1_SPPCR                        (SPI1_BASE + SPI1_SPPCR_OFFSET)
#define SPI1_SPPCR_MOIFE                  (1 <<  5) /* 20: MOSI Idle Value Fixing Enable */
#define SPI1_SPPCR_MOIFV                  (1 <<  4) /* 10: MOSI Idle Fixed Value */
#define SPI1_SPPCR_SPLP2                  (1 <<  1) /* 02: RSPI Loopback 2 */
#define SPI1_SPPCR_SPLP                   (1 <<  0) /* 01: RSPI Loopback */
#define SPI1_SPSR_OFFSET                  0x0003
#define SPI1_SPSR                         (SPI1_BASE + SPI1_SPSR_OFFSET)
#define SPI1_SPSR_SPRF                    (1 <<  7) /* 80: SPI Receive Buffer Full Flag */
#define SPI1_SPSR_SPTEF                   (1 <<  5) /* 20: SPI Transmit Buffer Empty Flag */
#define SPI1_SPSR_UDRF                    (1 <<  4) /* 10: Underrun Error Flag (When MODF is 0, This bit is invalid.) */
#define SPI1_SPSR_PERF                    (1 <<  3) /* 08: Parity Error Flag */
#define SPI1_SPSR_MODF                    (1 <<  2) /* 04: Mode Fault Error Flag */
#define SPI1_SPSR_IDLNF                   (1 <<  1) /* 02: SPI Idle Flag */
#define SPI1_SPSR_OVRF                    (1 <<  0) /* 01: Overrun Error Flag */
#define SPI1_SPDR_OFFSET                  0x0004
#define SPI1_SPDR                         (SPI1_BASE + SPI1_SPDR_OFFSET)
#define SPI1_SPDR_SPDR                    (32 <<  0) /* 01: SPDR is the interface with the buffers that hold data for transmission and reception by the RSPI. When accessing in word (SPDCR.SPLW=1), access SPDR. */
#define SPI1_SPDR_SPDR_MASK                    (0xffffffff)
#define SPI1_SPDR_HA_OFFSET               0x0004
#define SPI1_SPDR_HA                      (SPI1_BASE + SPI1_SPDR_HA_OFFSET)
#define SPI1_SPDR_HA_SPDR_HA              (16 <<  0) /* 01: SPDR is the interface with the buffers that hold data for transmission and reception by the RSPI. When accessing in halfword (SPDCR.SPLW=0), access SPDR_HA. */
#define SPI1_SPDR_HA_SPDR_HA_MASK              (0xffff)
#define SPI1_SPBR_OFFSET                  0x000a
#define SPI1_SPBR                         (SPI1_BASE + SPI1_SPBR_OFFSET)
#define SPI1_SPBR_SPR                     (8 <<  0) /* 01: SPBR sets the bit rate in master mode. */
#define SPI1_SPBR_SPR_MASK                     (0xff)
#define SPI1_SPDCR_OFFSET                 0x000b
#define SPI1_SPDCR                        (SPI1_BASE + SPI1_SPDCR_OFFSET)
#define SPI1_SPDCR_SPLW                   (1 <<  5) /* 20: SPI Word Access/Halfword Access Specification */
#define SPI1_SPDCR_SPRDTD                 (1 <<  4) /* 10: RSPI Receive/Transmit Data Selection */
#define SPI1_SPCKD_OFFSET                 0x000c
#define SPI1_SPCKD                        (SPI1_BASE + SPI1_SPCKD_OFFSET)
#define SPI1_SPCKD_SCKDL                  (3 <<  0) /* 01: RSPCK Delay Setting */
#define SPI1_SPCKD_SCKDL_MASK                  (0x07)
#define SPI1_SSLND_OFFSET                 0x000d
#define SPI1_SSLND                        (SPI1_BASE + SPI1_SSLND_OFFSET)
#define SPI1_SSLND_SLNDL                  (3 <<  0) /* 01: SSL Negation Delay Setting */
#define SPI1_SSLND_SLNDL_MASK                  (0x07)
#define SPI1_SPND_OFFSET                  0x000e
#define SPI1_SPND                         (SPI1_BASE + SPI1_SPND_OFFSET)
#define SPI1_SPND_SPNDL                   (3 <<  0) /* 01: SPI Next-Access Delay Setting */
#define SPI1_SPND_SPNDL_MASK                   (0x07)
#define SPI1_SPCR2_OFFSET                 0x000f
#define SPI1_SPCR2                        (SPI1_BASE + SPI1_SPCR2_OFFSET)
#define SPI1_SPCR2_SCKASE                 (1 <<  4) /* 10: RSPCK Auto-Stop Function Enable */
#define SPI1_SPCR2_PTE                    (1 <<  3) /* 08: Parity Self-Testing */
#define SPI1_SPCR2_SPIIE                  (1 <<  2) /* 04: SPI Idle Interrupt Enable */
#define SPI1_SPCR2_SPOE                   (1 <<  1) /* 02: Parity Mode */
#define SPI1_SPCR2_SPPE                   (1 <<  0) /* 01: Parity Enable */
#define SPI1_SPCMD0_OFFSET                0x0010
#define SPI1_SPCMD0                       (SPI1_BASE + SPI1_SPCMD0_OFFSET)
#define SPI1_SPCMD0_SCKDEN                (1 << 15) /* 8000: RSPCK Delay Setting Enable */
#define SPI1_SPCMD0_SLNDEN                (1 << 14) /* 4000: SSL Negation Delay Setting Enable */
#define SPI1_SPCMD0_SPNDEN                (1 << 13) /* 2000: RSPI Next-Access Delay Enable */
#define SPI1_SPCMD0_LSBF                  (1 << 12) /* 1000: RSPI LSB First */
#define SPI1_SPCMD0_SPB                   (4 <<  8) /* 100: RSPI Data Length Setting */
#define SPI1_SPCMD0_SPB_MASK                   (0x0f)
#define SPI1_SPCMD0_SSLA                  (3 <<  4) /* 10: SSL Signal Assertion Setting */
#define SPI1_SPCMD0_SSLA_MASK                  (0x07)
#define SPI1_SPCMD0_BRDV                  (2 <<  2) /* 04: Bit Rate Division Setting */
#define SPI1_SPCMD0_BRDV_MASK                  (0x03)
#define SPI1_SPCMD0_CPOL                  (1 <<  1) /* 02: RSPCK Polarity Setting */
#define SPI1_SPCMD0_CPHA                  (1 <<  0) /* 01: RSPCK Phase Setting */

/* SSIE0 - Serial Sound Interface Ver.2.0 */
#define SSIE0_BASE                        0x4004e000
#define SSIE0_SSICR_OFFSET                0x0000
#define SSIE0_SSICR                       (SSIE0_BASE + SSIE0_SSICR_OFFSET)
#define SSIE0_SSICR_CKS                   (1 << 30) /* 40000000: Selects an Audio Clock for Master-mode Communication */
#define SSIE0_SSICR_TUIEN                 (1 << 29) /* 20000000: Transmit Underflow Interrupt Output Enable */
#define SSIE0_SSICR_TOIEN                 (1 << 28) /* 10000000: Transmit Overflow Interrupt Output Enable */
#define SSIE0_SSICR_RUIEN                 (1 << 27) /* 8000000: Receive Underflow Interrupt Output Enable */
#define SSIE0_SSICR_ROIEN                 (1 << 26) /* 4000000: Receive Overflow Interrupt Output Enable */
#define SSIE0_SSICR_IIEN                  (1 << 25) /* 2000000: Idle Mode Interrupt Output Enable */
#define SSIE0_SSICR_DWL                   (3 << 19) /* 80000: Selects Data Word Length */
#define SSIE0_SSICR_DWL_MASK                   (0x07)
#define SSIE0_SSICR_SWL                   (3 << 16) /* 10000: Selects System Word Length */
#define SSIE0_SSICR_SWL_MASK                   (0x07)
#define SSIE0_SSICR_MST                   (1 << 14) /* 4000: Master Enable */
#define SSIE0_SSICR_BCKP                  (1 << 13) /* 2000: Selects Bit Clock Polarity */
#define SSIE0_SSICR_LRCKP                 (1 << 12) /* 1000: Selects the Initial Value and Polarity of LR Clock/Frame Synchronization Signal */
#define SSIE0_SSICR_SPDP                  (1 << 11) /* 800: Selects Serial Padding Polarity */
#define SSIE0_SSICR_SDTA                  (1 << 10) /* 400: Selects Serial Data Alignment */
#define SSIE0_SSICR_PDTA                  (1 <<  9) /* 200: Selects Placement Data Alignment */
#define SSIE0_SSICR_DEL                   (1 <<  8) /* 100: Selects Serial Data Delay */
#define SSIE0_SSICR_CKDV                  (4 <<  4) /* 10: Selects Bit Clock Division Ratio */
#define SSIE0_SSICR_CKDV_MASK                  (0x0f)
#define SSIE0_SSICR_MUEN                  (1 <<  3) /* 08: Mute Enable */
#define SSIE0_SSICR_TEN                   (1 <<  1) /* 02: Transmit Enable */
#define SSIE0_SSICR_REN                   (1 <<  0) /* 01: Receive Enable */
#define SSIE0_SSISR_OFFSET                0x0004
#define SSIE0_SSISR                       (SSIE0_BASE + SSIE0_SSISR_OFFSET)
#define SSIE0_SSISR_TUIRQ                 (1 << 29) /* 20000000: Transmit Underflow Error Status flag */
#define SSIE0_SSISR_TOIRQ                 (1 << 28) /* 10000000: Transmit Overflow Error Status Flag */
#define SSIE0_SSISR_RUIRQ                 (1 << 27) /* 8000000: Receive Underflow Error Status Flag */
#define SSIE0_SSISR_ROIRQ                 (1 << 26) /* 4000000: Receive Overflow Error Status Flag */
#define SSIE0_SSISR_IIRQ                  (1 << 25) /* 2000000: Idle Mode Status Flag */
#define SSIE0_SSIFCR_OFFSET               0x0010
#define SSIE0_SSIFCR                      (SSIE0_BASE + SSIE0_SSIFCR_OFFSET)
#define SSIE0_SSIFCR_AUCKE                (1 << 31) /* 80000000: AUDIO_MCK Enable in Mastermode Communication */
#define SSIE0_SSIFCR_SSIRST               (1 << 16) /* 10000: Software Reset */
#define SSIE0_SSIFCR_BSW                  (1 << 11) /* 800: Byte Swap Enable */
#define SSIE0_SSIFCR_TIE                  (1 <<  3) /* 08: Transmit Data Empty Interrupt Output Enable */
#define SSIE0_SSIFCR_RIE                  (1 <<  2) /* 04: Receive Data Full Interrupt Output Enable */
#define SSIE0_SSIFCR_TFRST                (1 <<  1) /* 02: Transmit FIFO Data Register Reset */
#define SSIE0_SSIFCR_RFRST                (1 <<  0) /* 01: Receive FIFO Data Register Reset */
#define SSIE0_SSIFSR_OFFSET               0x0014
#define SSIE0_SSIFSR                      (SSIE0_BASE + SSIE0_SSIFSR_OFFSET)
#define SSIE0_SSIFSR_TDC                  (4 << 24) /* 1000000: Number of Transmit FIFO Data Indication Flag Number of transmit FIFO data indication flag. */
#define SSIE0_SSIFSR_TDC_MASK                  (0x0f)
#define SSIE0_SSIFSR_TDE                  (1 << 16) /* 10000: Transmit Data Empty Flag */
#define SSIE0_SSIFSR_RDC                  (4 <<  8) /* 100: Number of Receive FIFO Data Indication Flag Number of receive FIFO data indication flag. */
#define SSIE0_SSIFSR_RDC_MASK                  (0x0f)
#define SSIE0_SSIFSR_RDF                  (1 <<  0) /* 01: Receive Data Full Flag */
#define SSIE0_SSIFTDR_OFFSET              0x0018
#define SSIE0_SSIFTDR                     (SSIE0_BASE + SSIE0_SSIFTDR_OFFSET)
#define SSIE0_SSIFTDR_SSIFTDR             (32 <<  0) /* 01: Transmit FIFO Data */
#define SSIE0_SSIFTDR_SSIFTDR_MASK             (0xffffffff)
#define SSIE0_SSIFRDR_OFFSET              0x001c
#define SSIE0_SSIFRDR                     (SSIE0_BASE + SSIE0_SSIFRDR_OFFSET)
#define SSIE0_SSIFRDR_SSIFRDR             (32 <<  0) /* 01: Receive FIFO data. */
#define SSIE0_SSIFRDR_SSIFRDR_MASK             (0xffffffff)
#define SSIE0_SSITDMR_OFFSET              0x0020
#define SSIE0_SSITDMR                     (SSIE0_BASE + SSIE0_SSITDMR_OFFSET)
#define SSIE0_SSITDMR_BCKASTP             (1 <<  9) /* 200: Whether to Enable Stopping BCK Output When SSIE is in Idle Status */
#define SSIE0_SSITDMR_LRCONT              (1 <<  8) /* 100: Whether to Enable LRCK/FS Continuation */
#define SSIE0_SSITDMR_OMOD                (2 <<  0) /* 01: Audio Format Select */
#define SSIE0_SSITDMR_OMOD_MASK                (0x03)
#define SSIE0_SSISCR_OFFSET               0x0024
#define SSIE0_SSISCR                      (SSIE0_BASE + SSIE0_SSISCR_OFFSET)
#define SSIE0_SSISCR_TDES                 (3 <<  8) /* 100: TDE Setting Condition Select */
#define SSIE0_SSISCR_TDES_MASK                 (0x07)
#define SSIE0_SSISCR_RDFS                 (3 <<  0) /* 01: RDF Setting Condition Select */
#define SSIE0_SSISCR_RDFS_MASK                 (0x07)

/* TSN - Temperature Sensor */
#define TSN_BASE                          0x407ec000
#define TSN_TSCDRH_OFFSET                 0x0229
#define TSN_TSCDRH                        (TSN_BASE + TSN_TSCDRH_OFFSET)
#define TSN_TSCDRH_TSCDRH                 (8 <<  0) /* 01: The calibration data stores the higher 8 bits of the converted value. */
#define TSN_TSCDRH_TSCDRH_MASK                 (0xff)
#define TSN_TSCDRL_OFFSET                 0x0228
#define TSN_TSCDRL                        (TSN_BASE + TSN_TSCDRL_OFFSET)
#define TSN_TSCDRL_TSCDRL                 (8 <<  0) /* 01: The calibration data stores the lower 8 bits of the converted value. */
#define TSN_TSCDRL_TSCDRL_MASK                 (0xff)

/* USBFS - USB 2.0 FS Module */
#define USBFS_BASE                        0x40090000
#define USBFS_SYSCFG_OFFSET               0x0000
#define USBFS_SYSCFG                      (USBFS_BASE + USBFS_SYSCFG_OFFSET)
#define USBFS_SYSCFG_SCKE                 (1 << 10) /* 400: USB Clock Enable */
#define USBFS_SYSCFG_CNEN                 (1 <<  8) /* 100: CNEN Single End Receiver Enable */
#define USBFS_SYSCFG_DCFM                 (1 <<  6) /* 40: Controller Function Select */
#define USBFS_SYSCFG_DRPD                 (1 <<  5) /* 20: D+/D- Line Resistor Control */
#define USBFS_SYSCFG_DPRPU                (1 <<  4) /* 10: D+ Line Resistor Control */
#define USBFS_SYSCFG_DMRPU                (1 <<  3) /* 08: D- Line Resistor Control */
#define USBFS_SYSCFG_USBE                 (1 <<  0) /* 01: USB Operation Enable */
#define USBFS_SYSSTS0_OFFSET              0x0004
#define USBFS_SYSSTS0                     (USBFS_BASE + USBFS_SYSSTS0_OFFSET)
#define USBFS_SYSSTS0_OVCMON              (2 << 14) /* 4000: External USB0_OVRCURA/ USB0_OVRCURB Input Pin Monitor The OCVMON[1] bit indicates the status of the USBHS_OVRCURA pin. The OCVMON[0] bit indicates the status of the USBHS_OVRCURB pin. */
#define USBFS_SYSSTS0_OVCMON_MASK              (0x03)
#define USBFS_SYSSTS0_HTACT               (1 <<  6) /* 40: USB Host Sequencer Status Monitor */
#define USBFS_SYSSTS0_IDMON               (1 <<  2) /* 04: External ID0 Input Pin Monitor */
#define USBFS_SYSSTS0_LNST                (2 <<  0) /* 01: USB Data Line Status Monitor */
#define USBFS_SYSSTS0_LNST_MASK                (0x03)
#define USBFS_DVSTCTR0_OFFSET             0x0008
#define USBFS_DVSTCTR0                    (USBFS_BASE + USBFS_DVSTCTR0_OFFSET)
#define USBFS_DVSTCTR0_HNPBTOA            (1 << 11) /* 800: Host Negotiation Protocol (HNP) Control This bit is used when switching from device B to device A while in OTG mode. If the HNPBTOA bit is 1, the internal function control keeps the suspended state until the HNP processing ends even though SYSCFG.DPRPU = 0 or SYSCFG.DCFM = 1 is set. */
#define USBFS_DVSTCTR0_EXICEN             (1 << 10) /* 400: USB_EXICEN Output Pin Control */
#define USBFS_DVSTCTR0_VBUSEN             (1 <<  9) /* 200: USB_VBUSEN Output Pin Control */
#define USBFS_DVSTCTR0_WKUP               (1 <<  8) /* 100: Wakeup Output */
#define USBFS_DVSTCTR0_RWUPE              (1 <<  7) /* 80: Wakeup Detection Enable */
#define USBFS_DVSTCTR0_USBRST             (1 <<  6) /* 40: USB Bus Reset Output */
#define USBFS_DVSTCTR0_RESUME             (1 <<  5) /* 20: Resume Output */
#define USBFS_DVSTCTR0_UACT               (1 <<  4) /* 10: USB Bus Enable */
#define USBFS_DVSTCTR0_RHST               (3 <<  0) /* 01: USB Bus Reset Status */
#define USBFS_DVSTCTR0_RHST_MASK               (0x07)
#define USBFS_CFIFO_OFFSET                0x0014
#define USBFS_CFIFO                       (USBFS_BASE + USBFS_CFIFO_OFFSET)
#define USBFS_CFIFO_FIFOPORT              (16 <<  0) /* 01: FIFO Port Read receive data from the FIFO buffer or write transmit data to the FIFO buffer by accessing these bits. */
#define USBFS_CFIFO_FIFOPORT_MASK              (0xffff)
#define USBFS_CFIFOL_OFFSET               0x0014
#define USBFS_CFIFOL                      (USBFS_BASE + USBFS_CFIFOL_OFFSET)
#define USBFS_D0FIFO_OFFSET               0x0018
#define USBFS_D0FIFO                      (USBFS_BASE + USBFS_D0FIFO_OFFSET)
#define USBFS_D0FIFO_FIFOPORT             (16 <<  0) /* 01: FIFO Port Read receive data from the FIFO buffer or write transmit data to the FIFO buffer by accessing these bits. */
#define USBFS_D0FIFO_FIFOPORT_MASK             (0xffff)
#define USBFS_D0FIFOL_OFFSET              0x0018
#define USBFS_D0FIFOL                     (USBFS_BASE + USBFS_D0FIFOL_OFFSET)
#define USBFS_D1FIFO_OFFSET               0x001c
#define USBFS_D1FIFO                      (USBFS_BASE + USBFS_D1FIFO_OFFSET)
#define USBFS_D1FIFO_FIFOPORT             (16 <<  0) /* 01: FIFO Port Read receive data from the FIFO buffer or write transmit data to the FIFO buffer by accessing these bits. */
#define USBFS_D1FIFO_FIFOPORT_MASK             (0xffff)
#define USBFS_D1FIFOL_OFFSET              0x001c
#define USBFS_D1FIFOL                     (USBFS_BASE + USBFS_D1FIFOL_OFFSET)
#define USBFS_CFIFOSEL_OFFSET             0x0020
#define USBFS_CFIFOSEL                    (USBFS_BASE + USBFS_CFIFOSEL_OFFSET)
#define USBFS_CFIFOSEL_RCNT               (1 << 15) /* 8000: Read Count Mode */
#define USBFS_CFIFOSEL_REW                (1 << 14) /* 4000: Buffer Pointer Rewind */
#define USBFS_CFIFOSEL_MBW                (1 << 10) /* 400: CFIFO Port Access Bit Width */
#define USBFS_CFIFOSEL_BIGEND             (1 <<  8) /* 100: CFIFO Port Endian Control */
#define USBFS_CFIFOSEL_ISEL               (1 <<  5) /* 20: CFIFO Port Access Direction When DCP is Selected */
#define USBFS_CFIFOSEL_CURPIPE            (4 <<  0) /* 01: CFIFO Port Access Pipe Specification */
#define USBFS_CFIFOSEL_CURPIPE_MASK            (0x0f)
#define USBFS_CFIFOCTR_OFFSET             0x0022
#define USBFS_CFIFOCTR                    (USBFS_BASE + USBFS_CFIFOCTR_OFFSET)
#define USBFS_CFIFOCTR_BVAL               (1 << 15) /* 8000: Buffer Memory Valid Flag */
#define USBFS_CFIFOCTR_BCLR               (1 << 14) /* 4000: CPU Buffer Clear Note: Only 0 can be read. */
#define USBFS_CFIFOCTR_FRDY               (1 << 13) /* 2000: FIFO Port Ready */
#define USBFS_CFIFOCTR_DTLN               (9 <<  0) /* 01: Receive Data Length Indicates the length of the receive data. */
#define USBFS_CFIFOCTR_DTLN_MASK               (0x1ff)
#define USBFS_D0FIFOSEL_OFFSET            0x0028
#define USBFS_D0FIFOSEL                   (USBFS_BASE + USBFS_D0FIFOSEL_OFFSET)
#define USBFS_D0FIFOSEL_RCNT              (1 << 15) /* 8000: Read Count Mode */
#define USBFS_D0FIFOSEL_REW               (1 << 14) /* 4000: Buffer Pointer Rewind Note: Only 0 can be read. */
#define USBFS_D0FIFOSEL_DCLRM             (1 << 13) /* 2000: Auto Buffer Memory Clear Mode Accessed after Specified Pipe Data is Read */
#define USBFS_D0FIFOSEL_DREQE             (1 << 12) /* 1000: DMA/DTC Transfer Request Enable */
#define USBFS_D0FIFOSEL_MBW               (1 << 10) /* 400: FIFO Port Access Bit Width */
#define USBFS_D0FIFOSEL_BIGEND            (1 <<  8) /* 100: FIFO Port Endian Control */
#define USBFS_D0FIFOSEL_CURPIPE           (4 <<  0) /* 01: FIFO Port Access Pipe Specification */
#define USBFS_D0FIFOSEL_CURPIPE_MASK           (0x0f)
#define USBFS_D0FIFOCTR_OFFSET            0x002a
#define USBFS_D0FIFOCTR                   (USBFS_BASE + USBFS_D0FIFOCTR_OFFSET)
#define USBFS_D0FIFOCTR_BVAL              (1 << 15) /* 8000: Buffer Memory Valid Flag */
#define USBFS_D0FIFOCTR_BCLR              (1 << 14) /* 4000: CPU Buffer Clear Note: Only 0 can be read. */
#define USBFS_D0FIFOCTR_FRDY              (1 << 13) /* 2000: FIFO Port Ready */
#define USBFS_D0FIFOCTR_DTLN              (9 <<  0) /* 01: Receive Data Length Indicates the length of the receive data. */
#define USBFS_D0FIFOCTR_DTLN_MASK              (0x1ff)
#define USBFS_D1FIFOSEL_OFFSET            0x002c
#define USBFS_D1FIFOSEL                   (USBFS_BASE + USBFS_D1FIFOSEL_OFFSET)
#define USBFS_D1FIFOSEL_RCNT              (1 << 15) /* 8000: Read Count Mode */
#define USBFS_D1FIFOSEL_REW               (1 << 14) /* 4000: Buffer Pointer Rewind */
#define USBFS_D1FIFOSEL_DCLRM             (1 << 13) /* 2000: Auto Buffer Memory Clear Mode Accessed after Specified Pipe Data is Read */
#define USBFS_D1FIFOSEL_DREQE             (1 << 12) /* 1000: DMA/DTC Transfer Request Enable */
#define USBFS_D1FIFOSEL_MBW               (1 << 10) /* 400: FIFO Port Access Bit Width */
#define USBFS_D1FIFOSEL_BIGEND            (1 <<  8) /* 100: FIFO Port Endian Control */
#define USBFS_D1FIFOSEL_CURPIPE           (4 <<  0) /* 01: FIFO Port Access Pipe Specification */
#define USBFS_D1FIFOSEL_CURPIPE_MASK           (0x0f)
#define USBFS_D1FIFOCTR_OFFSET            0x002e
#define USBFS_D1FIFOCTR                   (USBFS_BASE + USBFS_D1FIFOCTR_OFFSET)
#define USBFS_D1FIFOCTR_BVAL              (1 << 15) /* 8000: Buffer Memory Valid Flag */
#define USBFS_D1FIFOCTR_BCLR              (1 << 14) /* 4000: CPU Buffer Clear Note: Only 0 can be read. */
#define USBFS_D1FIFOCTR_FRDY              (1 << 13) /* 2000: FIFO Port Ready */
#define USBFS_D1FIFOCTR_DTLN              (9 <<  0) /* 01: Receive Data Length Indicates the length of the receive data. */
#define USBFS_D1FIFOCTR_DTLN_MASK              (0x1ff)
#define USBFS_INTENB0_OFFSET              0x0030
#define USBFS_INTENB0                     (USBFS_BASE + USBFS_INTENB0_OFFSET)
#define USBFS_INTENB0_VBSE                (1 << 15) /* 8000: VBUS Interrupt Enable */
#define USBFS_INTENB0_RSME                (1 << 14) /* 4000: Resume Interrupt Enable */
#define USBFS_INTENB0_SOFE                (1 << 13) /* 2000: Frame Number Update Interrupt Enable */
#define USBFS_INTENB0_DVSE                (1 << 12) /* 1000: Device State Transition Interrupt Enable */
#define USBFS_INTENB0_CTRE                (1 << 11) /* 800: Control Transfer Stage Transition Interrupt Enable */
#define USBFS_INTENB0_BEMPE               (1 << 10) /* 400: Buffer Empty Interrupt Enable */
#define USBFS_INTENB0_NRDYE               (1 <<  9) /* 200: Buffer Not Ready Response Interrupt Enable */
#define USBFS_INTENB0_BRDYE               (1 <<  8) /* 100: Buffer Ready Interrupt Enable */
#define USBFS_INTENB1_OFFSET              0x0032
#define USBFS_INTENB1                     (USBFS_BASE + USBFS_INTENB1_OFFSET)
#define USBFS_INTENB1_OVRCRE              (1 << 15) /* 8000: Overcurrent Input Change Interrupt Enable */
#define USBFS_INTENB1_BCHGE               (1 << 14) /* 4000: USB Bus Change Interrupt Enable */
#define USBFS_INTENB1_DTCHE               (1 << 12) /* 1000: Disconnection Detection Interrupt Enable */
#define USBFS_INTENB1_ATTCHE              (1 << 11) /* 800: Connection Detection Interrupt Enable */
#define USBFS_INTENB1_EOFERRE             (1 <<  6) /* 40: EOF Error Detection Interrupt Enable */
#define USBFS_INTENB1_SIGNE               (1 <<  5) /* 20: Setup Transaction Error Interrupt Enable */
#define USBFS_INTENB1_SACKE               (1 <<  4) /* 10: Setup Transaction Normal Response Interrupt Enable */
#define USBFS_INTENB1_PDDETINTE0          (1 <<  0) /* 01: PDDETINT0 Detection Interrupt Enable */
#define USBFS_BRDYENB_OFFSET              0x0036
#define USBFS_BRDYENB                     (USBFS_BASE + USBFS_BRDYENB_OFFSET)
#define USBFS_BRDYENB_PIPE9BRDYE          (1 <<  9) /* 200: BRDY Interrupt Enable for PIPE9 */
#define USBFS_BRDYENB_PIPE8BRDYE          (1 <<  8) /* 100: BRDY Interrupt Enable for PIPE8 */
#define USBFS_BRDYENB_PIPE7BRDYE          (1 <<  7) /* 80: BRDY Interrupt Enable for PIPE7 */
#define USBFS_BRDYENB_PIPE6BRDYE          (1 <<  6) /* 40: BRDY Interrupt Enable for PIPE6 */
#define USBFS_BRDYENB_PIPE5BRDYE          (1 <<  5) /* 20: BRDY Interrupt Enable for PIPE5 */
#define USBFS_BRDYENB_PIPE4BRDYE          (1 <<  4) /* 10: BRDY Interrupt Enable for PIPE4 */
#define USBFS_BRDYENB_PIPE3BRDYE          (1 <<  3) /* 08: BRDY Interrupt Enable for PIPE3 */
#define USBFS_BRDYENB_PIPE2BRDYE          (1 <<  2) /* 04: BRDY Interrupt Enable for PIPE2 */
#define USBFS_BRDYENB_PIPE1BRDYE          (1 <<  1) /* 02: BRDY Interrupt Enable for PIPE1 */
#define USBFS_BRDYENB_PIPE0BRDYE          (1 <<  0) /* 01: BRDY Interrupt Enable for PIPE0 */
#define USBFS_NRDYENB_OFFSET              0x0038
#define USBFS_NRDYENB                     (USBFS_BASE + USBFS_NRDYENB_OFFSET)
#define USBFS_NRDYENB_PIPE9NRDYE          (1 <<  9) /* 200: NRDY Interrupt Enable for PIPE9 */
#define USBFS_NRDYENB_PIPE8NRDYE          (1 <<  8) /* 100: NRDY Interrupt Enable for PIPE8 */
#define USBFS_NRDYENB_PIPE7NRDYE          (1 <<  7) /* 80: NRDY Interrupt Enable for PIPE7 */
#define USBFS_NRDYENB_PIPE6NRDYE          (1 <<  6) /* 40: NRDY Interrupt Enable for PIPE6 */
#define USBFS_NRDYENB_PIPE5NRDYE          (1 <<  5) /* 20: NRDY Interrupt Enable for PIPE5 */
#define USBFS_NRDYENB_PIPE4NRDYE          (1 <<  4) /* 10: NRDY Interrupt Enable for PIPE4 */
#define USBFS_NRDYENB_PIPE3NRDYE          (1 <<  3) /* 08: NRDY Interrupt Enable for PIPE3 */
#define USBFS_NRDYENB_PIPE2NRDYE          (1 <<  2) /* 04: NRDY Interrupt Enable for PIPE2 */
#define USBFS_NRDYENB_PIPE1NRDYE          (1 <<  1) /* 02: NRDY Interrupt Enable for PIPE1 */
#define USBFS_NRDYENB_PIPE0NRDYE          (1 <<  0) /* 01: NRDY Interrupt Enable for PIPE0 */
#define USBFS_BEMPENB_OFFSET              0x003a
#define USBFS_BEMPENB                     (USBFS_BASE + USBFS_BEMPENB_OFFSET)
#define USBFS_BEMPENB_PIPE9BEMPE          (1 <<  9) /* 200: BEMP Interrupt Enable for PIPE9 */
#define USBFS_BEMPENB_PIPE8BEMPE          (1 <<  8) /* 100: BEMP Interrupt Enable for PIPE8 */
#define USBFS_BEMPENB_PIPE7BEMPE          (1 <<  7) /* 80: BEMP Interrupt Enable for PIPE7 */
#define USBFS_BEMPENB_PIPE6BEMPE          (1 <<  6) /* 40: BEMP Interrupt Enable for PIPE6 */
#define USBFS_BEMPENB_PIPE5BEMPE          (1 <<  5) /* 20: BEMP Interrupt Enable for PIPE5 */
#define USBFS_BEMPENB_PIPE4BEMPE          (1 <<  4) /* 10: BEMP Interrupt Enable for PIPE4 */
#define USBFS_BEMPENB_PIPE3BEMPE          (1 <<  3) /* 08: BEMP Interrupt Enable for PIPE3 */
#define USBFS_BEMPENB_PIPE2BEMPE          (1 <<  2) /* 04: BEMP Interrupt Enable for PIPE2 */
#define USBFS_BEMPENB_PIPE1BEMPE          (1 <<  1) /* 02: BEMP Interrupt Enable for PIPE1 */
#define USBFS_BEMPENB_PIPE0BEMPE          (1 <<  0) /* 01: BEMP Interrupt Enable for PIPE0 */
#define USBFS_SOFCFG_OFFSET               0x003c
#define USBFS_SOFCFG                      (USBFS_BASE + USBFS_SOFCFG_OFFSET)
#define USBFS_SOFCFG_TRNENSEL             (1 <<  8) /* 100: Transaction-Enabled Time Select */
#define USBFS_SOFCFG_BRDYM                (1 <<  6) /* 40: BRDY Interrupt Status Clear Timing */
#define USBFS_SOFCFG_EDGESTS              (1 <<  4) /* 10: Edge Interrupt Output Status Monitor */
#define USBFS_INTSTS0_OFFSET              0x0040
#define USBFS_INTSTS0                     (USBFS_BASE + USBFS_INTSTS0_OFFSET)
#define USBFS_INTSTS0_VBINT               (1 << 15) /* 8000: VBUS Interrupt Status */
#define USBFS_INTSTS0_RESM                (1 << 14) /* 4000: Resume Interrupt Status */
#define USBFS_INTSTS0_SOFR                (1 << 13) /* 2000: Frame Number Refresh Interrupt Status */
#define USBFS_INTSTS0_DVST                (1 << 12) /* 1000: Device State Transition Interrupt Status */
#define USBFS_INTSTS0_CTRT                (1 << 11) /* 800: Control Transfer Stage Transition Interrupt Status */
#define USBFS_INTSTS0_BEMP                (1 << 10) /* 400: Buffer Empty Interrupt Status */
#define USBFS_INTSTS0_NRDY                (1 <<  9) /* 200: Buffer Not Ready Interrupt Status */
#define USBFS_INTSTS0_BRDY                (1 <<  8) /* 100: Buffer Ready Interrupt Status */
#define USBFS_INTSTS0_VBSTS               (1 <<  7) /* 80: VBUS Input Status */
#define USBFS_INTSTS0_DVSQ                (3 <<  4) /* 10: Device State */
#define USBFS_INTSTS0_DVSQ_MASK                (0x07)
#define USBFS_INTSTS0_VALID               (1 <<  3) /* 08: USB Request Reception */
#define USBFS_INTSTS0_CTSQ                (3 <<  0) /* 01: Control Transfer Stage */
#define USBFS_INTSTS0_CTSQ_MASK                (0x07)
#define USBFS_INTSTS1_OFFSET              0x0042
#define USBFS_INTSTS1                     (USBFS_BASE + USBFS_INTSTS1_OFFSET)
#define USBFS_INTSTS1_OVRCR               (1 << 15) /* 8000: Overcurrent Input Change Interrupt Status */
#define USBFS_INTSTS1_BCHG                (1 << 14) /* 4000: USB Bus Change Interrupt Status */
#define USBFS_INTSTS1_DTCH                (1 << 12) /* 1000: USB Disconnection Detection Interrupt Status */
#define USBFS_INTSTS1_ATTCH               (1 << 11) /* 800: ATTCH Interrupt Status */
#define USBFS_INTSTS1_EOFERR              (1 <<  6) /* 40: EOF Error Detection Interrupt Status */
#define USBFS_INTSTS1_SIGN                (1 <<  5) /* 20: Setup Transaction Error Interrupt Status */
#define USBFS_INTSTS1_SACK                (1 <<  4) /* 10: Setup Transaction Normal Response Interrupt Status */
#define USBFS_INTSTS1_PDDETINT0           (1 <<  0) /* 01: PDDET0 Detection Interrupt Status */
#define USBFS_BRDYSTS_OFFSET              0x0046
#define USBFS_BRDYSTS                     (USBFS_BASE + USBFS_BRDYSTS_OFFSET)
#define USBFS_BRDYSTS_PIPE9BRDY           (1 <<  9) /* 200: BRDY Interrupt Status for PIPE9 */
#define USBFS_BRDYSTS_PIPE8BRDY           (1 <<  8) /* 100: BRDY Interrupt Status for PIPE8 */
#define USBFS_BRDYSTS_PIPE7BRDY           (1 <<  7) /* 80: BRDY Interrupt Status for PIPE7 */
#define USBFS_BRDYSTS_PIPE6BRDY           (1 <<  6) /* 40: BRDY Interrupt Status for PIPE6 */
#define USBFS_BRDYSTS_PIPE5BRDY           (1 <<  5) /* 20: BRDY Interrupt Status for PIPE5 */
#define USBFS_BRDYSTS_PIPE4BRDY           (1 <<  4) /* 10: BRDY Interrupt Status for PIPE4 */
#define USBFS_BRDYSTS_PIPE3BRDY           (1 <<  3) /* 08: BRDY Interrupt Status for PIPE3 */
#define USBFS_BRDYSTS_PIPE2BRDY           (1 <<  2) /* 04: BRDY Interrupt Status for PIPE2 */
#define USBFS_BRDYSTS_PIPE1BRDY           (1 <<  1) /* 02: BRDY Interrupt Status for PIPE1 */
#define USBFS_BRDYSTS_PIPE0BRDY           (1 <<  0) /* 01: BRDY Interrupt Status for PIPE0 */
#define USBFS_NRDYSTS_OFFSET              0x0048
#define USBFS_NRDYSTS                     (USBFS_BASE + USBFS_NRDYSTS_OFFSET)
#define USBFS_NRDYSTS_PIPE9NRDY           (1 <<  9) /* 200: NRDY Interrupt Status for PIPE9 */
#define USBFS_NRDYSTS_PIPE8NRDY           (1 <<  8) /* 100: NRDY Interrupt Status for PIPE8 */
#define USBFS_NRDYSTS_PIPE7NRDY           (1 <<  7) /* 80: NRDY Interrupt Status for PIPE7 */
#define USBFS_NRDYSTS_PIPE6NRDY           (1 <<  6) /* 40: NRDY Interrupt Status for PIPE6 */
#define USBFS_NRDYSTS_PIPE5NRDY           (1 <<  5) /* 20: NRDY Interrupt Status for PIPE5 */
#define USBFS_NRDYSTS_PIPE4NRDY           (1 <<  4) /* 10: NRDY Interrupt Status for PIPE4 */
#define USBFS_NRDYSTS_PIPE3NRDY           (1 <<  3) /* 08: NRDY Interrupt Status for PIPE3 */
#define USBFS_NRDYSTS_PIPE2NRDY           (1 <<  2) /* 04: NRDY Interrupt Status for PIPE2 */
#define USBFS_NRDYSTS_PIPE1NRDY           (1 <<  1) /* 02: NRDY Interrupt Status for PIPE1 */
#define USBFS_NRDYSTS_PIPE0NRDY           (1 <<  0) /* 01: NRDY Interrupt Status for PIPE0 */
#define USBFS_BEMPSTS_OFFSET              0x004a
#define USBFS_BEMPSTS                     (USBFS_BASE + USBFS_BEMPSTS_OFFSET)
#define USBFS_BEMPSTS_PIPE9BEMP           (1 <<  9) /* 200: BEMP Interrupt Status for PIPE9 */
#define USBFS_BEMPSTS_PIPE8BEMP           (1 <<  8) /* 100: BEMP Interrupt Status for PIPE8 */
#define USBFS_BEMPSTS_PIPE7BEMP           (1 <<  7) /* 80: BEMP Interrupt Status for PIPE7 */
#define USBFS_BEMPSTS_PIPE6BEMP           (1 <<  6) /* 40: BEMP Interrupt Status for PIPE6 */
#define USBFS_BEMPSTS_PIPE5BEMP           (1 <<  5) /* 20: BEMP Interrupt Status for PIPE5 */
#define USBFS_BEMPSTS_PIPE4BEMP           (1 <<  4) /* 10: BEMP Interrupt Status for PIPE4 */
#define USBFS_BEMPSTS_PIPE3BEMP           (1 <<  3) /* 08: BEMP Interrupt Status for PIPE3 */
#define USBFS_BEMPSTS_PIPE2BEMP           (1 <<  2) /* 04: BEMP Interrupt Status for PIPE2 */
#define USBFS_BEMPSTS_PIPE1BEMP           (1 <<  1) /* 02: BEMP Interrupt Status for PIPE1 */
#define USBFS_BEMPSTS_PIPE0BEMP           (1 <<  0) /* 01: BEMP Interrupt Status for PIPE0 */
#define USBFS_FRMNUM_OFFSET               0x004c
#define USBFS_FRMNUM                      (USBFS_BASE + USBFS_FRMNUM_OFFSET)
#define USBFS_FRMNUM_OVRN                 (1 << 15) /* 8000: Overrun/Underrun Detection Status */
#define USBFS_FRMNUM_CRCE                 (1 << 14) /* 4000: Receive Data Error */
#define USBFS_FRMNUM_FRNM                 (11 <<  0) /* 01: Frame Number Latest frame number */
#define USBFS_FRMNUM_FRNM_MASK                 (0x7ff)
#define USBFS_USBREQ_OFFSET               0x0054
#define USBFS_USBREQ                      (USBFS_BASE + USBFS_USBREQ_OFFSET)
#define USBFS_USBREQ_BREQUEST             (8 <<  8) /* 100: Request These bits store the USB request bRequest value. */
#define USBFS_USBREQ_BREQUEST_MASK             (0xff)
#define USBFS_USBREQ_BMREQUESTTYPE        (8 <<  0) /* 01: Request Type These bits store the USB request bmRequestType value. */
#define USBFS_USBREQ_BMREQUESTTYPE_MASK        (0xff)
#define USBFS_USBVAL_OFFSET               0x0056
#define USBFS_USBVAL                      (USBFS_BASE + USBFS_USBVAL_OFFSET)
#define USBFS_USBVAL_WVALUE               (16 <<  0) /* 01: Value These bits store the USB request Value value. */
#define USBFS_USBVAL_WVALUE_MASK               (0xffff)
#define USBFS_USBINDX_OFFSET              0x0058
#define USBFS_USBINDX                     (USBFS_BASE + USBFS_USBINDX_OFFSET)
#define USBFS_USBINDX_WINDEX              (16 <<  0) /* 01: Index These bits store the USB request wIndex value. */
#define USBFS_USBINDX_WINDEX_MASK              (0xffff)
#define USBFS_USBLENG_OFFSET              0x005a
#define USBFS_USBLENG                     (USBFS_BASE + USBFS_USBLENG_OFFSET)
#define USBFS_USBLENG_WLENTUH             (16 <<  0) /* 01: Length These bits store the USB request wLength value. */
#define USBFS_USBLENG_WLENTUH_MASK             (0xffff)
#define USBFS_DCPCFG_OFFSET               0x005c
#define USBFS_DCPCFG                      (USBFS_BASE + USBFS_DCPCFG_OFFSET)
#define USBFS_DCPCFG_SHTNAK               (1 <<  7) /* 80: Pipe Disabled at End of Transfer */
#define USBFS_DCPCFG_DIR                  (1 <<  4) /* 10: Transfer Direction */
#define USBFS_DCPMAXP_OFFSET              0x005e
#define USBFS_DCPMAXP                     (USBFS_BASE + USBFS_DCPMAXP_OFFSET)
#define USBFS_DCPMAXP_DEVSEL              (4 << 12) /* 1000: Device Select */
#define USBFS_DCPMAXP_DEVSEL_MASK              (0x0f)
#define USBFS_DCPMAXP_MXPS                (7 <<  0) /* 01: Maximum Packet Size These bits set the maximum amount of data (maximum packet size) in payloads for the DCP. */
#define USBFS_DCPMAXP_MXPS_MASK                (0x7f)
#define USBFS_DCPCTR_OFFSET               0x0060
#define USBFS_DCPCTR                      (USBFS_BASE + USBFS_DCPCTR_OFFSET)
#define USBFS_DCPCTR_BSTS                 (1 << 15) /* 8000: Buffer Status */
#define USBFS_DCPCTR_SUREQ                (1 << 14) /* 4000: Setup Token Transmission */
#define USBFS_DCPCTR_SUREQCLR             (1 << 11) /* 800: SUREQ Bit Clear */
#define USBFS_DCPCTR_SQCLR                (1 <<  8) /* 100: Sequence Toggle Bit Clear */
#define USBFS_DCPCTR_SQSET                (1 <<  7) /* 80: Sequence Toggle Bit Set */
#define USBFS_DCPCTR_SQMON                (1 <<  6) /* 40: Sequence Toggle Bit Monitor */
#define USBFS_DCPCTR_PBUSY                (1 <<  5) /* 20: Pipe Busy */
#define USBFS_DCPCTR_CCPL                 (1 <<  2) /* 04: Control Transfer End Enable */
#define USBFS_DCPCTR_PID                  (2 <<  0) /* 01: Response PID */
#define USBFS_DCPCTR_PID_MASK                  (0x03)
#define USBFS_PIPESEL_OFFSET              0x0064
#define USBFS_PIPESEL                     (USBFS_BASE + USBFS_PIPESEL_OFFSET)
#define USBFS_PIPESEL_PIPESEL             (4 <<  0) /* 01: Pipe Window Select */
#define USBFS_PIPESEL_PIPESEL_MASK             (0x0f)
#define USBFS_PIPECFG_OFFSET              0x0068
#define USBFS_PIPECFG                     (USBFS_BASE + USBFS_PIPECFG_OFFSET)
#define USBFS_PIPECFG_TYPE                (2 << 14) /* 4000: Transfer Type */
#define USBFS_PIPECFG_TYPE_MASK                (0x03)
#define USBFS_PIPECFG_BFRE                (1 << 10) /* 400: BRDY Interrupt Operation Specification */
#define USBFS_PIPECFG_DBLB                (1 <<  9) /* 200: Double Buffer Mode */
#define USBFS_PIPECFG_SHTNAK              (1 <<  7) /* 80: Pipe Disabled at End of Transfer */
#define USBFS_PIPECFG_DIR                 (1 <<  4) /* 10: Transfer Direction */
#define USBFS_PIPECFG_EPNUM               (4 <<  0) /* 01: Endpoint Number These bits specify the endpoint number for the selected pipe. Setting 0000b means unused pipe. */
#define USBFS_PIPECFG_EPNUM_MASK               (0x0f)
#define USBFS_PIPEMAXP_OFFSET             0x006c
#define USBFS_PIPEMAXP                    (USBFS_BASE + USBFS_PIPEMAXP_OFFSET)
#define USBFS_PIPEMAXP_DEVSEL             (4 << 12) /* 1000: Device Select */
#define USBFS_PIPEMAXP_DEVSEL_MASK             (0x0f)
#define USBFS_PIPEMAXP_MXPS               (9 <<  0) /* 01: Maximum Packet Size PIPE1 and PIPE2: 1 byte (001h) to 256 bytes (100h) PIPE3 to PIPE5: 8 bytes (008h), 16 bytes (010h), 32 bytes (020h), 64 bytes (040h) (Bits [8:7] and [2:0] are not provided.) PIPE6 to PIPE9: 1 byte (001h) to 64 bytes (040h) (Bits [8:7] are not provided.) */
#define USBFS_PIPEMAXP_MXPS_MASK               (0x1ff)
#define USBFS_PIPEPERI_OFFSET             0x006e
#define USBFS_PIPEPERI                    (USBFS_BASE + USBFS_PIPEPERI_OFFSET)
#define USBFS_PIPEPERI_IFIS               (1 << 12) /* 1000: Isochronous IN Buffer Flush */
#define USBFS_PIPEPERI_IITV               (3 <<  0) /* 01: Interval Error Detection Interval Specifies the interval error detection timing for the selected pipe in terms of frames, which is expressed as nth power of 2. */
#define USBFS_PIPEPERI_IITV_MASK               (0x07)
#define USBFS_PIPECTR_SIZE                5
#define USBFS_PIPECTR_OFFSET              0x0070
#define USBFS_PIPECTR(p)                  (USBFS_BASE + USBFS_PIPECTR_OFFSET + (p)*0x0002)
#define USBFS_PIPECTR_BSTS                (1 << 15) /* 8000: Buffer Status */
#define USBFS_PIPECTR_INBUFM              (1 << 14) /* 4000: Transmit Buffer Monitor */
#define USBFS_PIPECTR_ATREPM              (1 << 10) /* 400: Auto Response Mode */
#define USBFS_PIPECTR_ACLRM               (1 <<  9) /* 200: Auto Buffer Clear Mode */
#define USBFS_PIPECTR_SQCLR               (1 <<  8) /* 100: Sequence Toggle Bit Clear */
#define USBFS_PIPECTR_SQSET               (1 <<  7) /* 80: Sequence Toggle Bit Set */
#define USBFS_PIPECTR_SQMON               (1 <<  6) /* 40: Sequence Toggle Bit Confirmation */
#define USBFS_PIPECTR_PBUSY               (1 <<  5) /* 20: Pipe Busy */
#define USBFS_PIPECTR_PID                 (2 <<  0) /* 01: Response PID */
#define USBFS_PIPECTR_PID_MASK                 (0x03)
#define USBFS_PIPECTR_SIZE                4
#define USBFS_PIPECTR_OFFSET              0x007a
#define USBFS_PIPECTR(p)                  (USBFS_BASE + USBFS_PIPECTR_OFFSET + (p)*0x0002)
#define USBFS_PIPECTR_BSTS                (1 << 15) /* 8000: Buffer Status */
#define USBFS_PIPECTR_ACLRM               (1 <<  9) /* 200: Auto Buffer Clear Mode */
#define USBFS_PIPECTR_SQCLR               (1 <<  8) /* 100: Sequence Toggle Bit Clear */
#define USBFS_PIPECTR_SQSET               (1 <<  7) /* 80: Sequence Toggle Bit Set */
#define USBFS_PIPECTR_SQMON               (1 <<  6) /* 40: Sequence Toggle Bit Confirmation */
#define USBFS_PIPECTR_PBUSY               (1 <<  5) /* 20: Pipe Busy */
#define USBFS_PIPECTR_PID                 (2 <<  0) /* 01: Response PID */
#define USBFS_PIPECTR_PID_MASK                 (0x03)
#define USBFS_PIPETRE_SIZE                5
#define USBFS_PIPETRE_OFFSET              0x0090
#define USBFS_PIPETRE(p)                  (USBFS_BASE + USBFS_PIPETRE_OFFSET + (p)*0x0004)
#define USBFS_PIPETRE_TRENB               (1 <<  9) /* 200: Transaction Counter Enable */
#define USBFS_PIPETRE_TRCLR               (1 <<  8) /* 100: Transaction Counter Clear */
#define USBFS_PIPETRN_SIZE                5
#define USBFS_PIPETRN_OFFSET              0x0092
#define USBFS_PIPETRN(p)                  (USBFS_BASE + USBFS_PIPETRN_OFFSET + (p)*0x0004)
#define USBFS_PIPETRN_TRNCNT              (16 <<  0) /* 01: Transaction Counter */
#define USBFS_PIPETRN_TRNCNT_MASK              (0xffff)
#define USBFS_DEVADD_SIZE                 6
#define USBFS_DEVADD_OFFSET               0x00d0
#define USBFS_DEVADD(p)                   (USBFS_BASE + USBFS_DEVADD_OFFSET + (p)*0x0002)
#define USBFS_DEVADD_USBSPD               (2 <<  6) /* 40: Transfer Speed of Communication Target Device */
#define USBFS_DEVADD_USBSPD_MASK               (0x03)
#define USBFS_USBMC_OFFSET                0x00cc
#define USBFS_USBMC                       (USBFS_BASE + USBFS_USBMC_OFFSET)
#define USBFS_USBMC_VDCEN                 (1 <<  7) /* 80: USB Regulator On/Off Control */
#define USBFS_USBMC_VDDUSBE               (1 <<  0) /* 01: USB Reference Power Supply Circuit On/Off Control */
#define USBFS_USBBCCTRL0_OFFSET           0x00b0
#define USBFS_USBBCCTRL0                  (USBFS_BASE + USBFS_USBBCCTRL0_OFFSET)
#define USBFS_USBBCCTRL0_PDDETSTS0        (1 <<  9) /* 200: D+ Pin 0.6 V Input Detection Status */
#define USBFS_USBBCCTRL0_CHGDETSTS0       (1 <<  8) /* 100: D- Pin 0.6 V Input Detection Status */
#define USBFS_USBBCCTRL0_BATCHGE0         (1 <<  7) /* 80: BC (Battery Charger) Function Ch0 General Enable Control */
#define USBFS_USBBCCTRL0_VDMSRCE0         (1 <<  5) /* 20: D- Pin VDMSRC (0.6 V) Output Control */
#define USBFS_USBBCCTRL0_IDPSINKE0        (1 <<  4) /* 10: D+ Pin 0.6 V Input Detection (Comparator and Sink) Control */
#define USBFS_USBBCCTRL0_VDPSRCE0         (1 <<  3) /* 08: D+ Pin VDPSRC (0.6 V) Output Control */
#define USBFS_USBBCCTRL0_IDMSINKE0        (1 <<  2) /* 04: D- Pin 0.6 V Input Detection (Comparator and Sink) Control */
#define USBFS_USBBCCTRL0_IDPSRCE0         (1 <<  1) /* 02: D+ Pin IDPSRC Output Control */
#define USBFS_USBBCCTRL0_RPDME0           (1 <<  0) /* 01: D- Pin Pull-Down Control */

/* WDT - Watchdog Timer */
#define WDT_BASE                          0x40044200
#define WDT_WDTRR_OFFSET                  0x0000
#define WDT_WDTRR                         (WDT_BASE + WDT_WDTRR_OFFSET)
#define WDT_WDTRR_WDTRR                   (8 <<  0) /* 01: WDTRR is an 8-bit register that refreshes the down-counter of the WDT. */
#define WDT_WDTRR_WDTRR_MASK                   (0xff)
#define WDT_WDTCR_OFFSET                  0x0002
#define WDT_WDTCR                         (WDT_BASE + WDT_WDTCR_OFFSET)
#define WDT_WDTCR_RPSS                    (2 << 12) /* 1000: Window Start Position Selection */
#define WDT_WDTCR_RPSS_MASK                    (0x03)
#define WDT_WDTCR_RPES                    (2 <<  8) /* 100: Window End Position Selection */
#define WDT_WDTCR_RPES_MASK                    (0x03)
#define WDT_WDTCR_CKS                     (4 <<  4) /* 10: Clock Division Ratio Selection */
#define WDT_WDTCR_CKS_MASK                     (0x0f)
#define WDT_WDTCR_TOPS                    (2 <<  0) /* 01: Timeout Period Selection */
#define WDT_WDTCR_TOPS_MASK                    (0x03)
#define WDT_WDTSR_OFFSET                  0x0004
#define WDT_WDTSR                         (WDT_BASE + WDT_WDTSR_OFFSET)
#define WDT_WDTSR_REFEF                   (1 << 15) /* 8000: Refresh Error Flag */
#define WDT_WDTSR_UNDFF                   (1 << 14) /* 4000: Underflow Flag */
#define WDT_WDTSR_CNTVAL                  (14 <<  0) /* 01: Down-Counter Value Value counted by the down-counter */
#define WDT_WDTSR_CNTVAL_MASK                  (0x3fff)
#define WDT_WDTRCR_OFFSET                 0x0006
#define WDT_WDTRCR                        (WDT_BASE + WDT_WDTRCR_OFFSET)
#define WDT_WDTRCR_RSTIRQS                (1 <<  7) /* 80: Reset Interrupt Request Selection */
#define WDT_WDTCSTPR_OFFSET               0x0008
#define WDT_WDTCSTPR                      (WDT_BASE + WDT_WDTCSTPR_OFFSET)
#define WDT_WDTCSTPR_SLCSTP               (1 <<  7) /* 80: Sleep-Mode Count Stop Control */

/* ACMPLP - Low-Power Analog Comparator */
#define ACMPLP_BASE                       0x40085e00
#define ACMPLP_COMPMDR_OFFSET             0x0000
#define ACMPLP_COMPMDR                    (ACMPLP_BASE + ACMPLP_COMPMDR_OFFSET)
#define ACMPLP_COMPMDR_C1MON              (1 <<  7) /* 80: ACMPLP1 Monitor Flag */
#define ACMPLP_COMPMDR_C1VRF              (1 <<  6) /* 40: ACMPLP1 Reference Voltage Selection */
#define ACMPLP_COMPMDR_C1WDE              (1 <<  5) /* 20: ACMPLP1 Window Function Mode Enable */
#define ACMPLP_COMPMDR_C1ENB              (1 <<  4) /* 10: ACMPLP1 Operation Enable */
#define ACMPLP_COMPMDR_C0MON              (1 <<  3) /* 08: ACMPLP0 Monitor Flag */
#define ACMPLP_COMPMDR_C0VRF              (1 <<  2) /* 04: ACMPLP0 Reference Voltage Selection */
#define ACMPLP_COMPMDR_C0WDE              (1 <<  1) /* 02: ACMPLP0 Window Function Mode Enable */
#define ACMPLP_COMPMDR_C0ENB              (1 <<  0) /* 01: ACMPLP0 Operation Enable */
#define ACMPLP_COMPFIR_OFFSET             0x0001
#define ACMPLP_COMPFIR                    (ACMPLP_BASE + ACMPLP_COMPFIR_OFFSET)
#define ACMPLP_COMPFIR_C1EDG              (1 <<  7) /* 80: ACMPLP1 Edge Detection Selection */
#define ACMPLP_COMPFIR_C1EPO              (1 <<  6) /* 40: ACMPLP1 Edge Polarity Switching */
#define ACMPLP_COMPFIR_C1FCK              (2 <<  4) /* 10: ACMPLP1 Filter Select */
#define ACMPLP_COMPFIR_C1FCK_MASK              (0x03)
#define ACMPLP_COMPFIR_C0EDG              (1 <<  3) /* 08: ACMPLP0 Edge Detection Selection */
#define ACMPLP_COMPFIR_C0EPO              (1 <<  2) /* 04: ACMPLP0 Edge Polarity Switching */
#define ACMPLP_COMPFIR_C0FCK              (2 <<  0) /* 01: ACMPLP0 Filter Select */
#define ACMPLP_COMPFIR_C0FCK_MASK              (0x03)
#define ACMPLP_COMPOCR_OFFSET             0x0002
#define ACMPLP_COMPOCR                    (ACMPLP_BASE + ACMPLP_COMPOCR_OFFSET)
#define ACMPLP_COMPOCR_SPDMD              (1 <<  7) /* 80: ACMPLP0/ACMPLP1 Speed Selection */
#define ACMPLP_COMPOCR_C1OP               (1 <<  6) /* 40: ACMPLP1 VCOUT Output Polarity Selection */
#define ACMPLP_COMPOCR_C1OE               (1 <<  5) /* 20: ACMPLP1 VCOUT Pin Output Enable */
#define ACMPLP_COMPOCR_C0OP               (1 <<  2) /* 04: ACMPLP0 VCOUT Output Polarity Selection */
#define ACMPLP_COMPOCR_C0OE               (1 <<  1) /* 02: ACMPLP0 VCOUT Pin Output Enable */
#define ACMPLP_COMPSEL0_OFFSET            0x0004
#define ACMPLP_COMPSEL0                   (ACMPLP_BASE + ACMPLP_COMPSEL0_OFFSET)
#define ACMPLP_COMPSEL0_CMPSEL64          (3 <<  4) /* 10: ACMPLP1 Input (IVCMP1) Selection */
#define ACMPLP_COMPSEL0_CMPSEL64_MASK          (0x07)
#define ACMPLP_COMPSEL0_CMPSEL20          (3 <<  0) /* 01: ACMPLP0 Input(IVCMP0) Selection */
#define ACMPLP_COMPSEL0_CMPSEL20_MASK          (0x07)
#define ACMPLP_COMPSEL1_OFFSET            0x0005
#define ACMPLP_COMPSEL1                   (ACMPLP_BASE + ACMPLP_COMPSEL1_OFFSET)
#define ACMPLP_COMPSEL1_C1VRF2            (1 <<  7) /* 80: ACMPLP1 Reference Voltage Selection */
#define ACMPLP_COMPSEL1_CRVS64            (3 <<  4) /* 10: ACMPLP1 Reference Voltage(IVREF1) Selection */
#define ACMPLP_COMPSEL1_CRVS64_MASK            (0x07)
#define ACMPLP_COMPSEL1_CRVS20            (3 <<  0) /* 01: ACMPLP0 Reference Voltage(IVREF0) Selection* */
#define ACMPLP_COMPSEL1_CRVS20_MASK            (0x07)

/* ADC140 - 14bit A/D Converter */
#define ADC140_BASE                       0x4005c000
#define ADC140_ADCSR_OFFSET               0x0000
#define ADC140_ADCSR                      (ADC140_BASE + ADC140_ADCSR_OFFSET)
#define ADC140_ADCSR_ADST                 (1 << 15) /* 8000: A/D Conversion Start */
#define ADC140_ADCSR_ADCS                 (2 << 13) /* 2000: Scan Mode Select */
#define ADC140_ADCSR_ADCS_MASK                 (0x03)
#define ADC140_ADCSR_ADHSC                (1 << 10) /* 400: A/D Conversion Operation Mode Select */
#define ADC140_ADCSR_TRGE                 (1 <<  9) /* 200: Trigger Start Enable */
#define ADC140_ADCSR_EXTRG                (1 <<  8) /* 100: Trigger Select */
#define ADC140_ADCSR_DBLE                 (1 <<  7) /* 80: Double Trigger Mode Select */
#define ADC140_ADCSR_GBADIE               (1 <<  6) /* 40: Group B Scan End Interrupt Enable */
#define ADC140_ADCSR_DBLANS               (5 <<  0) /* 01: Double Trigger Channel Select These bits select one analog input channel for double triggered operation. The setting is only effective while double trigger mode is selected. */
#define ADC140_ADCSR_DBLANS_MASK               (0x1f)
#define ADC140_ADANSA0_OFFSET             0x0004
#define ADC140_ADANSA0                    (ADC140_BASE + ADC140_ADANSA0_OFFSET)
#define ADC140_ADANSA0_ANSA014            (1 << 14) /* 4000: AN014 Select */
#define ADC140_ADANSA0_ANSA013            (1 << 13) /* 2000: AN013 Select */
#define ADC140_ADANSA0_ANSA012            (1 << 12) /* 1000: AN012 Select */
#define ADC140_ADANSA0_ANSA011            (1 << 11) /* 800: AN011 Select */
#define ADC140_ADANSA0_ANSA010            (1 << 10) /* 400: AN010 Select */
#define ADC140_ADANSA0_ANSA09             (1 <<  9) /* 200: AN009 Select */
#define ADC140_ADANSA0_ANSA08             (1 <<  8) /* 100: AN008 Select */
#define ADC140_ADANSA0_ANSA07             (1 <<  7) /* 80: AN007 Select */
#define ADC140_ADANSA0_ANSA06             (1 <<  6) /* 40: AN006 Select */
#define ADC140_ADANSA0_ANSA05             (1 <<  5) /* 20: AN005 Select */
#define ADC140_ADANSA0_ANSA04             (1 <<  4) /* 10: AN004 Select */
#define ADC140_ADANSA0_ANSA03             (1 <<  3) /* 08: AN003 Select */
#define ADC140_ADANSA0_ANSA02             (1 <<  2) /* 04: AN002 Select */
#define ADC140_ADANSA0_ANSA01             (1 <<  1) /* 02: AN001 Select */
#define ADC140_ADANSA0_ANSA00             (1 <<  0) /* 01: AN000 Select */
#define ADC140_ADANSA1_OFFSET             0x0006
#define ADC140_ADANSA1                    (ADC140_BASE + ADC140_ADANSA1_OFFSET)
#define ADC140_ADANSA1_ANSA25             (1 <<  9) /* 200: AN025 Select */
#define ADC140_ADANSA1_ANSA24             (1 <<  8) /* 100: AN024 Select */
#define ADC140_ADANSA1_ANSA23             (1 <<  7) /* 80: AN023 Select */
#define ADC140_ADANSA1_ANSA22             (1 <<  6) /* 40: AN022 Select */
#define ADC140_ADANSA1_ANSA21             (1 <<  5) /* 20: AN021 Select */
#define ADC140_ADANSA1_ANSA20             (1 <<  4) /* 10: AN020 Select */
#define ADC140_ADANSA1_ANSA19             (1 <<  3) /* 08: AN019 Select */
#define ADC140_ADANSA1_ANSA18             (1 <<  2) /* 04: AN018 Select */
#define ADC140_ADANSA1_ANSA17             (1 <<  1) /* 02: AN017 Select */
#define ADC140_ADANSA1_ANSA16             (1 <<  0) /* 01: AN016 Select */
#define ADC140_ADADS0_OFFSET              0x0008
#define ADC140_ADADS0                     (ADC140_BASE + ADC140_ADADS0_OFFSET)
#define ADC140_ADADS0_ADS14               (1 << 14) /* 4000: A/D-Converted Value Addition/Average Channel AN014 Select */
#define ADC140_ADADS0_ADS13               (1 << 13) /* 2000: A/D-Converted Value Addition/Average Channel AN013 Select */
#define ADC140_ADADS0_ADS12               (1 << 12) /* 1000: A/D-Converted Value Addition/Average Channel AN012 Select */
#define ADC140_ADADS0_ADS11               (1 << 11) /* 800: A/D-Converted Value Addition/Average Channel AN011 Select */
#define ADC140_ADADS0_ADS10               (1 << 10) /* 400: A/D-Converted Value Addition/Average Channel AN010 Select */
#define ADC140_ADADS0_ADS09               (1 <<  9) /* 200: A/D-Converted Value Addition/Average Channel AN009 Select */
#define ADC140_ADADS0_ADS08               (1 <<  8) /* 100: A/D-Converted Value Addition/Average Channel AN008 Select */
#define ADC140_ADADS0_ADS07               (1 <<  7) /* 80: A/D-Converted Value Addition/Average Channel AN007 Select */
#define ADC140_ADADS0_ADS06               (1 <<  6) /* 40: A/D-Converted Value Addition/Average Channel AN006 Select */
#define ADC140_ADADS0_ADS05               (1 <<  5) /* 20: A/D-Converted Value Addition/Average Channel AN005 Select */
#define ADC140_ADADS0_ADS04               (1 <<  4) /* 10: A/D-Converted Value Addition/Average Channel AN004 Select */
#define ADC140_ADADS0_ADS03               (1 <<  3) /* 08: A/D-Converted Value Addition/Average Channel AN003 Select */
#define ADC140_ADADS0_ADS02               (1 <<  2) /* 04: A/D-Converted Value Addition/Average Channel AN002 Select */
#define ADC140_ADADS0_ADS01               (1 <<  1) /* 02: A/D-Converted Value Addition/Average Channel AN001 Select */
#define ADC140_ADADS0_ADS00               (1 <<  0) /* 01: A/D-Converted Value Addition/Average Channel AN000 Select */
#define ADC140_ADADS1_OFFSET              0x000a
#define ADC140_ADADS1                     (ADC140_BASE + ADC140_ADADS1_OFFSET)
#define ADC140_ADADS1_ADS25               (1 <<  9) /* 200: A/D-Converted Value Addition/Average Channel AN025 Select */
#define ADC140_ADADS1_ADS24               (1 <<  8) /* 100: A/D-Converted Value Addition/Average Channel AN024 Select */
#define ADC140_ADADS1_ADS23               (1 <<  7) /* 80: A/D-Converted Value Addition/Average Channel AN023 Select */
#define ADC140_ADADS1_ADS22               (1 <<  6) /* 40: A/D-Converted Value Addition/Average Channel AN022 Select */
#define ADC140_ADADS1_ADS21               (1 <<  5) /* 20: A/D-Converted Value Addition/Average Channel AN021 Select */
#define ADC140_ADADS1_ADS20               (1 <<  4) /* 10: A/D-Converted Value Addition/Average Channel AN020 Select */
#define ADC140_ADADS1_ADS19               (1 <<  3) /* 08: A/D-Converted Value Addition/Average Channel AN019 Select */
#define ADC140_ADADS1_ADS18               (1 <<  2) /* 04: A/D-Converted Value Addition/Average Channel AN018 Select */
#define ADC140_ADADS1_ADS17               (1 <<  1) /* 02: A/D-Converted Value Addition/Average Channel AN017 Select */
#define ADC140_ADADS1_ADS16               (1 <<  0) /* 01: A/D-Converted Value Addition/Average Channel AN016 Select */
#define ADC140_ADADC_OFFSET               0x000c
#define ADC140_ADADC                      (ADC140_BASE + ADC140_ADADC_OFFSET)
#define ADC140_ADADC_AVEE                 (1 <<  7) /* 80: Average mode enable bit. Note: The AVEE bit converts twice, and only when converting it four times, is effective. Please do not set (ADADC.AVEE=1) to conversion (ADADC.ADC 2:0=010b) three times when you select the average mode. */
#define ADC140_ADADC_ADC                  (3 <<  0) /* 01: Addition frequency selection bit. NOTE: AVEE bit is valid at the only setting of ADC[2:0] bits = 001b or 011b. When average mode is selected by setting the ADADC.AVEE bit to 1, do not set the addition count to three times (ADADC.ADC[2:0] = 010b) */
#define ADC140_ADADC_ADC_MASK                  (0x07)
#define ADC140_ADCER_OFFSET               0x000e
#define ADC140_ADCER                      (ADC140_BASE + ADC140_ADCER_OFFSET)
#define ADC140_ADCER_ADRFMT               (1 << 15) /* 8000: A/D Data Register Format Select */
#define ADC140_ADCER_DIAGM                (1 << 11) /* 800: Self-Diagnosis Enable */
#define ADC140_ADCER_DIAGLD               (1 << 10) /* 400: Self-Diagnosis Mode Select */
#define ADC140_ADCER_DIAGVAL              (2 <<  8) /* 100: Self-Diagnosis Conversion Voltage Select */
#define ADC140_ADCER_DIAGVAL_MASK              (0x03)
#define ADC140_ADCER_ACE                  (1 <<  5) /* 20: A/D Data Register Automatic Clearing Enable */
#define ADC140_ADCER_ADPRC                (2 <<  1) /* 02: A/D Conversion Accuracy Specify */
#define ADC140_ADCER_ADPRC_MASK                (0x03)
#define ADC140_ADSTRGR_OFFSET             0x0010
#define ADC140_ADSTRGR                    (ADC140_BASE + ADC140_ADSTRGR_OFFSET)
#define ADC140_ADSTRGR_TRSA               (6 <<  8) /* 100: A/D Conversion Start Trigger Select Select the A/D conversion start trigger in single scan mode and continuous mode. In group scan mode, the A/D conversion start trigger for group A is selected. */
#define ADC140_ADSTRGR_TRSA_MASK               (0x3f)
#define ADC140_ADSTRGR_TRSB               (6 <<  0) /* 01: A/D Conversion Start Trigger Select for Group B Select the A/D conversion start trigger for group B in group scan mode. */
#define ADC140_ADSTRGR_TRSB_MASK               (0x3f)
#define ADC140_ADEXICR_OFFSET             0x0012
#define ADC140_ADEXICR                    (ADC140_BASE + ADC140_ADEXICR_OFFSET)
#define ADC140_ADEXICR_OCSA               (1 <<  9) /* 200: Internal Reference Voltage A/D Conversion Select */
#define ADC140_ADEXICR_TSSA               (1 <<  8) /* 100: Temperature Sensor Output A/D Conversion Select */
#define ADC140_ADEXICR_OCSAD              (1 <<  1) /* 02: Internal Reference Voltage A/D converted Value Addition/Average Mode Select */
#define ADC140_ADEXICR_TSSAD              (1 <<  0) /* 01: Temperature Sensor Output A/D converted Value Addition/Average Mode Select */
#define ADC140_ADANSB0_OFFSET             0x0014
#define ADC140_ADANSB0                    (ADC140_BASE + ADC140_ADANSB0_OFFSET)
#define ADC140_ADANSB0_ANSB14             (1 << 14) /* 4000: AN014 Select */
#define ADC140_ADANSB0_ANSB13             (1 << 13) /* 2000: AN013 Select */
#define ADC140_ADANSB0_ANSB12             (1 << 12) /* 1000: AN012 Select */
#define ADC140_ADANSB0_ANSB11             (1 << 11) /* 800: AN011 Select */
#define ADC140_ADANSB0_ANSB10             (1 << 10) /* 400: AN010 Select */
#define ADC140_ADANSB0_ANSB09             (1 <<  9) /* 200: AN009 Select */
#define ADC140_ADANSB0_ANSB08             (1 <<  8) /* 100: AN008 Select */
#define ADC140_ADANSB0_ANSB07             (1 <<  7) /* 80: AN007 Select */
#define ADC140_ADANSB0_ANSB06             (1 <<  6) /* 40: AN006 Select */
#define ADC140_ADANSB0_ANSB05             (1 <<  5) /* 20: AN005 Select */
#define ADC140_ADANSB0_ANSB04             (1 <<  4) /* 10: AN004 Select */
#define ADC140_ADANSB0_ANSB03             (1 <<  3) /* 08: AN003 Select */
#define ADC140_ADANSB0_ANSB02             (1 <<  2) /* 04: AN002 Select */
#define ADC140_ADANSB0_ANSB01             (1 <<  1) /* 02: AN001 Select */
#define ADC140_ADANSB0_ANSB00             (1 <<  0) /* 01: AN000 Select */
#define ADC140_ADANSB1_OFFSET             0x0016
#define ADC140_ADANSB1                    (ADC140_BASE + ADC140_ADANSB1_OFFSET)
#define ADC140_ADANSB1_ANSB25             (1 <<  9) /* 200: AN025 Select */
#define ADC140_ADANSB1_ANSB24             (1 <<  8) /* 100: AN024 Select */
#define ADC140_ADANSB1_ANSB23             (1 <<  7) /* 80: AN023 Select */
#define ADC140_ADANSB1_ANSB22             (1 <<  6) /* 40: AN022 Select */
#define ADC140_ADANSB1_ANSB21             (1 <<  5) /* 20: AN021 Select */
#define ADC140_ADANSB1_ANSB20             (1 <<  4) /* 10: AN020 Select */
#define ADC140_ADANSB1_ANSB19             (1 <<  3) /* 08: AN019 Select */
#define ADC140_ADANSB1_ANSB18             (1 <<  2) /* 04: AN018 Select */
#define ADC140_ADANSB1_ANSB17             (1 <<  1) /* 02: AN017 Select */
#define ADC140_ADANSB1_ANSB16             (1 <<  0) /* 01: AN016 Select */
#define ADC140_ADDBLDR_OFFSET             0x0018
#define ADC140_ADDBLDR                    (ADC140_BASE + ADC140_ADDBLDR_OFFSET)
#define ADC140_ADDBLDR_ADDBLDR            (16 <<  0) /* 01: This is a 16-bit read-only register for storing the result of A/D conversion in response to the second trigger in double trigger mode. */
#define ADC140_ADDBLDR_ADDBLDR_MASK            (0xffff)
#define ADC140_ADTSDR_OFFSET              0x001a
#define ADC140_ADTSDR                     (ADC140_BASE + ADC140_ADTSDR_OFFSET)
#define ADC140_ADTSDR_ADTSDR              (16 <<  0) /* 01: This is a 16-bit read-only register for storing the A/D conversion result of temperature sensor output. */
#define ADC140_ADTSDR_ADTSDR_MASK              (0xffff)
#define ADC140_ADOCDR_OFFSET              0x001c
#define ADC140_ADOCDR                     (ADC140_BASE + ADC140_ADOCDR_OFFSET)
#define ADC140_ADOCDR_ADOCDR              (16 <<  0) /* 01: This is a 16-bit read-only register for storing the A/D result of internal reference voltage. */
#define ADC140_ADOCDR_ADOCDR_MASK              (0xffff)
#define ADC140_ADRD_OFFSET                0x001e
#define ADC140_ADRD                       (ADC140_BASE + ADC140_ADRD_OFFSET)
#define ADC140_ADRD_DIAGST                (2 << 14) /* 4000: Self-Diagnosis Status */
#define ADC140_ADRD_DIAGST_MASK                (0x03)
#define ADC140_ADRD_AD                    (14 <<  0) /* 01: A/D-converted value (right-justified) The format for data determine ADCER.ADRFMT and ADCER.ADPRC. */
#define ADC140_ADRD_AD_MASK                    (0x3fff)
#define ADC140_ADDR_SIZE                  15
#define ADC140_ADDR_OFFSET                0x0020
#define ADC140_ADDR(p)                    (ADC140_BASE + ADC140_ADDR_OFFSET + (p)*0x0002)
#define ADC140_ADDR_ADDR                  (16 <<  0) /* 01: The ADDR register is a 16-bit read-only registers for storing the result of A/D conversion. */
#define ADC140_ADDR_ADDR_MASK                  (0xffff)
#define ADC140_ADDR_SIZE                  10
#define ADC140_ADDR_OFFSET                0x0040
#define ADC140_ADDR(p)                    (ADC140_BASE + ADC140_ADDR_OFFSET + (p)*0x0002)
#define ADC140_ADDR_ADDR                  (16 <<  0) /* 01: The ADDR register is a 16-bit read-only registers for storing the result of A/D conversion. */
#define ADC140_ADDR_ADDR_MASK                  (0xffff)
#define ADC140_ADDISCR_OFFSET             0x007a
#define ADC140_ADDISCR                    (ADC140_BASE + ADC140_ADDISCR_OFFSET)
#define ADC140_ADDISCR_PCHG               (1 <<  4) /* 10: Selection of Precharge or Discharge */
#define ADC140_ADDISCR_ADNDIS             (4 <<  0) /* 01: The charging time */
#define ADC140_ADDISCR_ADNDIS_MASK             (0x0f)
#define ADC140_ADGSPCR_OFFSET             0x0080
#define ADC140_ADGSPCR                    (ADC140_BASE + ADC140_ADGSPCR_OFFSET)
#define ADC140_ADGSPCR_GBRP               (1 << 15) /* 8000: Group B Single Scan Continuous Start (Enabled only when PGS = 1. Reserved when PGS = 0.) Note: When the GBRP bit has been set to 1, single scan is performed continuously for group B regardless of the setting of the GBRSCN bit. */
#define ADC140_ADGSPCR_GBRSCN             (1 <<  1) /* 02: Group B Restart Setting (Enabled only when PGS = 1. Reserved when PGS = 0.) */
#define ADC140_ADGSPCR_PGS                (1 <<  0) /* 01: Group A priority control setting bit. Note: When the PGS bit is to be set to 1, the ADCSR.ADCS[1:0] bits must be set to 01b (group scan mode). If the bits are set to any other values, proper operation is not guaranteed. */
#define ADC140_ADDBLDRA_OFFSET            0x0084
#define ADC140_ADDBLDRA                   (ADC140_BASE + ADC140_ADDBLDRA_OFFSET)
#define ADC140_ADDBLDRA_ADDBLDRA          (16 <<  0) /* 01: This register is a 16-bit read-only registers for storing the result of A/D conversion in response to the respective triggers during extended operation in double trigger mode. */
#define ADC140_ADDBLDRA_ADDBLDRA_MASK          (0xffff)
#define ADC140_ADDBLDRB_OFFSET            0x0086
#define ADC140_ADDBLDRB                   (ADC140_BASE + ADC140_ADDBLDRB_OFFSET)
#define ADC140_ADDBLDRB_ADDBLDRB          (16 <<  0) /* 01: This register is a 16-bit read-only registers for storing the result of A/D conversion in response to the respective triggers during extended operation in double trigger mode. */
#define ADC140_ADDBLDRB_ADDBLDRB_MASK          (0xffff)
#define ADC140_ADHVREFCNT_OFFSET          0x008a
#define ADC140_ADHVREFCNT                 (ADC140_BASE + ADC140_ADHVREFCNT_OFFSET)
#define ADC140_ADHVREFCNT_ADSLP           (1 <<  7) /* 80: Sleep */
#define ADC140_ADHVREFCNT_LVSEL           (3 <<  2) /* 04: Low-Potential Reference Voltage Select */
#define ADC140_ADHVREFCNT_LVSEL_MASK           (0x07)
#define ADC140_ADHVREFCNT_HVSEL           (2 <<  0) /* 01: High-Potential Reference Voltage Select */
#define ADC140_ADHVREFCNT_HVSEL_MASK           (0x03)
#define ADC140_ADWINMON_OFFSET            0x008c
#define ADC140_ADWINMON                   (ADC140_BASE + ADC140_ADWINMON_OFFSET)
#define ADC140_ADWINMON_MONCMPB           (1 <<  5) /* 20: Comparison Result Monitor B */
#define ADC140_ADWINMON_MONCMPA           (1 <<  4) /* 10: Comparison Result Monitor A */
#define ADC140_ADWINMON_MONCOMB           (1 <<  0) /* 01: Combination result monitor This bit indicates the combination result. This bit is valid when both window A operation and window B operation are enabled. */
#define ADC140_ADCMPCR_OFFSET             0x0090
#define ADC140_ADCMPCR                    (ADC140_BASE + ADC140_ADCMPCR_OFFSET)
#define ADC140_ADCMPCR_CMPAIE             (1 << 15) /* 8000: Compare A Interrupt Enable */
#define ADC140_ADCMPCR_WCMPE              (1 << 14) /* 4000: Window Function Setting */
#define ADC140_ADCMPCR_CMPBIE             (1 << 13) /* 2000: Compare B Interrupt Enable */
#define ADC140_ADCMPCR_CMPAE              (1 << 11) /* 800: Compare Window A Operation Enable */
#define ADC140_ADCMPCR_CMPBE              (1 <<  9) /* 200: Compare Window B Operation Enable */
#define ADC140_ADCMPCR_CMPAB              (2 <<  0) /* 01: Window A/B Composite Conditions Setting NOTE: These bits are valid when both window A and window B are enabled (CMPAE = 1 and CMPBE = 1). */
#define ADC140_ADCMPCR_CMPAB_MASK              (0x03)
#define ADC140_ADCMPANSER_OFFSET          0x0092
#define ADC140_ADCMPANSER                 (ADC140_BASE + ADC140_ADCMPANSER_OFFSET)
#define ADC140_ADCMPANSER_CMPOCA          (1 <<  1) /* 02: Internal reference voltage Compare selection bit. */
#define ADC140_ADCMPANSER_CMPTSA          (1 <<  0) /* 01: Temperature sensor output Compare selection bit. */
#define ADC140_ADCMPLER_OFFSET            0x0093
#define ADC140_ADCMPLER                   (ADC140_BASE + ADC140_ADCMPLER_OFFSET)
#define ADC140_ADCMPLER_CMPLOCA           (1 <<  1) /* 02: Compare Window A Internal Reference Voltage Comparison Condition Select */
#define ADC140_ADCMPLER_CMPLTSA           (1 <<  0) /* 01: Compare Window A Temperature Sensor Output Comparison Condition Select */
#define ADC140_ADCMPANSR0_OFFSET          0x0094
#define ADC140_ADCMPANSR0                 (ADC140_BASE + ADC140_ADCMPANSR0_OFFSET)
#define ADC140_ADCMPANSR0_CMPCHA14        (1 << 14) /* 4000: AN014 Select */
#define ADC140_ADCMPANSR0_CMPCHA13        (1 << 13) /* 2000: AN013 Select */
#define ADC140_ADCMPANSR0_CMPCHA12        (1 << 12) /* 1000: AN012 Select */
#define ADC140_ADCMPANSR0_CMPCHA11        (1 << 11) /* 800: AN011 Select */
#define ADC140_ADCMPANSR0_CMPCHA10        (1 << 10) /* 400: AN010 Select */
#define ADC140_ADCMPANSR0_CMPCHA09        (1 <<  9) /* 200: AN009 Select */
#define ADC140_ADCMPANSR0_CMPCHA08        (1 <<  8) /* 100: AN008 Select */
#define ADC140_ADCMPANSR0_CMPCHA07        (1 <<  7) /* 80: AN007 Select */
#define ADC140_ADCMPANSR0_CMPCHA06        (1 <<  6) /* 40: AN006 Select */
#define ADC140_ADCMPANSR0_CMPCHA05        (1 <<  5) /* 20: AN005 Select */
#define ADC140_ADCMPANSR0_CMPCHA04        (1 <<  4) /* 10: AN004 Select */
#define ADC140_ADCMPANSR0_CMPCHA03        (1 <<  3) /* 08: AN003 Select */
#define ADC140_ADCMPANSR0_CMPCHA02        (1 <<  2) /* 04: AN002 Select */
#define ADC140_ADCMPANSR0_CMPCHA01        (1 <<  1) /* 02: AN001 Select */
#define ADC140_ADCMPANSR0_CMPCHA00        (1 <<  0) /* 01: AN000 Select */
#define ADC140_ADCMPANSR1_OFFSET          0x0096
#define ADC140_ADCMPANSR1                 (ADC140_BASE + ADC140_ADCMPANSR1_OFFSET)
#define ADC140_ADCMPANSR1_CMPCHA25        (1 <<  9) /* 200: AN025 Select */
#define ADC140_ADCMPANSR1_CMPCHA24        (1 <<  8) /* 100: AN024 Select */
#define ADC140_ADCMPANSR1_CMPCHA23        (1 <<  7) /* 80: AN023 Select */
#define ADC140_ADCMPANSR1_CMPCHA22        (1 <<  6) /* 40: AN022 Select */
#define ADC140_ADCMPANSR1_CMPCHA21        (1 <<  5) /* 20: AN021 Select */
#define ADC140_ADCMPANSR1_CMPCHA20        (1 <<  4) /* 10: AN020 Select */
#define ADC140_ADCMPANSR1_CMPCHA19        (1 <<  3) /* 08: AN019 Select */
#define ADC140_ADCMPANSR1_CMPCHA18        (1 <<  2) /* 04: AN018 Select */
#define ADC140_ADCMPANSR1_CMPCHA17        (1 <<  1) /* 02: AN017 Select */
#define ADC140_ADCMPANSR1_CMPCHA16        (1 <<  0) /* 01: AN016 Select */
#define ADC140_ADCMPLR0_OFFSET            0x0098
#define ADC140_ADCMPLR0                   (ADC140_BASE + ADC140_ADCMPLR0_OFFSET)
#define ADC140_ADCMPLR0_CMPLCHA14         (1 << 14) /* 4000: Comparison condition of AN014 */
#define ADC140_ADCMPLR0_CMPLCHA13         (1 << 13) /* 2000: Comparison condition of AN013 */
#define ADC140_ADCMPLR0_CMPLCHA12         (1 << 12) /* 1000: Comparison condition of AN012 */
#define ADC140_ADCMPLR0_CMPLCHA11         (1 << 11) /* 800: Comparison condition of AN011 */
#define ADC140_ADCMPLR0_CMPLCHA10         (1 << 10) /* 400: Comparison condition of AN010 */
#define ADC140_ADCMPLR0_CMPLCHA09         (1 <<  9) /* 200: Comparison condition of AN009 */
#define ADC140_ADCMPLR0_CMPLCHA08         (1 <<  8) /* 100: Comparison condition of AN008 */
#define ADC140_ADCMPLR0_CMPLCHA07         (1 <<  7) /* 80: Comparison condition of AN007 */
#define ADC140_ADCMPLR0_CMPLCHA06         (1 <<  6) /* 40: Comparison condition of AN006 */
#define ADC140_ADCMPLR0_CMPLCHA05         (1 <<  5) /* 20: Comparison condition of AN005 */
#define ADC140_ADCMPLR0_CMPLCHA04         (1 <<  4) /* 10: Comparison condition of AN004 */
#define ADC140_ADCMPLR0_CMPLCHA03         (1 <<  3) /* 08: Comparison condition of AN003 */
#define ADC140_ADCMPLR0_CMPLCHA02         (1 <<  2) /* 04: Comparison condition of AN002 */
#define ADC140_ADCMPLR0_CMPLCHA01         (1 <<  1) /* 02: Comparison condition of AN001 */
#define ADC140_ADCMPLR0_CMPLCHA00         (1 <<  0) /* 01: Comparison condition of AN000 */
#define ADC140_ADCMPLR1_OFFSET            0x009a
#define ADC140_ADCMPLR1                   (ADC140_BASE + ADC140_ADCMPLR1_OFFSET)
#define ADC140_ADCMPLR1_CMPLCHA25         (1 <<  9) /* 200: Comparison condition of AN025 */
#define ADC140_ADCMPLR1_CMPLCHA24         (1 <<  8) /* 100: Comparison condition of AN024 */
#define ADC140_ADCMPLR1_CMPLCHA23         (1 <<  7) /* 80: Comparison condition of AN023 */
#define ADC140_ADCMPLR1_CMPLCHA22         (1 <<  6) /* 40: Comparison condition of AN022 */
#define ADC140_ADCMPLR1_CMPLCHA21         (1 <<  5) /* 20: Comparison condition of AN021 */
#define ADC140_ADCMPLR1_CMPLCHA20         (1 <<  4) /* 10: Comparison condition of AN020 */
#define ADC140_ADCMPLR1_CMPLCHA19         (1 <<  3) /* 08: Comparison condition of AN019 */
#define ADC140_ADCMPLR1_CMPLCHA18         (1 <<  2) /* 04: Comparison condition of AN018 */
#define ADC140_ADCMPLR1_CMPLCHA17         (1 <<  1) /* 02: Comparison condition of AN017 */
#define ADC140_ADCMPLR1_CMPLCHA16         (1 <<  0) /* 01: Comparison condition of AN016 */
#define ADC140_ADCMPDR0_OFFSET            0x009c
#define ADC140_ADCMPDR0                   (ADC140_BASE + ADC140_ADCMPDR0_OFFSET)
#define ADC140_ADCMPDR0_ADCMPDR0          (16 <<  0) /* 01: The ADCMPDR0 register sets the reference data when the compare window A function is used. ADCMPDR0 sets the lower-side level of window A. */
#define ADC140_ADCMPDR0_ADCMPDR0_MASK          (0xffff)
#define ADC140_ADCMPDR1_OFFSET            0x009e
#define ADC140_ADCMPDR1                   (ADC140_BASE + ADC140_ADCMPDR1_OFFSET)
#define ADC140_ADCMPDR1_ADCMPDR1          (16 <<  0) /* 01: The ADCMPDR1 register sets the reference data when the compare window A function is used. ADCMPDR1 sets the upper-side level of window A.. */
#define ADC140_ADCMPDR1_ADCMPDR1_MASK          (0xffff)
#define ADC140_ADCMPSR0_OFFSET            0x00a0
#define ADC140_ADCMPSR0                   (ADC140_BASE + ADC140_ADCMPSR0_OFFSET)
#define ADC140_ADCMPSR0_CMPSTCHA14        (1 << 14) /* 4000: Compare window A flag of AN014 */
#define ADC140_ADCMPSR0_CMPSTCHA13        (1 << 13) /* 2000: Compare window A flag of AN013 */
#define ADC140_ADCMPSR0_CMPSTCHA12        (1 << 12) /* 1000: Compare window A flag of AN012 */
#define ADC140_ADCMPSR0_CMPSTCHA11        (1 << 11) /* 800: Compare window A flag of AN011 */
#define ADC140_ADCMPSR0_CMPSTCHA10        (1 << 10) /* 400: Compare window A flag of AN010 */
#define ADC140_ADCMPSR0_CMPSTCHA09        (1 <<  9) /* 200: Compare window A flag of AN009 */
#define ADC140_ADCMPSR0_CMPSTCHA08        (1 <<  8) /* 100: Compare window A flag of AN008 */
#define ADC140_ADCMPSR0_CMPSTCHA07        (1 <<  7) /* 80: Compare window A flag of AN007 */
#define ADC140_ADCMPSR0_CMPSTCHA06        (1 <<  6) /* 40: Compare window A flag of AN006 */
#define ADC140_ADCMPSR0_CMPSTCHA05        (1 <<  5) /* 20: Compare window A flag of AN005 */
#define ADC140_ADCMPSR0_CMPSTCHA04        (1 <<  4) /* 10: Compare window A flag of AN004 */
#define ADC140_ADCMPSR0_CMPSTCHA03        (1 <<  3) /* 08: Compare window A flag of AN003 */
#define ADC140_ADCMPSR0_CMPSTCHA02        (1 <<  2) /* 04: Compare window A flag of AN002 */
#define ADC140_ADCMPSR0_CMPSTCHA01        (1 <<  1) /* 02: Compare window A flag of AN001 */
#define ADC140_ADCMPSR0_CMPSTCHA00        (1 <<  0) /* 01: Compare window A flag of AN000 */
#define ADC140_ADCMPSR1_OFFSET            0x00a2
#define ADC140_ADCMPSR1                   (ADC140_BASE + ADC140_ADCMPSR1_OFFSET)
#define ADC140_ADCMPSR1_CMPSTCHA25        (1 <<  9) /* 200: Compare window A flag of AN025 */
#define ADC140_ADCMPSR1_CMPSTCHA24        (1 <<  8) /* 100: Compare window A flag of AN024 */
#define ADC140_ADCMPSR1_CMPSTCHA23        (1 <<  7) /* 80: Compare window A flag of AN023 */
#define ADC140_ADCMPSR1_CMPSTCHA22        (1 <<  6) /* 40: Compare window A flag of AN022 */
#define ADC140_ADCMPSR1_CMPSTCHA21        (1 <<  5) /* 20: Compare window A flag of AN021 */
#define ADC140_ADCMPSR1_CMPSTCHA20        (1 <<  4) /* 10: Compare window A flag of AN020 */
#define ADC140_ADCMPSR1_CMPSTCHA19        (1 <<  3) /* 08: Compare window A flag of AN019 */
#define ADC140_ADCMPSR1_CMPSTCHA18        (1 <<  2) /* 04: Compare window A flag of AN018 */
#define ADC140_ADCMPSR1_CMPSTCHA17        (1 <<  1) /* 02: Compare window A flag of AN017 */
#define ADC140_ADCMPSR1_CMPSTCHA16        (1 <<  0) /* 01: Compare window A flag of AN016 */
#define ADC140_ADCMPSER_OFFSET            0x00a4
#define ADC140_ADCMPSER                   (ADC140_BASE + ADC140_ADCMPSER_OFFSET)
#define ADC140_ADCMPSER_CMPSTOCA          (1 <<  1) /* 02: Compare Window A Internal Reference Voltage Compare Flag When window A operation is enabled (ADCMPCR.CMPAE = 1b), this bit indicates the temperature sensor output comparison result. When window A operation is disabled (ADCMPCR.CMPAE = 0b), comparison conditions for CMPSTTSA are not met any time. */
#define ADC140_ADCMPSER_CMPSTTSA          (1 <<  0) /* 01: Compare Window A Temperature Sensor Output Compare Flag When window A operation is enabled (ADCMPCR.CMPAE = 1b), this bit indicates the temperature sensor output comparison result. When window A operation is disabled (ADCMPCR.CMPAE = 0b), comparison conditions for CMPSTTSA are not met any time. */
#define ADC140_ADCMPBNSR_OFFSET           0x00a6
#define ADC140_ADCMPBNSR                  (ADC140_BASE + ADC140_ADCMPBNSR_OFFSET)
#define ADC140_ADCMPBNSR_CMPLB            (1 <<  7) /* 80: Compare window B Compare condition setting bit. */
#define ADC140_ADCMPBNSR_CMPCHB           (6 <<  0) /* 01: Compare window B channel selection bit. The channel that compares it on the condition of compare window B is selected. */
#define ADC140_ADCMPBNSR_CMPCHB_MASK           (0x3f)
#define ADC140_ADWINLLB_OFFSET            0x00a8
#define ADC140_ADWINLLB                   (ADC140_BASE + ADC140_ADWINLLB_OFFSET)
#define ADC140_ADWINLLB_ADWINLLB          (16 <<  0) /* 01: This register is used to compare A window function is used to set the lower level of the window B. */
#define ADC140_ADWINLLB_ADWINLLB_MASK          (0xffff)
#define ADC140_ADWINULB_OFFSET            0x00aa
#define ADC140_ADWINULB                   (ADC140_BASE + ADC140_ADWINULB_OFFSET)
#define ADC140_ADWINULB_ADWINULB          (16 <<  0) /* 01: This register is used to compare A window function is used to set the higher level of the window B. */
#define ADC140_ADWINULB_ADWINULB_MASK          (0xffff)
#define ADC140_ADCMPBSR_OFFSET            0x00ac
#define ADC140_ADCMPBSR                   (ADC140_BASE + ADC140_ADCMPBSR_OFFSET)
#define ADC140_ADCMPBSR_CMPSTB            (1 <<  0) /* 01: Compare window B flag. It is a status flag that shows the comparative result of CH (AN000-AN027, temperature sensor, and internal reference voltage) made the object of window B relation condition. */
#define ADC140_ADSSTRL_OFFSET             0x00dd
#define ADC140_ADSSTRL                    (ADC140_BASE + ADC140_ADSSTRL_OFFSET)
#define ADC140_ADSSTRL_SST                (8 <<  0) /* 01: Sampling Time Setting (AN016-AN027) */
#define ADC140_ADSSTRL_SST_MASK                (0xff)
#define ADC140_ADSSTRT_OFFSET             0x00de
#define ADC140_ADSSTRT                    (ADC140_BASE + ADC140_ADSSTRT_OFFSET)
#define ADC140_ADSSTRT_SST                (8 <<  0) /* 01: Sampling Time Setting (temperature sensor output) */
#define ADC140_ADSSTRT_SST_MASK                (0xff)
#define ADC140_ADSSTRO_OFFSET             0x00df
#define ADC140_ADSSTRO                    (ADC140_BASE + ADC140_ADSSTRO_OFFSET)
#define ADC140_ADSSTRO_SST                (8 <<  0) /* 01: Sampling Time Setting (Internal reference voltage) */
#define ADC140_ADSSTRO_SST_MASK                (0xff)
#define ADC140_ADSSTR_SIZE                15
#define ADC140_ADSSTR_OFFSET              0x00e0
#define ADC140_ADSSTR(p)                  (ADC140_BASE + ADC140_ADSSTR_OFFSET + (p)*0x0001)
#define ADC140_ADSSTR_SST                 (8 <<  0) /* 01: Sampling time setting */
#define ADC140_ADSSTR_SST_MASK                 (0xff)

/* AGT0 - Asynchronous General purpose Timer 0 */
#define AGT0_BASE                         0x40084000
#define AGT0_AGT_OFFSET                   0x0000
#define AGT0_AGT                          (AGT0_BASE + AGT0_AGT_OFFSET)
#define AGT0_AGT_AGT                      (16 <<  0) /* 01: 16bit counter and reload register NOTE : When 1 is written to the TSTOP bit in the AGTCRn register, the 16-bit counter is forcibly stopped and set to FFFFH. */
#define AGT0_AGT_AGT_MASK                      (0xffff)
#define AGT0_AGTCMA_OFFSET                0x0002
#define AGT0_AGTCMA                       (AGT0_BASE + AGT0_AGTCMA_OFFSET)
#define AGT0_AGTCMA_AGTCMA                (16 <<  0) /* 01: AGT Compare Match A data is stored. NOTE : When 1 is written to the TSTOP bit in the AGTCRn register, set to FFFFH */
#define AGT0_AGTCMA_AGTCMA_MASK                (0xffff)
#define AGT0_AGTCMB_OFFSET                0x0004
#define AGT0_AGTCMB                       (AGT0_BASE + AGT0_AGTCMB_OFFSET)
#define AGT0_AGTCMB_AGTCMB                (16 <<  0) /* 01: AGT Compare Match B data is stored. NOTE : When 1 is written to the TSTOP bit in the AGTCR register, set to FFFFH */
#define AGT0_AGTCMB_AGTCMB_MASK                (0xffff)
#define AGT0_AGTCR_OFFSET                 0x0008
#define AGT0_AGTCR                        (AGT0_BASE + AGT0_AGTCR_OFFSET)
#define AGT0_AGTCR_TCMBF                  (1 <<  7) /* 80: Compare match B flag */
#define AGT0_AGTCR_TCMAF                  (1 <<  6) /* 40: Compare match A flag */
#define AGT0_AGTCR_TUNDF                  (1 <<  5) /* 20: Underflow flag */
#define AGT0_AGTCR_TEDGF                  (1 <<  4) /* 10: Active edge judgment flag */
#define AGT0_AGTCR_TSTOP                  (1 <<  2) /* 04: AGT count forced stop */
#define AGT0_AGTCR_TCSTF                  (1 <<  1) /* 02: AGT count status flag */
#define AGT0_AGTCR_TSTART                 (1 <<  0) /* 01: AGT count start */
#define AGT0_AGTMR1_OFFSET                0x0009
#define AGT0_AGTMR1                       (AGT0_BASE + AGT0_AGTMR1_OFFSET)
#define AGT0_AGTMR1_TCK                   (3 <<  4) /* 10: Count source */
#define AGT0_AGTMR1_TCK_MASK                   (0x07)
#define AGT0_AGTMR1_TEDGPL                (1 <<  3) /* 08: Edge polarity */
#define AGT0_AGTMR1_TMOD                  (3 <<  0) /* 01: Operating mode */
#define AGT0_AGTMR1_TMOD_MASK                  (0x07)
#define AGT0_AGTMR2_OFFSET                0x000a
#define AGT0_AGTMR2                       (AGT0_BASE + AGT0_AGTMR2_OFFSET)
#define AGT0_AGTMR2_LPM                   (1 <<  7) /* 80: Low Power Mode */
#define AGT0_AGTMR2_CKS                   (3 <<  0) /* 01: AGTLCLK/AGTSCLK count source clock frequency division ratio */
#define AGT0_AGTMR2_CKS_MASK                   (0x07)
#define AGT0_AGTIOC_OFFSET                0x000c
#define AGT0_AGTIOC                       (AGT0_BASE + AGT0_AGTIOC_OFFSET)
#define AGT0_AGTIOC_TIOGT                 (2 <<  6) /* 40: Count control */
#define AGT0_AGTIOC_TIOGT_MASK                 (0x03)
#define AGT0_AGTIOC_TIPF                  (2 <<  4) /* 10: Input filter */
#define AGT0_AGTIOC_TIPF_MASK                  (0x03)
#define AGT0_AGTIOC_TOE                   (1 <<  2) /* 04: AGTOn output enable */
#define AGT0_AGTIOC_TEDGSEL               (1 <<  0) /* 01: I/O polarity switch Function varies depending on the operating mode. */
#define AGT0_AGTISR_OFFSET                0x000d
#define AGT0_AGTISR                       (AGT0_BASE + AGT0_AGTISR_OFFSET)
#define AGT0_AGTISR_EEPS                  (1 <<  2) /* 04: AGTEE polarty selection */
#define AGT0_AGTCMSR_OFFSET               0x000e
#define AGT0_AGTCMSR                      (AGT0_BASE + AGT0_AGTCMSR_OFFSET)
#define AGT0_AGTCMSR_TOPOLB               (1 <<  6) /* 40: AGTOB polarity select */
#define AGT0_AGTCMSR_TOEB                 (1 <<  5) /* 20: AGTOB output enable */
#define AGT0_AGTCMSR_TCMEB                (1 <<  4) /* 10: Compare match B register enable */
#define AGT0_AGTCMSR_TOPOLA               (1 <<  2) /* 04: AGTOA polarity select */
#define AGT0_AGTCMSR_TOEA                 (1 <<  1) /* 02: AGTOA output enable */
#define AGT0_AGTCMSR_TCMEA                (1 <<  0) /* 01: Compare match A register enable */
#define AGT0_AGTIOSEL_OFFSET              0x000f
#define AGT0_AGTIOSEL                     (AGT0_BASE + AGT0_AGTIOSEL_OFFSET)
#define AGT0_AGTIOSEL_TIES                (1 <<  4) /* 10: AGTIO input enable */
#define AGT0_AGTIOSEL_SEL                 (2 <<  0) /* 01: AGTIO pin select */
#define AGT0_AGTIOSEL_SEL_MASK                 (0x03)

/* No registers defined for peripheral AGT1. Using those of AGT0. */
#define AGT1_BASE                         0x40084100
#define AGT1_AGT_OFFSET                   AGT0_AGT_OFFSET
#define AGT1_AGT                          AGT0_AGT
#define AGT1_AGT_AGT                      AGT0_AGT_AGT
#define AGT1_AGT_AGT_MASK                 AGT0_AGT_AGT_MASK
#define AGT1_AGTCMA_OFFSET                AGT0_AGTCMA_OFFSET
#define AGT1_AGTCMA                       AGT0_AGTCMA
#define AGT1_AGTCMA_AGTCMA                AGT0_AGTCMA_AGTCMA
#define AGT1_AGTCMA_AGTCMA_MASK           AGT0_AGTCMA_AGTCMA_MASK
#define AGT1_AGTCMB_OFFSET                AGT0_AGTCMB_OFFSET
#define AGT1_AGTCMB                       AGT0_AGTCMB
#define AGT1_AGTCMB_AGTCMB                AGT0_AGTCMB_AGTCMB
#define AGT1_AGTCMB_AGTCMB_MASK           AGT0_AGTCMB_AGTCMB_MASK
#define AGT1_AGTCR_OFFSET                 AGT0_AGTCR_OFFSET
#define AGT1_AGTCR                        AGT0_AGTCR
#define AGT1_AGTCR_TCMBF                  AGT0_AGTCR_TCMBF
#define AGT1_AGTCR_TCMAF                  AGT0_AGTCR_TCMAF
#define AGT1_AGTCR_TUNDF                  AGT0_AGTCR_TUNDF
#define AGT1_AGTCR_TEDGF                  AGT0_AGTCR_TEDGF
#define AGT1_AGTCR_TSTOP                  AGT0_AGTCR_TSTOP
#define AGT1_AGTCR_TCSTF                  AGT0_AGTCR_TCSTF
#define AGT1_AGTCR_TSTART                 AGT0_AGTCR_TSTART
#define AGT1_AGTMR1_OFFSET                AGT0_AGTMR1_OFFSET
#define AGT1_AGTMR1                       AGT0_AGTMR1
#define AGT1_AGTMR1_TCK                   AGT0_AGTMR1_TCK
#define AGT1_AGTMR1_TCK_MASK              AGT0_AGTMR1_TCK_MASK
#define AGT1_AGTMR1_TEDGPL                AGT0_AGTMR1_TEDGPL
#define AGT1_AGTMR1_TMOD                  AGT0_AGTMR1_TMOD
#define AGT1_AGTMR1_TMOD_MASK             AGT0_AGTMR1_TMOD_MASK
#define AGT1_AGTMR2_OFFSET                AGT0_AGTMR2_OFFSET
#define AGT1_AGTMR2                       AGT0_AGTMR2
#define AGT1_AGTMR2_LPM                   AGT0_AGTMR2_LPM
#define AGT1_AGTMR2_CKS                   AGT0_AGTMR2_CKS
#define AGT1_AGTMR2_CKS_MASK              AGT0_AGTMR2_CKS_MASK
#define AGT1_AGTIOC_OFFSET                AGT0_AGTIOC_OFFSET
#define AGT1_AGTIOC                       AGT0_AGTIOC
#define AGT1_AGTIOC_TIOGT                 AGT0_AGTIOC_TIOGT
#define AGT1_AGTIOC_TIOGT_MASK            AGT0_AGTIOC_TIOGT_MASK
#define AGT1_AGTIOC_TIPF                  AGT0_AGTIOC_TIPF
#define AGT1_AGTIOC_TIPF_MASK             AGT0_AGTIOC_TIPF_MASK
#define AGT1_AGTIOC_TOE                   AGT0_AGTIOC_TOE
#define AGT1_AGTIOC_TEDGSEL               AGT0_AGTIOC_TEDGSEL
#define AGT1_AGTISR_OFFSET                AGT0_AGTISR_OFFSET
#define AGT1_AGTISR                       AGT0_AGTISR
#define AGT1_AGTISR_EEPS                  AGT0_AGTISR_EEPS
#define AGT1_AGTCMSR_OFFSET               AGT0_AGTCMSR_OFFSET
#define AGT1_AGTCMSR                      AGT0_AGTCMSR
#define AGT1_AGTCMSR_TOPOLB               AGT0_AGTCMSR_TOPOLB
#define AGT1_AGTCMSR_TOEB                 AGT0_AGTCMSR_TOEB
#define AGT1_AGTCMSR_TCMEB                AGT0_AGTCMSR_TCMEB
#define AGT1_AGTCMSR_TOPOLA               AGT0_AGTCMSR_TOPOLA
#define AGT1_AGTCMSR_TOEA                 AGT0_AGTCMSR_TOEA
#define AGT1_AGTCMSR_TCMEA                AGT0_AGTCMSR_TCMEA
#define AGT1_AGTIOSEL_OFFSET              AGT0_AGTIOSEL_OFFSET
#define AGT1_AGTIOSEL                     AGT0_AGTIOSEL
#define AGT1_AGTIOSEL_TIES                AGT0_AGTIOSEL_TIES
#define AGT1_AGTIOSEL_SEL                 AGT0_AGTIOSEL_SEL
#define AGT1_AGTIOSEL_SEL_MASK            AGT0_AGTIOSEL_SEL_MASK

/* GPT320 - General PWM Timer 0 (32-bit) */
#define GPT320_BASE                       0x40078000
#define GPT320_GTWP_OFFSET                0x0000
#define GPT320_GTWP                       (GPT320_BASE + GPT320_GTWP_OFFSET)
#define GPT320_GTWP_PRKEY                 (8 <<  8) /* 100: GTWP Key Code */
#define GPT320_GTWP_PRKEY_MASK                 (0xff)
#define GPT320_GTWP_WP                    (1 <<  0) /* 01: Register Write Disable */
#define GPT320_GTSTR_OFFSET               0x0004
#define GPT320_GTSTR                      (GPT320_BASE + GPT320_GTSTR_OFFSET)
#define GPT320_GTSTR_CSTRT7               (1 <<  7) /* 80: Channel 7 GTCNT Count Start Read data shows each channel's counter status (GTCR.CST bit). 0 means counter stop. 1 means counter running. */
#define GPT320_GTSTR_CSTRT6               (1 <<  6) /* 40: Channel 6 GTCNT Count Start Read data shows each channel's counter status (GTCR.CST bit). 0 means counter stop. 1 means counter running. */
#define GPT320_GTSTR_CSTRT5               (1 <<  5) /* 20: Channel 5 GTCNT Count Start Read data shows each channel's counter status (GTCR.CST bit). 0 means counter stop. 1 means counter running. */
#define GPT320_GTSTR_CSTRT4               (1 <<  4) /* 10: Channel 4 GTCNT Count Start Read data shows each channel's counter status (GTCR.CST bit). 0 means counter stop. 1 means counter running. */
#define GPT320_GTSTR_CSTRT3               (1 <<  3) /* 08: Channel 3 GTCNT Count Start Read data shows each channel's counter status (GTCR.CST bit). 0 means counter stop. 1 means counter running. */
#define GPT320_GTSTR_CSTRT2               (1 <<  2) /* 04: Channel 2 GTCNT Count Start Read data shows each channel's counter status (GTCR.CST bit). 0 means counter stop. 1 means counter running. */
#define GPT320_GTSTR_CSTRT1               (1 <<  1) /* 02: Channel 1 GTCNT Count Start Read data shows each channel's counter status (GTCR.CST bit). 0 means counter stop. 1 means counter running. */
#define GPT320_GTSTR_CSTRT0               (1 <<  0) /* 01: Channel 0 GTCNT Count Start Read data shows each channel's counter status (GTCR.CST bit). 0 means counter stop. 1 means counter running. */
#define GPT320_GTSTP_OFFSET               0x0008
#define GPT320_GTSTP                      (GPT320_BASE + GPT320_GTSTP_OFFSET)
#define GPT320_GTSTP_CSTOP7               (1 <<  7) /* 80: Channel 7 GTCNT Count Stop Read data shows each channel's counter status (GTCR.CST bit). 0 means counter runnning. 1 means counter stop. */
#define GPT320_GTSTP_CSTOP6               (1 <<  6) /* 40: Channel 6 GTCNT Count Stop Read data shows each channel's counter status (GTCR.CST bit). 0 means counter runnning. 1 means counter stop. */
#define GPT320_GTSTP_CSTOP5               (1 <<  5) /* 20: Channel 5 GTCNT Count Stop Read data shows each channel's counter status (GTCR.CST bit). 0 means counter runnning. 1 means counter stop. */
#define GPT320_GTSTP_CSTOP4               (1 <<  4) /* 10: Channel 4 GTCNT Count Stop Read data shows each channel's counter status (GTCR.CST bit). 0 means counter runnning. 1 means counter stop. */
#define GPT320_GTSTP_CSTOP3               (1 <<  3) /* 08: Channel 3 GTCNT Count Stop Read data shows each channel's counter status (GTCR.CST bit). 0 means counter runnning. 1 means counter stop. */
#define GPT320_GTSTP_CSTOP2               (1 <<  2) /* 04: Channel 2 GTCNT Count Stop Read data shows each channel's counter status (GTCR.CST bit). 0 means counter runnning. 1 means counter stop. */
#define GPT320_GTSTP_CSTOP1               (1 <<  1) /* 02: Channel 1 GTCNT Count Stop Read data shows each channel's counter status (GTCR.CST bit). 0 means counter runnning. 1 means counter stop. */
#define GPT320_GTSTP_CSTOP0               (1 <<  0) /* 01: Channel 0 GTCNT Count Stop Read data shows each channel's counter status (GTCR.CST bit). 0 means counter runnning. 1 means counter stop. */
#define GPT320_GTCLR_OFFSET               0x000c
#define GPT320_GTCLR                      (GPT320_BASE + GPT320_GTCLR_OFFSET)
#define GPT320_GTCLR_CCLR7                (1 <<  7) /* 80: Channel 7 GTCNT Count Clear */
#define GPT320_GTCLR_CCLR6                (1 <<  6) /* 40: Channel 6 GTCNT Count Clear */
#define GPT320_GTCLR_CCLR5                (1 <<  5) /* 20: Channel 5 GTCNT Count Clear */
#define GPT320_GTCLR_CCLR4                (1 <<  4) /* 10: Channel 4 GTCNT Count Clear */
#define GPT320_GTCLR_CCLR3                (1 <<  3) /* 08: Channel 3 GTCNT Count Clear */
#define GPT320_GTCLR_CCLR2                (1 <<  2) /* 04: Channel 2 GTCNT Count Clear */
#define GPT320_GTCLR_CCLR1                (1 <<  1) /* 02: Channel 1 GTCNT Count Clear */
#define GPT320_GTCLR_CCLR0                (1 <<  0) /* 01: Channel 0 GTCNT Count Clear */
#define GPT320_GTSSR_OFFSET               0x0010
#define GPT320_GTSSR                      (GPT320_BASE + GPT320_GTSSR_OFFSET)
#define GPT320_GTSSR_CSTRT                (1 << 31) /* 80000000: Software Source Counter Start Enable */
#define GPT320_GTSSR_SSELCH               (1 << 23) /* 800000: ELCH Event Source Counter Start Enable */
#define GPT320_GTSSR_SSELCG               (1 << 22) /* 400000: ELC_GPTG Event Source Counter Start Enable */
#define GPT320_GTSSR_SSELCF               (1 << 21) /* 200000: ELC_GPTF Event Source Counter Start Enable */
#define GPT320_GTSSR_SSELCE               (1 << 20) /* 100000: ELC_GPTE Event Source Counter Start Enable */
#define GPT320_GTSSR_SSELCD               (1 << 19) /* 80000: ELC_GPTD Event Source Counter Start Enable */
#define GPT320_GTSSR_SSELCC               (1 << 18) /* 40000: ELC_GPTC Event Source Counter Start Enable */
#define GPT320_GTSSR_SSELCB               (1 << 17) /* 20000: ELC_GPTB Event Source Counter Start Enable */
#define GPT320_GTSSR_SSELCA               (1 << 16) /* 10000: ELC_GPTA Event Source Counter Start Enable */
#define GPT320_GTSSR_SSCBFAH              (1 << 15) /* 8000: GTIOCB Pin Falling Input during GTIOCA Value High Source Counter Start Enable */
#define GPT320_GTSSR_SSCBFAL              (1 << 14) /* 4000: GTIOCB Pin Falling Input during GTIOCA Value Low Source Counter Start Enable */
#define GPT320_GTSSR_SSCBRAH              (1 << 13) /* 2000: GTIOCB Pin Rising Input during GTIOCA Value High Source Counter Start Enable */
#define GPT320_GTSSR_SSCBRAL              (1 << 12) /* 1000: GTIOCB Pin Rising Input during GTIOCA Value Low Source Counter Start Enable */
#define GPT320_GTSSR_SSCAFBH              (1 << 11) /* 800: GTIOCA Pin Falling Input during GTIOCB Value High Source Counter Start Enable */
#define GPT320_GTSSR_SSCAFBL              (1 << 10) /* 400: GTIOCA Pin Falling Input during GTIOCB Value Low Source Counter Start Enable */
#define GPT320_GTSSR_SSCARBH              (1 <<  9) /* 200: GTIOCA Pin Rising Input during GTIOCB Value High Source Counter Start Enable */
#define GPT320_GTSSR_SSCARBL              (1 <<  8) /* 100: GTIOCA Pin Rising Input during GTIOCB Value Low Source Counter Start Enable */
#define GPT320_GTSSR_SSGTRGBF             (1 <<  3) /* 08: GTETRGB Pin Falling Input Source Counter Start Enable */
#define GPT320_GTSSR_SSGTRGBR             (1 <<  2) /* 04: GTETRGB Pin Rising Input Source Counter Start Enable */
#define GPT320_GTSSR_SSGTRGAF             (1 <<  1) /* 02: GTETRGA Pin Falling Input Source Counter Start Enable */
#define GPT320_GTSSR_SSGTRGAR             (1 <<  0) /* 01: GTETRGA Pin Rising Input Source Counter Start Enable */
#define GPT320_GTPSR_OFFSET               0x0014
#define GPT320_GTPSR                      (GPT320_BASE + GPT320_GTPSR_OFFSET)
#define GPT320_GTPSR_CSTOP                (1 << 31) /* 80000000: Software Source Counter Stop Enable */
#define GPT320_GTPSR_PSELCH               (1 << 23) /* 800000: ELCH Event Source Counter Stop Enable */
#define GPT320_GTPSR_PSELCG               (1 << 22) /* 400000: ELC_GPTG Event Source Counter Stop Enable */
#define GPT320_GTPSR_PSELCF               (1 << 21) /* 200000: ELC_GPTF Event Source Counter Stop Enable */
#define GPT320_GTPSR_PSELCE               (1 << 20) /* 100000: ELC_GPTE Event Source Counter Stop Enable */
#define GPT320_GTPSR_PSELCD               (1 << 19) /* 80000: ELC_GPTD Event Source Counter Stop Enable */
#define GPT320_GTPSR_PSELCC               (1 << 18) /* 40000: ELC_GPTC Event Source Counter Stop Enable */
#define GPT320_GTPSR_PSELCB               (1 << 17) /* 20000: ELC_GPTB Event Source Counter Stop Enable */
#define GPT320_GTPSR_PSELCA               (1 << 16) /* 10000: ELC_GPTA Event Source Counter Stop Enable */
#define GPT320_GTPSR_PSCBFAH              (1 << 15) /* 8000: GTIOCB Pin Falling Input during GTIOCA Value High Source Counter Stop Enable */
#define GPT320_GTPSR_PSCBFAL              (1 << 14) /* 4000: GTIOCB Pin Falling Input during GTIOCA Value Low Source Counter Stop Enable */
#define GPT320_GTPSR_PSCBRAH              (1 << 13) /* 2000: GTIOCB Pin Rising Input during GTIOCA Value High Source Counter Stop Enable */
#define GPT320_GTPSR_PSCBRAL              (1 << 12) /* 1000: GTIOCB Pin Rising Input during GTIOCA Value Low Source Counter Stop Enable */
#define GPT320_GTPSR_PSCAFBH              (1 << 11) /* 800: GTIOCA Pin Falling Input during GTIOCB Value High Source Counter Stop Enable */
#define GPT320_GTPSR_PSCAFBL              (1 << 10) /* 400: GTIOCA Pin Falling Input during GTIOCB Value Low Source Counter Stop Enable */
#define GPT320_GTPSR_PSCARBH              (1 <<  9) /* 200: GTIOCA Pin Rising Input during GTIOCB Value High Source Counter Stop Enable */
#define GPT320_GTPSR_PSCARBL              (1 <<  8) /* 100: GTIOCA Pin Rising Input during GTIOCB Value Low Source Counter Stop Enable */
#define GPT320_GTPSR_PSGTRGBF             (1 <<  3) /* 08: GTETRGB Pin Falling Input Source Counter Stop Enable */
#define GPT320_GTPSR_PSGTRGBR             (1 <<  2) /* 04: GTETRGB Pin Rising Input Source Counter Stop Enable */
#define GPT320_GTPSR_PSGTRGAF             (1 <<  1) /* 02: GTETRGA Pin Falling Input Source Counter Stop Enable */
#define GPT320_GTPSR_PSGTRGAR             (1 <<  0) /* 01: GTETRGA Pin Rising Input Source Counter Stop Enable */
#define GPT320_GTCSR_OFFSET               0x0018
#define GPT320_GTCSR                      (GPT320_BASE + GPT320_GTCSR_OFFSET)
#define GPT320_GTCSR_CCLR                 (1 << 31) /* 80000000: Software Source Counter Clear Enable */
#define GPT320_GTCSR_CSELCH               (1 << 23) /* 800000: ELCH Event Source Counter Clear Enable */
#define GPT320_GTCSR_CSELCG               (1 << 22) /* 400000: ELC_GPTG Event Source Counter Clear Enable */
#define GPT320_GTCSR_CSELCF               (1 << 21) /* 200000: ELC_GPTF Event Source Counter Clear Enable */
#define GPT320_GTCSR_CSELCE               (1 << 20) /* 100000: ELC_GPTE Event Source Counter Clear Enable */
#define GPT320_GTCSR_CSELCD               (1 << 19) /* 80000: ELC_GPTD Event Source Counter Clear Enable */
#define GPT320_GTCSR_CSELCC               (1 << 18) /* 40000: ELC_GPTC Event Source Counter Clear Enable */
#define GPT320_GTCSR_CSELCB               (1 << 17) /* 20000: ELC_GPTB Event Source Counter Clear Enable */
#define GPT320_GTCSR_CSELCA               (1 << 16) /* 10000: ELC_GPTA Event Source Counter Clear Enable */
#define GPT320_GTCSR_CSCBFAH              (1 << 15) /* 8000: GTIOCB Pin Falling Input during GTIOCA Value High Source Counter Clear Enable */
#define GPT320_GTCSR_CSCBFAL              (1 << 14) /* 4000: GTIOCB Pin Falling Input during GTIOCA Value Low Source Counter Clear Enable */
#define GPT320_GTCSR_CSCBRAH              (1 << 13) /* 2000: GTIOCB Pin Rising Input during GTIOCA Value High Source Counter Clear Enable */
#define GPT320_GTCSR_CSCBRAL              (1 << 12) /* 1000: GTIOCB Pin Rising Input during GTIOCA Value Low Source Counter Clear Enable */
#define GPT320_GTCSR_CSCAFBH              (1 << 11) /* 800: GTIOCA Pin Falling Input during GTIOCB Value High Source Counter Clear Enable */
#define GPT320_GTCSR_CSCAFBL              (1 << 10) /* 400: GTIOCA Pin Falling Input during GTIOCB Value Low Source Counter Clear Enable */
#define GPT320_GTCSR_CSCARBH              (1 <<  9) /* 200: GTIOCA Pin Rising Input during GTIOCB Value High Source Counter Clear Enable */
#define GPT320_GTCSR_CSCARBL              (1 <<  8) /* 100: GTIOCA Pin Rising Input during GTIOCB Value Low Source Counter Clear Enable */
#define GPT320_GTCSR_CSGTRGBF             (1 <<  3) /* 08: GTETRGB Pin Falling Input Source Counter Clear Enable */
#define GPT320_GTCSR_CSGTRGBR             (1 <<  2) /* 04: GTETRGB Pin Rising Input Source Counter Clear Enable */
#define GPT320_GTCSR_CSGTRGAF             (1 <<  1) /* 02: GTETRGA Pin Falling Input Source Counter Clear Enable */
#define GPT320_GTCSR_CSGTRGAR             (1 <<  0) /* 01: GTETRGA Pin Rising Input Source Counter Clear Enable */
#define GPT320_GTUPSR_OFFSET              0x001c
#define GPT320_GTUPSR                     (GPT320_BASE + GPT320_GTUPSR_OFFSET)
#define GPT320_GTUPSR_USELCH              (1 << 23) /* 800000: ELCH Event Source Counter Count Up Enable */
#define GPT320_GTUPSR_USELCG              (1 << 22) /* 400000: ELC_GPTG Event Source Counter Count Up Enable */
#define GPT320_GTUPSR_USELCF              (1 << 21) /* 200000: ELC_GPTF Event Source Counter Count Up Enable */
#define GPT320_GTUPSR_USELCE              (1 << 20) /* 100000: ELC_GPTE Event Source Counter Count Up Enable */
#define GPT320_GTUPSR_USELCD              (1 << 19) /* 80000: ELC_GPTD Event Source Counter Count Up Enable */
#define GPT320_GTUPSR_USELCC              (1 << 18) /* 40000: ELC_GPTC Event Source Counter Count Up Enable */
#define GPT320_GTUPSR_USELCB              (1 << 17) /* 20000: ELC_GPTB Event Source Counter Count Up Enable */
#define GPT320_GTUPSR_USELCA              (1 << 16) /* 10000: ELC_GPTA Event Source Counter Count Up Enable */
#define GPT320_GTUPSR_USCBFAH             (1 << 15) /* 8000: GTIOCB Pin Falling Input during GTIOCA Value High Source Counter Count Up Enable */
#define GPT320_GTUPSR_USCBFAL             (1 << 14) /* 4000: GTIOCB Pin Falling Input during GTIOCA Value Low Source Counter Count Up Enable */
#define GPT320_GTUPSR_USCBRAH             (1 << 13) /* 2000: GTIOCB Pin Rising Input during GTIOCA Value High Source Counter Count Up Enable */
#define GPT320_GTUPSR_USCBRAL             (1 << 12) /* 1000: GTIOCB Pin Rising Input during GTIOCA Value Low Source Counter Count Up Enable */
#define GPT320_GTUPSR_USCAFBH             (1 << 11) /* 800: GTIOCA Pin Falling Input during GTIOCB Value High Source Counter Count Up Enable */
#define GPT320_GTUPSR_USCAFBL             (1 << 10) /* 400: GTIOCA Pin Falling Input during GTIOCB Value Low Source Counter Count Up Enable */
#define GPT320_GTUPSR_USCARBH             (1 <<  9) /* 200: GTIOCA Pin Rising Input during GTIOCB Value High Source Counter Count Up Enable */
#define GPT320_GTUPSR_USCARBL             (1 <<  8) /* 100: GTIOCA Pin Rising Input during GTIOCB Value Low Source Counter Count Up Enable */
#define GPT320_GTUPSR_USGTRGBF            (1 <<  3) /* 08: GTETRGB Pin Falling Input Source Counter Count Up Enable */
#define GPT320_GTUPSR_USGTRGBR            (1 <<  2) /* 04: GTETRGB Pin Rising Input Source Counter Count Up Enable */
#define GPT320_GTUPSR_USGTRGAF            (1 <<  1) /* 02: GTETRGA Pin Falling Input Source Counter Count Up Enable */
#define GPT320_GTUPSR_USGTRGAR            (1 <<  0) /* 01: GTETRGA Pin Rising Input Source Counter Count Up Enable */
#define GPT320_GTDNSR_OFFSET              0x0020
#define GPT320_GTDNSR                     (GPT320_BASE + GPT320_GTDNSR_OFFSET)
#define GPT320_GTDNSR_DSELCH              (1 << 23) /* 800000: ELCH Event Source Counter Count Down Enable */
#define GPT320_GTDNSR_DSELCG              (1 << 22) /* 400000: ELC_GPTG Event Source Counter Count Down Enable */
#define GPT320_GTDNSR_DSELCF              (1 << 21) /* 200000: ELC_GPTF Event Source Counter Count Down Enable */
#define GPT320_GTDNSR_DSELCE              (1 << 20) /* 100000: ELC_GPTE Event Source Counter Count Down Enable */
#define GPT320_GTDNSR_DSELCD              (1 << 19) /* 80000: ELC_GPTD Event Source Counter Count Down Enable */
#define GPT320_GTDNSR_DSELCC              (1 << 18) /* 40000: ELC_GPTC Event Source Counter Count Down Enable */
#define GPT320_GTDNSR_DSELCB              (1 << 17) /* 20000: ELC_GPTB Event Source Counter Count Down Enable */
#define GPT320_GTDNSR_DSELCA              (1 << 16) /* 10000: ELC_GPTA Event Source Counter Count Down Enable */
#define GPT320_GTDNSR_DSCBFAH             (1 << 15) /* 8000: GTIOCB Pin Falling Input during GTIOCA Value High Source Counter Count Down Enable */
#define GPT320_GTDNSR_DSCBFAL             (1 << 14) /* 4000: GTIOCB Pin Falling Input during GTIOCA Value Low Source Counter Count Down Enable */
#define GPT320_GTDNSR_DSCBRAH             (1 << 13) /* 2000: GTIOCB Pin Rising Input during GTIOCA Value High Source Counter Count Down Enable */
#define GPT320_GTDNSR_DSCBRAL             (1 << 12) /* 1000: GTIOCB Pin Rising Input during GTIOCA Value Low Source Counter Count Down Enable */
#define GPT320_GTDNSR_DSCAFBH             (1 << 11) /* 800: GTIOCA Pin Falling Input during GTIOCB Value High Source Counter Count Down Enable */
#define GPT320_GTDNSR_DSCAFBL             (1 << 10) /* 400: GTIOCA Pin Falling Input during GTIOCB Value Low Source Counter Count Down Enable */
#define GPT320_GTDNSR_DSCARBH             (1 <<  9) /* 200: GTIOCA Pin Rising Input during GTIOCB Value High Source Counter Count Down Enable */
#define GPT320_GTDNSR_DSCARBL             (1 <<  8) /* 100: GTIOCA Pin Rising Input during GTIOCB Value Low Source Counter Count Down Enable */
#define GPT320_GTDNSR_DSGTRGBF            (1 <<  3) /* 08: GTETRGB Pin Falling Input Source Counter Count Down Enable */
#define GPT320_GTDNSR_DSGTRGBR            (1 <<  2) /* 04: GTETRGB Pin Rising Input Source Counter Count Down Enable */
#define GPT320_GTDNSR_DSGTRGAF            (1 <<  1) /* 02: GTETRGA Pin Falling Input Source Counter Count Down Enable */
#define GPT320_GTDNSR_DSGTRGAR            (1 <<  0) /* 01: GTETRGA Pin Rising Input Source Counter Count Down Enable */
#define GPT320_GTICASR_OFFSET             0x0024
#define GPT320_GTICASR                    (GPT320_BASE + GPT320_GTICASR_OFFSET)
#define GPT320_GTICASR_ASELCH             (1 << 23) /* 800000: ELCH Event Source GTCCRA Input Capture Enable */
#define GPT320_GTICASR_ASELCG             (1 << 22) /* 400000: ELC_GPTG Event Source GTCCRA Input Capture Enable */
#define GPT320_GTICASR_ASELCF             (1 << 21) /* 200000: ELC_GPTF Event Source GTCCRA Input Capture Enable */
#define GPT320_GTICASR_ASELCE             (1 << 20) /* 100000: ELC_GPTE Event Source GTCCRA Input Capture Enable */
#define GPT320_GTICASR_ASELCD             (1 << 19) /* 80000: ELC_GPTD Event Source GTCCRA Input Capture Enable */
#define GPT320_GTICASR_ASELCC             (1 << 18) /* 40000: ELC_GPTC Event Source GTCCRA Input Capture Enable */
#define GPT320_GTICASR_ASELCB             (1 << 17) /* 20000: ELC_GPTB Event Source GTCCRA Input Capture Enable */
#define GPT320_GTICASR_ASELCA             (1 << 16) /* 10000: ELC_GPTA Event Source GTCCRA Input Capture Enable */
#define GPT320_GTICASR_ASCBFAH            (1 << 15) /* 8000: GTIOCB Pin Falling Input during GTIOCA Value High Source GTCCRA Input Capture Enable */
#define GPT320_GTICASR_ASCBFAL            (1 << 14) /* 4000: GTIOCB Pin Falling Input during GTIOCA Value Low Source GTCCRA Input Capture Enable */
#define GPT320_GTICASR_ASCBRAH            (1 << 13) /* 2000: GTIOCB Pin Rising Input during GTIOCA Value High Source GTCCRA Input Capture Enable */
#define GPT320_GTICASR_ASCBRAL            (1 << 12) /* 1000: GTIOCB Pin Rising Input during GTIOCA Value Low Source GTCCRA Input Capture Enable */
#define GPT320_GTICASR_ASCAFBH            (1 << 11) /* 800: GTIOCA Pin Falling Input during GTIOCB Value High Source GTCCRA Input Capture Enable */
#define GPT320_GTICASR_ASCAFBL            (1 << 10) /* 400: GTIOCA Pin Falling Input during GTIOCB Value Low Source GTCCRA Input Capture Enable */
#define GPT320_GTICASR_ASCARBH            (1 <<  9) /* 200: GTIOCA Pin Rising Input during GTIOCB Value High Source GTCCRA Input Capture Enable */
#define GPT320_GTICASR_ASCARBL            (1 <<  8) /* 100: GTIOCA Pin Rising Input during GTIOCB Value Low Source GTCCRA Input Capture Enable */
#define GPT320_GTICASR_ASGTRGBF           (1 <<  3) /* 08: GTETRGB Pin Falling Input Source GTCCRA Input Capture Enable */
#define GPT320_GTICASR_ASGTRGBR           (1 <<  2) /* 04: GTETRGB Pin Rising Input Source GTCCRA Input Capture Enable */
#define GPT320_GTICASR_ASGTRGAF           (1 <<  1) /* 02: GTETRGA Pin Falling Input Source GTCCRA Input Capture Enable */
#define GPT320_GTICASR_ASGTRGAR           (1 <<  0) /* 01: GTETRGA Pin Rising Input Source GTCCRA Input Capture Enable */
#define GPT320_GTICBSR_OFFSET             0x0028
#define GPT320_GTICBSR                    (GPT320_BASE + GPT320_GTICBSR_OFFSET)
#define GPT320_GTICBSR_BSELCH             (1 << 23) /* 800000: ELCH Event Source GTCCRB Input Capture Enable */
#define GPT320_GTICBSR_BSELCG             (1 << 22) /* 400000: ELC_GPTG Event Source GTCCRB Input Capture Enable */
#define GPT320_GTICBSR_BSELCF             (1 << 21) /* 200000: ELC_GPTF Event Source GTCCRB Input Capture Enable */
#define GPT320_GTICBSR_BSELCE             (1 << 20) /* 100000: ELC_GPTE Event Source GTCCRB Input Capture Enable */
#define GPT320_GTICBSR_BSELCD             (1 << 19) /* 80000: ELC_GPTD Event Source GTCCRB Input Capture Enable */
#define GPT320_GTICBSR_BSELCC             (1 << 18) /* 40000: ELC_GPTC Event Source GTCCRB Input Capture Enable */
#define GPT320_GTICBSR_BSELCB             (1 << 17) /* 20000: ELC_GPTB Event Source GTCCRB Input Capture Enable */
#define GPT320_GTICBSR_BSELCA             (1 << 16) /* 10000: ELC_GPTA Event Source GTCCRB Input Capture Enable */
#define GPT320_GTICBSR_BSCBFAH            (1 << 15) /* 8000: GTIOCB Pin Falling Input during GTIOCA Value High Source GTCCRB Input Capture Enable */
#define GPT320_GTICBSR_BSCBFAL            (1 << 14) /* 4000: GTIOCB Pin Falling Input during GTIOCA Value Low Source GTCCRB Input Capture Enable */
#define GPT320_GTICBSR_BSCBRAH            (1 << 13) /* 2000: GTIOCB Pin Rising Input during GTIOCA Value High Source GTCCRB Input Capture Enable */
#define GPT320_GTICBSR_BSCBRAL            (1 << 12) /* 1000: GTIOCB Pin Rising Input during GTIOCA Value Low Source GTCCRB Input Capture Enable */
#define GPT320_GTICBSR_BSCAFBH            (1 << 11) /* 800: GTIOCA Pin Falling Input during GTIOCB Value High Source GTCCRB Input Capture Enable */
#define GPT320_GTICBSR_BSCAFBL            (1 << 10) /* 400: GTIOCA Pin Falling Input during GTIOCB Value Low Source GTCCRB Input Capture Enable */
#define GPT320_GTICBSR_BSCARBH            (1 <<  9) /* 200: GTIOCA Pin Rising Input during GTIOCB Value High Source GTCCRB Input Capture Enable */
#define GPT320_GTICBSR_BSCARBL            (1 <<  8) /* 100: GTIOCA Pin Rising Input during GTIOCB Value Low Source GTCCRB Input Capture Enable */
#define GPT320_GTICBSR_BSGTRGBF           (1 <<  3) /* 08: GTETRGB Pin Falling Input Source GTCCRB Input Capture Enable */
#define GPT320_GTICBSR_BSGTRGBR           (1 <<  2) /* 04: GTETRGB Pin Rising Input Source GTCCRB Input Capture Enable */
#define GPT320_GTICBSR_BSGTRGAF           (1 <<  1) /* 02: GTETRGA Pin Falling Input Source GTCCRB Input Capture Enable */
#define GPT320_GTICBSR_BSGTRGAR           (1 <<  0) /* 01: GTETRGA Pin Rising Input Source GTCCRB Input Capture Enable */
#define GPT320_GTCR_OFFSET                0x002c
#define GPT320_GTCR                       (GPT320_BASE + GPT320_GTCR_OFFSET)
#define GPT320_GTCR_TPCS                  (3 << 24) /* 1000000: Timer Prescaler Select */
#define GPT320_GTCR_TPCS_MASK                  (0x07)
#define GPT320_GTCR_MD                    (3 << 16) /* 10000: Mode Select */
#define GPT320_GTCR_MD_MASK                    (0x07)
#define GPT320_GTCR_CST                   (1 <<  0) /* 01: Count Start */
#define GPT320_GTUDDTYC_OFFSET            0x0030
#define GPT320_GTUDDTYC                   (GPT320_BASE + GPT320_GTUDDTYC_OFFSET)
#define GPT320_GTUDDTYC_OBDTYR            (1 << 27) /* 8000000: GTIOCB Output Value Selecting after Releasing 0 percent/100 percent Duty Setting */
#define GPT320_GTUDDTYC_OBDTYF            (1 << 26) /* 4000000: Forcible GTIOCB Output Duty Setting */
#define GPT320_GTUDDTYC_OBDTY             (2 << 24) /* 1000000: GTIOCB Output Duty Setting */
#define GPT320_GTUDDTYC_OBDTY_MASK             (0x03)
#define GPT320_GTUDDTYC_OADTYR            (1 << 19) /* 80000: GTIOCA Output Value Selecting after Releasing 0 percent/100 percent Duty Setting */
#define GPT320_GTUDDTYC_OADTYF            (1 << 18) /* 40000: Forcible GTIOCA Output Duty Setting */
#define GPT320_GTUDDTYC_OADTY             (2 << 16) /* 10000: GTIOCA Output Duty Setting */
#define GPT320_GTUDDTYC_OADTY_MASK             (0x03)
#define GPT320_GTUDDTYC_UDF               (1 <<  1) /* 02: Forcible Count Direction Setting */
#define GPT320_GTUDDTYC_UD                (1 <<  0) /* 01: Count Direction Setting */
#define GPT320_GTIOR_OFFSET               0x0034
#define GPT320_GTIOR                      (GPT320_BASE + GPT320_GTIOR_OFFSET)
#define GPT320_GTIOR_NFCSB                (2 << 30) /* 40000000: Noise Filter B Sampling Clock Select */
#define GPT320_GTIOR_NFCSB_MASK                (0x03)
#define GPT320_GTIOR_NFBEN                (1 << 29) /* 20000000: Noise Filter B Enable */
#define GPT320_GTIOR_OBDF                 (2 << 25) /* 2000000: GTIOCB Pin Disable Value Setting */
#define GPT320_GTIOR_OBDF_MASK                 (0x03)
#define GPT320_GTIOR_OBE                  (1 << 24) /* 1000000: GTIOCB Pin Output Enable */
#define GPT320_GTIOR_OBHLD                (1 << 23) /* 800000: GTIOCB Pin Output Setting at the Start/Stop Count */
#define GPT320_GTIOR_OBDFLT               (1 << 22) /* 400000: GTIOCB Pin Output Value Setting at the Count Stop */
#define GPT320_GTIOR_GTIOB                (5 << 16) /* 10000: GTIOCB Pin Function Select */
#define GPT320_GTIOR_GTIOB_MASK                (0x1f)
#define GPT320_GTIOR_NFCSA                (2 << 14) /* 4000: Noise Filter A Sampling Clock Select */
#define GPT320_GTIOR_NFCSA_MASK                (0x03)
#define GPT320_GTIOR_NFAEN                (1 << 13) /* 2000: Noise Filter A Enable */
#define GPT320_GTIOR_OADF                 (2 <<  9) /* 200: GTIOCA Pin Disable Value Setting */
#define GPT320_GTIOR_OADF_MASK                 (0x03)
#define GPT320_GTIOR_OAE                  (1 <<  8) /* 100: GTIOCA Pin Output Enable */
#define GPT320_GTIOR_OAHLD                (1 <<  7) /* 80: GTIOCA Pin Output Setting at the Start/Stop Count */
#define GPT320_GTIOR_OADFLT               (1 <<  6) /* 40: GTIOCA Pin Output Value Setting at the Count Stop */
#define GPT320_GTIOR_GTIOA                (5 <<  0) /* 01: GTIOCA Pin Function Select */
#define GPT320_GTIOR_GTIOA_MASK                (0x1f)
#define GPT320_GTINTAD_OFFSET             0x0038
#define GPT320_GTINTAD                    (GPT320_BASE + GPT320_GTINTAD_OFFSET)
#define GPT320_GTINTAD_GRPABL             (1 << 30) /* 40000000: Same Time Output Level Low Disable Request Enable */
#define GPT320_GTINTAD_GRPABH             (1 << 29) /* 20000000: Same Time Output Level High Disable Request Enable */
#define GPT320_GTINTAD_GRP                (2 << 24) /* 1000000: Output Disable Source Select */
#define GPT320_GTINTAD_GRP_MASK                (0x03)
#define GPT320_GTST_OFFSET                0x003c
#define GPT320_GTST                       (GPT320_BASE + GPT320_GTST_OFFSET)
#define GPT320_GTST_OABLF                 (1 << 30) /* 40000000: Same Time Output Level Low Disable Request Enable */
#define GPT320_GTST_OABHF                 (1 << 29) /* 20000000: Same Time Output Level High Disable Request Enable */
#define GPT320_GTST_ODF                   (1 << 24) /* 1000000: Output Disable Flag */
#define GPT320_GTST_TUCF                  (1 << 15) /* 8000: Count Direction Flag */
#define GPT320_GTST_TCFPU                 (1 <<  7) /* 80: Underflow Flag */
#define GPT320_GTST_TCFPO                 (1 <<  6) /* 40: Overflow Flag */
#define GPT320_GTST_TCFF                  (1 <<  5) /* 20: Input Compare Match Flag F */
#define GPT320_GTST_TCFE                  (1 <<  4) /* 10: Input Compare Match Flag E */
#define GPT320_GTST_TCFD                  (1 <<  3) /* 08: Input Compare Match Flag D */
#define GPT320_GTST_TCFC                  (1 <<  2) /* 04: Input Compare Match Flag C */
#define GPT320_GTST_TCFB                  (1 <<  1) /* 02: Input Capture/Compare Match Flag B */
#define GPT320_GTST_TCFA                  (1 <<  0) /* 01: Input Capture/Compare Match Flag A */
#define GPT320_GTBER_OFFSET               0x0040
#define GPT320_GTBER                      (GPT320_BASE + GPT320_GTBER_OFFSET)
#define GPT320_GTBER_CCRSWT               (1 << 22) /* 400000: GTCCRA and GTCCRB Forcible Buffer Operation This bit is read as 0. */
#define GPT320_GTBER_PR                   (2 << 20) /* 100000: GTPR Buffer Operation */
#define GPT320_GTBER_PR_MASK                   (0x03)
#define GPT320_GTBER_CCRB                 (2 << 18) /* 40000: GTCCRB Buffer Operation */
#define GPT320_GTBER_CCRB_MASK                 (0x03)
#define GPT320_GTBER_CCRA                 (2 << 16) /* 10000: GTCCRA Buffer Operation */
#define GPT320_GTBER_CCRA_MASK                 (0x03)
#define GPT320_GTBER_BD                   (2 <<  0) /* 01: BD[1]: GTPR Buffer Operation Disable BD[0]: GTCCR Buffer Operation Disable */
#define GPT320_GTBER_BD_MASK                   (0x03)
#define GPT320_GTCNT_OFFSET               0x0048
#define GPT320_GTCNT                      (GPT320_BASE + GPT320_GTCNT_OFFSET)
#define GPT320_GTCNT_GTCNT                (32 <<  0) /* 01: Counter */
#define GPT320_GTCNT_GTCNT_MASK                (0xffffffff)
#define GPT320_GTCCRA_OFFSET              0x004c
#define GPT320_GTCCRA                     (GPT320_BASE + GPT320_GTCCRA_OFFSET)
#define GPT320_GTCCRA_GTCCRA              (32 <<  0) /* 01: Compare Capture Register A */
#define GPT320_GTCCRA_GTCCRA_MASK              (0xffffffff)
#define GPT320_GTCCRB_OFFSET              0x0050
#define GPT320_GTCCRB                     (GPT320_BASE + GPT320_GTCCRB_OFFSET)
#define GPT320_GTCCRB_GTCCRB              (32 <<  0) /* 01: Compare Capture Register B */
#define GPT320_GTCCRB_GTCCRB_MASK              (0xffffffff)
#define GPT320_GTCCRC_OFFSET              0x0054
#define GPT320_GTCCRC                     (GPT320_BASE + GPT320_GTCCRC_OFFSET)
#define GPT320_GTCCRC_GTCCRC              (32 <<  0) /* 01: Compare Capture Register C */
#define GPT320_GTCCRC_GTCCRC_MASK              (0xffffffff)
#define GPT320_GTCCRE_OFFSET              0x0058
#define GPT320_GTCCRE                     (GPT320_BASE + GPT320_GTCCRE_OFFSET)
#define GPT320_GTCCRE_GTCCRE              (32 <<  0) /* 01: Compare Capture Register E */
#define GPT320_GTCCRE_GTCCRE_MASK              (0xffffffff)
#define GPT320_GTCCRD_OFFSET              0x005c
#define GPT320_GTCCRD                     (GPT320_BASE + GPT320_GTCCRD_OFFSET)
#define GPT320_GTCCRD_GTCCRD              (32 <<  0) /* 01: Compare Capture Register D */
#define GPT320_GTCCRD_GTCCRD_MASK              (0xffffffff)
#define GPT320_GTCCRF_OFFSET              0x0060
#define GPT320_GTCCRF                     (GPT320_BASE + GPT320_GTCCRF_OFFSET)
#define GPT320_GTCCRF_GTCCRF              (32 <<  0) /* 01: Compare Capture Register F */
#define GPT320_GTCCRF_GTCCRF_MASK              (0xffffffff)
#define GPT320_GTPR_OFFSET                0x0064
#define GPT320_GTPR                       (GPT320_BASE + GPT320_GTPR_OFFSET)
#define GPT320_GTPR_GTPR                  (32 <<  0) /* 01: Cycle Setting Register */
#define GPT320_GTPR_GTPR_MASK                  (0xffffffff)
#define GPT320_GTPBR_OFFSET               0x0068
#define GPT320_GTPBR                      (GPT320_BASE + GPT320_GTPBR_OFFSET)
#define GPT320_GTPBR_GTPBR                (32 <<  0) /* 01: Cycle Setting Buffer Register */
#define GPT320_GTPBR_GTPBR_MASK                (0xffffffff)
#define GPT320_GTDTCR_OFFSET              0x0088
#define GPT320_GTDTCR                     (GPT320_BASE + GPT320_GTDTCR_OFFSET)
#define GPT320_GTDTCR_TDE                 (1 <<  0) /* 01: Negative-Phase Waveform Setting */
#define GPT320_GTDVU_OFFSET               0x008c
#define GPT320_GTDVU                      (GPT320_BASE + GPT320_GTDVU_OFFSET)
#define GPT320_GTDVU_GTDVU                (32 <<  0) /* 01: Dead Time Value Register U */
#define GPT320_GTDVU_GTDVU_MASK                (0xffffffff)

/* No registers defined for peripheral GPT321. Using those of GPT320. */
#define GPT321_BASE                       0x40078100
#define GPT321_GTWP_OFFSET                GPT320_GTWP_OFFSET
#define GPT321_GTWP                       GPT320_GTWP
#define GPT321_GTWP_PRKEY                 GPT320_GTWP_PRKEY
#define GPT321_GTWP_PRKEY_MASK            GPT320_GTWP_PRKEY_MASK
#define GPT321_GTWP_WP                    GPT320_GTWP_WP
#define GPT321_GTSTR_OFFSET               GPT320_GTSTR_OFFSET
#define GPT321_GTSTR                      GPT320_GTSTR
#define GPT321_GTSTR_CSTRT7               GPT320_GTSTR_CSTRT7
#define GPT321_GTSTR_CSTRT6               GPT320_GTSTR_CSTRT6
#define GPT321_GTSTR_CSTRT5               GPT320_GTSTR_CSTRT5
#define GPT321_GTSTR_CSTRT4               GPT320_GTSTR_CSTRT4
#define GPT321_GTSTR_CSTRT3               GPT320_GTSTR_CSTRT3
#define GPT321_GTSTR_CSTRT2               GPT320_GTSTR_CSTRT2
#define GPT321_GTSTR_CSTRT1               GPT320_GTSTR_CSTRT1
#define GPT321_GTSTR_CSTRT0               GPT320_GTSTR_CSTRT0
#define GPT321_GTSTP_OFFSET               GPT320_GTSTP_OFFSET
#define GPT321_GTSTP                      GPT320_GTSTP
#define GPT321_GTSTP_CSTOP7               GPT320_GTSTP_CSTOP7
#define GPT321_GTSTP_CSTOP6               GPT320_GTSTP_CSTOP6
#define GPT321_GTSTP_CSTOP5               GPT320_GTSTP_CSTOP5
#define GPT321_GTSTP_CSTOP4               GPT320_GTSTP_CSTOP4
#define GPT321_GTSTP_CSTOP3               GPT320_GTSTP_CSTOP3
#define GPT321_GTSTP_CSTOP2               GPT320_GTSTP_CSTOP2
#define GPT321_GTSTP_CSTOP1               GPT320_GTSTP_CSTOP1
#define GPT321_GTSTP_CSTOP0               GPT320_GTSTP_CSTOP0
#define GPT321_GTCLR_OFFSET               GPT320_GTCLR_OFFSET
#define GPT321_GTCLR                      GPT320_GTCLR
#define GPT321_GTCLR_CCLR7                GPT320_GTCLR_CCLR7
#define GPT321_GTCLR_CCLR6                GPT320_GTCLR_CCLR6
#define GPT321_GTCLR_CCLR5                GPT320_GTCLR_CCLR5
#define GPT321_GTCLR_CCLR4                GPT320_GTCLR_CCLR4
#define GPT321_GTCLR_CCLR3                GPT320_GTCLR_CCLR3
#define GPT321_GTCLR_CCLR2                GPT320_GTCLR_CCLR2
#define GPT321_GTCLR_CCLR1                GPT320_GTCLR_CCLR1
#define GPT321_GTCLR_CCLR0                GPT320_GTCLR_CCLR0
#define GPT321_GTSSR_OFFSET               GPT320_GTSSR_OFFSET
#define GPT321_GTSSR                      GPT320_GTSSR
#define GPT321_GTSSR_CSTRT                GPT320_GTSSR_CSTRT
#define GPT321_GTSSR_SSELCH               GPT320_GTSSR_SSELCH
#define GPT321_GTSSR_SSELCG               GPT320_GTSSR_SSELCG
#define GPT321_GTSSR_SSELCF               GPT320_GTSSR_SSELCF
#define GPT321_GTSSR_SSELCE               GPT320_GTSSR_SSELCE
#define GPT321_GTSSR_SSELCD               GPT320_GTSSR_SSELCD
#define GPT321_GTSSR_SSELCC               GPT320_GTSSR_SSELCC
#define GPT321_GTSSR_SSELCB               GPT320_GTSSR_SSELCB
#define GPT321_GTSSR_SSELCA               GPT320_GTSSR_SSELCA
#define GPT321_GTSSR_SSCBFAH              GPT320_GTSSR_SSCBFAH
#define GPT321_GTSSR_SSCBFAL              GPT320_GTSSR_SSCBFAL
#define GPT321_GTSSR_SSCBRAH              GPT320_GTSSR_SSCBRAH
#define GPT321_GTSSR_SSCBRAL              GPT320_GTSSR_SSCBRAL
#define GPT321_GTSSR_SSCAFBH              GPT320_GTSSR_SSCAFBH
#define GPT321_GTSSR_SSCAFBL              GPT320_GTSSR_SSCAFBL
#define GPT321_GTSSR_SSCARBH              GPT320_GTSSR_SSCARBH
#define GPT321_GTSSR_SSCARBL              GPT320_GTSSR_SSCARBL
#define GPT321_GTSSR_SSGTRGBF             GPT320_GTSSR_SSGTRGBF
#define GPT321_GTSSR_SSGTRGBR             GPT320_GTSSR_SSGTRGBR
#define GPT321_GTSSR_SSGTRGAF             GPT320_GTSSR_SSGTRGAF
#define GPT321_GTSSR_SSGTRGAR             GPT320_GTSSR_SSGTRGAR
#define GPT321_GTPSR_OFFSET               GPT320_GTPSR_OFFSET
#define GPT321_GTPSR                      GPT320_GTPSR
#define GPT321_GTPSR_CSTOP                GPT320_GTPSR_CSTOP
#define GPT321_GTPSR_PSELCH               GPT320_GTPSR_PSELCH
#define GPT321_GTPSR_PSELCG               GPT320_GTPSR_PSELCG
#define GPT321_GTPSR_PSELCF               GPT320_GTPSR_PSELCF
#define GPT321_GTPSR_PSELCE               GPT320_GTPSR_PSELCE
#define GPT321_GTPSR_PSELCD               GPT320_GTPSR_PSELCD
#define GPT321_GTPSR_PSELCC               GPT320_GTPSR_PSELCC
#define GPT321_GTPSR_PSELCB               GPT320_GTPSR_PSELCB
#define GPT321_GTPSR_PSELCA               GPT320_GTPSR_PSELCA
#define GPT321_GTPSR_PSCBFAH              GPT320_GTPSR_PSCBFAH
#define GPT321_GTPSR_PSCBFAL              GPT320_GTPSR_PSCBFAL
#define GPT321_GTPSR_PSCBRAH              GPT320_GTPSR_PSCBRAH
#define GPT321_GTPSR_PSCBRAL              GPT320_GTPSR_PSCBRAL
#define GPT321_GTPSR_PSCAFBH              GPT320_GTPSR_PSCAFBH
#define GPT321_GTPSR_PSCAFBL              GPT320_GTPSR_PSCAFBL
#define GPT321_GTPSR_PSCARBH              GPT320_GTPSR_PSCARBH
#define GPT321_GTPSR_PSCARBL              GPT320_GTPSR_PSCARBL
#define GPT321_GTPSR_PSGTRGBF             GPT320_GTPSR_PSGTRGBF
#define GPT321_GTPSR_PSGTRGBR             GPT320_GTPSR_PSGTRGBR
#define GPT321_GTPSR_PSGTRGAF             GPT320_GTPSR_PSGTRGAF
#define GPT321_GTPSR_PSGTRGAR             GPT320_GTPSR_PSGTRGAR
#define GPT321_GTCSR_OFFSET               GPT320_GTCSR_OFFSET
#define GPT321_GTCSR                      GPT320_GTCSR
#define GPT321_GTCSR_CCLR                 GPT320_GTCSR_CCLR
#define GPT321_GTCSR_CSELCH               GPT320_GTCSR_CSELCH
#define GPT321_GTCSR_CSELCG               GPT320_GTCSR_CSELCG
#define GPT321_GTCSR_CSELCF               GPT320_GTCSR_CSELCF
#define GPT321_GTCSR_CSELCE               GPT320_GTCSR_CSELCE
#define GPT321_GTCSR_CSELCD               GPT320_GTCSR_CSELCD
#define GPT321_GTCSR_CSELCC               GPT320_GTCSR_CSELCC
#define GPT321_GTCSR_CSELCB               GPT320_GTCSR_CSELCB
#define GPT321_GTCSR_CSELCA               GPT320_GTCSR_CSELCA
#define GPT321_GTCSR_CSCBFAH              GPT320_GTCSR_CSCBFAH
#define GPT321_GTCSR_CSCBFAL              GPT320_GTCSR_CSCBFAL
#define GPT321_GTCSR_CSCBRAH              GPT320_GTCSR_CSCBRAH
#define GPT321_GTCSR_CSCBRAL              GPT320_GTCSR_CSCBRAL
#define GPT321_GTCSR_CSCAFBH              GPT320_GTCSR_CSCAFBH
#define GPT321_GTCSR_CSCAFBL              GPT320_GTCSR_CSCAFBL
#define GPT321_GTCSR_CSCARBH              GPT320_GTCSR_CSCARBH
#define GPT321_GTCSR_CSCARBL              GPT320_GTCSR_CSCARBL
#define GPT321_GTCSR_CSGTRGBF             GPT320_GTCSR_CSGTRGBF
#define GPT321_GTCSR_CSGTRGBR             GPT320_GTCSR_CSGTRGBR
#define GPT321_GTCSR_CSGTRGAF             GPT320_GTCSR_CSGTRGAF
#define GPT321_GTCSR_CSGTRGAR             GPT320_GTCSR_CSGTRGAR
#define GPT321_GTUPSR_OFFSET              GPT320_GTUPSR_OFFSET
#define GPT321_GTUPSR                     GPT320_GTUPSR
#define GPT321_GTUPSR_USELCH              GPT320_GTUPSR_USELCH
#define GPT321_GTUPSR_USELCG              GPT320_GTUPSR_USELCG
#define GPT321_GTUPSR_USELCF              GPT320_GTUPSR_USELCF
#define GPT321_GTUPSR_USELCE              GPT320_GTUPSR_USELCE
#define GPT321_GTUPSR_USELCD              GPT320_GTUPSR_USELCD
#define GPT321_GTUPSR_USELCC              GPT320_GTUPSR_USELCC
#define GPT321_GTUPSR_USELCB              GPT320_GTUPSR_USELCB
#define GPT321_GTUPSR_USELCA              GPT320_GTUPSR_USELCA
#define GPT321_GTUPSR_USCBFAH             GPT320_GTUPSR_USCBFAH
#define GPT321_GTUPSR_USCBFAL             GPT320_GTUPSR_USCBFAL
#define GPT321_GTUPSR_USCBRAH             GPT320_GTUPSR_USCBRAH
#define GPT321_GTUPSR_USCBRAL             GPT320_GTUPSR_USCBRAL
#define GPT321_GTUPSR_USCAFBH             GPT320_GTUPSR_USCAFBH
#define GPT321_GTUPSR_USCAFBL             GPT320_GTUPSR_USCAFBL
#define GPT321_GTUPSR_USCARBH             GPT320_GTUPSR_USCARBH
#define GPT321_GTUPSR_USCARBL             GPT320_GTUPSR_USCARBL
#define GPT321_GTUPSR_USGTRGBF            GPT320_GTUPSR_USGTRGBF
#define GPT321_GTUPSR_USGTRGBR            GPT320_GTUPSR_USGTRGBR
#define GPT321_GTUPSR_USGTRGAF            GPT320_GTUPSR_USGTRGAF
#define GPT321_GTUPSR_USGTRGAR            GPT320_GTUPSR_USGTRGAR
#define GPT321_GTDNSR_OFFSET              GPT320_GTDNSR_OFFSET
#define GPT321_GTDNSR                     GPT320_GTDNSR
#define GPT321_GTDNSR_DSELCH              GPT320_GTDNSR_DSELCH
#define GPT321_GTDNSR_DSELCG              GPT320_GTDNSR_DSELCG
#define GPT321_GTDNSR_DSELCF              GPT320_GTDNSR_DSELCF
#define GPT321_GTDNSR_DSELCE              GPT320_GTDNSR_DSELCE
#define GPT321_GTDNSR_DSELCD              GPT320_GTDNSR_DSELCD
#define GPT321_GTDNSR_DSELCC              GPT320_GTDNSR_DSELCC
#define GPT321_GTDNSR_DSELCB              GPT320_GTDNSR_DSELCB
#define GPT321_GTDNSR_DSELCA              GPT320_GTDNSR_DSELCA
#define GPT321_GTDNSR_DSCBFAH             GPT320_GTDNSR_DSCBFAH
#define GPT321_GTDNSR_DSCBFAL             GPT320_GTDNSR_DSCBFAL
#define GPT321_GTDNSR_DSCBRAH             GPT320_GTDNSR_DSCBRAH
#define GPT321_GTDNSR_DSCBRAL             GPT320_GTDNSR_DSCBRAL
#define GPT321_GTDNSR_DSCAFBH             GPT320_GTDNSR_DSCAFBH
#define GPT321_GTDNSR_DSCAFBL             GPT320_GTDNSR_DSCAFBL
#define GPT321_GTDNSR_DSCARBH             GPT320_GTDNSR_DSCARBH
#define GPT321_GTDNSR_DSCARBL             GPT320_GTDNSR_DSCARBL
#define GPT321_GTDNSR_DSGTRGBF            GPT320_GTDNSR_DSGTRGBF
#define GPT321_GTDNSR_DSGTRGBR            GPT320_GTDNSR_DSGTRGBR
#define GPT321_GTDNSR_DSGTRGAF            GPT320_GTDNSR_DSGTRGAF
#define GPT321_GTDNSR_DSGTRGAR            GPT320_GTDNSR_DSGTRGAR
#define GPT321_GTICASR_OFFSET             GPT320_GTICASR_OFFSET
#define GPT321_GTICASR                    GPT320_GTICASR
#define GPT321_GTICASR_ASELCH             GPT320_GTICASR_ASELCH
#define GPT321_GTICASR_ASELCG             GPT320_GTICASR_ASELCG
#define GPT321_GTICASR_ASELCF             GPT320_GTICASR_ASELCF
#define GPT321_GTICASR_ASELCE             GPT320_GTICASR_ASELCE
#define GPT321_GTICASR_ASELCD             GPT320_GTICASR_ASELCD
#define GPT321_GTICASR_ASELCC             GPT320_GTICASR_ASELCC
#define GPT321_GTICASR_ASELCB             GPT320_GTICASR_ASELCB
#define GPT321_GTICASR_ASELCA             GPT320_GTICASR_ASELCA
#define GPT321_GTICASR_ASCBFAH            GPT320_GTICASR_ASCBFAH
#define GPT321_GTICASR_ASCBFAL            GPT320_GTICASR_ASCBFAL
#define GPT321_GTICASR_ASCBRAH            GPT320_GTICASR_ASCBRAH
#define GPT321_GTICASR_ASCBRAL            GPT320_GTICASR_ASCBRAL
#define GPT321_GTICASR_ASCAFBH            GPT320_GTICASR_ASCAFBH
#define GPT321_GTICASR_ASCAFBL            GPT320_GTICASR_ASCAFBL
#define GPT321_GTICASR_ASCARBH            GPT320_GTICASR_ASCARBH
#define GPT321_GTICASR_ASCARBL            GPT320_GTICASR_ASCARBL
#define GPT321_GTICASR_ASGTRGBF           GPT320_GTICASR_ASGTRGBF
#define GPT321_GTICASR_ASGTRGBR           GPT320_GTICASR_ASGTRGBR
#define GPT321_GTICASR_ASGTRGAF           GPT320_GTICASR_ASGTRGAF
#define GPT321_GTICASR_ASGTRGAR           GPT320_GTICASR_ASGTRGAR
#define GPT321_GTICBSR_OFFSET             GPT320_GTICBSR_OFFSET
#define GPT321_GTICBSR                    GPT320_GTICBSR
#define GPT321_GTICBSR_BSELCH             GPT320_GTICBSR_BSELCH
#define GPT321_GTICBSR_BSELCG             GPT320_GTICBSR_BSELCG
#define GPT321_GTICBSR_BSELCF             GPT320_GTICBSR_BSELCF
#define GPT321_GTICBSR_BSELCE             GPT320_GTICBSR_BSELCE
#define GPT321_GTICBSR_BSELCD             GPT320_GTICBSR_BSELCD
#define GPT321_GTICBSR_BSELCC             GPT320_GTICBSR_BSELCC
#define GPT321_GTICBSR_BSELCB             GPT320_GTICBSR_BSELCB
#define GPT321_GTICBSR_BSELCA             GPT320_GTICBSR_BSELCA
#define GPT321_GTICBSR_BSCBFAH            GPT320_GTICBSR_BSCBFAH
#define GPT321_GTICBSR_BSCBFAL            GPT320_GTICBSR_BSCBFAL
#define GPT321_GTICBSR_BSCBRAH            GPT320_GTICBSR_BSCBRAH
#define GPT321_GTICBSR_BSCBRAL            GPT320_GTICBSR_BSCBRAL
#define GPT321_GTICBSR_BSCAFBH            GPT320_GTICBSR_BSCAFBH
#define GPT321_GTICBSR_BSCAFBL            GPT320_GTICBSR_BSCAFBL
#define GPT321_GTICBSR_BSCARBH            GPT320_GTICBSR_BSCARBH
#define GPT321_GTICBSR_BSCARBL            GPT320_GTICBSR_BSCARBL
#define GPT321_GTICBSR_BSGTRGBF           GPT320_GTICBSR_BSGTRGBF
#define GPT321_GTICBSR_BSGTRGBR           GPT320_GTICBSR_BSGTRGBR
#define GPT321_GTICBSR_BSGTRGAF           GPT320_GTICBSR_BSGTRGAF
#define GPT321_GTICBSR_BSGTRGAR           GPT320_GTICBSR_BSGTRGAR
#define GPT321_GTCR_OFFSET                GPT320_GTCR_OFFSET
#define GPT321_GTCR                       GPT320_GTCR
#define GPT321_GTCR_TPCS                  GPT320_GTCR_TPCS
#define GPT321_GTCR_TPCS_MASK             GPT320_GTCR_TPCS_MASK
#define GPT321_GTCR_MD                    GPT320_GTCR_MD
#define GPT321_GTCR_MD_MASK               GPT320_GTCR_MD_MASK
#define GPT321_GTCR_CST                   GPT320_GTCR_CST
#define GPT321_GTUDDTYC_OFFSET            GPT320_GTUDDTYC_OFFSET
#define GPT321_GTUDDTYC                   GPT320_GTUDDTYC
#define GPT321_GTUDDTYC_OBDTYR            GPT320_GTUDDTYC_OBDTYR
#define GPT321_GTUDDTYC_OBDTYF            GPT320_GTUDDTYC_OBDTYF
#define GPT321_GTUDDTYC_OBDTY             GPT320_GTUDDTYC_OBDTY
#define GPT321_GTUDDTYC_OBDTY_MASK        GPT320_GTUDDTYC_OBDTY_MASK
#define GPT321_GTUDDTYC_OADTYR            GPT320_GTUDDTYC_OADTYR
#define GPT321_GTUDDTYC_OADTYF            GPT320_GTUDDTYC_OADTYF
#define GPT321_GTUDDTYC_OADTY             GPT320_GTUDDTYC_OADTY
#define GPT321_GTUDDTYC_OADTY_MASK        GPT320_GTUDDTYC_OADTY_MASK
#define GPT321_GTUDDTYC_UDF               GPT320_GTUDDTYC_UDF
#define GPT321_GTUDDTYC_UD                GPT320_GTUDDTYC_UD
#define GPT321_GTIOR_OFFSET               GPT320_GTIOR_OFFSET
#define GPT321_GTIOR                      GPT320_GTIOR
#define GPT321_GTIOR_NFCSB                GPT320_GTIOR_NFCSB
#define GPT321_GTIOR_NFCSB_MASK           GPT320_GTIOR_NFCSB_MASK
#define GPT321_GTIOR_NFBEN                GPT320_GTIOR_NFBEN
#define GPT321_GTIOR_OBDF                 GPT320_GTIOR_OBDF
#define GPT321_GTIOR_OBDF_MASK            GPT320_GTIOR_OBDF_MASK
#define GPT321_GTIOR_OBE                  GPT320_GTIOR_OBE
#define GPT321_GTIOR_OBHLD                GPT320_GTIOR_OBHLD
#define GPT321_GTIOR_OBDFLT               GPT320_GTIOR_OBDFLT
#define GPT321_GTIOR_GTIOB                GPT320_GTIOR_GTIOB
#define GPT321_GTIOR_GTIOB_MASK           GPT320_GTIOR_GTIOB_MASK
#define GPT321_GTIOR_NFCSA                GPT320_GTIOR_NFCSA
#define GPT321_GTIOR_NFCSA_MASK           GPT320_GTIOR_NFCSA_MASK
#define GPT321_GTIOR_NFAEN                GPT320_GTIOR_NFAEN
#define GPT321_GTIOR_OADF                 GPT320_GTIOR_OADF
#define GPT321_GTIOR_OADF_MASK            GPT320_GTIOR_OADF_MASK
#define GPT321_GTIOR_OAE                  GPT320_GTIOR_OAE
#define GPT321_GTIOR_OAHLD                GPT320_GTIOR_OAHLD
#define GPT321_GTIOR_OADFLT               GPT320_GTIOR_OADFLT
#define GPT321_GTIOR_GTIOA                GPT320_GTIOR_GTIOA
#define GPT321_GTIOR_GTIOA_MASK           GPT320_GTIOR_GTIOA_MASK
#define GPT321_GTINTAD_OFFSET             GPT320_GTINTAD_OFFSET
#define GPT321_GTINTAD                    GPT320_GTINTAD
#define GPT321_GTINTAD_GRPABL             GPT320_GTINTAD_GRPABL
#define GPT321_GTINTAD_GRPABH             GPT320_GTINTAD_GRPABH
#define GPT321_GTINTAD_GRP                GPT320_GTINTAD_GRP
#define GPT321_GTINTAD_GRP_MASK           GPT320_GTINTAD_GRP_MASK
#define GPT321_GTST_OFFSET                GPT320_GTST_OFFSET
#define GPT321_GTST                       GPT320_GTST
#define GPT321_GTST_OABLF                 GPT320_GTST_OABLF
#define GPT321_GTST_OABHF                 GPT320_GTST_OABHF
#define GPT321_GTST_ODF                   GPT320_GTST_ODF
#define GPT321_GTST_TUCF                  GPT320_GTST_TUCF
#define GPT321_GTST_TCFPU                 GPT320_GTST_TCFPU
#define GPT321_GTST_TCFPO                 GPT320_GTST_TCFPO
#define GPT321_GTST_TCFF                  GPT320_GTST_TCFF
#define GPT321_GTST_TCFE                  GPT320_GTST_TCFE
#define GPT321_GTST_TCFD                  GPT320_GTST_TCFD
#define GPT321_GTST_TCFC                  GPT320_GTST_TCFC
#define GPT321_GTST_TCFB                  GPT320_GTST_TCFB
#define GPT321_GTST_TCFA                  GPT320_GTST_TCFA
#define GPT321_GTBER_OFFSET               GPT320_GTBER_OFFSET
#define GPT321_GTBER                      GPT320_GTBER
#define GPT321_GTBER_CCRSWT               GPT320_GTBER_CCRSWT
#define GPT321_GTBER_PR                   GPT320_GTBER_PR
#define GPT321_GTBER_PR_MASK              GPT320_GTBER_PR_MASK
#define GPT321_GTBER_CCRB                 GPT320_GTBER_CCRB
#define GPT321_GTBER_CCRB_MASK            GPT320_GTBER_CCRB_MASK
#define GPT321_GTBER_CCRA                 GPT320_GTBER_CCRA
#define GPT321_GTBER_CCRA_MASK            GPT320_GTBER_CCRA_MASK
#define GPT321_GTBER_BD                   GPT320_GTBER_BD
#define GPT321_GTBER_BD_MASK              GPT320_GTBER_BD_MASK
#define GPT321_GTCNT_OFFSET               GPT320_GTCNT_OFFSET
#define GPT321_GTCNT                      GPT320_GTCNT
#define GPT321_GTCNT_GTCNT                GPT320_GTCNT_GTCNT
#define GPT321_GTCNT_GTCNT_MASK           GPT320_GTCNT_GTCNT_MASK
#define GPT321_GTCCRA_OFFSET              GPT320_GTCCRA_OFFSET
#define GPT321_GTCCRA                     GPT320_GTCCRA
#define GPT321_GTCCRA_GTCCRA              GPT320_GTCCRA_GTCCRA
#define GPT321_GTCCRA_GTCCRA_MASK         GPT320_GTCCRA_GTCCRA_MASK
#define GPT321_GTCCRB_OFFSET              GPT320_GTCCRB_OFFSET
#define GPT321_GTCCRB                     GPT320_GTCCRB
#define GPT321_GTCCRB_GTCCRB              GPT320_GTCCRB_GTCCRB
#define GPT321_GTCCRB_GTCCRB_MASK         GPT320_GTCCRB_GTCCRB_MASK
#define GPT321_GTCCRC_OFFSET              GPT320_GTCCRC_OFFSET
#define GPT321_GTCCRC                     GPT320_GTCCRC
#define GPT321_GTCCRC_GTCCRC              GPT320_GTCCRC_GTCCRC
#define GPT321_GTCCRC_GTCCRC_MASK         GPT320_GTCCRC_GTCCRC_MASK
#define GPT321_GTCCRE_OFFSET              GPT320_GTCCRE_OFFSET
#define GPT321_GTCCRE                     GPT320_GTCCRE
#define GPT321_GTCCRE_GTCCRE              GPT320_GTCCRE_GTCCRE
#define GPT321_GTCCRE_GTCCRE_MASK         GPT320_GTCCRE_GTCCRE_MASK
#define GPT321_GTCCRD_OFFSET              GPT320_GTCCRD_OFFSET
#define GPT321_GTCCRD                     GPT320_GTCCRD
#define GPT321_GTCCRD_GTCCRD              GPT320_GTCCRD_GTCCRD
#define GPT321_GTCCRD_GTCCRD_MASK         GPT320_GTCCRD_GTCCRD_MASK
#define GPT321_GTCCRF_OFFSET              GPT320_GTCCRF_OFFSET
#define GPT321_GTCCRF                     GPT320_GTCCRF
#define GPT321_GTCCRF_GTCCRF              GPT320_GTCCRF_GTCCRF
#define GPT321_GTCCRF_GTCCRF_MASK         GPT320_GTCCRF_GTCCRF_MASK
#define GPT321_GTPR_OFFSET                GPT320_GTPR_OFFSET
#define GPT321_GTPR                       GPT320_GTPR
#define GPT321_GTPR_GTPR                  GPT320_GTPR_GTPR
#define GPT321_GTPR_GTPR_MASK             GPT320_GTPR_GTPR_MASK
#define GPT321_GTPBR_OFFSET               GPT320_GTPBR_OFFSET
#define GPT321_GTPBR                      GPT320_GTPBR
#define GPT321_GTPBR_GTPBR                GPT320_GTPBR_GTPBR
#define GPT321_GTPBR_GTPBR_MASK           GPT320_GTPBR_GTPBR_MASK
#define GPT321_GTDTCR_OFFSET              GPT320_GTDTCR_OFFSET
#define GPT321_GTDTCR                     GPT320_GTDTCR
#define GPT321_GTDTCR_TDE                 GPT320_GTDTCR_TDE
#define GPT321_GTDVU_OFFSET               GPT320_GTDVU_OFFSET
#define GPT321_GTDVU                      GPT320_GTDVU
#define GPT321_GTDVU_GTDVU                GPT320_GTDVU_GTDVU
#define GPT321_GTDVU_GTDVU_MASK           GPT320_GTDVU_GTDVU_MASK

/* GPT162 - General PWM Timer 2 (16-bit) */
#define GPT162_BASE                       0x40078200
#define GPT162_GTWP_OFFSET                0x0000
#define GPT162_GTWP                       (GPT162_BASE + GPT162_GTWP_OFFSET)
#define GPT162_GTWP_PRKEY                 (8 <<  8) /* 100: GTWP Key Code */
#define GPT162_GTWP_PRKEY_MASK                 (0xff)
#define GPT162_GTWP_WP                    (1 <<  0) /* 01: Register Write Disable */
#define GPT162_GTSTR_OFFSET               0x0004
#define GPT162_GTSTR                      (GPT162_BASE + GPT162_GTSTR_OFFSET)
#define GPT162_GTSTR_CSTRT7               (1 <<  7) /* 80: Channel 7 GTCNT Count Start Read data shows each channel's counter status (GTCR.CST bit). 0 means counter stop. 1 means counter running. */
#define GPT162_GTSTR_CSTRT6               (1 <<  6) /* 40: Channel 6 GTCNT Count Start Read data shows each channel's counter status (GTCR.CST bit). 0 means counter stop. 1 means counter running. */
#define GPT162_GTSTR_CSTRT5               (1 <<  5) /* 20: Channel 5 GTCNT Count Start Read data shows each channel's counter status (GTCR.CST bit). 0 means counter stop. 1 means counter running. */
#define GPT162_GTSTR_CSTRT4               (1 <<  4) /* 10: Channel 4 GTCNT Count Start Read data shows each channel's counter status (GTCR.CST bit). 0 means counter stop. 1 means counter running. */
#define GPT162_GTSTR_CSTRT3               (1 <<  3) /* 08: Channel 3 GTCNT Count Start Read data shows each channel's counter status (GTCR.CST bit). 0 means counter stop. 1 means counter running. */
#define GPT162_GTSTR_CSTRT2               (1 <<  2) /* 04: Channel 2 GTCNT Count Start Read data shows each channel's counter status (GTCR.CST bit). 0 means counter stop. 1 means counter running. */
#define GPT162_GTSTR_CSTRT1               (1 <<  1) /* 02: Channel 1 GTCNT Count Start Read data shows each channel's counter status (GTCR.CST bit). 0 means counter stop. 1 means counter running. */
#define GPT162_GTSTR_CSTRT0               (1 <<  0) /* 01: Channel 0 GTCNT Count Start Read data shows each channel's counter status (GTCR.CST bit). 0 means counter stop. 1 means counter running. */
#define GPT162_GTSTP_OFFSET               0x0008
#define GPT162_GTSTP                      (GPT162_BASE + GPT162_GTSTP_OFFSET)
#define GPT162_GTSTP_CSTOP7               (1 <<  7) /* 80: Channel 7 GTCNT Count Stop Read data shows each channel's counter status (GTCR.CST bit). 0 means counter runnning. 1 means counter stop. */
#define GPT162_GTSTP_CSTOP6               (1 <<  6) /* 40: Channel 6 GTCNT Count Stop Read data shows each channel's counter status (GTCR.CST bit). 0 means counter runnning. 1 means counter stop. */
#define GPT162_GTSTP_CSTOP5               (1 <<  5) /* 20: Channel 5 GTCNT Count Stop Read data shows each channel's counter status (GTCR.CST bit). 0 means counter runnning. 1 means counter stop. */
#define GPT162_GTSTP_CSTOP4               (1 <<  4) /* 10: Channel 4 GTCNT Count Stop Read data shows each channel's counter status (GTCR.CST bit). 0 means counter runnning. 1 means counter stop. */
#define GPT162_GTSTP_CSTOP3               (1 <<  3) /* 08: Channel 3 GTCNT Count Stop Read data shows each channel's counter status (GTCR.CST bit). 0 means counter runnning. 1 means counter stop. */
#define GPT162_GTSTP_CSTOP2               (1 <<  2) /* 04: Channel 2 GTCNT Count Stop Read data shows each channel's counter status (GTCR.CST bit). 0 means counter runnning. 1 means counter stop. */
#define GPT162_GTSTP_CSTOP1               (1 <<  1) /* 02: Channel 1 GTCNT Count Stop Read data shows each channel's counter status (GTCR.CST bit). 0 means counter runnning. 1 means counter stop. */
#define GPT162_GTSTP_CSTOP0               (1 <<  0) /* 01: Channel 0 GTCNT Count Stop Read data shows each channel's counter status (GTCR.CST bit). 0 means counter runnning. 1 means counter stop. */
#define GPT162_GTCLR_OFFSET               0x000c
#define GPT162_GTCLR                      (GPT162_BASE + GPT162_GTCLR_OFFSET)
#define GPT162_GTCLR_CCLR7                (1 <<  7) /* 80: Channel 7 GTCNT Count Clear */
#define GPT162_GTCLR_CCLR6                (1 <<  6) /* 40: Channel 6 GTCNT Count Clear */
#define GPT162_GTCLR_CCLR5                (1 <<  5) /* 20: Channel 5 GTCNT Count Clear */
#define GPT162_GTCLR_CCLR4                (1 <<  4) /* 10: Channel 4 GTCNT Count Clear */
#define GPT162_GTCLR_CCLR3                (1 <<  3) /* 08: Channel 3 GTCNT Count Clear */
#define GPT162_GTCLR_CCLR2                (1 <<  2) /* 04: Channel 2 GTCNT Count Clear */
#define GPT162_GTCLR_CCLR1                (1 <<  1) /* 02: Channel 1 GTCNT Count Clear */
#define GPT162_GTCLR_CCLR0                (1 <<  0) /* 01: Channel 0 GTCNT Count Clear */
#define GPT162_GTSSR_OFFSET               0x0010
#define GPT162_GTSSR                      (GPT162_BASE + GPT162_GTSSR_OFFSET)
#define GPT162_GTSSR_CSTRT                (1 << 31) /* 80000000: Software Source Counter Start Enable */
#define GPT162_GTSSR_SSELCH               (1 << 23) /* 800000: ELC_GPTH Event Source Counter Start Enable */
#define GPT162_GTSSR_SSELCG               (1 << 22) /* 400000: ELC_GPTG Event Source Counter Start Enable */
#define GPT162_GTSSR_SSELCF               (1 << 21) /* 200000: ELC_GPTF Event Source Counter Start Enable */
#define GPT162_GTSSR_SSELCE               (1 << 20) /* 100000: ELC_GPTE Event Source Counter Start Enable */
#define GPT162_GTSSR_SSELCD               (1 << 19) /* 80000: ELC_GPTD Event Source Counter Start Enable */
#define GPT162_GTSSR_SSELCC               (1 << 18) /* 40000: ELC_GPTC Event Source Counter Start Enable */
#define GPT162_GTSSR_SSELCB               (1 << 17) /* 20000: ELC_GPTB Event Source Counter Start Enable */
#define GPT162_GTSSR_SSELCA               (1 << 16) /* 10000: ELC_GPTA Event Source Counter Start Enable */
#define GPT162_GTSSR_SSCBFAH              (1 << 15) /* 8000: GTIOCB Pin Falling Input during GTIOCA Value High Source Counter Start Enable */
#define GPT162_GTSSR_SSCBFAL              (1 << 14) /* 4000: GTIOCB Pin Falling Input during GTIOCA Value Low Source Counter Start Enable */
#define GPT162_GTSSR_SSCBRAH              (1 << 13) /* 2000: GTIOCB Pin Rising Input during GTIOCA Value High Source Counter Start Enable */
#define GPT162_GTSSR_SSCBRAL              (1 << 12) /* 1000: GTIOCB Pin Rising Input during GTIOCA Value Low Source Counter Start Enable */
#define GPT162_GTSSR_SSCAFBH              (1 << 11) /* 800: GTIOCA Pin Falling Input during GTIOCB Value High Source Counter Start Enable */
#define GPT162_GTSSR_SSCAFBL              (1 << 10) /* 400: GTIOCA Pin Falling Input during GTIOCB Value Low Source Counter Start Enable */
#define GPT162_GTSSR_SSCARBH              (1 <<  9) /* 200: GTIOCA Pin Rising Input during GTIOCB Value High Source Counter Start Enable */
#define GPT162_GTSSR_SSCARBL              (1 <<  8) /* 100: GTIOCA Pin Rising Input during GTIOCB Value Low Source Counter Start Enable */
#define GPT162_GTSSR_SSGTRGBF             (1 <<  3) /* 08: GTETRGB Pin Falling Input Source Counter Start Enable */
#define GPT162_GTSSR_SSGTRGBR             (1 <<  2) /* 04: GTETRGB Pin Rising Input Source Counter Start Enable */
#define GPT162_GTSSR_SSGTRGAF             (1 <<  1) /* 02: GTETRGA Pin Falling Input Source Counter Start Enable */
#define GPT162_GTSSR_SSGTRGAR             (1 <<  0) /* 01: GTETRGA Pin Rising Input Source Counter Start Enable */
#define GPT162_GTPSR_OFFSET               0x0014
#define GPT162_GTPSR                      (GPT162_BASE + GPT162_GTPSR_OFFSET)
#define GPT162_GTPSR_CSTOP                (1 << 31) /* 80000000: Software Source Counter Stop Enable */
#define GPT162_GTPSR_PSELCH               (1 << 23) /* 800000: ELC_GPTH Event Source Counter Stop Enable */
#define GPT162_GTPSR_PSELCG               (1 << 22) /* 400000: ELC_GPTG Event Source Counter Stop Enable */
#define GPT162_GTPSR_PSELCF               (1 << 21) /* 200000: ELC_GPTF Event Source Counter Stop Enable */
#define GPT162_GTPSR_PSELCE               (1 << 20) /* 100000: ELC_GPTE Event Source Counter Stop Enable */
#define GPT162_GTPSR_PSELCD               (1 << 19) /* 80000: ELC_GPTD Event Source Counter Stop Enable */
#define GPT162_GTPSR_PSELCC               (1 << 18) /* 40000: ELC_GPTC Event Source Counter Stop Enable */
#define GPT162_GTPSR_PSELCB               (1 << 17) /* 20000: ELC_GPTB Event Source Counter Stop Enable */
#define GPT162_GTPSR_PSELCA               (1 << 16) /* 10000: ELC_GPTA Event Source Counter Stop Enable */
#define GPT162_GTPSR_PSCBFAH              (1 << 15) /* 8000: GTIOCB Pin Falling Input during GTIOCA Value High Source Counter Stop Enable */
#define GPT162_GTPSR_PSCBFAL              (1 << 14) /* 4000: GTIOCB Pin Falling Input during GTIOCA Value Low Source Counter Stop Enable */
#define GPT162_GTPSR_PSCBRAH              (1 << 13) /* 2000: GTIOCB Pin Rising Input during GTIOCA Value High Source Counter Stop Enable */
#define GPT162_GTPSR_PSCBRAL              (1 << 12) /* 1000: GTIOCB Pin Rising Input during GTIOCA Value Low Source Counter Stop Enable */
#define GPT162_GTPSR_PSCAFBH              (1 << 11) /* 800: GTIOCA Pin Falling Input during GTIOCB Value High Source Counter Stop Enable */
#define GPT162_GTPSR_PSCAFBL              (1 << 10) /* 400: GTIOCA Pin Falling Input during GTIOCB Value Low Source Counter Stop Enable */
#define GPT162_GTPSR_PSCARBH              (1 <<  9) /* 200: GTIOCA Pin Rising Input during GTIOCB Value High Source Counter Stop Enable */
#define GPT162_GTPSR_PSCARBL              (1 <<  8) /* 100: GTIOCA Pin Rising Input during GTIOCB Value Low Source Counter Stop Enable */
#define GPT162_GTPSR_PSGTRGBF             (1 <<  3) /* 08: GTETRGB Pin Falling Input Source Counter Stop Enable */
#define GPT162_GTPSR_PSGTRGBR             (1 <<  2) /* 04: GTETRGB Pin Rising Input Source Counter Stop Enable */
#define GPT162_GTPSR_PSGTRGAF             (1 <<  1) /* 02: GTETRGA Pin Falling Input Source Counter Stop Enable */
#define GPT162_GTPSR_PSGTRGAR             (1 <<  0) /* 01: GTETRGA Pin Rising Input Source Counter Stop Enable */
#define GPT162_GTCSR_OFFSET               0x0018
#define GPT162_GTCSR                      (GPT162_BASE + GPT162_GTCSR_OFFSET)
#define GPT162_GTCSR_CCLR                 (1 << 31) /* 80000000: Software Source Counter Clear Enable */
#define GPT162_GTCSR_CSELCH               (1 << 23) /* 800000: ELC_GPTH Event Source Counter Clear Enable */
#define GPT162_GTCSR_CSELCG               (1 << 22) /* 400000: ELC_GPTG Event Source Counter Clear Enable */
#define GPT162_GTCSR_CSELCF               (1 << 21) /* 200000: ELC_GPTF Event Source Counter Clear Enable */
#define GPT162_GTCSR_CSELCE               (1 << 20) /* 100000: ELC_GPTE Event Source Counter Clear Enable */
#define GPT162_GTCSR_CSELCD               (1 << 19) /* 80000: ELC_GPTD Event Source Counter Clear Enable */
#define GPT162_GTCSR_CSELCC               (1 << 18) /* 40000: ELC_GPTC Event Source Counter Clear Enable */
#define GPT162_GTCSR_CSELCB               (1 << 17) /* 20000: ELC_GPTB Event Source Counter Clear Enable */
#define GPT162_GTCSR_CSELCA               (1 << 16) /* 10000: ELC_GPTA Event Source Counter Clear Enable */
#define GPT162_GTCSR_CSCBFAH              (1 << 15) /* 8000: GTIOCB Pin Falling Input during GTIOCA Value High Source Counter Clear Enable */
#define GPT162_GTCSR_CSCBFAL              (1 << 14) /* 4000: GTIOCB Pin Falling Input during GTIOCA Value Low Source Counter Clear Enable */
#define GPT162_GTCSR_CSCBRAH              (1 << 13) /* 2000: GTIOCB Pin Rising Input during GTIOCA Value High Source Counter Clear Enable */
#define GPT162_GTCSR_CSCBRAL              (1 << 12) /* 1000: GTIOCB Pin Rising Input during GTIOCA Value Low Source Counter Clear Enable */
#define GPT162_GTCSR_CSCAFBH              (1 << 11) /* 800: GTIOCA Pin Falling Input during GTIOCB Value High Source Counter Clear Enable */
#define GPT162_GTCSR_CSCAFBL              (1 << 10) /* 400: GTIOCA Pin Falling Input during GTIOCB Value Low Source Counter Clear Enable */
#define GPT162_GTCSR_CSCARBH              (1 <<  9) /* 200: GTIOCA Pin Rising Input during GTIOCB Value High Source Counter Clear Enable */
#define GPT162_GTCSR_CSCARBL              (1 <<  8) /* 100: GTIOCA Pin Rising Input during GTIOCB Value Low Source Counter Clear Enable */
#define GPT162_GTCSR_CSGTRGBF             (1 <<  3) /* 08: GTETRGB Pin Falling Input Source Counter Clear Enable */
#define GPT162_GTCSR_CSGTRGBR             (1 <<  2) /* 04: GTETRGB Pin Rising Input Source Counter Clear Enable */
#define GPT162_GTCSR_CSGTRGAF             (1 <<  1) /* 02: GTETRGA Pin Falling Input Source Counter Clear Enable */
#define GPT162_GTCSR_CSGTRGAR             (1 <<  0) /* 01: GTETRGA Pin Rising Input Source Counter Clear Enable */
#define GPT162_GTUPSR_OFFSET              0x001c
#define GPT162_GTUPSR                     (GPT162_BASE + GPT162_GTUPSR_OFFSET)
#define GPT162_GTUPSR_USELCH              (1 << 23) /* 800000: ELC_GPTH Event Source Counter Count Up Enable */
#define GPT162_GTUPSR_USELCG              (1 << 22) /* 400000: ELC_GPTG Event Source Counter Count Up Enable */
#define GPT162_GTUPSR_USELCF              (1 << 21) /* 200000: ELC_GPTF Event Source Counter Count Up Enable */
#define GPT162_GTUPSR_USELCE              (1 << 20) /* 100000: ELC_GPTE Event Source Counter Count Up Enable */
#define GPT162_GTUPSR_USELCD              (1 << 19) /* 80000: ELC_GPTD Event Source Counter Count Up Enable */
#define GPT162_GTUPSR_USELCC              (1 << 18) /* 40000: ELC_GPTC Event Source Counter Count Up Enable */
#define GPT162_GTUPSR_USELCB              (1 << 17) /* 20000: ELC_GPTB Event Source Counter Count Up Enable */
#define GPT162_GTUPSR_USELCA              (1 << 16) /* 10000: ELC_GPTA Event Source Counter Count Up Enable */
#define GPT162_GTUPSR_USCBFAH             (1 << 15) /* 8000: GTIOCB Pin Falling Input during GTIOCA Value High Source Counter Count Up Enable */
#define GPT162_GTUPSR_USCBFAL             (1 << 14) /* 4000: GTIOCB Pin Falling Input during GTIOCA Value Low Source Counter Count Up Enable */
#define GPT162_GTUPSR_USCBRAH             (1 << 13) /* 2000: GTIOCB Pin Rising Input during GTIOCA Value High Source Counter Count Up Enable */
#define GPT162_GTUPSR_USCBRAL             (1 << 12) /* 1000: GTIOCB Pin Rising Input during GTIOCA Value Low Source Counter Count Up Enable */
#define GPT162_GTUPSR_USCAFBH             (1 << 11) /* 800: GTIOCA Pin Falling Input during GTIOCB Value High Source Counter Count Up Enable */
#define GPT162_GTUPSR_USCAFBL             (1 << 10) /* 400: GTIOCA Pin Falling Input during GTIOCB Value Low Source Counter Count Up Enable */
#define GPT162_GTUPSR_USCARBH             (1 <<  9) /* 200: GTIOCA Pin Rising Input during GTIOCB Value High Source Counter Count Up Enable */
#define GPT162_GTUPSR_USCARBL             (1 <<  8) /* 100: GTIOCA Pin Rising Input during GTIOCB Value Low Source Counter Count Up Enable */
#define GPT162_GTUPSR_USGTRGBF            (1 <<  3) /* 08: GTETRGB Pin Falling Input Source Counter Count Up Enable */
#define GPT162_GTUPSR_USGTRGBR            (1 <<  2) /* 04: GTETRGB Pin Rising Input Source Counter Count Up Enable */
#define GPT162_GTUPSR_USGTRGAF            (1 <<  1) /* 02: GTETRGA Pin Falling Input Source Counter Count Up Enable */
#define GPT162_GTUPSR_USGTRGAR            (1 <<  0) /* 01: GTETRGA Pin Rising Input Source Counter Count Up Enable */
#define GPT162_GTDNSR_OFFSET              0x0020
#define GPT162_GTDNSR                     (GPT162_BASE + GPT162_GTDNSR_OFFSET)
#define GPT162_GTDNSR_DSELCH              (1 << 23) /* 800000: ELC_GPTH Event Source Counter Count Down Enable */
#define GPT162_GTDNSR_DSELCG              (1 << 22) /* 400000: ELC_GPTG Event Source Counter Count Down Enable */
#define GPT162_GTDNSR_DSELCF              (1 << 21) /* 200000: ELC_GPTF Event Source Counter Count Down Enable */
#define GPT162_GTDNSR_DSELCE              (1 << 20) /* 100000: ELC_GPTE Event Source Counter Count Down Enable */
#define GPT162_GTDNSR_DSELCD              (1 << 19) /* 80000: ELC_GPTD Event Source Counter Count Down Enable */
#define GPT162_GTDNSR_DSELCC              (1 << 18) /* 40000: ELC_GPTC Event Source Counter Count Down Enable */
#define GPT162_GTDNSR_DSELCB              (1 << 17) /* 20000: ELC_GPTB Event Source Counter Count Down Enable */
#define GPT162_GTDNSR_DSELCA              (1 << 16) /* 10000: ELC_GPTA Event Source Counter Count Down Enable */
#define GPT162_GTDNSR_DSCBFAH             (1 << 15) /* 8000: GTIOCB Pin Falling Input during GTIOCA Value High Source Counter Count Down Enable */
#define GPT162_GTDNSR_DSCBFAL             (1 << 14) /* 4000: GTIOCB Pin Falling Input during GTIOCA Value Low Source Counter Count Down Enable */
#define GPT162_GTDNSR_DSCBRAH             (1 << 13) /* 2000: GTIOCB Pin Rising Input during GTIOCA Value High Source Counter Count Down Enable */
#define GPT162_GTDNSR_DSCBRAL             (1 << 12) /* 1000: GTIOCB Pin Rising Input during GTIOCA Value Low Source Counter Count Down Enable */
#define GPT162_GTDNSR_DSCAFBH             (1 << 11) /* 800: GTIOCA Pin Falling Input during GTIOCB Value High Source Counter Count Down Enable */
#define GPT162_GTDNSR_DSCAFBL             (1 << 10) /* 400: GTIOCA Pin Falling Input during GTIOCB Value Low Source Counter Count Down Enable */
#define GPT162_GTDNSR_DSCARBH             (1 <<  9) /* 200: GTIOCA Pin Rising Input during GTIOCB Value High Source Counter Count Down Enable */
#define GPT162_GTDNSR_DSCARBL             (1 <<  8) /* 100: GTIOCA Pin Rising Input during GTIOCB Value Low Source Counter Count Down Enable */
#define GPT162_GTDNSR_DSGTRGBF            (1 <<  3) /* 08: GTETRGB Pin Falling Input Source Counter Count Down Enable */
#define GPT162_GTDNSR_DSGTRGBR            (1 <<  2) /* 04: GTETRGB Pin Rising Input Source Counter Count Down Enable */
#define GPT162_GTDNSR_DSGTRGAF            (1 <<  1) /* 02: GTETRGA Pin Falling Input Source Counter Count Down Enable */
#define GPT162_GTDNSR_DSGTRGAR            (1 <<  0) /* 01: GTETRGA Pin Rising Input Source Counter Count Down Enable */
#define GPT162_GTICASR_OFFSET             0x0024
#define GPT162_GTICASR                    (GPT162_BASE + GPT162_GTICASR_OFFSET)
#define GPT162_GTICASR_ASELCH             (1 << 23) /* 800000: ELC_GPTH Event Source GTCCRA Input Capture Enable */
#define GPT162_GTICASR_ASELCG             (1 << 22) /* 400000: ELC_GPTG Event Source GTCCRA Input Capture Enable */
#define GPT162_GTICASR_ASELCF             (1 << 21) /* 200000: ELC_GPTF Event Source GTCCRA Input Capture Enable */
#define GPT162_GTICASR_ASELCE             (1 << 20) /* 100000: ELC_GPTE Event Source GTCCRA Input Capture Enable */
#define GPT162_GTICASR_ASELCD             (1 << 19) /* 80000: ELC_GPTD Event Source GTCCRA Input Capture Enable */
#define GPT162_GTICASR_ASELCC             (1 << 18) /* 40000: ELC_GPTC Event Source GTCCRA Input Capture Enable */
#define GPT162_GTICASR_ASELCB             (1 << 17) /* 20000: ELC_GPTB Event Source GTCCRA Input Capture Enable */
#define GPT162_GTICASR_ASELCA             (1 << 16) /* 10000: ELC_GPTA Event Source GTCCRA Input Capture Enable */
#define GPT162_GTICASR_ASCBFAH            (1 << 15) /* 8000: GTIOCB Pin Falling Input during GTIOCA Value High Source GTCCRA Input Capture Enable */
#define GPT162_GTICASR_ASCBFAL            (1 << 14) /* 4000: GTIOCB Pin Falling Input during GTIOCA Value Low Source GTCCRA Input Capture Enable */
#define GPT162_GTICASR_ASCBRAH            (1 << 13) /* 2000: GTIOCB Pin Rising Input during GTIOCA Value High Source GTCCRA Input Capture Enable */
#define GPT162_GTICASR_ASCBRAL            (1 << 12) /* 1000: GTIOCB Pin Rising Input during GTIOCA Value Low Source GTCCRA Input Capture Enable */
#define GPT162_GTICASR_ASCAFBH            (1 << 11) /* 800: GTIOCA Pin Falling Input during GTIOCB Value High Source GTCCRA Input Capture Enable */
#define GPT162_GTICASR_ASCAFBL            (1 << 10) /* 400: GTIOCA Pin Falling Input during GTIOCB Value Low Source GTCCRA Input Capture Enable */
#define GPT162_GTICASR_ASCARBH            (1 <<  9) /* 200: GTIOCA Pin Rising Input during GTIOCB Value High Source GTCCRA Input Capture Enable */
#define GPT162_GTICASR_ASCARBL            (1 <<  8) /* 100: GTIOCA Pin Rising Input during GTIOCB Value Low Source GTCCRA Input Capture Enable */
#define GPT162_GTICASR_ASGTRGBF           (1 <<  3) /* 08: GTETRGB Pin Falling Input Source GTCCRA Input Capture Enable */
#define GPT162_GTICASR_ASGTRGBR           (1 <<  2) /* 04: GTETRGB Pin Rising Input Source GTCCRA Input Capture Enable */
#define GPT162_GTICASR_ASGTRGAF           (1 <<  1) /* 02: GTETRGA Pin Falling Input Source GTCCRA Input Capture Enable */
#define GPT162_GTICASR_ASGTRGAR           (1 <<  0) /* 01: GTETRGA Pin Rising Input Source GTCCRA Input Capture Enable */
#define GPT162_GTICBSR_OFFSET             0x0028
#define GPT162_GTICBSR                    (GPT162_BASE + GPT162_GTICBSR_OFFSET)
#define GPT162_GTICBSR_BSELCH             (1 << 23) /* 800000: ELC_GPTH Event Source GTCCRB Input Capture Enable */
#define GPT162_GTICBSR_BSELCG             (1 << 22) /* 400000: ELC_GPTG Event Source GTCCRB Input Capture Enable */
#define GPT162_GTICBSR_BSELCF             (1 << 21) /* 200000: ELC_GPTF Event Source GTCCRB Input Capture Enable */
#define GPT162_GTICBSR_BSELCE             (1 << 20) /* 100000: ELC_GPTE Event Source GTCCRB Input Capture Enable */
#define GPT162_GTICBSR_BSELCD             (1 << 19) /* 80000: ELC_GPTD Event Source GTCCRB Input Capture Enable */
#define GPT162_GTICBSR_BSELCC             (1 << 18) /* 40000: ELC_GPTC Event Source GTCCRB Input Capture Enable */
#define GPT162_GTICBSR_BSELCB             (1 << 17) /* 20000: ELC_GPTB Event Source GTCCRB Input Capture Enable */
#define GPT162_GTICBSR_BSELCA             (1 << 16) /* 10000: ELC_GPTA Event Source GTCCRB Input Capture Enable */
#define GPT162_GTICBSR_BSCBFAH            (1 << 15) /* 8000: GTIOCB Pin Falling Input during GTIOCA Value High Source GTCCRB Input Capture Enable */
#define GPT162_GTICBSR_BSCBFAL            (1 << 14) /* 4000: GTIOCB Pin Falling Input during GTIOCA Value Low Source GTCCRB Input Capture Enable */
#define GPT162_GTICBSR_BSCBRAH            (1 << 13) /* 2000: GTIOCB Pin Rising Input during GTIOCA Value High Source GTCCRB Input Capture Enable */
#define GPT162_GTICBSR_BSCBRAL            (1 << 12) /* 1000: GTIOCB Pin Rising Input during GTIOCA Value Low Source GTCCRB Input Capture Enable */
#define GPT162_GTICBSR_BSCAFBH            (1 << 11) /* 800: GTIOCA Pin Falling Input during GTIOCB Value High Source GTCCRB Input Capture Enable */
#define GPT162_GTICBSR_BSCAFBL            (1 << 10) /* 400: GTIOCA Pin Falling Input during GTIOCB Value Low Source GTCCRB Input Capture Enable */
#define GPT162_GTICBSR_BSCARBH            (1 <<  9) /* 200: GTIOCA Pin Rising Input during GTIOCB Value High Source GTCCRB Input Capture Enable */
#define GPT162_GTICBSR_BSCARBL            (1 <<  8) /* 100: GTIOCA Pin Rising Input during GTIOCB Value Low Source GTCCRB Input Capture Enable */
#define GPT162_GTICBSR_BSGTRGBF           (1 <<  3) /* 08: GTETRGB Pin Falling Input Source GTCCRB Input Capture Enable */
#define GPT162_GTICBSR_BSGTRGBR           (1 <<  2) /* 04: GTETRGB Pin Rising Input Source GTCCRB Input Capture Enable */
#define GPT162_GTICBSR_BSGTRGAF           (1 <<  1) /* 02: GTETRGA Pin Falling Input Source GTCCRB Input Capture Enable */
#define GPT162_GTICBSR_BSGTRGAR           (1 <<  0) /* 01: GTETRGA Pin Rising Input Source GTCCRB Input Capture Enable */
#define GPT162_GTCR_OFFSET                0x002c
#define GPT162_GTCR                       (GPT162_BASE + GPT162_GTCR_OFFSET)
#define GPT162_GTCR_TPCS                  (3 << 24) /* 1000000: Timer Prescaler Select */
#define GPT162_GTCR_TPCS_MASK                  (0x07)
#define GPT162_GTCR_MD                    (3 << 16) /* 10000: Mode Select */
#define GPT162_GTCR_MD_MASK                    (0x07)
#define GPT162_GTCR_CST                   (1 <<  0) /* 01: Count Start */
#define GPT162_GTUDDTYC_OFFSET            0x0030
#define GPT162_GTUDDTYC                   (GPT162_BASE + GPT162_GTUDDTYC_OFFSET)
#define GPT162_GTUDDTYC_OBDTYR            (1 << 27) /* 8000000: GTIOCB Output Value Selecting after Releasing 0 percent/100 percent Duty Setting */
#define GPT162_GTUDDTYC_OBDTYF            (1 << 26) /* 4000000: Forcible GTIOCB Output Duty Setting */
#define GPT162_GTUDDTYC_OBDTY             (2 << 24) /* 1000000: GTIOCB Output Duty Setting */
#define GPT162_GTUDDTYC_OBDTY_MASK             (0x03)
#define GPT162_GTUDDTYC_OADTYR            (1 << 19) /* 80000: GTIOCA Output Value Selecting after Releasing 0 percent/100 percent Duty Setting */
#define GPT162_GTUDDTYC_OADTYF            (1 << 18) /* 40000: Forcible GTIOCA Output Duty Setting */
#define GPT162_GTUDDTYC_OADTY             (2 << 16) /* 10000: GTIOCA Output Duty Setting */
#define GPT162_GTUDDTYC_OADTY_MASK             (0x03)
#define GPT162_GTUDDTYC_UDF               (1 <<  1) /* 02: Forcible Count Direction Setting */
#define GPT162_GTUDDTYC_UD                (1 <<  0) /* 01: Count Direction Setting */
#define GPT162_GTIOR_OFFSET               0x0034
#define GPT162_GTIOR                      (GPT162_BASE + GPT162_GTIOR_OFFSET)
#define GPT162_GTIOR_NFCSB                (2 << 30) /* 40000000: Noise Filter B Sampling Clock Select */
#define GPT162_GTIOR_NFCSB_MASK                (0x03)
#define GPT162_GTIOR_NFBEN                (1 << 29) /* 20000000: Noise Filter B Enable */
#define GPT162_GTIOR_OBDF                 (2 << 25) /* 2000000: GTIOCB Pin Disable Value Setting */
#define GPT162_GTIOR_OBDF_MASK                 (0x03)
#define GPT162_GTIOR_OBE                  (1 << 24) /* 1000000: GTIOCB Pin Output Enable */
#define GPT162_GTIOR_OBHLD                (1 << 23) /* 800000: GTIOCB Pin Output Setting at the Start/Stop Count */
#define GPT162_GTIOR_OBDFLT               (1 << 22) /* 400000: GTIOCB Pin Output Value Setting at the Count Stop */
#define GPT162_GTIOR_GTIOB                (5 << 16) /* 10000: GTIOCB Pin Function Select */
#define GPT162_GTIOR_GTIOB_MASK                (0x1f)
#define GPT162_GTIOR_NFCSA                (2 << 14) /* 4000: Noise Filter A Sampling Clock Select */
#define GPT162_GTIOR_NFCSA_MASK                (0x03)
#define GPT162_GTIOR_NFAEN                (1 << 13) /* 2000: Noise Filter A Enable */
#define GPT162_GTIOR_OADF                 (2 <<  9) /* 200: GTIOCA Pin Disable Value Setting */
#define GPT162_GTIOR_OADF_MASK                 (0x03)
#define GPT162_GTIOR_OAE                  (1 <<  8) /* 100: GTIOCA Pin Output Enable */
#define GPT162_GTIOR_OAHLD                (1 <<  7) /* 80: GTIOCA Pin Output Setting at the Start/Stop Count */
#define GPT162_GTIOR_OADFLT               (1 <<  6) /* 40: GTIOCA Pin Output Value Setting at the Count Stop */
#define GPT162_GTIOR_GTIOA                (5 <<  0) /* 01: GTIOCA Pin Function Select */
#define GPT162_GTIOR_GTIOA_MASK                (0x1f)
#define GPT162_GTINTAD_OFFSET             0x0038
#define GPT162_GTINTAD                    (GPT162_BASE + GPT162_GTINTAD_OFFSET)
#define GPT162_GTINTAD_GRPABL             (1 << 30) /* 40000000: Same Time Output Level Low Disable Request Enable */
#define GPT162_GTINTAD_GRPABH             (1 << 29) /* 20000000: Same Time Output Level High Disable Request Enable */
#define GPT162_GTINTAD_GRP                (2 << 24) /* 1000000: Output Disable Source Select */
#define GPT162_GTINTAD_GRP_MASK                (0x03)
#define GPT162_GTST_OFFSET                0x003c
#define GPT162_GTST                       (GPT162_BASE + GPT162_GTST_OFFSET)
#define GPT162_GTST_OABLF                 (1 << 30) /* 40000000: Same Time Output Level Low Disable Request Enable */
#define GPT162_GTST_OABHF                 (1 << 29) /* 20000000: Same Time Output Level High Disable Request Enable */
#define GPT162_GTST_ODF                   (1 << 24) /* 1000000: Output Disable Flag */
#define GPT162_GTST_TUCF                  (1 << 15) /* 8000: Count Direction Flag */
#define GPT162_GTST_TCFPU                 (1 <<  7) /* 80: Underflow Flag */
#define GPT162_GTST_TCFPO                 (1 <<  6) /* 40: Overflow Flag */
#define GPT162_GTST_TCFF                  (1 <<  5) /* 20: Input Compare Match Flag F */
#define GPT162_GTST_TCFE                  (1 <<  4) /* 10: Input Compare Match Flag E */
#define GPT162_GTST_TCFD                  (1 <<  3) /* 08: Input Compare Match Flag D */
#define GPT162_GTST_TCFC                  (1 <<  2) /* 04: Input Compare Match Flag C */
#define GPT162_GTST_TCFB                  (1 <<  1) /* 02: Input Capture/Compare Match Flag B */
#define GPT162_GTST_TCFA                  (1 <<  0) /* 01: Input Capture/Compare Match Flag A */
#define GPT162_GTBER_OFFSET               0x0040
#define GPT162_GTBER                      (GPT162_BASE + GPT162_GTBER_OFFSET)
#define GPT162_GTBER_CCRSWT               (1 << 22) /* 400000: GTCCRA and GTCCRB Forcible Buffer Operation This bit is read as 0. */
#define GPT162_GTBER_PR                   (2 << 20) /* 100000: GTPR Buffer Operation */
#define GPT162_GTBER_PR_MASK                   (0x03)
#define GPT162_GTBER_CCRB                 (2 << 18) /* 40000: GTCCRB Buffer Operation */
#define GPT162_GTBER_CCRB_MASK                 (0x03)
#define GPT162_GTBER_CCRA                 (2 << 16) /* 10000: GTCCRA Buffer Operation */
#define GPT162_GTBER_CCRA_MASK                 (0x03)
#define GPT162_GTBER_BD                   (2 <<  0) /* 01: BD[1]: GTPR Buffer Operation Disable BD[0]: GTCCR Buffer Operation Disable */
#define GPT162_GTBER_BD_MASK                   (0x03)
#define GPT162_GTCNT_OFFSET               0x0048
#define GPT162_GTCNT                      (GPT162_BASE + GPT162_GTCNT_OFFSET)
#define GPT162_GTCNT_GTCNT                (32 <<  0) /* 01: Counter */
#define GPT162_GTCNT_GTCNT_MASK                (0xffffffff)
#define GPT162_GTCCRA_OFFSET              0x004c
#define GPT162_GTCCRA                     (GPT162_BASE + GPT162_GTCCRA_OFFSET)
#define GPT162_GTCCRA_GTCCRA              (32 <<  0) /* 01: Compare Capture Register A */
#define GPT162_GTCCRA_GTCCRA_MASK              (0xffffffff)
#define GPT162_GTCCRB_OFFSET              0x0050
#define GPT162_GTCCRB                     (GPT162_BASE + GPT162_GTCCRB_OFFSET)
#define GPT162_GTCCRB_GTCCRB              (32 <<  0) /* 01: Compare Capture Register B */
#define GPT162_GTCCRB_GTCCRB_MASK              (0xffffffff)
#define GPT162_GTCCRC_OFFSET              0x0054
#define GPT162_GTCCRC                     (GPT162_BASE + GPT162_GTCCRC_OFFSET)
#define GPT162_GTCCRC_GTCCRC              (32 <<  0) /* 01: Compare Capture Register C */
#define GPT162_GTCCRC_GTCCRC_MASK              (0xffffffff)
#define GPT162_GTCCRE_OFFSET              0x0058
#define GPT162_GTCCRE                     (GPT162_BASE + GPT162_GTCCRE_OFFSET)
#define GPT162_GTCCRE_GTCCRE              (32 <<  0) /* 01: Compare Capture Register E */
#define GPT162_GTCCRE_GTCCRE_MASK              (0xffffffff)
#define GPT162_GTCCRD_OFFSET              0x005c
#define GPT162_GTCCRD                     (GPT162_BASE + GPT162_GTCCRD_OFFSET)
#define GPT162_GTCCRD_GTCCRD              (32 <<  0) /* 01: Compare Capture Register D */
#define GPT162_GTCCRD_GTCCRD_MASK              (0xffffffff)
#define GPT162_GTCCRF_OFFSET              0x0060
#define GPT162_GTCCRF                     (GPT162_BASE + GPT162_GTCCRF_OFFSET)
#define GPT162_GTCCRF_GTCCRF              (32 <<  0) /* 01: Compare Capture Register F */
#define GPT162_GTCCRF_GTCCRF_MASK              (0xffffffff)
#define GPT162_GTPR_OFFSET                0x0064
#define GPT162_GTPR                       (GPT162_BASE + GPT162_GTPR_OFFSET)
#define GPT162_GTPR_GTPR                  (32 <<  0) /* 01: Cycle Setting Register */
#define GPT162_GTPR_GTPR_MASK                  (0xffffffff)
#define GPT162_GTPBR_OFFSET               0x0068
#define GPT162_GTPBR                      (GPT162_BASE + GPT162_GTPBR_OFFSET)
#define GPT162_GTPBR_GTPBR                (32 <<  0) /* 01: Cycle Setting Buffer Register */
#define GPT162_GTPBR_GTPBR_MASK                (0xffffffff)
#define GPT162_GTDTCR_OFFSET              0x0088
#define GPT162_GTDTCR                     (GPT162_BASE + GPT162_GTDTCR_OFFSET)
#define GPT162_GTDTCR_TDE                 (1 <<  0) /* 01: Negative-Phase Waveform Setting */
#define GPT162_GTDVU_OFFSET               0x008c
#define GPT162_GTDVU                      (GPT162_BASE + GPT162_GTDVU_OFFSET)
#define GPT162_GTDVU_GTDVU                (32 <<  0) /* 01: Dead Time Value Register U */
#define GPT162_GTDVU_GTDVU_MASK                (0xffffffff)

/* No registers defined for peripheral GPT163. Using those of GPT162. */
#define GPT163_BASE                       0x40078300
#define GPT163_GTWP_OFFSET                GPT162_GTWP_OFFSET
#define GPT163_GTWP                       GPT162_GTWP
#define GPT163_GTWP_PRKEY                 GPT162_GTWP_PRKEY
#define GPT163_GTWP_PRKEY_MASK            GPT162_GTWP_PRKEY_MASK
#define GPT163_GTWP_WP                    GPT162_GTWP_WP
#define GPT163_GTSTR_OFFSET               GPT162_GTSTR_OFFSET
#define GPT163_GTSTR                      GPT162_GTSTR
#define GPT163_GTSTR_CSTRT7               GPT162_GTSTR_CSTRT7
#define GPT163_GTSTR_CSTRT6               GPT162_GTSTR_CSTRT6
#define GPT163_GTSTR_CSTRT5               GPT162_GTSTR_CSTRT5
#define GPT163_GTSTR_CSTRT4               GPT162_GTSTR_CSTRT4
#define GPT163_GTSTR_CSTRT3               GPT162_GTSTR_CSTRT3
#define GPT163_GTSTR_CSTRT2               GPT162_GTSTR_CSTRT2
#define GPT163_GTSTR_CSTRT1               GPT162_GTSTR_CSTRT1
#define GPT163_GTSTR_CSTRT0               GPT162_GTSTR_CSTRT0
#define GPT163_GTSTP_OFFSET               GPT162_GTSTP_OFFSET
#define GPT163_GTSTP                      GPT162_GTSTP
#define GPT163_GTSTP_CSTOP7               GPT162_GTSTP_CSTOP7
#define GPT163_GTSTP_CSTOP6               GPT162_GTSTP_CSTOP6
#define GPT163_GTSTP_CSTOP5               GPT162_GTSTP_CSTOP5
#define GPT163_GTSTP_CSTOP4               GPT162_GTSTP_CSTOP4
#define GPT163_GTSTP_CSTOP3               GPT162_GTSTP_CSTOP3
#define GPT163_GTSTP_CSTOP2               GPT162_GTSTP_CSTOP2
#define GPT163_GTSTP_CSTOP1               GPT162_GTSTP_CSTOP1
#define GPT163_GTSTP_CSTOP0               GPT162_GTSTP_CSTOP0
#define GPT163_GTCLR_OFFSET               GPT162_GTCLR_OFFSET
#define GPT163_GTCLR                      GPT162_GTCLR
#define GPT163_GTCLR_CCLR7                GPT162_GTCLR_CCLR7
#define GPT163_GTCLR_CCLR6                GPT162_GTCLR_CCLR6
#define GPT163_GTCLR_CCLR5                GPT162_GTCLR_CCLR5
#define GPT163_GTCLR_CCLR4                GPT162_GTCLR_CCLR4
#define GPT163_GTCLR_CCLR3                GPT162_GTCLR_CCLR3
#define GPT163_GTCLR_CCLR2                GPT162_GTCLR_CCLR2
#define GPT163_GTCLR_CCLR1                GPT162_GTCLR_CCLR1
#define GPT163_GTCLR_CCLR0                GPT162_GTCLR_CCLR0
#define GPT163_GTSSR_OFFSET               GPT162_GTSSR_OFFSET
#define GPT163_GTSSR                      GPT162_GTSSR
#define GPT163_GTSSR_CSTRT                GPT162_GTSSR_CSTRT
#define GPT163_GTSSR_SSELCH               GPT162_GTSSR_SSELCH
#define GPT163_GTSSR_SSELCG               GPT162_GTSSR_SSELCG
#define GPT163_GTSSR_SSELCF               GPT162_GTSSR_SSELCF
#define GPT163_GTSSR_SSELCE               GPT162_GTSSR_SSELCE
#define GPT163_GTSSR_SSELCD               GPT162_GTSSR_SSELCD
#define GPT163_GTSSR_SSELCC               GPT162_GTSSR_SSELCC
#define GPT163_GTSSR_SSELCB               GPT162_GTSSR_SSELCB
#define GPT163_GTSSR_SSELCA               GPT162_GTSSR_SSELCA
#define GPT163_GTSSR_SSCBFAH              GPT162_GTSSR_SSCBFAH
#define GPT163_GTSSR_SSCBFAL              GPT162_GTSSR_SSCBFAL
#define GPT163_GTSSR_SSCBRAH              GPT162_GTSSR_SSCBRAH
#define GPT163_GTSSR_SSCBRAL              GPT162_GTSSR_SSCBRAL
#define GPT163_GTSSR_SSCAFBH              GPT162_GTSSR_SSCAFBH
#define GPT163_GTSSR_SSCAFBL              GPT162_GTSSR_SSCAFBL
#define GPT163_GTSSR_SSCARBH              GPT162_GTSSR_SSCARBH
#define GPT163_GTSSR_SSCARBL              GPT162_GTSSR_SSCARBL
#define GPT163_GTSSR_SSGTRGBF             GPT162_GTSSR_SSGTRGBF
#define GPT163_GTSSR_SSGTRGBR             GPT162_GTSSR_SSGTRGBR
#define GPT163_GTSSR_SSGTRGAF             GPT162_GTSSR_SSGTRGAF
#define GPT163_GTSSR_SSGTRGAR             GPT162_GTSSR_SSGTRGAR
#define GPT163_GTPSR_OFFSET               GPT162_GTPSR_OFFSET
#define GPT163_GTPSR                      GPT162_GTPSR
#define GPT163_GTPSR_CSTOP                GPT162_GTPSR_CSTOP
#define GPT163_GTPSR_PSELCH               GPT162_GTPSR_PSELCH
#define GPT163_GTPSR_PSELCG               GPT162_GTPSR_PSELCG
#define GPT163_GTPSR_PSELCF               GPT162_GTPSR_PSELCF
#define GPT163_GTPSR_PSELCE               GPT162_GTPSR_PSELCE
#define GPT163_GTPSR_PSELCD               GPT162_GTPSR_PSELCD
#define GPT163_GTPSR_PSELCC               GPT162_GTPSR_PSELCC
#define GPT163_GTPSR_PSELCB               GPT162_GTPSR_PSELCB
#define GPT163_GTPSR_PSELCA               GPT162_GTPSR_PSELCA
#define GPT163_GTPSR_PSCBFAH              GPT162_GTPSR_PSCBFAH
#define GPT163_GTPSR_PSCBFAL              GPT162_GTPSR_PSCBFAL
#define GPT163_GTPSR_PSCBRAH              GPT162_GTPSR_PSCBRAH
#define GPT163_GTPSR_PSCBRAL              GPT162_GTPSR_PSCBRAL
#define GPT163_GTPSR_PSCAFBH              GPT162_GTPSR_PSCAFBH
#define GPT163_GTPSR_PSCAFBL              GPT162_GTPSR_PSCAFBL
#define GPT163_GTPSR_PSCARBH              GPT162_GTPSR_PSCARBH
#define GPT163_GTPSR_PSCARBL              GPT162_GTPSR_PSCARBL
#define GPT163_GTPSR_PSGTRGBF             GPT162_GTPSR_PSGTRGBF
#define GPT163_GTPSR_PSGTRGBR             GPT162_GTPSR_PSGTRGBR
#define GPT163_GTPSR_PSGTRGAF             GPT162_GTPSR_PSGTRGAF
#define GPT163_GTPSR_PSGTRGAR             GPT162_GTPSR_PSGTRGAR
#define GPT163_GTCSR_OFFSET               GPT162_GTCSR_OFFSET
#define GPT163_GTCSR                      GPT162_GTCSR
#define GPT163_GTCSR_CCLR                 GPT162_GTCSR_CCLR
#define GPT163_GTCSR_CSELCH               GPT162_GTCSR_CSELCH
#define GPT163_GTCSR_CSELCG               GPT162_GTCSR_CSELCG
#define GPT163_GTCSR_CSELCF               GPT162_GTCSR_CSELCF
#define GPT163_GTCSR_CSELCE               GPT162_GTCSR_CSELCE
#define GPT163_GTCSR_CSELCD               GPT162_GTCSR_CSELCD
#define GPT163_GTCSR_CSELCC               GPT162_GTCSR_CSELCC
#define GPT163_GTCSR_CSELCB               GPT162_GTCSR_CSELCB
#define GPT163_GTCSR_CSELCA               GPT162_GTCSR_CSELCA
#define GPT163_GTCSR_CSCBFAH              GPT162_GTCSR_CSCBFAH
#define GPT163_GTCSR_CSCBFAL              GPT162_GTCSR_CSCBFAL
#define GPT163_GTCSR_CSCBRAH              GPT162_GTCSR_CSCBRAH
#define GPT163_GTCSR_CSCBRAL              GPT162_GTCSR_CSCBRAL
#define GPT163_GTCSR_CSCAFBH              GPT162_GTCSR_CSCAFBH
#define GPT163_GTCSR_CSCAFBL              GPT162_GTCSR_CSCAFBL
#define GPT163_GTCSR_CSCARBH              GPT162_GTCSR_CSCARBH
#define GPT163_GTCSR_CSCARBL              GPT162_GTCSR_CSCARBL
#define GPT163_GTCSR_CSGTRGBF             GPT162_GTCSR_CSGTRGBF
#define GPT163_GTCSR_CSGTRGBR             GPT162_GTCSR_CSGTRGBR
#define GPT163_GTCSR_CSGTRGAF             GPT162_GTCSR_CSGTRGAF
#define GPT163_GTCSR_CSGTRGAR             GPT162_GTCSR_CSGTRGAR
#define GPT163_GTUPSR_OFFSET              GPT162_GTUPSR_OFFSET
#define GPT163_GTUPSR                     GPT162_GTUPSR
#define GPT163_GTUPSR_USELCH              GPT162_GTUPSR_USELCH
#define GPT163_GTUPSR_USELCG              GPT162_GTUPSR_USELCG
#define GPT163_GTUPSR_USELCF              GPT162_GTUPSR_USELCF
#define GPT163_GTUPSR_USELCE              GPT162_GTUPSR_USELCE
#define GPT163_GTUPSR_USELCD              GPT162_GTUPSR_USELCD
#define GPT163_GTUPSR_USELCC              GPT162_GTUPSR_USELCC
#define GPT163_GTUPSR_USELCB              GPT162_GTUPSR_USELCB
#define GPT163_GTUPSR_USELCA              GPT162_GTUPSR_USELCA
#define GPT163_GTUPSR_USCBFAH             GPT162_GTUPSR_USCBFAH
#define GPT163_GTUPSR_USCBFAL             GPT162_GTUPSR_USCBFAL
#define GPT163_GTUPSR_USCBRAH             GPT162_GTUPSR_USCBRAH
#define GPT163_GTUPSR_USCBRAL             GPT162_GTUPSR_USCBRAL
#define GPT163_GTUPSR_USCAFBH             GPT162_GTUPSR_USCAFBH
#define GPT163_GTUPSR_USCAFBL             GPT162_GTUPSR_USCAFBL
#define GPT163_GTUPSR_USCARBH             GPT162_GTUPSR_USCARBH
#define GPT163_GTUPSR_USCARBL             GPT162_GTUPSR_USCARBL
#define GPT163_GTUPSR_USGTRGBF            GPT162_GTUPSR_USGTRGBF
#define GPT163_GTUPSR_USGTRGBR            GPT162_GTUPSR_USGTRGBR
#define GPT163_GTUPSR_USGTRGAF            GPT162_GTUPSR_USGTRGAF
#define GPT163_GTUPSR_USGTRGAR            GPT162_GTUPSR_USGTRGAR
#define GPT163_GTDNSR_OFFSET              GPT162_GTDNSR_OFFSET
#define GPT163_GTDNSR                     GPT162_GTDNSR
#define GPT163_GTDNSR_DSELCH              GPT162_GTDNSR_DSELCH
#define GPT163_GTDNSR_DSELCG              GPT162_GTDNSR_DSELCG
#define GPT163_GTDNSR_DSELCF              GPT162_GTDNSR_DSELCF
#define GPT163_GTDNSR_DSELCE              GPT162_GTDNSR_DSELCE
#define GPT163_GTDNSR_DSELCD              GPT162_GTDNSR_DSELCD
#define GPT163_GTDNSR_DSELCC              GPT162_GTDNSR_DSELCC
#define GPT163_GTDNSR_DSELCB              GPT162_GTDNSR_DSELCB
#define GPT163_GTDNSR_DSELCA              GPT162_GTDNSR_DSELCA
#define GPT163_GTDNSR_DSCBFAH             GPT162_GTDNSR_DSCBFAH
#define GPT163_GTDNSR_DSCBFAL             GPT162_GTDNSR_DSCBFAL
#define GPT163_GTDNSR_DSCBRAH             GPT162_GTDNSR_DSCBRAH
#define GPT163_GTDNSR_DSCBRAL             GPT162_GTDNSR_DSCBRAL
#define GPT163_GTDNSR_DSCAFBH             GPT162_GTDNSR_DSCAFBH
#define GPT163_GTDNSR_DSCAFBL             GPT162_GTDNSR_DSCAFBL
#define GPT163_GTDNSR_DSCARBH             GPT162_GTDNSR_DSCARBH
#define GPT163_GTDNSR_DSCARBL             GPT162_GTDNSR_DSCARBL
#define GPT163_GTDNSR_DSGTRGBF            GPT162_GTDNSR_DSGTRGBF
#define GPT163_GTDNSR_DSGTRGBR            GPT162_GTDNSR_DSGTRGBR
#define GPT163_GTDNSR_DSGTRGAF            GPT162_GTDNSR_DSGTRGAF
#define GPT163_GTDNSR_DSGTRGAR            GPT162_GTDNSR_DSGTRGAR
#define GPT163_GTICASR_OFFSET             GPT162_GTICASR_OFFSET
#define GPT163_GTICASR                    GPT162_GTICASR
#define GPT163_GTICASR_ASELCH             GPT162_GTICASR_ASELCH
#define GPT163_GTICASR_ASELCG             GPT162_GTICASR_ASELCG
#define GPT163_GTICASR_ASELCF             GPT162_GTICASR_ASELCF
#define GPT163_GTICASR_ASELCE             GPT162_GTICASR_ASELCE
#define GPT163_GTICASR_ASELCD             GPT162_GTICASR_ASELCD
#define GPT163_GTICASR_ASELCC             GPT162_GTICASR_ASELCC
#define GPT163_GTICASR_ASELCB             GPT162_GTICASR_ASELCB
#define GPT163_GTICASR_ASELCA             GPT162_GTICASR_ASELCA
#define GPT163_GTICASR_ASCBFAH            GPT162_GTICASR_ASCBFAH
#define GPT163_GTICASR_ASCBFAL            GPT162_GTICASR_ASCBFAL
#define GPT163_GTICASR_ASCBRAH            GPT162_GTICASR_ASCBRAH
#define GPT163_GTICASR_ASCBRAL            GPT162_GTICASR_ASCBRAL
#define GPT163_GTICASR_ASCAFBH            GPT162_GTICASR_ASCAFBH
#define GPT163_GTICASR_ASCAFBL            GPT162_GTICASR_ASCAFBL
#define GPT163_GTICASR_ASCARBH            GPT162_GTICASR_ASCARBH
#define GPT163_GTICASR_ASCARBL            GPT162_GTICASR_ASCARBL
#define GPT163_GTICASR_ASGTRGBF           GPT162_GTICASR_ASGTRGBF
#define GPT163_GTICASR_ASGTRGBR           GPT162_GTICASR_ASGTRGBR
#define GPT163_GTICASR_ASGTRGAF           GPT162_GTICASR_ASGTRGAF
#define GPT163_GTICASR_ASGTRGAR           GPT162_GTICASR_ASGTRGAR
#define GPT163_GTICBSR_OFFSET             GPT162_GTICBSR_OFFSET
#define GPT163_GTICBSR                    GPT162_GTICBSR
#define GPT163_GTICBSR_BSELCH             GPT162_GTICBSR_BSELCH
#define GPT163_GTICBSR_BSELCG             GPT162_GTICBSR_BSELCG
#define GPT163_GTICBSR_BSELCF             GPT162_GTICBSR_BSELCF
#define GPT163_GTICBSR_BSELCE             GPT162_GTICBSR_BSELCE
#define GPT163_GTICBSR_BSELCD             GPT162_GTICBSR_BSELCD
#define GPT163_GTICBSR_BSELCC             GPT162_GTICBSR_BSELCC
#define GPT163_GTICBSR_BSELCB             GPT162_GTICBSR_BSELCB
#define GPT163_GTICBSR_BSELCA             GPT162_GTICBSR_BSELCA
#define GPT163_GTICBSR_BSCBFAH            GPT162_GTICBSR_BSCBFAH
#define GPT163_GTICBSR_BSCBFAL            GPT162_GTICBSR_BSCBFAL
#define GPT163_GTICBSR_BSCBRAH            GPT162_GTICBSR_BSCBRAH
#define GPT163_GTICBSR_BSCBRAL            GPT162_GTICBSR_BSCBRAL
#define GPT163_GTICBSR_BSCAFBH            GPT162_GTICBSR_BSCAFBH
#define GPT163_GTICBSR_BSCAFBL            GPT162_GTICBSR_BSCAFBL
#define GPT163_GTICBSR_BSCARBH            GPT162_GTICBSR_BSCARBH
#define GPT163_GTICBSR_BSCARBL            GPT162_GTICBSR_BSCARBL
#define GPT163_GTICBSR_BSGTRGBF           GPT162_GTICBSR_BSGTRGBF
#define GPT163_GTICBSR_BSGTRGBR           GPT162_GTICBSR_BSGTRGBR
#define GPT163_GTICBSR_BSGTRGAF           GPT162_GTICBSR_BSGTRGAF
#define GPT163_GTICBSR_BSGTRGAR           GPT162_GTICBSR_BSGTRGAR
#define GPT163_GTCR_OFFSET                GPT162_GTCR_OFFSET
#define GPT163_GTCR                       GPT162_GTCR
#define GPT163_GTCR_TPCS                  GPT162_GTCR_TPCS
#define GPT163_GTCR_TPCS_MASK             GPT162_GTCR_TPCS_MASK
#define GPT163_GTCR_MD                    GPT162_GTCR_MD
#define GPT163_GTCR_MD_MASK               GPT162_GTCR_MD_MASK
#define GPT163_GTCR_CST                   GPT162_GTCR_CST
#define GPT163_GTUDDTYC_OFFSET            GPT162_GTUDDTYC_OFFSET
#define GPT163_GTUDDTYC                   GPT162_GTUDDTYC
#define GPT163_GTUDDTYC_OBDTYR            GPT162_GTUDDTYC_OBDTYR
#define GPT163_GTUDDTYC_OBDTYF            GPT162_GTUDDTYC_OBDTYF
#define GPT163_GTUDDTYC_OBDTY             GPT162_GTUDDTYC_OBDTY
#define GPT163_GTUDDTYC_OBDTY_MASK        GPT162_GTUDDTYC_OBDTY_MASK
#define GPT163_GTUDDTYC_OADTYR            GPT162_GTUDDTYC_OADTYR
#define GPT163_GTUDDTYC_OADTYF            GPT162_GTUDDTYC_OADTYF
#define GPT163_GTUDDTYC_OADTY             GPT162_GTUDDTYC_OADTY
#define GPT163_GTUDDTYC_OADTY_MASK        GPT162_GTUDDTYC_OADTY_MASK
#define GPT163_GTUDDTYC_UDF               GPT162_GTUDDTYC_UDF
#define GPT163_GTUDDTYC_UD                GPT162_GTUDDTYC_UD
#define GPT163_GTIOR_OFFSET               GPT162_GTIOR_OFFSET
#define GPT163_GTIOR                      GPT162_GTIOR
#define GPT163_GTIOR_NFCSB                GPT162_GTIOR_NFCSB
#define GPT163_GTIOR_NFCSB_MASK           GPT162_GTIOR_NFCSB_MASK
#define GPT163_GTIOR_NFBEN                GPT162_GTIOR_NFBEN
#define GPT163_GTIOR_OBDF                 GPT162_GTIOR_OBDF
#define GPT163_GTIOR_OBDF_MASK            GPT162_GTIOR_OBDF_MASK
#define GPT163_GTIOR_OBE                  GPT162_GTIOR_OBE
#define GPT163_GTIOR_OBHLD                GPT162_GTIOR_OBHLD
#define GPT163_GTIOR_OBDFLT               GPT162_GTIOR_OBDFLT
#define GPT163_GTIOR_GTIOB                GPT162_GTIOR_GTIOB
#define GPT163_GTIOR_GTIOB_MASK           GPT162_GTIOR_GTIOB_MASK
#define GPT163_GTIOR_NFCSA                GPT162_GTIOR_NFCSA
#define GPT163_GTIOR_NFCSA_MASK           GPT162_GTIOR_NFCSA_MASK
#define GPT163_GTIOR_NFAEN                GPT162_GTIOR_NFAEN
#define GPT163_GTIOR_OADF                 GPT162_GTIOR_OADF
#define GPT163_GTIOR_OADF_MASK            GPT162_GTIOR_OADF_MASK
#define GPT163_GTIOR_OAE                  GPT162_GTIOR_OAE
#define GPT163_GTIOR_OAHLD                GPT162_GTIOR_OAHLD
#define GPT163_GTIOR_OADFLT               GPT162_GTIOR_OADFLT
#define GPT163_GTIOR_GTIOA                GPT162_GTIOR_GTIOA
#define GPT163_GTIOR_GTIOA_MASK           GPT162_GTIOR_GTIOA_MASK
#define GPT163_GTINTAD_OFFSET             GPT162_GTINTAD_OFFSET
#define GPT163_GTINTAD                    GPT162_GTINTAD
#define GPT163_GTINTAD_GRPABL             GPT162_GTINTAD_GRPABL
#define GPT163_GTINTAD_GRPABH             GPT162_GTINTAD_GRPABH
#define GPT163_GTINTAD_GRP                GPT162_GTINTAD_GRP
#define GPT163_GTINTAD_GRP_MASK           GPT162_GTINTAD_GRP_MASK
#define GPT163_GTST_OFFSET                GPT162_GTST_OFFSET
#define GPT163_GTST                       GPT162_GTST
#define GPT163_GTST_OABLF                 GPT162_GTST_OABLF
#define GPT163_GTST_OABHF                 GPT162_GTST_OABHF
#define GPT163_GTST_ODF                   GPT162_GTST_ODF
#define GPT163_GTST_TUCF                  GPT162_GTST_TUCF
#define GPT163_GTST_TCFPU                 GPT162_GTST_TCFPU
#define GPT163_GTST_TCFPO                 GPT162_GTST_TCFPO
#define GPT163_GTST_TCFF                  GPT162_GTST_TCFF
#define GPT163_GTST_TCFE                  GPT162_GTST_TCFE
#define GPT163_GTST_TCFD                  GPT162_GTST_TCFD
#define GPT163_GTST_TCFC                  GPT162_GTST_TCFC
#define GPT163_GTST_TCFB                  GPT162_GTST_TCFB
#define GPT163_GTST_TCFA                  GPT162_GTST_TCFA
#define GPT163_GTBER_OFFSET               GPT162_GTBER_OFFSET
#define GPT163_GTBER                      GPT162_GTBER
#define GPT163_GTBER_CCRSWT               GPT162_GTBER_CCRSWT
#define GPT163_GTBER_PR                   GPT162_GTBER_PR
#define GPT163_GTBER_PR_MASK              GPT162_GTBER_PR_MASK
#define GPT163_GTBER_CCRB                 GPT162_GTBER_CCRB
#define GPT163_GTBER_CCRB_MASK            GPT162_GTBER_CCRB_MASK
#define GPT163_GTBER_CCRA                 GPT162_GTBER_CCRA
#define GPT163_GTBER_CCRA_MASK            GPT162_GTBER_CCRA_MASK
#define GPT163_GTBER_BD                   GPT162_GTBER_BD
#define GPT163_GTBER_BD_MASK              GPT162_GTBER_BD_MASK
#define GPT163_GTCNT_OFFSET               GPT162_GTCNT_OFFSET
#define GPT163_GTCNT                      GPT162_GTCNT
#define GPT163_GTCNT_GTCNT                GPT162_GTCNT_GTCNT
#define GPT163_GTCNT_GTCNT_MASK           GPT162_GTCNT_GTCNT_MASK
#define GPT163_GTCCRA_OFFSET              GPT162_GTCCRA_OFFSET
#define GPT163_GTCCRA                     GPT162_GTCCRA
#define GPT163_GTCCRA_GTCCRA              GPT162_GTCCRA_GTCCRA
#define GPT163_GTCCRA_GTCCRA_MASK         GPT162_GTCCRA_GTCCRA_MASK
#define GPT163_GTCCRB_OFFSET              GPT162_GTCCRB_OFFSET
#define GPT163_GTCCRB                     GPT162_GTCCRB
#define GPT163_GTCCRB_GTCCRB              GPT162_GTCCRB_GTCCRB
#define GPT163_GTCCRB_GTCCRB_MASK         GPT162_GTCCRB_GTCCRB_MASK
#define GPT163_GTCCRC_OFFSET              GPT162_GTCCRC_OFFSET
#define GPT163_GTCCRC                     GPT162_GTCCRC
#define GPT163_GTCCRC_GTCCRC              GPT162_GTCCRC_GTCCRC
#define GPT163_GTCCRC_GTCCRC_MASK         GPT162_GTCCRC_GTCCRC_MASK
#define GPT163_GTCCRE_OFFSET              GPT162_GTCCRE_OFFSET
#define GPT163_GTCCRE                     GPT162_GTCCRE
#define GPT163_GTCCRE_GTCCRE              GPT162_GTCCRE_GTCCRE
#define GPT163_GTCCRE_GTCCRE_MASK         GPT162_GTCCRE_GTCCRE_MASK
#define GPT163_GTCCRD_OFFSET              GPT162_GTCCRD_OFFSET
#define GPT163_GTCCRD                     GPT162_GTCCRD
#define GPT163_GTCCRD_GTCCRD              GPT162_GTCCRD_GTCCRD
#define GPT163_GTCCRD_GTCCRD_MASK         GPT162_GTCCRD_GTCCRD_MASK
#define GPT163_GTCCRF_OFFSET              GPT162_GTCCRF_OFFSET
#define GPT163_GTCCRF                     GPT162_GTCCRF
#define GPT163_GTCCRF_GTCCRF              GPT162_GTCCRF_GTCCRF
#define GPT163_GTCCRF_GTCCRF_MASK         GPT162_GTCCRF_GTCCRF_MASK
#define GPT163_GTPR_OFFSET                GPT162_GTPR_OFFSET
#define GPT163_GTPR                       GPT162_GTPR
#define GPT163_GTPR_GTPR                  GPT162_GTPR_GTPR
#define GPT163_GTPR_GTPR_MASK             GPT162_GTPR_GTPR_MASK
#define GPT163_GTPBR_OFFSET               GPT162_GTPBR_OFFSET
#define GPT163_GTPBR                      GPT162_GTPBR
#define GPT163_GTPBR_GTPBR                GPT162_GTPBR_GTPBR
#define GPT163_GTPBR_GTPBR_MASK           GPT162_GTPBR_GTPBR_MASK
#define GPT163_GTDTCR_OFFSET              GPT162_GTDTCR_OFFSET
#define GPT163_GTDTCR                     GPT162_GTDTCR
#define GPT163_GTDTCR_TDE                 GPT162_GTDTCR_TDE
#define GPT163_GTDVU_OFFSET               GPT162_GTDVU_OFFSET
#define GPT163_GTDVU                      GPT162_GTDVU
#define GPT163_GTDVU_GTDVU                GPT162_GTDVU_GTDVU
#define GPT163_GTDVU_GTDVU_MASK           GPT162_GTDVU_GTDVU_MASK

/* No registers defined for peripheral GPT164. Using those of GPT162. */
#define GPT164_BASE                       0x40078400
#define GPT164_GTWP_OFFSET                GPT162_GTWP_OFFSET
#define GPT164_GTWP                       GPT162_GTWP
#define GPT164_GTWP_PRKEY                 GPT162_GTWP_PRKEY
#define GPT164_GTWP_PRKEY_MASK            GPT162_GTWP_PRKEY_MASK
#define GPT164_GTWP_WP                    GPT162_GTWP_WP
#define GPT164_GTSTR_OFFSET               GPT162_GTSTR_OFFSET
#define GPT164_GTSTR                      GPT162_GTSTR
#define GPT164_GTSTR_CSTRT7               GPT162_GTSTR_CSTRT7
#define GPT164_GTSTR_CSTRT6               GPT162_GTSTR_CSTRT6
#define GPT164_GTSTR_CSTRT5               GPT162_GTSTR_CSTRT5
#define GPT164_GTSTR_CSTRT4               GPT162_GTSTR_CSTRT4
#define GPT164_GTSTR_CSTRT3               GPT162_GTSTR_CSTRT3
#define GPT164_GTSTR_CSTRT2               GPT162_GTSTR_CSTRT2
#define GPT164_GTSTR_CSTRT1               GPT162_GTSTR_CSTRT1
#define GPT164_GTSTR_CSTRT0               GPT162_GTSTR_CSTRT0
#define GPT164_GTSTP_OFFSET               GPT162_GTSTP_OFFSET
#define GPT164_GTSTP                      GPT162_GTSTP
#define GPT164_GTSTP_CSTOP7               GPT162_GTSTP_CSTOP7
#define GPT164_GTSTP_CSTOP6               GPT162_GTSTP_CSTOP6
#define GPT164_GTSTP_CSTOP5               GPT162_GTSTP_CSTOP5
#define GPT164_GTSTP_CSTOP4               GPT162_GTSTP_CSTOP4
#define GPT164_GTSTP_CSTOP3               GPT162_GTSTP_CSTOP3
#define GPT164_GTSTP_CSTOP2               GPT162_GTSTP_CSTOP2
#define GPT164_GTSTP_CSTOP1               GPT162_GTSTP_CSTOP1
#define GPT164_GTSTP_CSTOP0               GPT162_GTSTP_CSTOP0
#define GPT164_GTCLR_OFFSET               GPT162_GTCLR_OFFSET
#define GPT164_GTCLR                      GPT162_GTCLR
#define GPT164_GTCLR_CCLR7                GPT162_GTCLR_CCLR7
#define GPT164_GTCLR_CCLR6                GPT162_GTCLR_CCLR6
#define GPT164_GTCLR_CCLR5                GPT162_GTCLR_CCLR5
#define GPT164_GTCLR_CCLR4                GPT162_GTCLR_CCLR4
#define GPT164_GTCLR_CCLR3                GPT162_GTCLR_CCLR3
#define GPT164_GTCLR_CCLR2                GPT162_GTCLR_CCLR2
#define GPT164_GTCLR_CCLR1                GPT162_GTCLR_CCLR1
#define GPT164_GTCLR_CCLR0                GPT162_GTCLR_CCLR0
#define GPT164_GTSSR_OFFSET               GPT162_GTSSR_OFFSET
#define GPT164_GTSSR                      GPT162_GTSSR
#define GPT164_GTSSR_CSTRT                GPT162_GTSSR_CSTRT
#define GPT164_GTSSR_SSELCH               GPT162_GTSSR_SSELCH
#define GPT164_GTSSR_SSELCG               GPT162_GTSSR_SSELCG
#define GPT164_GTSSR_SSELCF               GPT162_GTSSR_SSELCF
#define GPT164_GTSSR_SSELCE               GPT162_GTSSR_SSELCE
#define GPT164_GTSSR_SSELCD               GPT162_GTSSR_SSELCD
#define GPT164_GTSSR_SSELCC               GPT162_GTSSR_SSELCC
#define GPT164_GTSSR_SSELCB               GPT162_GTSSR_SSELCB
#define GPT164_GTSSR_SSELCA               GPT162_GTSSR_SSELCA
#define GPT164_GTSSR_SSCBFAH              GPT162_GTSSR_SSCBFAH
#define GPT164_GTSSR_SSCBFAL              GPT162_GTSSR_SSCBFAL
#define GPT164_GTSSR_SSCBRAH              GPT162_GTSSR_SSCBRAH
#define GPT164_GTSSR_SSCBRAL              GPT162_GTSSR_SSCBRAL
#define GPT164_GTSSR_SSCAFBH              GPT162_GTSSR_SSCAFBH
#define GPT164_GTSSR_SSCAFBL              GPT162_GTSSR_SSCAFBL
#define GPT164_GTSSR_SSCARBH              GPT162_GTSSR_SSCARBH
#define GPT164_GTSSR_SSCARBL              GPT162_GTSSR_SSCARBL
#define GPT164_GTSSR_SSGTRGBF             GPT162_GTSSR_SSGTRGBF
#define GPT164_GTSSR_SSGTRGBR             GPT162_GTSSR_SSGTRGBR
#define GPT164_GTSSR_SSGTRGAF             GPT162_GTSSR_SSGTRGAF
#define GPT164_GTSSR_SSGTRGAR             GPT162_GTSSR_SSGTRGAR
#define GPT164_GTPSR_OFFSET               GPT162_GTPSR_OFFSET
#define GPT164_GTPSR                      GPT162_GTPSR
#define GPT164_GTPSR_CSTOP                GPT162_GTPSR_CSTOP
#define GPT164_GTPSR_PSELCH               GPT162_GTPSR_PSELCH
#define GPT164_GTPSR_PSELCG               GPT162_GTPSR_PSELCG
#define GPT164_GTPSR_PSELCF               GPT162_GTPSR_PSELCF
#define GPT164_GTPSR_PSELCE               GPT162_GTPSR_PSELCE
#define GPT164_GTPSR_PSELCD               GPT162_GTPSR_PSELCD
#define GPT164_GTPSR_PSELCC               GPT162_GTPSR_PSELCC
#define GPT164_GTPSR_PSELCB               GPT162_GTPSR_PSELCB
#define GPT164_GTPSR_PSELCA               GPT162_GTPSR_PSELCA
#define GPT164_GTPSR_PSCBFAH              GPT162_GTPSR_PSCBFAH
#define GPT164_GTPSR_PSCBFAL              GPT162_GTPSR_PSCBFAL
#define GPT164_GTPSR_PSCBRAH              GPT162_GTPSR_PSCBRAH
#define GPT164_GTPSR_PSCBRAL              GPT162_GTPSR_PSCBRAL
#define GPT164_GTPSR_PSCAFBH              GPT162_GTPSR_PSCAFBH
#define GPT164_GTPSR_PSCAFBL              GPT162_GTPSR_PSCAFBL
#define GPT164_GTPSR_PSCARBH              GPT162_GTPSR_PSCARBH
#define GPT164_GTPSR_PSCARBL              GPT162_GTPSR_PSCARBL
#define GPT164_GTPSR_PSGTRGBF             GPT162_GTPSR_PSGTRGBF
#define GPT164_GTPSR_PSGTRGBR             GPT162_GTPSR_PSGTRGBR
#define GPT164_GTPSR_PSGTRGAF             GPT162_GTPSR_PSGTRGAF
#define GPT164_GTPSR_PSGTRGAR             GPT162_GTPSR_PSGTRGAR
#define GPT164_GTCSR_OFFSET               GPT162_GTCSR_OFFSET
#define GPT164_GTCSR                      GPT162_GTCSR
#define GPT164_GTCSR_CCLR                 GPT162_GTCSR_CCLR
#define GPT164_GTCSR_CSELCH               GPT162_GTCSR_CSELCH
#define GPT164_GTCSR_CSELCG               GPT162_GTCSR_CSELCG
#define GPT164_GTCSR_CSELCF               GPT162_GTCSR_CSELCF
#define GPT164_GTCSR_CSELCE               GPT162_GTCSR_CSELCE
#define GPT164_GTCSR_CSELCD               GPT162_GTCSR_CSELCD
#define GPT164_GTCSR_CSELCC               GPT162_GTCSR_CSELCC
#define GPT164_GTCSR_CSELCB               GPT162_GTCSR_CSELCB
#define GPT164_GTCSR_CSELCA               GPT162_GTCSR_CSELCA
#define GPT164_GTCSR_CSCBFAH              GPT162_GTCSR_CSCBFAH
#define GPT164_GTCSR_CSCBFAL              GPT162_GTCSR_CSCBFAL
#define GPT164_GTCSR_CSCBRAH              GPT162_GTCSR_CSCBRAH
#define GPT164_GTCSR_CSCBRAL              GPT162_GTCSR_CSCBRAL
#define GPT164_GTCSR_CSCAFBH              GPT162_GTCSR_CSCAFBH
#define GPT164_GTCSR_CSCAFBL              GPT162_GTCSR_CSCAFBL
#define GPT164_GTCSR_CSCARBH              GPT162_GTCSR_CSCARBH
#define GPT164_GTCSR_CSCARBL              GPT162_GTCSR_CSCARBL
#define GPT164_GTCSR_CSGTRGBF             GPT162_GTCSR_CSGTRGBF
#define GPT164_GTCSR_CSGTRGBR             GPT162_GTCSR_CSGTRGBR
#define GPT164_GTCSR_CSGTRGAF             GPT162_GTCSR_CSGTRGAF
#define GPT164_GTCSR_CSGTRGAR             GPT162_GTCSR_CSGTRGAR
#define GPT164_GTUPSR_OFFSET              GPT162_GTUPSR_OFFSET
#define GPT164_GTUPSR                     GPT162_GTUPSR
#define GPT164_GTUPSR_USELCH              GPT162_GTUPSR_USELCH
#define GPT164_GTUPSR_USELCG              GPT162_GTUPSR_USELCG
#define GPT164_GTUPSR_USELCF              GPT162_GTUPSR_USELCF
#define GPT164_GTUPSR_USELCE              GPT162_GTUPSR_USELCE
#define GPT164_GTUPSR_USELCD              GPT162_GTUPSR_USELCD
#define GPT164_GTUPSR_USELCC              GPT162_GTUPSR_USELCC
#define GPT164_GTUPSR_USELCB              GPT162_GTUPSR_USELCB
#define GPT164_GTUPSR_USELCA              GPT162_GTUPSR_USELCA
#define GPT164_GTUPSR_USCBFAH             GPT162_GTUPSR_USCBFAH
#define GPT164_GTUPSR_USCBFAL             GPT162_GTUPSR_USCBFAL
#define GPT164_GTUPSR_USCBRAH             GPT162_GTUPSR_USCBRAH
#define GPT164_GTUPSR_USCBRAL             GPT162_GTUPSR_USCBRAL
#define GPT164_GTUPSR_USCAFBH             GPT162_GTUPSR_USCAFBH
#define GPT164_GTUPSR_USCAFBL             GPT162_GTUPSR_USCAFBL
#define GPT164_GTUPSR_USCARBH             GPT162_GTUPSR_USCARBH
#define GPT164_GTUPSR_USCARBL             GPT162_GTUPSR_USCARBL
#define GPT164_GTUPSR_USGTRGBF            GPT162_GTUPSR_USGTRGBF
#define GPT164_GTUPSR_USGTRGBR            GPT162_GTUPSR_USGTRGBR
#define GPT164_GTUPSR_USGTRGAF            GPT162_GTUPSR_USGTRGAF
#define GPT164_GTUPSR_USGTRGAR            GPT162_GTUPSR_USGTRGAR
#define GPT164_GTDNSR_OFFSET              GPT162_GTDNSR_OFFSET
#define GPT164_GTDNSR                     GPT162_GTDNSR
#define GPT164_GTDNSR_DSELCH              GPT162_GTDNSR_DSELCH
#define GPT164_GTDNSR_DSELCG              GPT162_GTDNSR_DSELCG
#define GPT164_GTDNSR_DSELCF              GPT162_GTDNSR_DSELCF
#define GPT164_GTDNSR_DSELCE              GPT162_GTDNSR_DSELCE
#define GPT164_GTDNSR_DSELCD              GPT162_GTDNSR_DSELCD
#define GPT164_GTDNSR_DSELCC              GPT162_GTDNSR_DSELCC
#define GPT164_GTDNSR_DSELCB              GPT162_GTDNSR_DSELCB
#define GPT164_GTDNSR_DSELCA              GPT162_GTDNSR_DSELCA
#define GPT164_GTDNSR_DSCBFAH             GPT162_GTDNSR_DSCBFAH
#define GPT164_GTDNSR_DSCBFAL             GPT162_GTDNSR_DSCBFAL
#define GPT164_GTDNSR_DSCBRAH             GPT162_GTDNSR_DSCBRAH
#define GPT164_GTDNSR_DSCBRAL             GPT162_GTDNSR_DSCBRAL
#define GPT164_GTDNSR_DSCAFBH             GPT162_GTDNSR_DSCAFBH
#define GPT164_GTDNSR_DSCAFBL             GPT162_GTDNSR_DSCAFBL
#define GPT164_GTDNSR_DSCARBH             GPT162_GTDNSR_DSCARBH
#define GPT164_GTDNSR_DSCARBL             GPT162_GTDNSR_DSCARBL
#define GPT164_GTDNSR_DSGTRGBF            GPT162_GTDNSR_DSGTRGBF
#define GPT164_GTDNSR_DSGTRGBR            GPT162_GTDNSR_DSGTRGBR
#define GPT164_GTDNSR_DSGTRGAF            GPT162_GTDNSR_DSGTRGAF
#define GPT164_GTDNSR_DSGTRGAR            GPT162_GTDNSR_DSGTRGAR
#define GPT164_GTICASR_OFFSET             GPT162_GTICASR_OFFSET
#define GPT164_GTICASR                    GPT162_GTICASR
#define GPT164_GTICASR_ASELCH             GPT162_GTICASR_ASELCH
#define GPT164_GTICASR_ASELCG             GPT162_GTICASR_ASELCG
#define GPT164_GTICASR_ASELCF             GPT162_GTICASR_ASELCF
#define GPT164_GTICASR_ASELCE             GPT162_GTICASR_ASELCE
#define GPT164_GTICASR_ASELCD             GPT162_GTICASR_ASELCD
#define GPT164_GTICASR_ASELCC             GPT162_GTICASR_ASELCC
#define GPT164_GTICASR_ASELCB             GPT162_GTICASR_ASELCB
#define GPT164_GTICASR_ASELCA             GPT162_GTICASR_ASELCA
#define GPT164_GTICASR_ASCBFAH            GPT162_GTICASR_ASCBFAH
#define GPT164_GTICASR_ASCBFAL            GPT162_GTICASR_ASCBFAL
#define GPT164_GTICASR_ASCBRAH            GPT162_GTICASR_ASCBRAH
#define GPT164_GTICASR_ASCBRAL            GPT162_GTICASR_ASCBRAL
#define GPT164_GTICASR_ASCAFBH            GPT162_GTICASR_ASCAFBH
#define GPT164_GTICASR_ASCAFBL            GPT162_GTICASR_ASCAFBL
#define GPT164_GTICASR_ASCARBH            GPT162_GTICASR_ASCARBH
#define GPT164_GTICASR_ASCARBL            GPT162_GTICASR_ASCARBL
#define GPT164_GTICASR_ASGTRGBF           GPT162_GTICASR_ASGTRGBF
#define GPT164_GTICASR_ASGTRGBR           GPT162_GTICASR_ASGTRGBR
#define GPT164_GTICASR_ASGTRGAF           GPT162_GTICASR_ASGTRGAF
#define GPT164_GTICASR_ASGTRGAR           GPT162_GTICASR_ASGTRGAR
#define GPT164_GTICBSR_OFFSET             GPT162_GTICBSR_OFFSET
#define GPT164_GTICBSR                    GPT162_GTICBSR
#define GPT164_GTICBSR_BSELCH             GPT162_GTICBSR_BSELCH
#define GPT164_GTICBSR_BSELCG             GPT162_GTICBSR_BSELCG
#define GPT164_GTICBSR_BSELCF             GPT162_GTICBSR_BSELCF
#define GPT164_GTICBSR_BSELCE             GPT162_GTICBSR_BSELCE
#define GPT164_GTICBSR_BSELCD             GPT162_GTICBSR_BSELCD
#define GPT164_GTICBSR_BSELCC             GPT162_GTICBSR_BSELCC
#define GPT164_GTICBSR_BSELCB             GPT162_GTICBSR_BSELCB
#define GPT164_GTICBSR_BSELCA             GPT162_GTICBSR_BSELCA
#define GPT164_GTICBSR_BSCBFAH            GPT162_GTICBSR_BSCBFAH
#define GPT164_GTICBSR_BSCBFAL            GPT162_GTICBSR_BSCBFAL
#define GPT164_GTICBSR_BSCBRAH            GPT162_GTICBSR_BSCBRAH
#define GPT164_GTICBSR_BSCBRAL            GPT162_GTICBSR_BSCBRAL
#define GPT164_GTICBSR_BSCAFBH            GPT162_GTICBSR_BSCAFBH
#define GPT164_GTICBSR_BSCAFBL            GPT162_GTICBSR_BSCAFBL
#define GPT164_GTICBSR_BSCARBH            GPT162_GTICBSR_BSCARBH
#define GPT164_GTICBSR_BSCARBL            GPT162_GTICBSR_BSCARBL
#define GPT164_GTICBSR_BSGTRGBF           GPT162_GTICBSR_BSGTRGBF
#define GPT164_GTICBSR_BSGTRGBR           GPT162_GTICBSR_BSGTRGBR
#define GPT164_GTICBSR_BSGTRGAF           GPT162_GTICBSR_BSGTRGAF
#define GPT164_GTICBSR_BSGTRGAR           GPT162_GTICBSR_BSGTRGAR
#define GPT164_GTCR_OFFSET                GPT162_GTCR_OFFSET
#define GPT164_GTCR                       GPT162_GTCR
#define GPT164_GTCR_TPCS                  GPT162_GTCR_TPCS
#define GPT164_GTCR_TPCS_MASK             GPT162_GTCR_TPCS_MASK
#define GPT164_GTCR_MD                    GPT162_GTCR_MD
#define GPT164_GTCR_MD_MASK               GPT162_GTCR_MD_MASK
#define GPT164_GTCR_CST                   GPT162_GTCR_CST
#define GPT164_GTUDDTYC_OFFSET            GPT162_GTUDDTYC_OFFSET
#define GPT164_GTUDDTYC                   GPT162_GTUDDTYC
#define GPT164_GTUDDTYC_OBDTYR            GPT162_GTUDDTYC_OBDTYR
#define GPT164_GTUDDTYC_OBDTYF            GPT162_GTUDDTYC_OBDTYF
#define GPT164_GTUDDTYC_OBDTY             GPT162_GTUDDTYC_OBDTY
#define GPT164_GTUDDTYC_OBDTY_MASK        GPT162_GTUDDTYC_OBDTY_MASK
#define GPT164_GTUDDTYC_OADTYR            GPT162_GTUDDTYC_OADTYR
#define GPT164_GTUDDTYC_OADTYF            GPT162_GTUDDTYC_OADTYF
#define GPT164_GTUDDTYC_OADTY             GPT162_GTUDDTYC_OADTY
#define GPT164_GTUDDTYC_OADTY_MASK        GPT162_GTUDDTYC_OADTY_MASK
#define GPT164_GTUDDTYC_UDF               GPT162_GTUDDTYC_UDF
#define GPT164_GTUDDTYC_UD                GPT162_GTUDDTYC_UD
#define GPT164_GTIOR_OFFSET               GPT162_GTIOR_OFFSET
#define GPT164_GTIOR                      GPT162_GTIOR
#define GPT164_GTIOR_NFCSB                GPT162_GTIOR_NFCSB
#define GPT164_GTIOR_NFCSB_MASK           GPT162_GTIOR_NFCSB_MASK
#define GPT164_GTIOR_NFBEN                GPT162_GTIOR_NFBEN
#define GPT164_GTIOR_OBDF                 GPT162_GTIOR_OBDF
#define GPT164_GTIOR_OBDF_MASK            GPT162_GTIOR_OBDF_MASK
#define GPT164_GTIOR_OBE                  GPT162_GTIOR_OBE
#define GPT164_GTIOR_OBHLD                GPT162_GTIOR_OBHLD
#define GPT164_GTIOR_OBDFLT               GPT162_GTIOR_OBDFLT
#define GPT164_GTIOR_GTIOB                GPT162_GTIOR_GTIOB
#define GPT164_GTIOR_GTIOB_MASK           GPT162_GTIOR_GTIOB_MASK
#define GPT164_GTIOR_NFCSA                GPT162_GTIOR_NFCSA
#define GPT164_GTIOR_NFCSA_MASK           GPT162_GTIOR_NFCSA_MASK
#define GPT164_GTIOR_NFAEN                GPT162_GTIOR_NFAEN
#define GPT164_GTIOR_OADF                 GPT162_GTIOR_OADF
#define GPT164_GTIOR_OADF_MASK            GPT162_GTIOR_OADF_MASK
#define GPT164_GTIOR_OAE                  GPT162_GTIOR_OAE
#define GPT164_GTIOR_OAHLD                GPT162_GTIOR_OAHLD
#define GPT164_GTIOR_OADFLT               GPT162_GTIOR_OADFLT
#define GPT164_GTIOR_GTIOA                GPT162_GTIOR_GTIOA
#define GPT164_GTIOR_GTIOA_MASK           GPT162_GTIOR_GTIOA_MASK
#define GPT164_GTINTAD_OFFSET             GPT162_GTINTAD_OFFSET
#define GPT164_GTINTAD                    GPT162_GTINTAD
#define GPT164_GTINTAD_GRPABL             GPT162_GTINTAD_GRPABL
#define GPT164_GTINTAD_GRPABH             GPT162_GTINTAD_GRPABH
#define GPT164_GTINTAD_GRP                GPT162_GTINTAD_GRP
#define GPT164_GTINTAD_GRP_MASK           GPT162_GTINTAD_GRP_MASK
#define GPT164_GTST_OFFSET                GPT162_GTST_OFFSET
#define GPT164_GTST                       GPT162_GTST
#define GPT164_GTST_OABLF                 GPT162_GTST_OABLF
#define GPT164_GTST_OABHF                 GPT162_GTST_OABHF
#define GPT164_GTST_ODF                   GPT162_GTST_ODF
#define GPT164_GTST_TUCF                  GPT162_GTST_TUCF
#define GPT164_GTST_TCFPU                 GPT162_GTST_TCFPU
#define GPT164_GTST_TCFPO                 GPT162_GTST_TCFPO
#define GPT164_GTST_TCFF                  GPT162_GTST_TCFF
#define GPT164_GTST_TCFE                  GPT162_GTST_TCFE
#define GPT164_GTST_TCFD                  GPT162_GTST_TCFD
#define GPT164_GTST_TCFC                  GPT162_GTST_TCFC
#define GPT164_GTST_TCFB                  GPT162_GTST_TCFB
#define GPT164_GTST_TCFA                  GPT162_GTST_TCFA
#define GPT164_GTBER_OFFSET               GPT162_GTBER_OFFSET
#define GPT164_GTBER                      GPT162_GTBER
#define GPT164_GTBER_CCRSWT               GPT162_GTBER_CCRSWT
#define GPT164_GTBER_PR                   GPT162_GTBER_PR
#define GPT164_GTBER_PR_MASK              GPT162_GTBER_PR_MASK
#define GPT164_GTBER_CCRB                 GPT162_GTBER_CCRB
#define GPT164_GTBER_CCRB_MASK            GPT162_GTBER_CCRB_MASK
#define GPT164_GTBER_CCRA                 GPT162_GTBER_CCRA
#define GPT164_GTBER_CCRA_MASK            GPT162_GTBER_CCRA_MASK
#define GPT164_GTBER_BD                   GPT162_GTBER_BD
#define GPT164_GTBER_BD_MASK              GPT162_GTBER_BD_MASK
#define GPT164_GTCNT_OFFSET               GPT162_GTCNT_OFFSET
#define GPT164_GTCNT                      GPT162_GTCNT
#define GPT164_GTCNT_GTCNT                GPT162_GTCNT_GTCNT
#define GPT164_GTCNT_GTCNT_MASK           GPT162_GTCNT_GTCNT_MASK
#define GPT164_GTCCRA_OFFSET              GPT162_GTCCRA_OFFSET
#define GPT164_GTCCRA                     GPT162_GTCCRA
#define GPT164_GTCCRA_GTCCRA              GPT162_GTCCRA_GTCCRA
#define GPT164_GTCCRA_GTCCRA_MASK         GPT162_GTCCRA_GTCCRA_MASK
#define GPT164_GTCCRB_OFFSET              GPT162_GTCCRB_OFFSET
#define GPT164_GTCCRB                     GPT162_GTCCRB
#define GPT164_GTCCRB_GTCCRB              GPT162_GTCCRB_GTCCRB
#define GPT164_GTCCRB_GTCCRB_MASK         GPT162_GTCCRB_GTCCRB_MASK
#define GPT164_GTCCRC_OFFSET              GPT162_GTCCRC_OFFSET
#define GPT164_GTCCRC                     GPT162_GTCCRC
#define GPT164_GTCCRC_GTCCRC              GPT162_GTCCRC_GTCCRC
#define GPT164_GTCCRC_GTCCRC_MASK         GPT162_GTCCRC_GTCCRC_MASK
#define GPT164_GTCCRE_OFFSET              GPT162_GTCCRE_OFFSET
#define GPT164_GTCCRE                     GPT162_GTCCRE
#define GPT164_GTCCRE_GTCCRE              GPT162_GTCCRE_GTCCRE
#define GPT164_GTCCRE_GTCCRE_MASK         GPT162_GTCCRE_GTCCRE_MASK
#define GPT164_GTCCRD_OFFSET              GPT162_GTCCRD_OFFSET
#define GPT164_GTCCRD                     GPT162_GTCCRD
#define GPT164_GTCCRD_GTCCRD              GPT162_GTCCRD_GTCCRD
#define GPT164_GTCCRD_GTCCRD_MASK         GPT162_GTCCRD_GTCCRD_MASK
#define GPT164_GTCCRF_OFFSET              GPT162_GTCCRF_OFFSET
#define GPT164_GTCCRF                     GPT162_GTCCRF
#define GPT164_GTCCRF_GTCCRF              GPT162_GTCCRF_GTCCRF
#define GPT164_GTCCRF_GTCCRF_MASK         GPT162_GTCCRF_GTCCRF_MASK
#define GPT164_GTPR_OFFSET                GPT162_GTPR_OFFSET
#define GPT164_GTPR                       GPT162_GTPR
#define GPT164_GTPR_GTPR                  GPT162_GTPR_GTPR
#define GPT164_GTPR_GTPR_MASK             GPT162_GTPR_GTPR_MASK
#define GPT164_GTPBR_OFFSET               GPT162_GTPBR_OFFSET
#define GPT164_GTPBR                      GPT162_GTPBR
#define GPT164_GTPBR_GTPBR                GPT162_GTPBR_GTPBR
#define GPT164_GTPBR_GTPBR_MASK           GPT162_GTPBR_GTPBR_MASK
#define GPT164_GTDTCR_OFFSET              GPT162_GTDTCR_OFFSET
#define GPT164_GTDTCR                     GPT162_GTDTCR
#define GPT164_GTDTCR_TDE                 GPT162_GTDTCR_TDE
#define GPT164_GTDVU_OFFSET               GPT162_GTDVU_OFFSET
#define GPT164_GTDVU                      GPT162_GTDVU
#define GPT164_GTDVU_GTDVU                GPT162_GTDVU_GTDVU
#define GPT164_GTDVU_GTDVU_MASK           GPT162_GTDVU_GTDVU_MASK

/* No registers defined for peripheral GPT165. Using those of GPT162. */
#define GPT165_BASE                       0x40078500
#define GPT165_GTWP_OFFSET                GPT162_GTWP_OFFSET
#define GPT165_GTWP                       GPT162_GTWP
#define GPT165_GTWP_PRKEY                 GPT162_GTWP_PRKEY
#define GPT165_GTWP_PRKEY_MASK            GPT162_GTWP_PRKEY_MASK
#define GPT165_GTWP_WP                    GPT162_GTWP_WP
#define GPT165_GTSTR_OFFSET               GPT162_GTSTR_OFFSET
#define GPT165_GTSTR                      GPT162_GTSTR
#define GPT165_GTSTR_CSTRT7               GPT162_GTSTR_CSTRT7
#define GPT165_GTSTR_CSTRT6               GPT162_GTSTR_CSTRT6
#define GPT165_GTSTR_CSTRT5               GPT162_GTSTR_CSTRT5
#define GPT165_GTSTR_CSTRT4               GPT162_GTSTR_CSTRT4
#define GPT165_GTSTR_CSTRT3               GPT162_GTSTR_CSTRT3
#define GPT165_GTSTR_CSTRT2               GPT162_GTSTR_CSTRT2
#define GPT165_GTSTR_CSTRT1               GPT162_GTSTR_CSTRT1
#define GPT165_GTSTR_CSTRT0               GPT162_GTSTR_CSTRT0
#define GPT165_GTSTP_OFFSET               GPT162_GTSTP_OFFSET
#define GPT165_GTSTP                      GPT162_GTSTP
#define GPT165_GTSTP_CSTOP7               GPT162_GTSTP_CSTOP7
#define GPT165_GTSTP_CSTOP6               GPT162_GTSTP_CSTOP6
#define GPT165_GTSTP_CSTOP5               GPT162_GTSTP_CSTOP5
#define GPT165_GTSTP_CSTOP4               GPT162_GTSTP_CSTOP4
#define GPT165_GTSTP_CSTOP3               GPT162_GTSTP_CSTOP3
#define GPT165_GTSTP_CSTOP2               GPT162_GTSTP_CSTOP2
#define GPT165_GTSTP_CSTOP1               GPT162_GTSTP_CSTOP1
#define GPT165_GTSTP_CSTOP0               GPT162_GTSTP_CSTOP0
#define GPT165_GTCLR_OFFSET               GPT162_GTCLR_OFFSET
#define GPT165_GTCLR                      GPT162_GTCLR
#define GPT165_GTCLR_CCLR7                GPT162_GTCLR_CCLR7
#define GPT165_GTCLR_CCLR6                GPT162_GTCLR_CCLR6
#define GPT165_GTCLR_CCLR5                GPT162_GTCLR_CCLR5
#define GPT165_GTCLR_CCLR4                GPT162_GTCLR_CCLR4
#define GPT165_GTCLR_CCLR3                GPT162_GTCLR_CCLR3
#define GPT165_GTCLR_CCLR2                GPT162_GTCLR_CCLR2
#define GPT165_GTCLR_CCLR1                GPT162_GTCLR_CCLR1
#define GPT165_GTCLR_CCLR0                GPT162_GTCLR_CCLR0
#define GPT165_GTSSR_OFFSET               GPT162_GTSSR_OFFSET
#define GPT165_GTSSR                      GPT162_GTSSR
#define GPT165_GTSSR_CSTRT                GPT162_GTSSR_CSTRT
#define GPT165_GTSSR_SSELCH               GPT162_GTSSR_SSELCH
#define GPT165_GTSSR_SSELCG               GPT162_GTSSR_SSELCG
#define GPT165_GTSSR_SSELCF               GPT162_GTSSR_SSELCF
#define GPT165_GTSSR_SSELCE               GPT162_GTSSR_SSELCE
#define GPT165_GTSSR_SSELCD               GPT162_GTSSR_SSELCD
#define GPT165_GTSSR_SSELCC               GPT162_GTSSR_SSELCC
#define GPT165_GTSSR_SSELCB               GPT162_GTSSR_SSELCB
#define GPT165_GTSSR_SSELCA               GPT162_GTSSR_SSELCA
#define GPT165_GTSSR_SSCBFAH              GPT162_GTSSR_SSCBFAH
#define GPT165_GTSSR_SSCBFAL              GPT162_GTSSR_SSCBFAL
#define GPT165_GTSSR_SSCBRAH              GPT162_GTSSR_SSCBRAH
#define GPT165_GTSSR_SSCBRAL              GPT162_GTSSR_SSCBRAL
#define GPT165_GTSSR_SSCAFBH              GPT162_GTSSR_SSCAFBH
#define GPT165_GTSSR_SSCAFBL              GPT162_GTSSR_SSCAFBL
#define GPT165_GTSSR_SSCARBH              GPT162_GTSSR_SSCARBH
#define GPT165_GTSSR_SSCARBL              GPT162_GTSSR_SSCARBL
#define GPT165_GTSSR_SSGTRGBF             GPT162_GTSSR_SSGTRGBF
#define GPT165_GTSSR_SSGTRGBR             GPT162_GTSSR_SSGTRGBR
#define GPT165_GTSSR_SSGTRGAF             GPT162_GTSSR_SSGTRGAF
#define GPT165_GTSSR_SSGTRGAR             GPT162_GTSSR_SSGTRGAR
#define GPT165_GTPSR_OFFSET               GPT162_GTPSR_OFFSET
#define GPT165_GTPSR                      GPT162_GTPSR
#define GPT165_GTPSR_CSTOP                GPT162_GTPSR_CSTOP
#define GPT165_GTPSR_PSELCH               GPT162_GTPSR_PSELCH
#define GPT165_GTPSR_PSELCG               GPT162_GTPSR_PSELCG
#define GPT165_GTPSR_PSELCF               GPT162_GTPSR_PSELCF
#define GPT165_GTPSR_PSELCE               GPT162_GTPSR_PSELCE
#define GPT165_GTPSR_PSELCD               GPT162_GTPSR_PSELCD
#define GPT165_GTPSR_PSELCC               GPT162_GTPSR_PSELCC
#define GPT165_GTPSR_PSELCB               GPT162_GTPSR_PSELCB
#define GPT165_GTPSR_PSELCA               GPT162_GTPSR_PSELCA
#define GPT165_GTPSR_PSCBFAH              GPT162_GTPSR_PSCBFAH
#define GPT165_GTPSR_PSCBFAL              GPT162_GTPSR_PSCBFAL
#define GPT165_GTPSR_PSCBRAH              GPT162_GTPSR_PSCBRAH
#define GPT165_GTPSR_PSCBRAL              GPT162_GTPSR_PSCBRAL
#define GPT165_GTPSR_PSCAFBH              GPT162_GTPSR_PSCAFBH
#define GPT165_GTPSR_PSCAFBL              GPT162_GTPSR_PSCAFBL
#define GPT165_GTPSR_PSCARBH              GPT162_GTPSR_PSCARBH
#define GPT165_GTPSR_PSCARBL              GPT162_GTPSR_PSCARBL
#define GPT165_GTPSR_PSGTRGBF             GPT162_GTPSR_PSGTRGBF
#define GPT165_GTPSR_PSGTRGBR             GPT162_GTPSR_PSGTRGBR
#define GPT165_GTPSR_PSGTRGAF             GPT162_GTPSR_PSGTRGAF
#define GPT165_GTPSR_PSGTRGAR             GPT162_GTPSR_PSGTRGAR
#define GPT165_GTCSR_OFFSET               GPT162_GTCSR_OFFSET
#define GPT165_GTCSR                      GPT162_GTCSR
#define GPT165_GTCSR_CCLR                 GPT162_GTCSR_CCLR
#define GPT165_GTCSR_CSELCH               GPT162_GTCSR_CSELCH
#define GPT165_GTCSR_CSELCG               GPT162_GTCSR_CSELCG
#define GPT165_GTCSR_CSELCF               GPT162_GTCSR_CSELCF
#define GPT165_GTCSR_CSELCE               GPT162_GTCSR_CSELCE
#define GPT165_GTCSR_CSELCD               GPT162_GTCSR_CSELCD
#define GPT165_GTCSR_CSELCC               GPT162_GTCSR_CSELCC
#define GPT165_GTCSR_CSELCB               GPT162_GTCSR_CSELCB
#define GPT165_GTCSR_CSELCA               GPT162_GTCSR_CSELCA
#define GPT165_GTCSR_CSCBFAH              GPT162_GTCSR_CSCBFAH
#define GPT165_GTCSR_CSCBFAL              GPT162_GTCSR_CSCBFAL
#define GPT165_GTCSR_CSCBRAH              GPT162_GTCSR_CSCBRAH
#define GPT165_GTCSR_CSCBRAL              GPT162_GTCSR_CSCBRAL
#define GPT165_GTCSR_CSCAFBH              GPT162_GTCSR_CSCAFBH
#define GPT165_GTCSR_CSCAFBL              GPT162_GTCSR_CSCAFBL
#define GPT165_GTCSR_CSCARBH              GPT162_GTCSR_CSCARBH
#define GPT165_GTCSR_CSCARBL              GPT162_GTCSR_CSCARBL
#define GPT165_GTCSR_CSGTRGBF             GPT162_GTCSR_CSGTRGBF
#define GPT165_GTCSR_CSGTRGBR             GPT162_GTCSR_CSGTRGBR
#define GPT165_GTCSR_CSGTRGAF             GPT162_GTCSR_CSGTRGAF
#define GPT165_GTCSR_CSGTRGAR             GPT162_GTCSR_CSGTRGAR
#define GPT165_GTUPSR_OFFSET              GPT162_GTUPSR_OFFSET
#define GPT165_GTUPSR                     GPT162_GTUPSR
#define GPT165_GTUPSR_USELCH              GPT162_GTUPSR_USELCH
#define GPT165_GTUPSR_USELCG              GPT162_GTUPSR_USELCG
#define GPT165_GTUPSR_USELCF              GPT162_GTUPSR_USELCF
#define GPT165_GTUPSR_USELCE              GPT162_GTUPSR_USELCE
#define GPT165_GTUPSR_USELCD              GPT162_GTUPSR_USELCD
#define GPT165_GTUPSR_USELCC              GPT162_GTUPSR_USELCC
#define GPT165_GTUPSR_USELCB              GPT162_GTUPSR_USELCB
#define GPT165_GTUPSR_USELCA              GPT162_GTUPSR_USELCA
#define GPT165_GTUPSR_USCBFAH             GPT162_GTUPSR_USCBFAH
#define GPT165_GTUPSR_USCBFAL             GPT162_GTUPSR_USCBFAL
#define GPT165_GTUPSR_USCBRAH             GPT162_GTUPSR_USCBRAH
#define GPT165_GTUPSR_USCBRAL             GPT162_GTUPSR_USCBRAL
#define GPT165_GTUPSR_USCAFBH             GPT162_GTUPSR_USCAFBH
#define GPT165_GTUPSR_USCAFBL             GPT162_GTUPSR_USCAFBL
#define GPT165_GTUPSR_USCARBH             GPT162_GTUPSR_USCARBH
#define GPT165_GTUPSR_USCARBL             GPT162_GTUPSR_USCARBL
#define GPT165_GTUPSR_USGTRGBF            GPT162_GTUPSR_USGTRGBF
#define GPT165_GTUPSR_USGTRGBR            GPT162_GTUPSR_USGTRGBR
#define GPT165_GTUPSR_USGTRGAF            GPT162_GTUPSR_USGTRGAF
#define GPT165_GTUPSR_USGTRGAR            GPT162_GTUPSR_USGTRGAR
#define GPT165_GTDNSR_OFFSET              GPT162_GTDNSR_OFFSET
#define GPT165_GTDNSR                     GPT162_GTDNSR
#define GPT165_GTDNSR_DSELCH              GPT162_GTDNSR_DSELCH
#define GPT165_GTDNSR_DSELCG              GPT162_GTDNSR_DSELCG
#define GPT165_GTDNSR_DSELCF              GPT162_GTDNSR_DSELCF
#define GPT165_GTDNSR_DSELCE              GPT162_GTDNSR_DSELCE
#define GPT165_GTDNSR_DSELCD              GPT162_GTDNSR_DSELCD
#define GPT165_GTDNSR_DSELCC              GPT162_GTDNSR_DSELCC
#define GPT165_GTDNSR_DSELCB              GPT162_GTDNSR_DSELCB
#define GPT165_GTDNSR_DSELCA              GPT162_GTDNSR_DSELCA
#define GPT165_GTDNSR_DSCBFAH             GPT162_GTDNSR_DSCBFAH
#define GPT165_GTDNSR_DSCBFAL             GPT162_GTDNSR_DSCBFAL
#define GPT165_GTDNSR_DSCBRAH             GPT162_GTDNSR_DSCBRAH
#define GPT165_GTDNSR_DSCBRAL             GPT162_GTDNSR_DSCBRAL
#define GPT165_GTDNSR_DSCAFBH             GPT162_GTDNSR_DSCAFBH
#define GPT165_GTDNSR_DSCAFBL             GPT162_GTDNSR_DSCAFBL
#define GPT165_GTDNSR_DSCARBH             GPT162_GTDNSR_DSCARBH
#define GPT165_GTDNSR_DSCARBL             GPT162_GTDNSR_DSCARBL
#define GPT165_GTDNSR_DSGTRGBF            GPT162_GTDNSR_DSGTRGBF
#define GPT165_GTDNSR_DSGTRGBR            GPT162_GTDNSR_DSGTRGBR
#define GPT165_GTDNSR_DSGTRGAF            GPT162_GTDNSR_DSGTRGAF
#define GPT165_GTDNSR_DSGTRGAR            GPT162_GTDNSR_DSGTRGAR
#define GPT165_GTICASR_OFFSET             GPT162_GTICASR_OFFSET
#define GPT165_GTICASR                    GPT162_GTICASR
#define GPT165_GTICASR_ASELCH             GPT162_GTICASR_ASELCH
#define GPT165_GTICASR_ASELCG             GPT162_GTICASR_ASELCG
#define GPT165_GTICASR_ASELCF             GPT162_GTICASR_ASELCF
#define GPT165_GTICASR_ASELCE             GPT162_GTICASR_ASELCE
#define GPT165_GTICASR_ASELCD             GPT162_GTICASR_ASELCD
#define GPT165_GTICASR_ASELCC             GPT162_GTICASR_ASELCC
#define GPT165_GTICASR_ASELCB             GPT162_GTICASR_ASELCB
#define GPT165_GTICASR_ASELCA             GPT162_GTICASR_ASELCA
#define GPT165_GTICASR_ASCBFAH            GPT162_GTICASR_ASCBFAH
#define GPT165_GTICASR_ASCBFAL            GPT162_GTICASR_ASCBFAL
#define GPT165_GTICASR_ASCBRAH            GPT162_GTICASR_ASCBRAH
#define GPT165_GTICASR_ASCBRAL            GPT162_GTICASR_ASCBRAL
#define GPT165_GTICASR_ASCAFBH            GPT162_GTICASR_ASCAFBH
#define GPT165_GTICASR_ASCAFBL            GPT162_GTICASR_ASCAFBL
#define GPT165_GTICASR_ASCARBH            GPT162_GTICASR_ASCARBH
#define GPT165_GTICASR_ASCARBL            GPT162_GTICASR_ASCARBL
#define GPT165_GTICASR_ASGTRGBF           GPT162_GTICASR_ASGTRGBF
#define GPT165_GTICASR_ASGTRGBR           GPT162_GTICASR_ASGTRGBR
#define GPT165_GTICASR_ASGTRGAF           GPT162_GTICASR_ASGTRGAF
#define GPT165_GTICASR_ASGTRGAR           GPT162_GTICASR_ASGTRGAR
#define GPT165_GTICBSR_OFFSET             GPT162_GTICBSR_OFFSET
#define GPT165_GTICBSR                    GPT162_GTICBSR
#define GPT165_GTICBSR_BSELCH             GPT162_GTICBSR_BSELCH
#define GPT165_GTICBSR_BSELCG             GPT162_GTICBSR_BSELCG
#define GPT165_GTICBSR_BSELCF             GPT162_GTICBSR_BSELCF
#define GPT165_GTICBSR_BSELCE             GPT162_GTICBSR_BSELCE
#define GPT165_GTICBSR_BSELCD             GPT162_GTICBSR_BSELCD
#define GPT165_GTICBSR_BSELCC             GPT162_GTICBSR_BSELCC
#define GPT165_GTICBSR_BSELCB             GPT162_GTICBSR_BSELCB
#define GPT165_GTICBSR_BSELCA             GPT162_GTICBSR_BSELCA
#define GPT165_GTICBSR_BSCBFAH            GPT162_GTICBSR_BSCBFAH
#define GPT165_GTICBSR_BSCBFAL            GPT162_GTICBSR_BSCBFAL
#define GPT165_GTICBSR_BSCBRAH            GPT162_GTICBSR_BSCBRAH
#define GPT165_GTICBSR_BSCBRAL            GPT162_GTICBSR_BSCBRAL
#define GPT165_GTICBSR_BSCAFBH            GPT162_GTICBSR_BSCAFBH
#define GPT165_GTICBSR_BSCAFBL            GPT162_GTICBSR_BSCAFBL
#define GPT165_GTICBSR_BSCARBH            GPT162_GTICBSR_BSCARBH
#define GPT165_GTICBSR_BSCARBL            GPT162_GTICBSR_BSCARBL
#define GPT165_GTICBSR_BSGTRGBF           GPT162_GTICBSR_BSGTRGBF
#define GPT165_GTICBSR_BSGTRGBR           GPT162_GTICBSR_BSGTRGBR
#define GPT165_GTICBSR_BSGTRGAF           GPT162_GTICBSR_BSGTRGAF
#define GPT165_GTICBSR_BSGTRGAR           GPT162_GTICBSR_BSGTRGAR
#define GPT165_GTCR_OFFSET                GPT162_GTCR_OFFSET
#define GPT165_GTCR                       GPT162_GTCR
#define GPT165_GTCR_TPCS                  GPT162_GTCR_TPCS
#define GPT165_GTCR_TPCS_MASK             GPT162_GTCR_TPCS_MASK
#define GPT165_GTCR_MD                    GPT162_GTCR_MD
#define GPT165_GTCR_MD_MASK               GPT162_GTCR_MD_MASK
#define GPT165_GTCR_CST                   GPT162_GTCR_CST
#define GPT165_GTUDDTYC_OFFSET            GPT162_GTUDDTYC_OFFSET
#define GPT165_GTUDDTYC                   GPT162_GTUDDTYC
#define GPT165_GTUDDTYC_OBDTYR            GPT162_GTUDDTYC_OBDTYR
#define GPT165_GTUDDTYC_OBDTYF            GPT162_GTUDDTYC_OBDTYF
#define GPT165_GTUDDTYC_OBDTY             GPT162_GTUDDTYC_OBDTY
#define GPT165_GTUDDTYC_OBDTY_MASK        GPT162_GTUDDTYC_OBDTY_MASK
#define GPT165_GTUDDTYC_OADTYR            GPT162_GTUDDTYC_OADTYR
#define GPT165_GTUDDTYC_OADTYF            GPT162_GTUDDTYC_OADTYF
#define GPT165_GTUDDTYC_OADTY             GPT162_GTUDDTYC_OADTY
#define GPT165_GTUDDTYC_OADTY_MASK        GPT162_GTUDDTYC_OADTY_MASK
#define GPT165_GTUDDTYC_UDF               GPT162_GTUDDTYC_UDF
#define GPT165_GTUDDTYC_UD                GPT162_GTUDDTYC_UD
#define GPT165_GTIOR_OFFSET               GPT162_GTIOR_OFFSET
#define GPT165_GTIOR                      GPT162_GTIOR
#define GPT165_GTIOR_NFCSB                GPT162_GTIOR_NFCSB
#define GPT165_GTIOR_NFCSB_MASK           GPT162_GTIOR_NFCSB_MASK
#define GPT165_GTIOR_NFBEN                GPT162_GTIOR_NFBEN
#define GPT165_GTIOR_OBDF                 GPT162_GTIOR_OBDF
#define GPT165_GTIOR_OBDF_MASK            GPT162_GTIOR_OBDF_MASK
#define GPT165_GTIOR_OBE                  GPT162_GTIOR_OBE
#define GPT165_GTIOR_OBHLD                GPT162_GTIOR_OBHLD
#define GPT165_GTIOR_OBDFLT               GPT162_GTIOR_OBDFLT
#define GPT165_GTIOR_GTIOB                GPT162_GTIOR_GTIOB
#define GPT165_GTIOR_GTIOB_MASK           GPT162_GTIOR_GTIOB_MASK
#define GPT165_GTIOR_NFCSA                GPT162_GTIOR_NFCSA
#define GPT165_GTIOR_NFCSA_MASK           GPT162_GTIOR_NFCSA_MASK
#define GPT165_GTIOR_NFAEN                GPT162_GTIOR_NFAEN
#define GPT165_GTIOR_OADF                 GPT162_GTIOR_OADF
#define GPT165_GTIOR_OADF_MASK            GPT162_GTIOR_OADF_MASK
#define GPT165_GTIOR_OAE                  GPT162_GTIOR_OAE
#define GPT165_GTIOR_OAHLD                GPT162_GTIOR_OAHLD
#define GPT165_GTIOR_OADFLT               GPT162_GTIOR_OADFLT
#define GPT165_GTIOR_GTIOA                GPT162_GTIOR_GTIOA
#define GPT165_GTIOR_GTIOA_MASK           GPT162_GTIOR_GTIOA_MASK
#define GPT165_GTINTAD_OFFSET             GPT162_GTINTAD_OFFSET
#define GPT165_GTINTAD                    GPT162_GTINTAD
#define GPT165_GTINTAD_GRPABL             GPT162_GTINTAD_GRPABL
#define GPT165_GTINTAD_GRPABH             GPT162_GTINTAD_GRPABH
#define GPT165_GTINTAD_GRP                GPT162_GTINTAD_GRP
#define GPT165_GTINTAD_GRP_MASK           GPT162_GTINTAD_GRP_MASK
#define GPT165_GTST_OFFSET                GPT162_GTST_OFFSET
#define GPT165_GTST                       GPT162_GTST
#define GPT165_GTST_OABLF                 GPT162_GTST_OABLF
#define GPT165_GTST_OABHF                 GPT162_GTST_OABHF
#define GPT165_GTST_ODF                   GPT162_GTST_ODF
#define GPT165_GTST_TUCF                  GPT162_GTST_TUCF
#define GPT165_GTST_TCFPU                 GPT162_GTST_TCFPU
#define GPT165_GTST_TCFPO                 GPT162_GTST_TCFPO
#define GPT165_GTST_TCFF                  GPT162_GTST_TCFF
#define GPT165_GTST_TCFE                  GPT162_GTST_TCFE
#define GPT165_GTST_TCFD                  GPT162_GTST_TCFD
#define GPT165_GTST_TCFC                  GPT162_GTST_TCFC
#define GPT165_GTST_TCFB                  GPT162_GTST_TCFB
#define GPT165_GTST_TCFA                  GPT162_GTST_TCFA
#define GPT165_GTBER_OFFSET               GPT162_GTBER_OFFSET
#define GPT165_GTBER                      GPT162_GTBER
#define GPT165_GTBER_CCRSWT               GPT162_GTBER_CCRSWT
#define GPT165_GTBER_PR                   GPT162_GTBER_PR
#define GPT165_GTBER_PR_MASK              GPT162_GTBER_PR_MASK
#define GPT165_GTBER_CCRB                 GPT162_GTBER_CCRB
#define GPT165_GTBER_CCRB_MASK            GPT162_GTBER_CCRB_MASK
#define GPT165_GTBER_CCRA                 GPT162_GTBER_CCRA
#define GPT165_GTBER_CCRA_MASK            GPT162_GTBER_CCRA_MASK
#define GPT165_GTBER_BD                   GPT162_GTBER_BD
#define GPT165_GTBER_BD_MASK              GPT162_GTBER_BD_MASK
#define GPT165_GTCNT_OFFSET               GPT162_GTCNT_OFFSET
#define GPT165_GTCNT                      GPT162_GTCNT
#define GPT165_GTCNT_GTCNT                GPT162_GTCNT_GTCNT
#define GPT165_GTCNT_GTCNT_MASK           GPT162_GTCNT_GTCNT_MASK
#define GPT165_GTCCRA_OFFSET              GPT162_GTCCRA_OFFSET
#define GPT165_GTCCRA                     GPT162_GTCCRA
#define GPT165_GTCCRA_GTCCRA              GPT162_GTCCRA_GTCCRA
#define GPT165_GTCCRA_GTCCRA_MASK         GPT162_GTCCRA_GTCCRA_MASK
#define GPT165_GTCCRB_OFFSET              GPT162_GTCCRB_OFFSET
#define GPT165_GTCCRB                     GPT162_GTCCRB
#define GPT165_GTCCRB_GTCCRB              GPT162_GTCCRB_GTCCRB
#define GPT165_GTCCRB_GTCCRB_MASK         GPT162_GTCCRB_GTCCRB_MASK
#define GPT165_GTCCRC_OFFSET              GPT162_GTCCRC_OFFSET
#define GPT165_GTCCRC                     GPT162_GTCCRC
#define GPT165_GTCCRC_GTCCRC              GPT162_GTCCRC_GTCCRC
#define GPT165_GTCCRC_GTCCRC_MASK         GPT162_GTCCRC_GTCCRC_MASK
#define GPT165_GTCCRE_OFFSET              GPT162_GTCCRE_OFFSET
#define GPT165_GTCCRE                     GPT162_GTCCRE
#define GPT165_GTCCRE_GTCCRE              GPT162_GTCCRE_GTCCRE
#define GPT165_GTCCRE_GTCCRE_MASK         GPT162_GTCCRE_GTCCRE_MASK
#define GPT165_GTCCRD_OFFSET              GPT162_GTCCRD_OFFSET
#define GPT165_GTCCRD                     GPT162_GTCCRD
#define GPT165_GTCCRD_GTCCRD              GPT162_GTCCRD_GTCCRD
#define GPT165_GTCCRD_GTCCRD_MASK         GPT162_GTCCRD_GTCCRD_MASK
#define GPT165_GTCCRF_OFFSET              GPT162_GTCCRF_OFFSET
#define GPT165_GTCCRF                     GPT162_GTCCRF
#define GPT165_GTCCRF_GTCCRF              GPT162_GTCCRF_GTCCRF
#define GPT165_GTCCRF_GTCCRF_MASK         GPT162_GTCCRF_GTCCRF_MASK
#define GPT165_GTPR_OFFSET                GPT162_GTPR_OFFSET
#define GPT165_GTPR                       GPT162_GTPR
#define GPT165_GTPR_GTPR                  GPT162_GTPR_GTPR
#define GPT165_GTPR_GTPR_MASK             GPT162_GTPR_GTPR_MASK
#define GPT165_GTPBR_OFFSET               GPT162_GTPBR_OFFSET
#define GPT165_GTPBR                      GPT162_GTPBR
#define GPT165_GTPBR_GTPBR                GPT162_GTPBR_GTPBR
#define GPT165_GTPBR_GTPBR_MASK           GPT162_GTPBR_GTPBR_MASK
#define GPT165_GTDTCR_OFFSET              GPT162_GTDTCR_OFFSET
#define GPT165_GTDTCR                     GPT162_GTDTCR
#define GPT165_GTDTCR_TDE                 GPT162_GTDTCR_TDE
#define GPT165_GTDVU_OFFSET               GPT162_GTDVU_OFFSET
#define GPT165_GTDVU                      GPT162_GTDVU
#define GPT165_GTDVU_GTDVU                GPT162_GTDVU_GTDVU
#define GPT165_GTDVU_GTDVU_MASK           GPT162_GTDVU_GTDVU_MASK

/* No registers defined for peripheral GPT166. Using those of GPT162. */
#define GPT166_BASE                       0x40078600
#define GPT166_GTWP_OFFSET                GPT162_GTWP_OFFSET
#define GPT166_GTWP                       GPT162_GTWP
#define GPT166_GTWP_PRKEY                 GPT162_GTWP_PRKEY
#define GPT166_GTWP_PRKEY_MASK            GPT162_GTWP_PRKEY_MASK
#define GPT166_GTWP_WP                    GPT162_GTWP_WP
#define GPT166_GTSTR_OFFSET               GPT162_GTSTR_OFFSET
#define GPT166_GTSTR                      GPT162_GTSTR
#define GPT166_GTSTR_CSTRT7               GPT162_GTSTR_CSTRT7
#define GPT166_GTSTR_CSTRT6               GPT162_GTSTR_CSTRT6
#define GPT166_GTSTR_CSTRT5               GPT162_GTSTR_CSTRT5
#define GPT166_GTSTR_CSTRT4               GPT162_GTSTR_CSTRT4
#define GPT166_GTSTR_CSTRT3               GPT162_GTSTR_CSTRT3
#define GPT166_GTSTR_CSTRT2               GPT162_GTSTR_CSTRT2
#define GPT166_GTSTR_CSTRT1               GPT162_GTSTR_CSTRT1
#define GPT166_GTSTR_CSTRT0               GPT162_GTSTR_CSTRT0
#define GPT166_GTSTP_OFFSET               GPT162_GTSTP_OFFSET
#define GPT166_GTSTP                      GPT162_GTSTP
#define GPT166_GTSTP_CSTOP7               GPT162_GTSTP_CSTOP7
#define GPT166_GTSTP_CSTOP6               GPT162_GTSTP_CSTOP6
#define GPT166_GTSTP_CSTOP5               GPT162_GTSTP_CSTOP5
#define GPT166_GTSTP_CSTOP4               GPT162_GTSTP_CSTOP4
#define GPT166_GTSTP_CSTOP3               GPT162_GTSTP_CSTOP3
#define GPT166_GTSTP_CSTOP2               GPT162_GTSTP_CSTOP2
#define GPT166_GTSTP_CSTOP1               GPT162_GTSTP_CSTOP1
#define GPT166_GTSTP_CSTOP0               GPT162_GTSTP_CSTOP0
#define GPT166_GTCLR_OFFSET               GPT162_GTCLR_OFFSET
#define GPT166_GTCLR                      GPT162_GTCLR
#define GPT166_GTCLR_CCLR7                GPT162_GTCLR_CCLR7
#define GPT166_GTCLR_CCLR6                GPT162_GTCLR_CCLR6
#define GPT166_GTCLR_CCLR5                GPT162_GTCLR_CCLR5
#define GPT166_GTCLR_CCLR4                GPT162_GTCLR_CCLR4
#define GPT166_GTCLR_CCLR3                GPT162_GTCLR_CCLR3
#define GPT166_GTCLR_CCLR2                GPT162_GTCLR_CCLR2
#define GPT166_GTCLR_CCLR1                GPT162_GTCLR_CCLR1
#define GPT166_GTCLR_CCLR0                GPT162_GTCLR_CCLR0
#define GPT166_GTSSR_OFFSET               GPT162_GTSSR_OFFSET
#define GPT166_GTSSR                      GPT162_GTSSR
#define GPT166_GTSSR_CSTRT                GPT162_GTSSR_CSTRT
#define GPT166_GTSSR_SSELCH               GPT162_GTSSR_SSELCH
#define GPT166_GTSSR_SSELCG               GPT162_GTSSR_SSELCG
#define GPT166_GTSSR_SSELCF               GPT162_GTSSR_SSELCF
#define GPT166_GTSSR_SSELCE               GPT162_GTSSR_SSELCE
#define GPT166_GTSSR_SSELCD               GPT162_GTSSR_SSELCD
#define GPT166_GTSSR_SSELCC               GPT162_GTSSR_SSELCC
#define GPT166_GTSSR_SSELCB               GPT162_GTSSR_SSELCB
#define GPT166_GTSSR_SSELCA               GPT162_GTSSR_SSELCA
#define GPT166_GTSSR_SSCBFAH              GPT162_GTSSR_SSCBFAH
#define GPT166_GTSSR_SSCBFAL              GPT162_GTSSR_SSCBFAL
#define GPT166_GTSSR_SSCBRAH              GPT162_GTSSR_SSCBRAH
#define GPT166_GTSSR_SSCBRAL              GPT162_GTSSR_SSCBRAL
#define GPT166_GTSSR_SSCAFBH              GPT162_GTSSR_SSCAFBH
#define GPT166_GTSSR_SSCAFBL              GPT162_GTSSR_SSCAFBL
#define GPT166_GTSSR_SSCARBH              GPT162_GTSSR_SSCARBH
#define GPT166_GTSSR_SSCARBL              GPT162_GTSSR_SSCARBL
#define GPT166_GTSSR_SSGTRGBF             GPT162_GTSSR_SSGTRGBF
#define GPT166_GTSSR_SSGTRGBR             GPT162_GTSSR_SSGTRGBR
#define GPT166_GTSSR_SSGTRGAF             GPT162_GTSSR_SSGTRGAF
#define GPT166_GTSSR_SSGTRGAR             GPT162_GTSSR_SSGTRGAR
#define GPT166_GTPSR_OFFSET               GPT162_GTPSR_OFFSET
#define GPT166_GTPSR                      GPT162_GTPSR
#define GPT166_GTPSR_CSTOP                GPT162_GTPSR_CSTOP
#define GPT166_GTPSR_PSELCH               GPT162_GTPSR_PSELCH
#define GPT166_GTPSR_PSELCG               GPT162_GTPSR_PSELCG
#define GPT166_GTPSR_PSELCF               GPT162_GTPSR_PSELCF
#define GPT166_GTPSR_PSELCE               GPT162_GTPSR_PSELCE
#define GPT166_GTPSR_PSELCD               GPT162_GTPSR_PSELCD
#define GPT166_GTPSR_PSELCC               GPT162_GTPSR_PSELCC
#define GPT166_GTPSR_PSELCB               GPT162_GTPSR_PSELCB
#define GPT166_GTPSR_PSELCA               GPT162_GTPSR_PSELCA
#define GPT166_GTPSR_PSCBFAH              GPT162_GTPSR_PSCBFAH
#define GPT166_GTPSR_PSCBFAL              GPT162_GTPSR_PSCBFAL
#define GPT166_GTPSR_PSCBRAH              GPT162_GTPSR_PSCBRAH
#define GPT166_GTPSR_PSCBRAL              GPT162_GTPSR_PSCBRAL
#define GPT166_GTPSR_PSCAFBH              GPT162_GTPSR_PSCAFBH
#define GPT166_GTPSR_PSCAFBL              GPT162_GTPSR_PSCAFBL
#define GPT166_GTPSR_PSCARBH              GPT162_GTPSR_PSCARBH
#define GPT166_GTPSR_PSCARBL              GPT162_GTPSR_PSCARBL
#define GPT166_GTPSR_PSGTRGBF             GPT162_GTPSR_PSGTRGBF
#define GPT166_GTPSR_PSGTRGBR             GPT162_GTPSR_PSGTRGBR
#define GPT166_GTPSR_PSGTRGAF             GPT162_GTPSR_PSGTRGAF
#define GPT166_GTPSR_PSGTRGAR             GPT162_GTPSR_PSGTRGAR
#define GPT166_GTCSR_OFFSET               GPT162_GTCSR_OFFSET
#define GPT166_GTCSR                      GPT162_GTCSR
#define GPT166_GTCSR_CCLR                 GPT162_GTCSR_CCLR
#define GPT166_GTCSR_CSELCH               GPT162_GTCSR_CSELCH
#define GPT166_GTCSR_CSELCG               GPT162_GTCSR_CSELCG
#define GPT166_GTCSR_CSELCF               GPT162_GTCSR_CSELCF
#define GPT166_GTCSR_CSELCE               GPT162_GTCSR_CSELCE
#define GPT166_GTCSR_CSELCD               GPT162_GTCSR_CSELCD
#define GPT166_GTCSR_CSELCC               GPT162_GTCSR_CSELCC
#define GPT166_GTCSR_CSELCB               GPT162_GTCSR_CSELCB
#define GPT166_GTCSR_CSELCA               GPT162_GTCSR_CSELCA
#define GPT166_GTCSR_CSCBFAH              GPT162_GTCSR_CSCBFAH
#define GPT166_GTCSR_CSCBFAL              GPT162_GTCSR_CSCBFAL
#define GPT166_GTCSR_CSCBRAH              GPT162_GTCSR_CSCBRAH
#define GPT166_GTCSR_CSCBRAL              GPT162_GTCSR_CSCBRAL
#define GPT166_GTCSR_CSCAFBH              GPT162_GTCSR_CSCAFBH
#define GPT166_GTCSR_CSCAFBL              GPT162_GTCSR_CSCAFBL
#define GPT166_GTCSR_CSCARBH              GPT162_GTCSR_CSCARBH
#define GPT166_GTCSR_CSCARBL              GPT162_GTCSR_CSCARBL
#define GPT166_GTCSR_CSGTRGBF             GPT162_GTCSR_CSGTRGBF
#define GPT166_GTCSR_CSGTRGBR             GPT162_GTCSR_CSGTRGBR
#define GPT166_GTCSR_CSGTRGAF             GPT162_GTCSR_CSGTRGAF
#define GPT166_GTCSR_CSGTRGAR             GPT162_GTCSR_CSGTRGAR
#define GPT166_GTUPSR_OFFSET              GPT162_GTUPSR_OFFSET
#define GPT166_GTUPSR                     GPT162_GTUPSR
#define GPT166_GTUPSR_USELCH              GPT162_GTUPSR_USELCH
#define GPT166_GTUPSR_USELCG              GPT162_GTUPSR_USELCG
#define GPT166_GTUPSR_USELCF              GPT162_GTUPSR_USELCF
#define GPT166_GTUPSR_USELCE              GPT162_GTUPSR_USELCE
#define GPT166_GTUPSR_USELCD              GPT162_GTUPSR_USELCD
#define GPT166_GTUPSR_USELCC              GPT162_GTUPSR_USELCC
#define GPT166_GTUPSR_USELCB              GPT162_GTUPSR_USELCB
#define GPT166_GTUPSR_USELCA              GPT162_GTUPSR_USELCA
#define GPT166_GTUPSR_USCBFAH             GPT162_GTUPSR_USCBFAH
#define GPT166_GTUPSR_USCBFAL             GPT162_GTUPSR_USCBFAL
#define GPT166_GTUPSR_USCBRAH             GPT162_GTUPSR_USCBRAH
#define GPT166_GTUPSR_USCBRAL             GPT162_GTUPSR_USCBRAL
#define GPT166_GTUPSR_USCAFBH             GPT162_GTUPSR_USCAFBH
#define GPT166_GTUPSR_USCAFBL             GPT162_GTUPSR_USCAFBL
#define GPT166_GTUPSR_USCARBH             GPT162_GTUPSR_USCARBH
#define GPT166_GTUPSR_USCARBL             GPT162_GTUPSR_USCARBL
#define GPT166_GTUPSR_USGTRGBF            GPT162_GTUPSR_USGTRGBF
#define GPT166_GTUPSR_USGTRGBR            GPT162_GTUPSR_USGTRGBR
#define GPT166_GTUPSR_USGTRGAF            GPT162_GTUPSR_USGTRGAF
#define GPT166_GTUPSR_USGTRGAR            GPT162_GTUPSR_USGTRGAR
#define GPT166_GTDNSR_OFFSET              GPT162_GTDNSR_OFFSET
#define GPT166_GTDNSR                     GPT162_GTDNSR
#define GPT166_GTDNSR_DSELCH              GPT162_GTDNSR_DSELCH
#define GPT166_GTDNSR_DSELCG              GPT162_GTDNSR_DSELCG
#define GPT166_GTDNSR_DSELCF              GPT162_GTDNSR_DSELCF
#define GPT166_GTDNSR_DSELCE              GPT162_GTDNSR_DSELCE
#define GPT166_GTDNSR_DSELCD              GPT162_GTDNSR_DSELCD
#define GPT166_GTDNSR_DSELCC              GPT162_GTDNSR_DSELCC
#define GPT166_GTDNSR_DSELCB              GPT162_GTDNSR_DSELCB
#define GPT166_GTDNSR_DSELCA              GPT162_GTDNSR_DSELCA
#define GPT166_GTDNSR_DSCBFAH             GPT162_GTDNSR_DSCBFAH
#define GPT166_GTDNSR_DSCBFAL             GPT162_GTDNSR_DSCBFAL
#define GPT166_GTDNSR_DSCBRAH             GPT162_GTDNSR_DSCBRAH
#define GPT166_GTDNSR_DSCBRAL             GPT162_GTDNSR_DSCBRAL
#define GPT166_GTDNSR_DSCAFBH             GPT162_GTDNSR_DSCAFBH
#define GPT166_GTDNSR_DSCAFBL             GPT162_GTDNSR_DSCAFBL
#define GPT166_GTDNSR_DSCARBH             GPT162_GTDNSR_DSCARBH
#define GPT166_GTDNSR_DSCARBL             GPT162_GTDNSR_DSCARBL
#define GPT166_GTDNSR_DSGTRGBF            GPT162_GTDNSR_DSGTRGBF
#define GPT166_GTDNSR_DSGTRGBR            GPT162_GTDNSR_DSGTRGBR
#define GPT166_GTDNSR_DSGTRGAF            GPT162_GTDNSR_DSGTRGAF
#define GPT166_GTDNSR_DSGTRGAR            GPT162_GTDNSR_DSGTRGAR
#define GPT166_GTICASR_OFFSET             GPT162_GTICASR_OFFSET
#define GPT166_GTICASR                    GPT162_GTICASR
#define GPT166_GTICASR_ASELCH             GPT162_GTICASR_ASELCH
#define GPT166_GTICASR_ASELCG             GPT162_GTICASR_ASELCG
#define GPT166_GTICASR_ASELCF             GPT162_GTICASR_ASELCF
#define GPT166_GTICASR_ASELCE             GPT162_GTICASR_ASELCE
#define GPT166_GTICASR_ASELCD             GPT162_GTICASR_ASELCD
#define GPT166_GTICASR_ASELCC             GPT162_GTICASR_ASELCC
#define GPT166_GTICASR_ASELCB             GPT162_GTICASR_ASELCB
#define GPT166_GTICASR_ASELCA             GPT162_GTICASR_ASELCA
#define GPT166_GTICASR_ASCBFAH            GPT162_GTICASR_ASCBFAH
#define GPT166_GTICASR_ASCBFAL            GPT162_GTICASR_ASCBFAL
#define GPT166_GTICASR_ASCBRAH            GPT162_GTICASR_ASCBRAH
#define GPT166_GTICASR_ASCBRAL            GPT162_GTICASR_ASCBRAL
#define GPT166_GTICASR_ASCAFBH            GPT162_GTICASR_ASCAFBH
#define GPT166_GTICASR_ASCAFBL            GPT162_GTICASR_ASCAFBL
#define GPT166_GTICASR_ASCARBH            GPT162_GTICASR_ASCARBH
#define GPT166_GTICASR_ASCARBL            GPT162_GTICASR_ASCARBL
#define GPT166_GTICASR_ASGTRGBF           GPT162_GTICASR_ASGTRGBF
#define GPT166_GTICASR_ASGTRGBR           GPT162_GTICASR_ASGTRGBR
#define GPT166_GTICASR_ASGTRGAF           GPT162_GTICASR_ASGTRGAF
#define GPT166_GTICASR_ASGTRGAR           GPT162_GTICASR_ASGTRGAR
#define GPT166_GTICBSR_OFFSET             GPT162_GTICBSR_OFFSET
#define GPT166_GTICBSR                    GPT162_GTICBSR
#define GPT166_GTICBSR_BSELCH             GPT162_GTICBSR_BSELCH
#define GPT166_GTICBSR_BSELCG             GPT162_GTICBSR_BSELCG
#define GPT166_GTICBSR_BSELCF             GPT162_GTICBSR_BSELCF
#define GPT166_GTICBSR_BSELCE             GPT162_GTICBSR_BSELCE
#define GPT166_GTICBSR_BSELCD             GPT162_GTICBSR_BSELCD
#define GPT166_GTICBSR_BSELCC             GPT162_GTICBSR_BSELCC
#define GPT166_GTICBSR_BSELCB             GPT162_GTICBSR_BSELCB
#define GPT166_GTICBSR_BSELCA             GPT162_GTICBSR_BSELCA
#define GPT166_GTICBSR_BSCBFAH            GPT162_GTICBSR_BSCBFAH
#define GPT166_GTICBSR_BSCBFAL            GPT162_GTICBSR_BSCBFAL
#define GPT166_GTICBSR_BSCBRAH            GPT162_GTICBSR_BSCBRAH
#define GPT166_GTICBSR_BSCBRAL            GPT162_GTICBSR_BSCBRAL
#define GPT166_GTICBSR_BSCAFBH            GPT162_GTICBSR_BSCAFBH
#define GPT166_GTICBSR_BSCAFBL            GPT162_GTICBSR_BSCAFBL
#define GPT166_GTICBSR_BSCARBH            GPT162_GTICBSR_BSCARBH
#define GPT166_GTICBSR_BSCARBL            GPT162_GTICBSR_BSCARBL
#define GPT166_GTICBSR_BSGTRGBF           GPT162_GTICBSR_BSGTRGBF
#define GPT166_GTICBSR_BSGTRGBR           GPT162_GTICBSR_BSGTRGBR
#define GPT166_GTICBSR_BSGTRGAF           GPT162_GTICBSR_BSGTRGAF
#define GPT166_GTICBSR_BSGTRGAR           GPT162_GTICBSR_BSGTRGAR
#define GPT166_GTCR_OFFSET                GPT162_GTCR_OFFSET
#define GPT166_GTCR                       GPT162_GTCR
#define GPT166_GTCR_TPCS                  GPT162_GTCR_TPCS
#define GPT166_GTCR_TPCS_MASK             GPT162_GTCR_TPCS_MASK
#define GPT166_GTCR_MD                    GPT162_GTCR_MD
#define GPT166_GTCR_MD_MASK               GPT162_GTCR_MD_MASK
#define GPT166_GTCR_CST                   GPT162_GTCR_CST
#define GPT166_GTUDDTYC_OFFSET            GPT162_GTUDDTYC_OFFSET
#define GPT166_GTUDDTYC                   GPT162_GTUDDTYC
#define GPT166_GTUDDTYC_OBDTYR            GPT162_GTUDDTYC_OBDTYR
#define GPT166_GTUDDTYC_OBDTYF            GPT162_GTUDDTYC_OBDTYF
#define GPT166_GTUDDTYC_OBDTY             GPT162_GTUDDTYC_OBDTY
#define GPT166_GTUDDTYC_OBDTY_MASK        GPT162_GTUDDTYC_OBDTY_MASK
#define GPT166_GTUDDTYC_OADTYR            GPT162_GTUDDTYC_OADTYR
#define GPT166_GTUDDTYC_OADTYF            GPT162_GTUDDTYC_OADTYF
#define GPT166_GTUDDTYC_OADTY             GPT162_GTUDDTYC_OADTY
#define GPT166_GTUDDTYC_OADTY_MASK        GPT162_GTUDDTYC_OADTY_MASK
#define GPT166_GTUDDTYC_UDF               GPT162_GTUDDTYC_UDF
#define GPT166_GTUDDTYC_UD                GPT162_GTUDDTYC_UD
#define GPT166_GTIOR_OFFSET               GPT162_GTIOR_OFFSET
#define GPT166_GTIOR                      GPT162_GTIOR
#define GPT166_GTIOR_NFCSB                GPT162_GTIOR_NFCSB
#define GPT166_GTIOR_NFCSB_MASK           GPT162_GTIOR_NFCSB_MASK
#define GPT166_GTIOR_NFBEN                GPT162_GTIOR_NFBEN
#define GPT166_GTIOR_OBDF                 GPT162_GTIOR_OBDF
#define GPT166_GTIOR_OBDF_MASK            GPT162_GTIOR_OBDF_MASK
#define GPT166_GTIOR_OBE                  GPT162_GTIOR_OBE
#define GPT166_GTIOR_OBHLD                GPT162_GTIOR_OBHLD
#define GPT166_GTIOR_OBDFLT               GPT162_GTIOR_OBDFLT
#define GPT166_GTIOR_GTIOB                GPT162_GTIOR_GTIOB
#define GPT166_GTIOR_GTIOB_MASK           GPT162_GTIOR_GTIOB_MASK
#define GPT166_GTIOR_NFCSA                GPT162_GTIOR_NFCSA
#define GPT166_GTIOR_NFCSA_MASK           GPT162_GTIOR_NFCSA_MASK
#define GPT166_GTIOR_NFAEN                GPT162_GTIOR_NFAEN
#define GPT166_GTIOR_OADF                 GPT162_GTIOR_OADF
#define GPT166_GTIOR_OADF_MASK            GPT162_GTIOR_OADF_MASK
#define GPT166_GTIOR_OAE                  GPT162_GTIOR_OAE
#define GPT166_GTIOR_OAHLD                GPT162_GTIOR_OAHLD
#define GPT166_GTIOR_OADFLT               GPT162_GTIOR_OADFLT
#define GPT166_GTIOR_GTIOA                GPT162_GTIOR_GTIOA
#define GPT166_GTIOR_GTIOA_MASK           GPT162_GTIOR_GTIOA_MASK
#define GPT166_GTINTAD_OFFSET             GPT162_GTINTAD_OFFSET
#define GPT166_GTINTAD                    GPT162_GTINTAD
#define GPT166_GTINTAD_GRPABL             GPT162_GTINTAD_GRPABL
#define GPT166_GTINTAD_GRPABH             GPT162_GTINTAD_GRPABH
#define GPT166_GTINTAD_GRP                GPT162_GTINTAD_GRP
#define GPT166_GTINTAD_GRP_MASK           GPT162_GTINTAD_GRP_MASK
#define GPT166_GTST_OFFSET                GPT162_GTST_OFFSET
#define GPT166_GTST                       GPT162_GTST
#define GPT166_GTST_OABLF                 GPT162_GTST_OABLF
#define GPT166_GTST_OABHF                 GPT162_GTST_OABHF
#define GPT166_GTST_ODF                   GPT162_GTST_ODF
#define GPT166_GTST_TUCF                  GPT162_GTST_TUCF
#define GPT166_GTST_TCFPU                 GPT162_GTST_TCFPU
#define GPT166_GTST_TCFPO                 GPT162_GTST_TCFPO
#define GPT166_GTST_TCFF                  GPT162_GTST_TCFF
#define GPT166_GTST_TCFE                  GPT162_GTST_TCFE
#define GPT166_GTST_TCFD                  GPT162_GTST_TCFD
#define GPT166_GTST_TCFC                  GPT162_GTST_TCFC
#define GPT166_GTST_TCFB                  GPT162_GTST_TCFB
#define GPT166_GTST_TCFA                  GPT162_GTST_TCFA
#define GPT166_GTBER_OFFSET               GPT162_GTBER_OFFSET
#define GPT166_GTBER                      GPT162_GTBER
#define GPT166_GTBER_CCRSWT               GPT162_GTBER_CCRSWT
#define GPT166_GTBER_PR                   GPT162_GTBER_PR
#define GPT166_GTBER_PR_MASK              GPT162_GTBER_PR_MASK
#define GPT166_GTBER_CCRB                 GPT162_GTBER_CCRB
#define GPT166_GTBER_CCRB_MASK            GPT162_GTBER_CCRB_MASK
#define GPT166_GTBER_CCRA                 GPT162_GTBER_CCRA
#define GPT166_GTBER_CCRA_MASK            GPT162_GTBER_CCRA_MASK
#define GPT166_GTBER_BD                   GPT162_GTBER_BD
#define GPT166_GTBER_BD_MASK              GPT162_GTBER_BD_MASK
#define GPT166_GTCNT_OFFSET               GPT162_GTCNT_OFFSET
#define GPT166_GTCNT                      GPT162_GTCNT
#define GPT166_GTCNT_GTCNT                GPT162_GTCNT_GTCNT
#define GPT166_GTCNT_GTCNT_MASK           GPT162_GTCNT_GTCNT_MASK
#define GPT166_GTCCRA_OFFSET              GPT162_GTCCRA_OFFSET
#define GPT166_GTCCRA                     GPT162_GTCCRA
#define GPT166_GTCCRA_GTCCRA              GPT162_GTCCRA_GTCCRA
#define GPT166_GTCCRA_GTCCRA_MASK         GPT162_GTCCRA_GTCCRA_MASK
#define GPT166_GTCCRB_OFFSET              GPT162_GTCCRB_OFFSET
#define GPT166_GTCCRB                     GPT162_GTCCRB
#define GPT166_GTCCRB_GTCCRB              GPT162_GTCCRB_GTCCRB
#define GPT166_GTCCRB_GTCCRB_MASK         GPT162_GTCCRB_GTCCRB_MASK
#define GPT166_GTCCRC_OFFSET              GPT162_GTCCRC_OFFSET
#define GPT166_GTCCRC                     GPT162_GTCCRC
#define GPT166_GTCCRC_GTCCRC              GPT162_GTCCRC_GTCCRC
#define GPT166_GTCCRC_GTCCRC_MASK         GPT162_GTCCRC_GTCCRC_MASK
#define GPT166_GTCCRE_OFFSET              GPT162_GTCCRE_OFFSET
#define GPT166_GTCCRE                     GPT162_GTCCRE
#define GPT166_GTCCRE_GTCCRE              GPT162_GTCCRE_GTCCRE
#define GPT166_GTCCRE_GTCCRE_MASK         GPT162_GTCCRE_GTCCRE_MASK
#define GPT166_GTCCRD_OFFSET              GPT162_GTCCRD_OFFSET
#define GPT166_GTCCRD                     GPT162_GTCCRD
#define GPT166_GTCCRD_GTCCRD              GPT162_GTCCRD_GTCCRD
#define GPT166_GTCCRD_GTCCRD_MASK         GPT162_GTCCRD_GTCCRD_MASK
#define GPT166_GTCCRF_OFFSET              GPT162_GTCCRF_OFFSET
#define GPT166_GTCCRF                     GPT162_GTCCRF
#define GPT166_GTCCRF_GTCCRF              GPT162_GTCCRF_GTCCRF
#define GPT166_GTCCRF_GTCCRF_MASK         GPT162_GTCCRF_GTCCRF_MASK
#define GPT166_GTPR_OFFSET                GPT162_GTPR_OFFSET
#define GPT166_GTPR                       GPT162_GTPR
#define GPT166_GTPR_GTPR                  GPT162_GTPR_GTPR
#define GPT166_GTPR_GTPR_MASK             GPT162_GTPR_GTPR_MASK
#define GPT166_GTPBR_OFFSET               GPT162_GTPBR_OFFSET
#define GPT166_GTPBR                      GPT162_GTPBR
#define GPT166_GTPBR_GTPBR                GPT162_GTPBR_GTPBR
#define GPT166_GTPBR_GTPBR_MASK           GPT162_GTPBR_GTPBR_MASK
#define GPT166_GTDTCR_OFFSET              GPT162_GTDTCR_OFFSET
#define GPT166_GTDTCR                     GPT162_GTDTCR
#define GPT166_GTDTCR_TDE                 GPT162_GTDTCR_TDE
#define GPT166_GTDVU_OFFSET               GPT162_GTDVU_OFFSET
#define GPT166_GTDVU                      GPT162_GTDVU
#define GPT166_GTDVU_GTDVU                GPT162_GTDVU_GTDVU
#define GPT166_GTDVU_GTDVU_MASK           GPT162_GTDVU_GTDVU_MASK

/* No registers defined for peripheral GPT167. Using those of GPT162. */
#define GPT167_BASE                       0x40078700
#define GPT167_GTWP_OFFSET                GPT162_GTWP_OFFSET
#define GPT167_GTWP                       GPT162_GTWP
#define GPT167_GTWP_PRKEY                 GPT162_GTWP_PRKEY
#define GPT167_GTWP_PRKEY_MASK            GPT162_GTWP_PRKEY_MASK
#define GPT167_GTWP_WP                    GPT162_GTWP_WP
#define GPT167_GTSTR_OFFSET               GPT162_GTSTR_OFFSET
#define GPT167_GTSTR                      GPT162_GTSTR
#define GPT167_GTSTR_CSTRT7               GPT162_GTSTR_CSTRT7
#define GPT167_GTSTR_CSTRT6               GPT162_GTSTR_CSTRT6
#define GPT167_GTSTR_CSTRT5               GPT162_GTSTR_CSTRT5
#define GPT167_GTSTR_CSTRT4               GPT162_GTSTR_CSTRT4
#define GPT167_GTSTR_CSTRT3               GPT162_GTSTR_CSTRT3
#define GPT167_GTSTR_CSTRT2               GPT162_GTSTR_CSTRT2
#define GPT167_GTSTR_CSTRT1               GPT162_GTSTR_CSTRT1
#define GPT167_GTSTR_CSTRT0               GPT162_GTSTR_CSTRT0
#define GPT167_GTSTP_OFFSET               GPT162_GTSTP_OFFSET
#define GPT167_GTSTP                      GPT162_GTSTP
#define GPT167_GTSTP_CSTOP7               GPT162_GTSTP_CSTOP7
#define GPT167_GTSTP_CSTOP6               GPT162_GTSTP_CSTOP6
#define GPT167_GTSTP_CSTOP5               GPT162_GTSTP_CSTOP5
#define GPT167_GTSTP_CSTOP4               GPT162_GTSTP_CSTOP4
#define GPT167_GTSTP_CSTOP3               GPT162_GTSTP_CSTOP3
#define GPT167_GTSTP_CSTOP2               GPT162_GTSTP_CSTOP2
#define GPT167_GTSTP_CSTOP1               GPT162_GTSTP_CSTOP1
#define GPT167_GTSTP_CSTOP0               GPT162_GTSTP_CSTOP0
#define GPT167_GTCLR_OFFSET               GPT162_GTCLR_OFFSET
#define GPT167_GTCLR                      GPT162_GTCLR
#define GPT167_GTCLR_CCLR7                GPT162_GTCLR_CCLR7
#define GPT167_GTCLR_CCLR6                GPT162_GTCLR_CCLR6
#define GPT167_GTCLR_CCLR5                GPT162_GTCLR_CCLR5
#define GPT167_GTCLR_CCLR4                GPT162_GTCLR_CCLR4
#define GPT167_GTCLR_CCLR3                GPT162_GTCLR_CCLR3
#define GPT167_GTCLR_CCLR2                GPT162_GTCLR_CCLR2
#define GPT167_GTCLR_CCLR1                GPT162_GTCLR_CCLR1
#define GPT167_GTCLR_CCLR0                GPT162_GTCLR_CCLR0
#define GPT167_GTSSR_OFFSET               GPT162_GTSSR_OFFSET
#define GPT167_GTSSR                      GPT162_GTSSR
#define GPT167_GTSSR_CSTRT                GPT162_GTSSR_CSTRT
#define GPT167_GTSSR_SSELCH               GPT162_GTSSR_SSELCH
#define GPT167_GTSSR_SSELCG               GPT162_GTSSR_SSELCG
#define GPT167_GTSSR_SSELCF               GPT162_GTSSR_SSELCF
#define GPT167_GTSSR_SSELCE               GPT162_GTSSR_SSELCE
#define GPT167_GTSSR_SSELCD               GPT162_GTSSR_SSELCD
#define GPT167_GTSSR_SSELCC               GPT162_GTSSR_SSELCC
#define GPT167_GTSSR_SSELCB               GPT162_GTSSR_SSELCB
#define GPT167_GTSSR_SSELCA               GPT162_GTSSR_SSELCA
#define GPT167_GTSSR_SSCBFAH              GPT162_GTSSR_SSCBFAH
#define GPT167_GTSSR_SSCBFAL              GPT162_GTSSR_SSCBFAL
#define GPT167_GTSSR_SSCBRAH              GPT162_GTSSR_SSCBRAH
#define GPT167_GTSSR_SSCBRAL              GPT162_GTSSR_SSCBRAL
#define GPT167_GTSSR_SSCAFBH              GPT162_GTSSR_SSCAFBH
#define GPT167_GTSSR_SSCAFBL              GPT162_GTSSR_SSCAFBL
#define GPT167_GTSSR_SSCARBH              GPT162_GTSSR_SSCARBH
#define GPT167_GTSSR_SSCARBL              GPT162_GTSSR_SSCARBL
#define GPT167_GTSSR_SSGTRGBF             GPT162_GTSSR_SSGTRGBF
#define GPT167_GTSSR_SSGTRGBR             GPT162_GTSSR_SSGTRGBR
#define GPT167_GTSSR_SSGTRGAF             GPT162_GTSSR_SSGTRGAF
#define GPT167_GTSSR_SSGTRGAR             GPT162_GTSSR_SSGTRGAR
#define GPT167_GTPSR_OFFSET               GPT162_GTPSR_OFFSET
#define GPT167_GTPSR                      GPT162_GTPSR
#define GPT167_GTPSR_CSTOP                GPT162_GTPSR_CSTOP
#define GPT167_GTPSR_PSELCH               GPT162_GTPSR_PSELCH
#define GPT167_GTPSR_PSELCG               GPT162_GTPSR_PSELCG
#define GPT167_GTPSR_PSELCF               GPT162_GTPSR_PSELCF
#define GPT167_GTPSR_PSELCE               GPT162_GTPSR_PSELCE
#define GPT167_GTPSR_PSELCD               GPT162_GTPSR_PSELCD
#define GPT167_GTPSR_PSELCC               GPT162_GTPSR_PSELCC
#define GPT167_GTPSR_PSELCB               GPT162_GTPSR_PSELCB
#define GPT167_GTPSR_PSELCA               GPT162_GTPSR_PSELCA
#define GPT167_GTPSR_PSCBFAH              GPT162_GTPSR_PSCBFAH
#define GPT167_GTPSR_PSCBFAL              GPT162_GTPSR_PSCBFAL
#define GPT167_GTPSR_PSCBRAH              GPT162_GTPSR_PSCBRAH
#define GPT167_GTPSR_PSCBRAL              GPT162_GTPSR_PSCBRAL
#define GPT167_GTPSR_PSCAFBH              GPT162_GTPSR_PSCAFBH
#define GPT167_GTPSR_PSCAFBL              GPT162_GTPSR_PSCAFBL
#define GPT167_GTPSR_PSCARBH              GPT162_GTPSR_PSCARBH
#define GPT167_GTPSR_PSCARBL              GPT162_GTPSR_PSCARBL
#define GPT167_GTPSR_PSGTRGBF             GPT162_GTPSR_PSGTRGBF
#define GPT167_GTPSR_PSGTRGBR             GPT162_GTPSR_PSGTRGBR
#define GPT167_GTPSR_PSGTRGAF             GPT162_GTPSR_PSGTRGAF
#define GPT167_GTPSR_PSGTRGAR             GPT162_GTPSR_PSGTRGAR
#define GPT167_GTCSR_OFFSET               GPT162_GTCSR_OFFSET
#define GPT167_GTCSR                      GPT162_GTCSR
#define GPT167_GTCSR_CCLR                 GPT162_GTCSR_CCLR
#define GPT167_GTCSR_CSELCH               GPT162_GTCSR_CSELCH
#define GPT167_GTCSR_CSELCG               GPT162_GTCSR_CSELCG
#define GPT167_GTCSR_CSELCF               GPT162_GTCSR_CSELCF
#define GPT167_GTCSR_CSELCE               GPT162_GTCSR_CSELCE
#define GPT167_GTCSR_CSELCD               GPT162_GTCSR_CSELCD
#define GPT167_GTCSR_CSELCC               GPT162_GTCSR_CSELCC
#define GPT167_GTCSR_CSELCB               GPT162_GTCSR_CSELCB
#define GPT167_GTCSR_CSELCA               GPT162_GTCSR_CSELCA
#define GPT167_GTCSR_CSCBFAH              GPT162_GTCSR_CSCBFAH
#define GPT167_GTCSR_CSCBFAL              GPT162_GTCSR_CSCBFAL
#define GPT167_GTCSR_CSCBRAH              GPT162_GTCSR_CSCBRAH
#define GPT167_GTCSR_CSCBRAL              GPT162_GTCSR_CSCBRAL
#define GPT167_GTCSR_CSCAFBH              GPT162_GTCSR_CSCAFBH
#define GPT167_GTCSR_CSCAFBL              GPT162_GTCSR_CSCAFBL
#define GPT167_GTCSR_CSCARBH              GPT162_GTCSR_CSCARBH
#define GPT167_GTCSR_CSCARBL              GPT162_GTCSR_CSCARBL
#define GPT167_GTCSR_CSGTRGBF             GPT162_GTCSR_CSGTRGBF
#define GPT167_GTCSR_CSGTRGBR             GPT162_GTCSR_CSGTRGBR
#define GPT167_GTCSR_CSGTRGAF             GPT162_GTCSR_CSGTRGAF
#define GPT167_GTCSR_CSGTRGAR             GPT162_GTCSR_CSGTRGAR
#define GPT167_GTUPSR_OFFSET              GPT162_GTUPSR_OFFSET
#define GPT167_GTUPSR                     GPT162_GTUPSR
#define GPT167_GTUPSR_USELCH              GPT162_GTUPSR_USELCH
#define GPT167_GTUPSR_USELCG              GPT162_GTUPSR_USELCG
#define GPT167_GTUPSR_USELCF              GPT162_GTUPSR_USELCF
#define GPT167_GTUPSR_USELCE              GPT162_GTUPSR_USELCE
#define GPT167_GTUPSR_USELCD              GPT162_GTUPSR_USELCD
#define GPT167_GTUPSR_USELCC              GPT162_GTUPSR_USELCC
#define GPT167_GTUPSR_USELCB              GPT162_GTUPSR_USELCB
#define GPT167_GTUPSR_USELCA              GPT162_GTUPSR_USELCA
#define GPT167_GTUPSR_USCBFAH             GPT162_GTUPSR_USCBFAH
#define GPT167_GTUPSR_USCBFAL             GPT162_GTUPSR_USCBFAL
#define GPT167_GTUPSR_USCBRAH             GPT162_GTUPSR_USCBRAH
#define GPT167_GTUPSR_USCBRAL             GPT162_GTUPSR_USCBRAL
#define GPT167_GTUPSR_USCAFBH             GPT162_GTUPSR_USCAFBH
#define GPT167_GTUPSR_USCAFBL             GPT162_GTUPSR_USCAFBL
#define GPT167_GTUPSR_USCARBH             GPT162_GTUPSR_USCARBH
#define GPT167_GTUPSR_USCARBL             GPT162_GTUPSR_USCARBL
#define GPT167_GTUPSR_USGTRGBF            GPT162_GTUPSR_USGTRGBF
#define GPT167_GTUPSR_USGTRGBR            GPT162_GTUPSR_USGTRGBR
#define GPT167_GTUPSR_USGTRGAF            GPT162_GTUPSR_USGTRGAF
#define GPT167_GTUPSR_USGTRGAR            GPT162_GTUPSR_USGTRGAR
#define GPT167_GTDNSR_OFFSET              GPT162_GTDNSR_OFFSET
#define GPT167_GTDNSR                     GPT162_GTDNSR
#define GPT167_GTDNSR_DSELCH              GPT162_GTDNSR_DSELCH
#define GPT167_GTDNSR_DSELCG              GPT162_GTDNSR_DSELCG
#define GPT167_GTDNSR_DSELCF              GPT162_GTDNSR_DSELCF
#define GPT167_GTDNSR_DSELCE              GPT162_GTDNSR_DSELCE
#define GPT167_GTDNSR_DSELCD              GPT162_GTDNSR_DSELCD
#define GPT167_GTDNSR_DSELCC              GPT162_GTDNSR_DSELCC
#define GPT167_GTDNSR_DSELCB              GPT162_GTDNSR_DSELCB
#define GPT167_GTDNSR_DSELCA              GPT162_GTDNSR_DSELCA
#define GPT167_GTDNSR_DSCBFAH             GPT162_GTDNSR_DSCBFAH
#define GPT167_GTDNSR_DSCBFAL             GPT162_GTDNSR_DSCBFAL
#define GPT167_GTDNSR_DSCBRAH             GPT162_GTDNSR_DSCBRAH
#define GPT167_GTDNSR_DSCBRAL             GPT162_GTDNSR_DSCBRAL
#define GPT167_GTDNSR_DSCAFBH             GPT162_GTDNSR_DSCAFBH
#define GPT167_GTDNSR_DSCAFBL             GPT162_GTDNSR_DSCAFBL
#define GPT167_GTDNSR_DSCARBH             GPT162_GTDNSR_DSCARBH
#define GPT167_GTDNSR_DSCARBL             GPT162_GTDNSR_DSCARBL
#define GPT167_GTDNSR_DSGTRGBF            GPT162_GTDNSR_DSGTRGBF
#define GPT167_GTDNSR_DSGTRGBR            GPT162_GTDNSR_DSGTRGBR
#define GPT167_GTDNSR_DSGTRGAF            GPT162_GTDNSR_DSGTRGAF
#define GPT167_GTDNSR_DSGTRGAR            GPT162_GTDNSR_DSGTRGAR
#define GPT167_GTICASR_OFFSET             GPT162_GTICASR_OFFSET
#define GPT167_GTICASR                    GPT162_GTICASR
#define GPT167_GTICASR_ASELCH             GPT162_GTICASR_ASELCH
#define GPT167_GTICASR_ASELCG             GPT162_GTICASR_ASELCG
#define GPT167_GTICASR_ASELCF             GPT162_GTICASR_ASELCF
#define GPT167_GTICASR_ASELCE             GPT162_GTICASR_ASELCE
#define GPT167_GTICASR_ASELCD             GPT162_GTICASR_ASELCD
#define GPT167_GTICASR_ASELCC             GPT162_GTICASR_ASELCC
#define GPT167_GTICASR_ASELCB             GPT162_GTICASR_ASELCB
#define GPT167_GTICASR_ASELCA             GPT162_GTICASR_ASELCA
#define GPT167_GTICASR_ASCBFAH            GPT162_GTICASR_ASCBFAH
#define GPT167_GTICASR_ASCBFAL            GPT162_GTICASR_ASCBFAL
#define GPT167_GTICASR_ASCBRAH            GPT162_GTICASR_ASCBRAH
#define GPT167_GTICASR_ASCBRAL            GPT162_GTICASR_ASCBRAL
#define GPT167_GTICASR_ASCAFBH            GPT162_GTICASR_ASCAFBH
#define GPT167_GTICASR_ASCAFBL            GPT162_GTICASR_ASCAFBL
#define GPT167_GTICASR_ASCARBH            GPT162_GTICASR_ASCARBH
#define GPT167_GTICASR_ASCARBL            GPT162_GTICASR_ASCARBL
#define GPT167_GTICASR_ASGTRGBF           GPT162_GTICASR_ASGTRGBF
#define GPT167_GTICASR_ASGTRGBR           GPT162_GTICASR_ASGTRGBR
#define GPT167_GTICASR_ASGTRGAF           GPT162_GTICASR_ASGTRGAF
#define GPT167_GTICASR_ASGTRGAR           GPT162_GTICASR_ASGTRGAR
#define GPT167_GTICBSR_OFFSET             GPT162_GTICBSR_OFFSET
#define GPT167_GTICBSR                    GPT162_GTICBSR
#define GPT167_GTICBSR_BSELCH             GPT162_GTICBSR_BSELCH
#define GPT167_GTICBSR_BSELCG             GPT162_GTICBSR_BSELCG
#define GPT167_GTICBSR_BSELCF             GPT162_GTICBSR_BSELCF
#define GPT167_GTICBSR_BSELCE             GPT162_GTICBSR_BSELCE
#define GPT167_GTICBSR_BSELCD             GPT162_GTICBSR_BSELCD
#define GPT167_GTICBSR_BSELCC             GPT162_GTICBSR_BSELCC
#define GPT167_GTICBSR_BSELCB             GPT162_GTICBSR_BSELCB
#define GPT167_GTICBSR_BSELCA             GPT162_GTICBSR_BSELCA
#define GPT167_GTICBSR_BSCBFAH            GPT162_GTICBSR_BSCBFAH
#define GPT167_GTICBSR_BSCBFAL            GPT162_GTICBSR_BSCBFAL
#define GPT167_GTICBSR_BSCBRAH            GPT162_GTICBSR_BSCBRAH
#define GPT167_GTICBSR_BSCBRAL            GPT162_GTICBSR_BSCBRAL
#define GPT167_GTICBSR_BSCAFBH            GPT162_GTICBSR_BSCAFBH
#define GPT167_GTICBSR_BSCAFBL            GPT162_GTICBSR_BSCAFBL
#define GPT167_GTICBSR_BSCARBH            GPT162_GTICBSR_BSCARBH
#define GPT167_GTICBSR_BSCARBL            GPT162_GTICBSR_BSCARBL
#define GPT167_GTICBSR_BSGTRGBF           GPT162_GTICBSR_BSGTRGBF
#define GPT167_GTICBSR_BSGTRGBR           GPT162_GTICBSR_BSGTRGBR
#define GPT167_GTICBSR_BSGTRGAF           GPT162_GTICBSR_BSGTRGAF
#define GPT167_GTICBSR_BSGTRGAR           GPT162_GTICBSR_BSGTRGAR
#define GPT167_GTCR_OFFSET                GPT162_GTCR_OFFSET
#define GPT167_GTCR                       GPT162_GTCR
#define GPT167_GTCR_TPCS                  GPT162_GTCR_TPCS
#define GPT167_GTCR_TPCS_MASK             GPT162_GTCR_TPCS_MASK
#define GPT167_GTCR_MD                    GPT162_GTCR_MD
#define GPT167_GTCR_MD_MASK               GPT162_GTCR_MD_MASK
#define GPT167_GTCR_CST                   GPT162_GTCR_CST
#define GPT167_GTUDDTYC_OFFSET            GPT162_GTUDDTYC_OFFSET
#define GPT167_GTUDDTYC                   GPT162_GTUDDTYC
#define GPT167_GTUDDTYC_OBDTYR            GPT162_GTUDDTYC_OBDTYR
#define GPT167_GTUDDTYC_OBDTYF            GPT162_GTUDDTYC_OBDTYF
#define GPT167_GTUDDTYC_OBDTY             GPT162_GTUDDTYC_OBDTY
#define GPT167_GTUDDTYC_OBDTY_MASK        GPT162_GTUDDTYC_OBDTY_MASK
#define GPT167_GTUDDTYC_OADTYR            GPT162_GTUDDTYC_OADTYR
#define GPT167_GTUDDTYC_OADTYF            GPT162_GTUDDTYC_OADTYF
#define GPT167_GTUDDTYC_OADTY             GPT162_GTUDDTYC_OADTY
#define GPT167_GTUDDTYC_OADTY_MASK        GPT162_GTUDDTYC_OADTY_MASK
#define GPT167_GTUDDTYC_UDF               GPT162_GTUDDTYC_UDF
#define GPT167_GTUDDTYC_UD                GPT162_GTUDDTYC_UD
#define GPT167_GTIOR_OFFSET               GPT162_GTIOR_OFFSET
#define GPT167_GTIOR                      GPT162_GTIOR
#define GPT167_GTIOR_NFCSB                GPT162_GTIOR_NFCSB
#define GPT167_GTIOR_NFCSB_MASK           GPT162_GTIOR_NFCSB_MASK
#define GPT167_GTIOR_NFBEN                GPT162_GTIOR_NFBEN
#define GPT167_GTIOR_OBDF                 GPT162_GTIOR_OBDF
#define GPT167_GTIOR_OBDF_MASK            GPT162_GTIOR_OBDF_MASK
#define GPT167_GTIOR_OBE                  GPT162_GTIOR_OBE
#define GPT167_GTIOR_OBHLD                GPT162_GTIOR_OBHLD
#define GPT167_GTIOR_OBDFLT               GPT162_GTIOR_OBDFLT
#define GPT167_GTIOR_GTIOB                GPT162_GTIOR_GTIOB
#define GPT167_GTIOR_GTIOB_MASK           GPT162_GTIOR_GTIOB_MASK
#define GPT167_GTIOR_NFCSA                GPT162_GTIOR_NFCSA
#define GPT167_GTIOR_NFCSA_MASK           GPT162_GTIOR_NFCSA_MASK
#define GPT167_GTIOR_NFAEN                GPT162_GTIOR_NFAEN
#define GPT167_GTIOR_OADF                 GPT162_GTIOR_OADF
#define GPT167_GTIOR_OADF_MASK            GPT162_GTIOR_OADF_MASK
#define GPT167_GTIOR_OAE                  GPT162_GTIOR_OAE
#define GPT167_GTIOR_OAHLD                GPT162_GTIOR_OAHLD
#define GPT167_GTIOR_OADFLT               GPT162_GTIOR_OADFLT
#define GPT167_GTIOR_GTIOA                GPT162_GTIOR_GTIOA
#define GPT167_GTIOR_GTIOA_MASK           GPT162_GTIOR_GTIOA_MASK
#define GPT167_GTINTAD_OFFSET             GPT162_GTINTAD_OFFSET
#define GPT167_GTINTAD                    GPT162_GTINTAD
#define GPT167_GTINTAD_GRPABL             GPT162_GTINTAD_GRPABL
#define GPT167_GTINTAD_GRPABH             GPT162_GTINTAD_GRPABH
#define GPT167_GTINTAD_GRP                GPT162_GTINTAD_GRP
#define GPT167_GTINTAD_GRP_MASK           GPT162_GTINTAD_GRP_MASK
#define GPT167_GTST_OFFSET                GPT162_GTST_OFFSET
#define GPT167_GTST                       GPT162_GTST
#define GPT167_GTST_OABLF                 GPT162_GTST_OABLF
#define GPT167_GTST_OABHF                 GPT162_GTST_OABHF
#define GPT167_GTST_ODF                   GPT162_GTST_ODF
#define GPT167_GTST_TUCF                  GPT162_GTST_TUCF
#define GPT167_GTST_TCFPU                 GPT162_GTST_TCFPU
#define GPT167_GTST_TCFPO                 GPT162_GTST_TCFPO
#define GPT167_GTST_TCFF                  GPT162_GTST_TCFF
#define GPT167_GTST_TCFE                  GPT162_GTST_TCFE
#define GPT167_GTST_TCFD                  GPT162_GTST_TCFD
#define GPT167_GTST_TCFC                  GPT162_GTST_TCFC
#define GPT167_GTST_TCFB                  GPT162_GTST_TCFB
#define GPT167_GTST_TCFA                  GPT162_GTST_TCFA
#define GPT167_GTBER_OFFSET               GPT162_GTBER_OFFSET
#define GPT167_GTBER                      GPT162_GTBER
#define GPT167_GTBER_CCRSWT               GPT162_GTBER_CCRSWT
#define GPT167_GTBER_PR                   GPT162_GTBER_PR
#define GPT167_GTBER_PR_MASK              GPT162_GTBER_PR_MASK
#define GPT167_GTBER_CCRB                 GPT162_GTBER_CCRB
#define GPT167_GTBER_CCRB_MASK            GPT162_GTBER_CCRB_MASK
#define GPT167_GTBER_CCRA                 GPT162_GTBER_CCRA
#define GPT167_GTBER_CCRA_MASK            GPT162_GTBER_CCRA_MASK
#define GPT167_GTBER_BD                   GPT162_GTBER_BD
#define GPT167_GTBER_BD_MASK              GPT162_GTBER_BD_MASK
#define GPT167_GTCNT_OFFSET               GPT162_GTCNT_OFFSET
#define GPT167_GTCNT                      GPT162_GTCNT
#define GPT167_GTCNT_GTCNT                GPT162_GTCNT_GTCNT
#define GPT167_GTCNT_GTCNT_MASK           GPT162_GTCNT_GTCNT_MASK
#define GPT167_GTCCRA_OFFSET              GPT162_GTCCRA_OFFSET
#define GPT167_GTCCRA                     GPT162_GTCCRA
#define GPT167_GTCCRA_GTCCRA              GPT162_GTCCRA_GTCCRA
#define GPT167_GTCCRA_GTCCRA_MASK         GPT162_GTCCRA_GTCCRA_MASK
#define GPT167_GTCCRB_OFFSET              GPT162_GTCCRB_OFFSET
#define GPT167_GTCCRB                     GPT162_GTCCRB
#define GPT167_GTCCRB_GTCCRB              GPT162_GTCCRB_GTCCRB
#define GPT167_GTCCRB_GTCCRB_MASK         GPT162_GTCCRB_GTCCRB_MASK
#define GPT167_GTCCRC_OFFSET              GPT162_GTCCRC_OFFSET
#define GPT167_GTCCRC                     GPT162_GTCCRC
#define GPT167_GTCCRC_GTCCRC              GPT162_GTCCRC_GTCCRC
#define GPT167_GTCCRC_GTCCRC_MASK         GPT162_GTCCRC_GTCCRC_MASK
#define GPT167_GTCCRE_OFFSET              GPT162_GTCCRE_OFFSET
#define GPT167_GTCCRE                     GPT162_GTCCRE
#define GPT167_GTCCRE_GTCCRE              GPT162_GTCCRE_GTCCRE
#define GPT167_GTCCRE_GTCCRE_MASK         GPT162_GTCCRE_GTCCRE_MASK
#define GPT167_GTCCRD_OFFSET              GPT162_GTCCRD_OFFSET
#define GPT167_GTCCRD                     GPT162_GTCCRD
#define GPT167_GTCCRD_GTCCRD              GPT162_GTCCRD_GTCCRD
#define GPT167_GTCCRD_GTCCRD_MASK         GPT162_GTCCRD_GTCCRD_MASK
#define GPT167_GTCCRF_OFFSET              GPT162_GTCCRF_OFFSET
#define GPT167_GTCCRF                     GPT162_GTCCRF
#define GPT167_GTCCRF_GTCCRF              GPT162_GTCCRF_GTCCRF
#define GPT167_GTCCRF_GTCCRF_MASK         GPT162_GTCCRF_GTCCRF_MASK
#define GPT167_GTPR_OFFSET                GPT162_GTPR_OFFSET
#define GPT167_GTPR                       GPT162_GTPR
#define GPT167_GTPR_GTPR                  GPT162_GTPR_GTPR
#define GPT167_GTPR_GTPR_MASK             GPT162_GTPR_GTPR_MASK
#define GPT167_GTPBR_OFFSET               GPT162_GTPBR_OFFSET
#define GPT167_GTPBR                      GPT162_GTPBR
#define GPT167_GTPBR_GTPBR                GPT162_GTPBR_GTPBR
#define GPT167_GTPBR_GTPBR_MASK           GPT162_GTPBR_GTPBR_MASK
#define GPT167_GTDTCR_OFFSET              GPT162_GTDTCR_OFFSET
#define GPT167_GTDTCR                     GPT162_GTDTCR
#define GPT167_GTDTCR_TDE                 GPT162_GTDTCR_TDE
#define GPT167_GTDVU_OFFSET               GPT162_GTDVU_OFFSET
#define GPT167_GTDVU                      GPT162_GTDVU
#define GPT167_GTDVU_GTDVU                GPT162_GTDVU_GTDVU
#define GPT167_GTDVU_GTDVU_MASK           GPT162_GTDVU_GTDVU_MASK

/* GPT_OPS - Output Phase Switching Controller */
#define GPT_OPS_BASE                      0x40078ff0
#define GPT_OPS_OPSCR_OFFSET              0x0000
#define GPT_OPS_OPSCR                     (GPT_OPS_BASE + GPT_OPS_OPSCR_OFFSET)
#define GPT_OPS_OPSCR_NFCS                (2 << 30) /* 40000000: External Input Noise Filter Clock selection Noise filter sampling clock setting of the external input. */
#define GPT_OPS_OPSCR_NFCS_MASK                (0x03)
#define GPT_OPS_OPSCR_NFEN                (1 << 29) /* 20000000: External Input Noise Filter Enable */
#define GPT_OPS_OPSCR_GODF                (1 << 26) /* 4000000: Group output disable function */
#define GPT_OPS_OPSCR_GRP                 (2 << 24) /* 1000000: Output disabled source selection */
#define GPT_OPS_OPSCR_GRP_MASK                 (0x03)
#define GPT_OPS_OPSCR_ALIGN               (1 << 21) /* 200000: Input phase alignment */
#define GPT_OPS_OPSCR_RV                  (1 << 20) /* 100000: Output phase rotation direction reversal */
#define GPT_OPS_OPSCR_INV                 (1 << 19) /* 80000: Invert-Phase Output Control */
#define GPT_OPS_OPSCR_N                   (1 << 18) /* 40000: Negative-Phase Output (N) Control */
#define GPT_OPS_OPSCR_P                   (1 << 17) /* 20000: Positive-Phase Output (P) Control */
#define GPT_OPS_OPSCR_FB                  (1 << 16) /* 10000: External Feedback Signal Enable This bit selects the input phase from the software settings and external input. */
#define GPT_OPS_OPSCR_EN                  (1 <<  8) /* 100: Enable-Phase Output Control */
#define GPT_OPS_OPSCR_W                   (1 <<  6) /* 40: Input W-Phase Monitor This bit monitors the state of the input phase. OPSCR.FB=0:External input monitoring by PCLK OPSCR.FB=1:Software settings (UF/VF/WF) */
#define GPT_OPS_OPSCR_V                   (1 <<  5) /* 20: Input V-Phase Monitor This bit monitors the state of the input phase. OPSCR.FB=0:External input monitoring by PCLK OPSCR.FB=1:Software settings (UF/VF/WF) */
#define GPT_OPS_OPSCR_U                   (1 <<  4) /* 10: Input U-Phase Monitor This bit monitors the state of the input phase. OPSCR.FB=0:External input monitoring by PCLK OPSCR.FB=1:Software settings (UF/VF/WF) */
#define GPT_OPS_OPSCR_WF                  (1 <<  2) /* 04: Input Phase Soft Setting UF This bit sets the input phase by the software settings. This bit setting is valid when the OPSCR.FB bit = 1. */
#define GPT_OPS_OPSCR_VF                  (1 <<  1) /* 02: Input Phase Soft Setting VF This bit sets the input phase by the software settings. This bit setting is valid when the OPSCR.FB bit = 1. */
#define GPT_OPS_OPSCR_UF                  (1 <<  0) /* 01: Input Phase Soft Setting WF This bit sets the input phase by the software settings. This bit setting is valid when the OPSCR.FB bit = 1. */
