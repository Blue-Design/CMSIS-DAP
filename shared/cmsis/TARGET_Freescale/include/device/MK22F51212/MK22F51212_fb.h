/*
 * Copyright (c) 2014, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * THIS SOFTWARE IS PROVIDED BY FREESCALE "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT
 * SHALL FREESCALE BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
 * OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
 * IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY
 * OF SUCH DAMAGE.
 */
/*
 * WARNING! DO NOT EDIT THIS FILE DIRECTLY!
 *
 * This file was generated automatically and any changes may be lost.
 */
#ifndef __HW_FB_REGISTERS_H__
#define __HW_FB_REGISTERS_H__

#include "MK22F51212.h"
#include "fsl_bitband.h"

/*
 * MK22F51212 FB
 *
 * FlexBus external bus interface
 *
 * Registers defined in this header file:
 * - HW_FB_CSARn - Chip Select Address Register
 * - HW_FB_CSMRn - Chip Select Mask Register
 * - HW_FB_CSCRn - Chip Select Control Register
 * - HW_FB_CSPMCR - Chip Select port Multiplexing Control Register
 *
 * - hw_fb_t - Struct containing all module registers.
 */

#define HW_FB_INSTANCE_COUNT (1U) /*!< Number of instances of the FB module. */

/*******************************************************************************
 * HW_FB_CSARn - Chip Select Address Register
 ******************************************************************************/

/*!
 * @brief HW_FB_CSARn - Chip Select Address Register (RW)
 *
 * Reset value: 0x00000000U
 *
 * Specifies the associated chip-select's base address.
 */
typedef union _hw_fb_csarn
{
    uint32_t U;
    struct _hw_fb_csarn_bitfields
    {
        uint32_t RESERVED0 : 16;       /*!< [15:0]  */
        uint32_t BA : 16;              /*!< [31:16] Base Address */
    } B;
} hw_fb_csarn_t;

/*!
 * @name Constants and macros for entire FB_CSARn register
 */
/*@{*/
#define HW_FB_CSARn_COUNT (6U)

#define HW_FB_CSARn_ADDR(x, n)   ((x) + 0x0U + (0xCU * (n)))

#define HW_FB_CSARn(x, n)        (*(__IO hw_fb_csarn_t *) HW_FB_CSARn_ADDR(x, n))
#define HW_FB_CSARn_RD(x, n)     (HW_FB_CSARn(x, n).U)
#define HW_FB_CSARn_WR(x, n, v)  (HW_FB_CSARn(x, n).U = (v))
#define HW_FB_CSARn_SET(x, n, v) (HW_FB_CSARn_WR(x, n, HW_FB_CSARn_RD(x, n) |  (v)))
#define HW_FB_CSARn_CLR(x, n, v) (HW_FB_CSARn_WR(x, n, HW_FB_CSARn_RD(x, n) & ~(v)))
#define HW_FB_CSARn_TOG(x, n, v) (HW_FB_CSARn_WR(x, n, HW_FB_CSARn_RD(x, n) ^  (v)))
/*@}*/

/*
 * Constants & macros for individual FB_CSARn bitfields
 */

/*!
 * @name Register FB_CSARn, field BA[31:16] (RW)
 *
 * Defines the base address for memory dedicated to the associated chip-select.
 * BA is compared to bits 31-16 on the internal address bus to determine if the
 * associated chip-select's memory is being accessed. Because the FlexBus module
 * is one of the slaves connected to the crossbar switch, it is only accessible
 * within a certain memory range. See the chip memory map for the applicable
 * FlexBus "expansion" address range for which the chip-selects can be active. Set the
 * CSARn and CSMRn registers appropriately before accessing this region.
 */
/*@{*/
#define BP_FB_CSARn_BA       (16U)         /*!< Bit position for FB_CSARn_BA. */
#define BM_FB_CSARn_BA       (0xFFFF0000U) /*!< Bit mask for FB_CSARn_BA. */
#define BS_FB_CSARn_BA       (16U)         /*!< Bit field size in bits for FB_CSARn_BA. */

/*! @brief Read current value of the FB_CSARn_BA field. */
#define BR_FB_CSARn_BA(x, n) (HW_FB_CSARn(x, n).B.BA)

/*! @brief Format value for bitfield FB_CSARn_BA. */
#define BF_FB_CSARn_BA(v)    ((uint32_t)((uint32_t)(v) << BP_FB_CSARn_BA) & BM_FB_CSARn_BA)

/*! @brief Set the BA field to a new value. */
#define BW_FB_CSARn_BA(x, n, v) (HW_FB_CSARn_WR(x, n, (HW_FB_CSARn_RD(x, n) & ~BM_FB_CSARn_BA) | BF_FB_CSARn_BA(v)))
/*@}*/
/*******************************************************************************
 * HW_FB_CSMRn - Chip Select Mask Register
 ******************************************************************************/

/*!
 * @brief HW_FB_CSMRn - Chip Select Mask Register (RW)
 *
 * Reset value: 0x00000000U
 *
 * Specifies the address mask and allowable access types for the associated
 * chip-select.
 */
typedef union _hw_fb_csmrn
{
    uint32_t U;
    struct _hw_fb_csmrn_bitfields
    {
        uint32_t V : 1;                /*!< [0] Valid */
        uint32_t RESERVED0 : 7;        /*!< [7:1]  */
        uint32_t WP : 1;               /*!< [8] Write Protect */
        uint32_t RESERVED1 : 7;        /*!< [15:9]  */
        uint32_t BAM : 16;             /*!< [31:16] Base Address Mask */
    } B;
} hw_fb_csmrn_t;

/*!
 * @name Constants and macros for entire FB_CSMRn register
 */
/*@{*/
#define HW_FB_CSMRn_COUNT (6U)

#define HW_FB_CSMRn_ADDR(x, n)   ((x) + 0x4U + (0xCU * (n)))

#define HW_FB_CSMRn(x, n)        (*(__IO hw_fb_csmrn_t *) HW_FB_CSMRn_ADDR(x, n))
#define HW_FB_CSMRn_RD(x, n)     (HW_FB_CSMRn(x, n).U)
#define HW_FB_CSMRn_WR(x, n, v)  (HW_FB_CSMRn(x, n).U = (v))
#define HW_FB_CSMRn_SET(x, n, v) (HW_FB_CSMRn_WR(x, n, HW_FB_CSMRn_RD(x, n) |  (v)))
#define HW_FB_CSMRn_CLR(x, n, v) (HW_FB_CSMRn_WR(x, n, HW_FB_CSMRn_RD(x, n) & ~(v)))
#define HW_FB_CSMRn_TOG(x, n, v) (HW_FB_CSMRn_WR(x, n, HW_FB_CSMRn_RD(x, n) ^  (v)))
/*@}*/

/*
 * Constants & macros for individual FB_CSMRn bitfields
 */

/*!
 * @name Register FB_CSMRn, field V[0] (RW)
 *
 * Specifies whether the corresponding CSAR, CSMR, and CSCR contents are valid.
 * Programmed chip-selects do not assert until the V bit is 1b (except for
 * FB_CS0, which acts as the global chip-select). At reset, FB_CS0 will fire for any
 * access to the FlexBus memory region. CSMR0[V] must be set as part of the chip
 * select initialization sequence to allow other chip selects to function as
 * programmed.
 *
 * Values:
 * - 0 - Chip-select is invalid.
 * - 1 - Chip-select is valid.
 */
/*@{*/
#define BP_FB_CSMRn_V        (0U)          /*!< Bit position for FB_CSMRn_V. */
#define BM_FB_CSMRn_V        (0x00000001U) /*!< Bit mask for FB_CSMRn_V. */
#define BS_FB_CSMRn_V        (1U)          /*!< Bit field size in bits for FB_CSMRn_V. */

/*! @brief Read current value of the FB_CSMRn_V field. */
#define BR_FB_CSMRn_V(x, n)  (BITBAND_ACCESS32(HW_FB_CSMRn_ADDR(x, n), BP_FB_CSMRn_V))

/*! @brief Format value for bitfield FB_CSMRn_V. */
#define BF_FB_CSMRn_V(v)     ((uint32_t)((uint32_t)(v) << BP_FB_CSMRn_V) & BM_FB_CSMRn_V)

/*! @brief Set the V field to a new value. */
#define BW_FB_CSMRn_V(x, n, v) (BITBAND_ACCESS32(HW_FB_CSMRn_ADDR(x, n), BP_FB_CSMRn_V) = (v))
/*@}*/

/*!
 * @name Register FB_CSMRn, field WP[8] (RW)
 *
 * Controls write accesses to the address range in the corresponding CSAR.
 *
 * Values:
 * - 0 - Write accesses are allowed.
 * - 1 - Write accesses are not allowed. Attempting to write to the range of
 *     addresses for which the WP bit is set results in a bus error termination of
 *     the internal cycle and no external cycle.
 */
/*@{*/
#define BP_FB_CSMRn_WP       (8U)          /*!< Bit position for FB_CSMRn_WP. */
#define BM_FB_CSMRn_WP       (0x00000100U) /*!< Bit mask for FB_CSMRn_WP. */
#define BS_FB_CSMRn_WP       (1U)          /*!< Bit field size in bits for FB_CSMRn_WP. */

/*! @brief Read current value of the FB_CSMRn_WP field. */
#define BR_FB_CSMRn_WP(x, n) (BITBAND_ACCESS32(HW_FB_CSMRn_ADDR(x, n), BP_FB_CSMRn_WP))

/*! @brief Format value for bitfield FB_CSMRn_WP. */
#define BF_FB_CSMRn_WP(v)    ((uint32_t)((uint32_t)(v) << BP_FB_CSMRn_WP) & BM_FB_CSMRn_WP)

/*! @brief Set the WP field to a new value. */
#define BW_FB_CSMRn_WP(x, n, v) (BITBAND_ACCESS32(HW_FB_CSMRn_ADDR(x, n), BP_FB_CSMRn_WP) = (v))
/*@}*/

/*!
 * @name Register FB_CSMRn, field BAM[31:16] (RW)
 *
 * Defines the associated chip-select's block size by masking address bits.
 *
 * Values:
 * - 0 - The corresponding address bit in CSAR is used in the chip-select decode.
 * - 1 - The corresponding address bit in CSAR is a don't care in the
 *     chip-select decode.
 */
/*@{*/
#define BP_FB_CSMRn_BAM      (16U)         /*!< Bit position for FB_CSMRn_BAM. */
#define BM_FB_CSMRn_BAM      (0xFFFF0000U) /*!< Bit mask for FB_CSMRn_BAM. */
#define BS_FB_CSMRn_BAM      (16U)         /*!< Bit field size in bits for FB_CSMRn_BAM. */

/*! @brief Read current value of the FB_CSMRn_BAM field. */
#define BR_FB_CSMRn_BAM(x, n) (HW_FB_CSMRn(x, n).B.BAM)

/*! @brief Format value for bitfield FB_CSMRn_BAM. */
#define BF_FB_CSMRn_BAM(v)   ((uint32_t)((uint32_t)(v) << BP_FB_CSMRn_BAM) & BM_FB_CSMRn_BAM)

/*! @brief Set the BAM field to a new value. */
#define BW_FB_CSMRn_BAM(x, n, v) (HW_FB_CSMRn_WR(x, n, (HW_FB_CSMRn_RD(x, n) & ~BM_FB_CSMRn_BAM) | BF_FB_CSMRn_BAM(v)))
/*@}*/
/*******************************************************************************
 * HW_FB_CSCRn - Chip Select Control Register
 ******************************************************************************/

/*!
 * @brief HW_FB_CSCRn - Chip Select Control Register (RW)
 *
 * Reset value: 0x003FFC00U
 *
 * Controls the auto-acknowledge, address setup and hold times, port size, burst
 * capability, and number of wait states for the associated chip select. To
 * support the global chip-select (FB_CS0), the CSCR0 reset values differ from the
 * other CSCRs. The reset value of CSCR0 is as follows: Bits 31-24 are 0b Bit 23-3
 * are chip-dependent Bits 3-0 are 0b See the chip configuration details for your
 * particular chip for information on the exact CSCR0 reset value.
 */
typedef union _hw_fb_cscrn
{
    uint32_t U;
    struct _hw_fb_cscrn_bitfields
    {
        uint32_t RESERVED0 : 3;        /*!< [2:0]  */
        uint32_t BSTW : 1;             /*!< [3] Burst-Write Enable */
        uint32_t BSTR : 1;             /*!< [4] Burst-Read Enable */
        uint32_t BEM : 1;              /*!< [5] Byte-Enable Mode */
        uint32_t PS : 2;               /*!< [7:6] Port Size */
        uint32_t AA : 1;               /*!< [8] Auto-Acknowledge Enable */
        uint32_t BLS : 1;              /*!< [9] Byte-Lane Shift */
        uint32_t WS : 6;               /*!< [15:10] Wait States */
        uint32_t WRAH : 2;             /*!< [17:16] Write Address Hold or Deselect */
        uint32_t RDAH : 2;             /*!< [19:18] Read Address Hold or Deselect */
        uint32_t ASET : 2;             /*!< [21:20] Address Setup */
        uint32_t EXTS : 1;             /*!< [22]  */
        uint32_t SWSEN : 1;            /*!< [23] Secondary Wait State Enable */
        uint32_t RESERVED1 : 2;        /*!< [25:24]  */
        uint32_t SWS : 6;              /*!< [31:26] Secondary Wait States */
    } B;
} hw_fb_cscrn_t;

/*!
 * @name Constants and macros for entire FB_CSCRn register
 */
/*@{*/
#define HW_FB_CSCRn_COUNT (6U)

#define HW_FB_CSCRn_ADDR(x, n)   ((x) + 0x8U + (0xCU * (n)))

#define HW_FB_CSCRn(x, n)        (*(__IO hw_fb_cscrn_t *) HW_FB_CSCRn_ADDR(x, n))
#define HW_FB_CSCRn_RD(x, n)     (HW_FB_CSCRn(x, n).U)
#define HW_FB_CSCRn_WR(x, n, v)  (HW_FB_CSCRn(x, n).U = (v))
#define HW_FB_CSCRn_SET(x, n, v) (HW_FB_CSCRn_WR(x, n, HW_FB_CSCRn_RD(x, n) |  (v)))
#define HW_FB_CSCRn_CLR(x, n, v) (HW_FB_CSCRn_WR(x, n, HW_FB_CSCRn_RD(x, n) & ~(v)))
#define HW_FB_CSCRn_TOG(x, n, v) (HW_FB_CSCRn_WR(x, n, HW_FB_CSCRn_RD(x, n) ^  (v)))
/*@}*/

/*
 * Constants & macros for individual FB_CSCRn bitfields
 */

/*!
 * @name Register FB_CSCRn, field BSTW[3] (RW)
 *
 * Specifies whether burst writes are enabled for memory associated with each
 * chip select.
 *
 * Values:
 * - 0 - Disabled. Data exceeding the specified port size is broken into
 *     individual, port-sized, non-burst writes. For example, a 32-bit write to an 8-bit
 *     port takes four byte writes.
 * - 1 - Enabled. Enables burst write of data larger than the specified port
 *     size, including 32-bit writes to 8- and 16-bit ports, 16-bit writes to 8-bit
 *     ports, and line writes to 8-, 16-, and 32-bit ports.
 */
/*@{*/
#define BP_FB_CSCRn_BSTW     (3U)          /*!< Bit position for FB_CSCRn_BSTW. */
#define BM_FB_CSCRn_BSTW     (0x00000008U) /*!< Bit mask for FB_CSCRn_BSTW. */
#define BS_FB_CSCRn_BSTW     (1U)          /*!< Bit field size in bits for FB_CSCRn_BSTW. */

/*! @brief Read current value of the FB_CSCRn_BSTW field. */
#define BR_FB_CSCRn_BSTW(x, n) (BITBAND_ACCESS32(HW_FB_CSCRn_ADDR(x, n), BP_FB_CSCRn_BSTW))

/*! @brief Format value for bitfield FB_CSCRn_BSTW. */
#define BF_FB_CSCRn_BSTW(v)  ((uint32_t)((uint32_t)(v) << BP_FB_CSCRn_BSTW) & BM_FB_CSCRn_BSTW)

/*! @brief Set the BSTW field to a new value. */
#define BW_FB_CSCRn_BSTW(x, n, v) (BITBAND_ACCESS32(HW_FB_CSCRn_ADDR(x, n), BP_FB_CSCRn_BSTW) = (v))
/*@}*/

/*!
 * @name Register FB_CSCRn, field BSTR[4] (RW)
 *
 * Specifies whether burst reads are enabled for memory associated with each
 * chip select.
 *
 * Values:
 * - 0 - Disabled. Data exceeding the specified port size is broken into
 *     individual, port-sized, non-burst reads. For example, a 32-bit read from an 8-bit
 *     port is broken into four 8-bit reads.
 * - 1 - Enabled. Enables data burst reads larger than the specified port size,
 *     including 32-bit reads from 8- and 16-bit ports, 16-bit reads from 8-bit
 *     ports, and line reads from 8-, 16-, and 32-bit ports.
 */
/*@{*/
#define BP_FB_CSCRn_BSTR     (4U)          /*!< Bit position for FB_CSCRn_BSTR. */
#define BM_FB_CSCRn_BSTR     (0x00000010U) /*!< Bit mask for FB_CSCRn_BSTR. */
#define BS_FB_CSCRn_BSTR     (1U)          /*!< Bit field size in bits for FB_CSCRn_BSTR. */

/*! @brief Read current value of the FB_CSCRn_BSTR field. */
#define BR_FB_CSCRn_BSTR(x, n) (BITBAND_ACCESS32(HW_FB_CSCRn_ADDR(x, n), BP_FB_CSCRn_BSTR))

/*! @brief Format value for bitfield FB_CSCRn_BSTR. */
#define BF_FB_CSCRn_BSTR(v)  ((uint32_t)((uint32_t)(v) << BP_FB_CSCRn_BSTR) & BM_FB_CSCRn_BSTR)

/*! @brief Set the BSTR field to a new value. */
#define BW_FB_CSCRn_BSTR(x, n, v) (BITBAND_ACCESS32(HW_FB_CSCRn_ADDR(x, n), BP_FB_CSCRn_BSTR) = (v))
/*@}*/

/*!
 * @name Register FB_CSCRn, field BEM[5] (RW)
 *
 * Specifies whether the corresponding FB_BE is asserted for read accesses.
 * Certain memories have byte enables that must be asserted during reads and writes.
 * Write 1b to the BEM bit in the relevant CSCR to provide the appropriate mode
 * of byte enable support for these SRAMs.
 *
 * Values:
 * - 0 - FB_BE is asserted for data write only.
 * - 1 - FB_BE is asserted for data read and write accesses.
 */
/*@{*/
#define BP_FB_CSCRn_BEM      (5U)          /*!< Bit position for FB_CSCRn_BEM. */
#define BM_FB_CSCRn_BEM      (0x00000020U) /*!< Bit mask for FB_CSCRn_BEM. */
#define BS_FB_CSCRn_BEM      (1U)          /*!< Bit field size in bits for FB_CSCRn_BEM. */

/*! @brief Read current value of the FB_CSCRn_BEM field. */
#define BR_FB_CSCRn_BEM(x, n) (BITBAND_ACCESS32(HW_FB_CSCRn_ADDR(x, n), BP_FB_CSCRn_BEM))

/*! @brief Format value for bitfield FB_CSCRn_BEM. */
#define BF_FB_CSCRn_BEM(v)   ((uint32_t)((uint32_t)(v) << BP_FB_CSCRn_BEM) & BM_FB_CSCRn_BEM)

/*! @brief Set the BEM field to a new value. */
#define BW_FB_CSCRn_BEM(x, n, v) (BITBAND_ACCESS32(HW_FB_CSCRn_ADDR(x, n), BP_FB_CSCRn_BEM) = (v))
/*@}*/

/*!
 * @name Register FB_CSCRn, field PS[7:6] (RW)
 *
 * Specifies the data port width of the associated chip-select, and determines
 * where data is driven during write cycles and where data is sampled during read
 * cycles.
 *
 * Values:
 * - 00 - 32-bit port size. Valid data is sampled and driven on FB_D[31:0].
 * - 01 - 8-bit port size. Valid data is sampled and driven on FB_D[31:24] when
 *     BLS is 0b, or FB_D[7:0] when BLS is 1b.
 */
/*@{*/
#define BP_FB_CSCRn_PS       (6U)          /*!< Bit position for FB_CSCRn_PS. */
#define BM_FB_CSCRn_PS       (0x000000C0U) /*!< Bit mask for FB_CSCRn_PS. */
#define BS_FB_CSCRn_PS       (2U)          /*!< Bit field size in bits for FB_CSCRn_PS. */

/*! @brief Read current value of the FB_CSCRn_PS field. */
#define BR_FB_CSCRn_PS(x, n) (HW_FB_CSCRn(x, n).B.PS)

/*! @brief Format value for bitfield FB_CSCRn_PS. */
#define BF_FB_CSCRn_PS(v)    ((uint32_t)((uint32_t)(v) << BP_FB_CSCRn_PS) & BM_FB_CSCRn_PS)

/*! @brief Set the PS field to a new value. */
#define BW_FB_CSCRn_PS(x, n, v) (HW_FB_CSCRn_WR(x, n, (HW_FB_CSCRn_RD(x, n) & ~BM_FB_CSCRn_PS) | BF_FB_CSCRn_PS(v)))
/*@}*/

/*!
 * @name Register FB_CSCRn, field AA[8] (RW)
 *
 * Asserts the internal transfer acknowledge for accesses specified by the
 * chip-select address. If AA is 1b for a corresponding FB_CSn and the external system
 * asserts an external FB_TA before the wait-state countdown asserts the
 * internal FB_TA, the cycle is terminated. Burst cycles increment the address bus
 * between each internal termination. This field must be 1b if CSPMCR disables FB_TA.
 *
 * Values:
 * - 0 - Disabled. No internal transfer acknowledge is asserted and the cycle is
 *     terminated externally.
 * - 1 - Enabled. Internal transfer acknowledge is asserted as specified by WS.
 */
/*@{*/
#define BP_FB_CSCRn_AA       (8U)          /*!< Bit position for FB_CSCRn_AA. */
#define BM_FB_CSCRn_AA       (0x00000100U) /*!< Bit mask for FB_CSCRn_AA. */
#define BS_FB_CSCRn_AA       (1U)          /*!< Bit field size in bits for FB_CSCRn_AA. */

/*! @brief Read current value of the FB_CSCRn_AA field. */
#define BR_FB_CSCRn_AA(x, n) (BITBAND_ACCESS32(HW_FB_CSCRn_ADDR(x, n), BP_FB_CSCRn_AA))

/*! @brief Format value for bitfield FB_CSCRn_AA. */
#define BF_FB_CSCRn_AA(v)    ((uint32_t)((uint32_t)(v) << BP_FB_CSCRn_AA) & BM_FB_CSCRn_AA)

/*! @brief Set the AA field to a new value. */
#define BW_FB_CSCRn_AA(x, n, v) (BITBAND_ACCESS32(HW_FB_CSCRn_ADDR(x, n), BP_FB_CSCRn_AA) = (v))
/*@}*/

/*!
 * @name Register FB_CSCRn, field BLS[9] (RW)
 *
 * Specifies if data on FB_AD appears left-aligned or right-aligned during the
 * data phase of a FlexBus access.
 *
 * Values:
 * - 0 - Not shifted. Data is left-aligned on FB_AD.
 * - 1 - Shifted. Data is right-aligned on FB_AD.
 */
/*@{*/
#define BP_FB_CSCRn_BLS      (9U)          /*!< Bit position for FB_CSCRn_BLS. */
#define BM_FB_CSCRn_BLS      (0x00000200U) /*!< Bit mask for FB_CSCRn_BLS. */
#define BS_FB_CSCRn_BLS      (1U)          /*!< Bit field size in bits for FB_CSCRn_BLS. */

/*! @brief Read current value of the FB_CSCRn_BLS field. */
#define BR_FB_CSCRn_BLS(x, n) (BITBAND_ACCESS32(HW_FB_CSCRn_ADDR(x, n), BP_FB_CSCRn_BLS))

/*! @brief Format value for bitfield FB_CSCRn_BLS. */
#define BF_FB_CSCRn_BLS(v)   ((uint32_t)((uint32_t)(v) << BP_FB_CSCRn_BLS) & BM_FB_CSCRn_BLS)

/*! @brief Set the BLS field to a new value. */
#define BW_FB_CSCRn_BLS(x, n, v) (BITBAND_ACCESS32(HW_FB_CSCRn_ADDR(x, n), BP_FB_CSCRn_BLS) = (v))
/*@}*/

/*!
 * @name Register FB_CSCRn, field WS[15:10] (RW)
 *
 * Specifies the number of wait states inserted after FlexBus asserts the
 * associated chip-select and before an internal transfer acknowledge is generated (WS
 * = 00h inserts 0 wait states, ..., WS = 3Fh inserts 63 wait states).
 */
/*@{*/
#define BP_FB_CSCRn_WS       (10U)         /*!< Bit position for FB_CSCRn_WS. */
#define BM_FB_CSCRn_WS       (0x0000FC00U) /*!< Bit mask for FB_CSCRn_WS. */
#define BS_FB_CSCRn_WS       (6U)          /*!< Bit field size in bits for FB_CSCRn_WS. */

/*! @brief Read current value of the FB_CSCRn_WS field. */
#define BR_FB_CSCRn_WS(x, n) (HW_FB_CSCRn(x, n).B.WS)

/*! @brief Format value for bitfield FB_CSCRn_WS. */
#define BF_FB_CSCRn_WS(v)    ((uint32_t)((uint32_t)(v) << BP_FB_CSCRn_WS) & BM_FB_CSCRn_WS)

/*! @brief Set the WS field to a new value. */
#define BW_FB_CSCRn_WS(x, n, v) (HW_FB_CSCRn_WR(x, n, (HW_FB_CSCRn_RD(x, n) & ~BM_FB_CSCRn_WS) | BF_FB_CSCRn_WS(v)))
/*@}*/

/*!
 * @name Register FB_CSCRn, field WRAH[17:16] (RW)
 *
 * Controls the address, data, and attribute hold time after the termination of
 * a write cycle that hits in the associated chip-select's address space. The
 * hold time applies only at the end of a transfer. Therefore, during a burst
 * transfer or a transfer to a port size smaller than the transfer size, the hold time
 * is only added after the last bus cycle.
 *
 * Values:
 * - 00 - 1 cycle (default for all but FB_CS0 )
 * - 01 - 2 cycles
 * - 10 - 3 cycles
 * - 11 - 4 cycles (default for FB_CS0 )
 */
/*@{*/
#define BP_FB_CSCRn_WRAH     (16U)         /*!< Bit position for FB_CSCRn_WRAH. */
#define BM_FB_CSCRn_WRAH     (0x00030000U) /*!< Bit mask for FB_CSCRn_WRAH. */
#define BS_FB_CSCRn_WRAH     (2U)          /*!< Bit field size in bits for FB_CSCRn_WRAH. */

/*! @brief Read current value of the FB_CSCRn_WRAH field. */
#define BR_FB_CSCRn_WRAH(x, n) (HW_FB_CSCRn(x, n).B.WRAH)

/*! @brief Format value for bitfield FB_CSCRn_WRAH. */
#define BF_FB_CSCRn_WRAH(v)  ((uint32_t)((uint32_t)(v) << BP_FB_CSCRn_WRAH) & BM_FB_CSCRn_WRAH)

/*! @brief Set the WRAH field to a new value. */
#define BW_FB_CSCRn_WRAH(x, n, v) (HW_FB_CSCRn_WR(x, n, (HW_FB_CSCRn_RD(x, n) & ~BM_FB_CSCRn_WRAH) | BF_FB_CSCRn_WRAH(v)))
/*@}*/

/*!
 * @name Register FB_CSCRn, field RDAH[19:18] (RW)
 *
 * Controls the address and attribute hold time after the termination during a
 * read cycle that hits in the associated chip-select's address space. The hold
 * time applies only at the end of a transfer. Therefore, during a burst transfer
 * or a transfer to a port size smaller than the transfer size, the hold time is
 * only added after the last bus cycle. The number of cycles the address and
 * attributes are held after FB_CSn deassertion depends on the value of the AA bit.
 *
 * Values:
 * - 00 - When AA is 0b, 1 cycle. When AA is 1b, 0 cycles.
 * - 01 - When AA is 0b, 2 cycles. When AA is 1b, 1 cycle.
 * - 10 - When AA is 0b, 3 cycles. When AA is 1b, 2 cycles.
 * - 11 - When AA is 0b, 4 cycles. When AA is 1b, 3 cycles.
 */
/*@{*/
#define BP_FB_CSCRn_RDAH     (18U)         /*!< Bit position for FB_CSCRn_RDAH. */
#define BM_FB_CSCRn_RDAH     (0x000C0000U) /*!< Bit mask for FB_CSCRn_RDAH. */
#define BS_FB_CSCRn_RDAH     (2U)          /*!< Bit field size in bits for FB_CSCRn_RDAH. */

/*! @brief Read current value of the FB_CSCRn_RDAH field. */
#define BR_FB_CSCRn_RDAH(x, n) (HW_FB_CSCRn(x, n).B.RDAH)

/*! @brief Format value for bitfield FB_CSCRn_RDAH. */
#define BF_FB_CSCRn_RDAH(v)  ((uint32_t)((uint32_t)(v) << BP_FB_CSCRn_RDAH) & BM_FB_CSCRn_RDAH)

/*! @brief Set the RDAH field to a new value. */
#define BW_FB_CSCRn_RDAH(x, n, v) (HW_FB_CSCRn_WR(x, n, (HW_FB_CSCRn_RD(x, n) & ~BM_FB_CSCRn_RDAH) | BF_FB_CSCRn_RDAH(v)))
/*@}*/

/*!
 * @name Register FB_CSCRn, field ASET[21:20] (RW)
 *
 * Controls when the chip-select is asserted with respect to assertion of a
 * valid address and attributes.
 *
 * Values:
 * - 00 - Assert FB_CSn on the first rising clock edge after the address is
 *     asserted (default for all but FB_CS0 ).
 * - 01 - Assert FB_CSn on the second rising clock edge after the address is
 *     asserted.
 * - 10 - Assert FB_CSn on the third rising clock edge after the address is
 *     asserted.
 * - 11 - Assert FB_CSn on the fourth rising clock edge after the address is
 *     asserted (default for FB_CS0 ).
 */
/*@{*/
#define BP_FB_CSCRn_ASET     (20U)         /*!< Bit position for FB_CSCRn_ASET. */
#define BM_FB_CSCRn_ASET     (0x00300000U) /*!< Bit mask for FB_CSCRn_ASET. */
#define BS_FB_CSCRn_ASET     (2U)          /*!< Bit field size in bits for FB_CSCRn_ASET. */

/*! @brief Read current value of the FB_CSCRn_ASET field. */
#define BR_FB_CSCRn_ASET(x, n) (HW_FB_CSCRn(x, n).B.ASET)

/*! @brief Format value for bitfield FB_CSCRn_ASET. */
#define BF_FB_CSCRn_ASET(v)  ((uint32_t)((uint32_t)(v) << BP_FB_CSCRn_ASET) & BM_FB_CSCRn_ASET)

/*! @brief Set the ASET field to a new value. */
#define BW_FB_CSCRn_ASET(x, n, v) (HW_FB_CSCRn_WR(x, n, (HW_FB_CSCRn_RD(x, n) & ~BM_FB_CSCRn_ASET) | BF_FB_CSCRn_ASET(v)))
/*@}*/

/*!
 * @name Register FB_CSCRn, field EXTS[22] (RW)
 *
 * Extended Transfer Start/Extended Address Latch Enable Controls how long FB_TS
 * /FB_ALE is asserted.
 *
 * Values:
 * - 0 - Disabled. FB_TS /FB_ALE asserts for one bus clock cycle.
 * - 1 - Enabled. FB_TS /FB_ALE remains asserted until the first positive clock
 *     edge after FB_CSn asserts.
 */
/*@{*/
#define BP_FB_CSCRn_EXTS     (22U)         /*!< Bit position for FB_CSCRn_EXTS. */
#define BM_FB_CSCRn_EXTS     (0x00400000U) /*!< Bit mask for FB_CSCRn_EXTS. */
#define BS_FB_CSCRn_EXTS     (1U)          /*!< Bit field size in bits for FB_CSCRn_EXTS. */

/*! @brief Read current value of the FB_CSCRn_EXTS field. */
#define BR_FB_CSCRn_EXTS(x, n) (BITBAND_ACCESS32(HW_FB_CSCRn_ADDR(x, n), BP_FB_CSCRn_EXTS))

/*! @brief Format value for bitfield FB_CSCRn_EXTS. */
#define BF_FB_CSCRn_EXTS(v)  ((uint32_t)((uint32_t)(v) << BP_FB_CSCRn_EXTS) & BM_FB_CSCRn_EXTS)

/*! @brief Set the EXTS field to a new value. */
#define BW_FB_CSCRn_EXTS(x, n, v) (BITBAND_ACCESS32(HW_FB_CSCRn_ADDR(x, n), BP_FB_CSCRn_EXTS) = (v))
/*@}*/

/*!
 * @name Register FB_CSCRn, field SWSEN[23] (RW)
 *
 * Values:
 * - 0 - Disabled. A number of wait states (specified by WS) are inserted before
 *     an internal transfer acknowledge is generated for all transfers.
 * - 1 - Enabled. A number of wait states (specified by SWS) are inserted before
 *     an internal transfer acknowledge is generated for burst transfer
 *     secondary terminations.
 */
/*@{*/
#define BP_FB_CSCRn_SWSEN    (23U)         /*!< Bit position for FB_CSCRn_SWSEN. */
#define BM_FB_CSCRn_SWSEN    (0x00800000U) /*!< Bit mask for FB_CSCRn_SWSEN. */
#define BS_FB_CSCRn_SWSEN    (1U)          /*!< Bit field size in bits for FB_CSCRn_SWSEN. */

/*! @brief Read current value of the FB_CSCRn_SWSEN field. */
#define BR_FB_CSCRn_SWSEN(x, n) (BITBAND_ACCESS32(HW_FB_CSCRn_ADDR(x, n), BP_FB_CSCRn_SWSEN))

/*! @brief Format value for bitfield FB_CSCRn_SWSEN. */
#define BF_FB_CSCRn_SWSEN(v) ((uint32_t)((uint32_t)(v) << BP_FB_CSCRn_SWSEN) & BM_FB_CSCRn_SWSEN)

/*! @brief Set the SWSEN field to a new value. */
#define BW_FB_CSCRn_SWSEN(x, n, v) (BITBAND_ACCESS32(HW_FB_CSCRn_ADDR(x, n), BP_FB_CSCRn_SWSEN) = (v))
/*@}*/

/*!
 * @name Register FB_CSCRn, field SWS[31:26] (RW)
 *
 * Used only when the SWSEN bit is 1b. Specifies the number of wait states
 * inserted before an internal transfer acknowledge is generated for a burst transfer
 * (except for the first termination, which is controlled by WS).
 */
/*@{*/
#define BP_FB_CSCRn_SWS      (26U)         /*!< Bit position for FB_CSCRn_SWS. */
#define BM_FB_CSCRn_SWS      (0xFC000000U) /*!< Bit mask for FB_CSCRn_SWS. */
#define BS_FB_CSCRn_SWS      (6U)          /*!< Bit field size in bits for FB_CSCRn_SWS. */

/*! @brief Read current value of the FB_CSCRn_SWS field. */
#define BR_FB_CSCRn_SWS(x, n) (HW_FB_CSCRn(x, n).B.SWS)

/*! @brief Format value for bitfield FB_CSCRn_SWS. */
#define BF_FB_CSCRn_SWS(v)   ((uint32_t)((uint32_t)(v) << BP_FB_CSCRn_SWS) & BM_FB_CSCRn_SWS)

/*! @brief Set the SWS field to a new value. */
#define BW_FB_CSCRn_SWS(x, n, v) (HW_FB_CSCRn_WR(x, n, (HW_FB_CSCRn_RD(x, n) & ~BM_FB_CSCRn_SWS) | BF_FB_CSCRn_SWS(v)))
/*@}*/

/*******************************************************************************
 * HW_FB_CSPMCR - Chip Select port Multiplexing Control Register
 ******************************************************************************/

/*!
 * @brief HW_FB_CSPMCR - Chip Select port Multiplexing Control Register (RW)
 *
 * Reset value: 0x00000000U
 *
 * Controls the multiplexing of the FlexBus signals. A bus error occurs when you
 * do any of the following: Write to a reserved address Write to a reserved
 * field in this register, or Access this register using a size other than 32 bits.
 */
typedef union _hw_fb_cspmcr
{
    uint32_t U;
    struct _hw_fb_cspmcr_bitfields
    {
        uint32_t RESERVED0 : 12;       /*!< [11:0]  */
        uint32_t GROUP5 : 4;           /*!< [15:12] FlexBus Signal Group 5 Multiplex
                                        * control */
        uint32_t GROUP4 : 4;           /*!< [19:16] FlexBus Signal Group 4 Multiplex
                                        * control */
        uint32_t GROUP3 : 4;           /*!< [23:20] FlexBus Signal Group 3 Multiplex
                                        * control */
        uint32_t GROUP2 : 4;           /*!< [27:24] FlexBus Signal Group 2 Multiplex
                                        * control */
        uint32_t GROUP1 : 4;           /*!< [31:28] FlexBus Signal Group 1 Multiplex
                                        * control */
    } B;
} hw_fb_cspmcr_t;

/*!
 * @name Constants and macros for entire FB_CSPMCR register
 */
/*@{*/
#define HW_FB_CSPMCR_ADDR(x)     ((x) + 0x60U)

#define HW_FB_CSPMCR(x)          (*(__IO hw_fb_cspmcr_t *) HW_FB_CSPMCR_ADDR(x))
#define HW_FB_CSPMCR_RD(x)       (HW_FB_CSPMCR(x).U)
#define HW_FB_CSPMCR_WR(x, v)    (HW_FB_CSPMCR(x).U = (v))
#define HW_FB_CSPMCR_SET(x, v)   (HW_FB_CSPMCR_WR(x, HW_FB_CSPMCR_RD(x) |  (v)))
#define HW_FB_CSPMCR_CLR(x, v)   (HW_FB_CSPMCR_WR(x, HW_FB_CSPMCR_RD(x) & ~(v)))
#define HW_FB_CSPMCR_TOG(x, v)   (HW_FB_CSPMCR_WR(x, HW_FB_CSPMCR_RD(x) ^  (v)))
/*@}*/

/*
 * Constants & macros for individual FB_CSPMCR bitfields
 */

/*!
 * @name Register FB_CSPMCR, field GROUP5[15:12] (RW)
 *
 * Controls the multiplexing of the FB_TA , FB_CS3 , and FB_BE_7_0 signals. When
 * GROUP5 is not 0000b, you must write 1b to the CSCR[AA] bit. Otherwise, the
 * bus hangs during a transfer.
 *
 * Values:
 * - 0000 - FB_TA
 * - 0001 - FB_CS3 . You must also write 1b to CSCR[AA].
 * - 0010 - FB_BE_7_0 . You must also write 1b to CSCR[AA].
 */
/*@{*/
#define BP_FB_CSPMCR_GROUP5  (12U)         /*!< Bit position for FB_CSPMCR_GROUP5. */
#define BM_FB_CSPMCR_GROUP5  (0x0000F000U) /*!< Bit mask for FB_CSPMCR_GROUP5. */
#define BS_FB_CSPMCR_GROUP5  (4U)          /*!< Bit field size in bits for FB_CSPMCR_GROUP5. */

/*! @brief Read current value of the FB_CSPMCR_GROUP5 field. */
#define BR_FB_CSPMCR_GROUP5(x) (HW_FB_CSPMCR(x).B.GROUP5)

/*! @brief Format value for bitfield FB_CSPMCR_GROUP5. */
#define BF_FB_CSPMCR_GROUP5(v) ((uint32_t)((uint32_t)(v) << BP_FB_CSPMCR_GROUP5) & BM_FB_CSPMCR_GROUP5)

/*! @brief Set the GROUP5 field to a new value. */
#define BW_FB_CSPMCR_GROUP5(x, v) (HW_FB_CSPMCR_WR(x, (HW_FB_CSPMCR_RD(x) & ~BM_FB_CSPMCR_GROUP5) | BF_FB_CSPMCR_GROUP5(v)))
/*@}*/

/*!
 * @name Register FB_CSPMCR, field GROUP4[19:16] (RW)
 *
 * Controls the multiplexing of the FB_TBST , FB_CS2 , and FB_BE_15_8 signals.
 *
 * Values:
 * - 0000 - FB_TBST
 * - 0001 - FB_CS2
 * - 0010 - FB_BE_15_8
 */
/*@{*/
#define BP_FB_CSPMCR_GROUP4  (16U)         /*!< Bit position for FB_CSPMCR_GROUP4. */
#define BM_FB_CSPMCR_GROUP4  (0x000F0000U) /*!< Bit mask for FB_CSPMCR_GROUP4. */
#define BS_FB_CSPMCR_GROUP4  (4U)          /*!< Bit field size in bits for FB_CSPMCR_GROUP4. */

/*! @brief Read current value of the FB_CSPMCR_GROUP4 field. */
#define BR_FB_CSPMCR_GROUP4(x) (HW_FB_CSPMCR(x).B.GROUP4)

/*! @brief Format value for bitfield FB_CSPMCR_GROUP4. */
#define BF_FB_CSPMCR_GROUP4(v) ((uint32_t)((uint32_t)(v) << BP_FB_CSPMCR_GROUP4) & BM_FB_CSPMCR_GROUP4)

/*! @brief Set the GROUP4 field to a new value. */
#define BW_FB_CSPMCR_GROUP4(x, v) (HW_FB_CSPMCR_WR(x, (HW_FB_CSPMCR_RD(x) & ~BM_FB_CSPMCR_GROUP4) | BF_FB_CSPMCR_GROUP4(v)))
/*@}*/

/*!
 * @name Register FB_CSPMCR, field GROUP3[23:20] (RW)
 *
 * Controls the multiplexing of the FB_CS5 , FB_TSIZ1, and FB_BE_23_16 signals.
 *
 * Values:
 * - 0000 - FB_CS5
 * - 0001 - FB_TSIZ1
 * - 0010 - FB_BE_23_16
 */
/*@{*/
#define BP_FB_CSPMCR_GROUP3  (20U)         /*!< Bit position for FB_CSPMCR_GROUP3. */
#define BM_FB_CSPMCR_GROUP3  (0x00F00000U) /*!< Bit mask for FB_CSPMCR_GROUP3. */
#define BS_FB_CSPMCR_GROUP3  (4U)          /*!< Bit field size in bits for FB_CSPMCR_GROUP3. */

/*! @brief Read current value of the FB_CSPMCR_GROUP3 field. */
#define BR_FB_CSPMCR_GROUP3(x) (HW_FB_CSPMCR(x).B.GROUP3)

/*! @brief Format value for bitfield FB_CSPMCR_GROUP3. */
#define BF_FB_CSPMCR_GROUP3(v) ((uint32_t)((uint32_t)(v) << BP_FB_CSPMCR_GROUP3) & BM_FB_CSPMCR_GROUP3)

/*! @brief Set the GROUP3 field to a new value. */
#define BW_FB_CSPMCR_GROUP3(x, v) (HW_FB_CSPMCR_WR(x, (HW_FB_CSPMCR_RD(x) & ~BM_FB_CSPMCR_GROUP3) | BF_FB_CSPMCR_GROUP3(v)))
/*@}*/

/*!
 * @name Register FB_CSPMCR, field GROUP2[27:24] (RW)
 *
 * Controls the multiplexing of the FB_CS4 , FB_TSIZ0, and FB_BE_31_24 signals.
 *
 * Values:
 * - 0000 - FB_CS4
 * - 0001 - FB_TSIZ0
 * - 0010 - FB_BE_31_24
 */
/*@{*/
#define BP_FB_CSPMCR_GROUP2  (24U)         /*!< Bit position for FB_CSPMCR_GROUP2. */
#define BM_FB_CSPMCR_GROUP2  (0x0F000000U) /*!< Bit mask for FB_CSPMCR_GROUP2. */
#define BS_FB_CSPMCR_GROUP2  (4U)          /*!< Bit field size in bits for FB_CSPMCR_GROUP2. */

/*! @brief Read current value of the FB_CSPMCR_GROUP2 field. */
#define BR_FB_CSPMCR_GROUP2(x) (HW_FB_CSPMCR(x).B.GROUP2)

/*! @brief Format value for bitfield FB_CSPMCR_GROUP2. */
#define BF_FB_CSPMCR_GROUP2(v) ((uint32_t)((uint32_t)(v) << BP_FB_CSPMCR_GROUP2) & BM_FB_CSPMCR_GROUP2)

/*! @brief Set the GROUP2 field to a new value. */
#define BW_FB_CSPMCR_GROUP2(x, v) (HW_FB_CSPMCR_WR(x, (HW_FB_CSPMCR_RD(x) & ~BM_FB_CSPMCR_GROUP2) | BF_FB_CSPMCR_GROUP2(v)))
/*@}*/

/*!
 * @name Register FB_CSPMCR, field GROUP1[31:28] (RW)
 *
 * Controls the multiplexing of the FB_ALE, FB_CS1 , and FB_TS signals.
 *
 * Values:
 * - 0000 - FB_ALE
 * - 0001 - FB_CS1
 * - 0010 - FB_TS
 */
/*@{*/
#define BP_FB_CSPMCR_GROUP1  (28U)         /*!< Bit position for FB_CSPMCR_GROUP1. */
#define BM_FB_CSPMCR_GROUP1  (0xF0000000U) /*!< Bit mask for FB_CSPMCR_GROUP1. */
#define BS_FB_CSPMCR_GROUP1  (4U)          /*!< Bit field size in bits for FB_CSPMCR_GROUP1. */

/*! @brief Read current value of the FB_CSPMCR_GROUP1 field. */
#define BR_FB_CSPMCR_GROUP1(x) (HW_FB_CSPMCR(x).B.GROUP1)

/*! @brief Format value for bitfield FB_CSPMCR_GROUP1. */
#define BF_FB_CSPMCR_GROUP1(v) ((uint32_t)((uint32_t)(v) << BP_FB_CSPMCR_GROUP1) & BM_FB_CSPMCR_GROUP1)

/*! @brief Set the GROUP1 field to a new value. */
#define BW_FB_CSPMCR_GROUP1(x, v) (HW_FB_CSPMCR_WR(x, (HW_FB_CSPMCR_RD(x) & ~BM_FB_CSPMCR_GROUP1) | BF_FB_CSPMCR_GROUP1(v)))
/*@}*/

/*******************************************************************************
 * hw_fb_t - module struct
 ******************************************************************************/
/*!
 * @brief All FB module registers.
 */
#pragma pack(1)
typedef struct _hw_fb
{
    struct {
        __IO hw_fb_csarn_t CSARn;          /*!< [0x0] Chip Select Address Register */
        __IO hw_fb_csmrn_t CSMRn;          /*!< [0x4] Chip Select Mask Register */
        __IO hw_fb_cscrn_t CSCRn;          /*!< [0x8] Chip Select Control Register */
    } CS[6];
    uint8_t _reserved0[24];
    __IO hw_fb_cspmcr_t CSPMCR;            /*!< [0x60] Chip Select port Multiplexing Control Register */
} hw_fb_t;
#pragma pack()

/*! @brief Macro to access all FB registers. */
/*! @param x FB module instance base address. */
/*! @return Reference (not a pointer) to the registers struct. To get a pointer to the struct,
 *     use the '&' operator, like <code>&HW_FB(FB_BASE)</code>. */
#define HW_FB(x)       (*(hw_fb_t *)(x))

#endif /* __HW_FB_REGISTERS_H__ */
/* v33/140401/2.1.0 */
/* EOF */
