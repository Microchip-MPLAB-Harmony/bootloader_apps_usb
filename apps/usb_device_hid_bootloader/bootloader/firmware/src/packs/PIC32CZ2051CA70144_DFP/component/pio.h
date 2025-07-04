/*
 * Component description for PIO
 *
 * Copyright (c) 2025 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

/*  file generated from device description file (ATDF) version 2025-04-15T17:35:01Z  */
#ifndef _PIC32CZCA70_PIO_COMPONENT_H_
#define _PIC32CZCA70_PIO_COMPONENT_H_

/* ************************************************************************** */
/*                      SOFTWARE API DEFINITION FOR PIO                       */
/* ************************************************************************** */

/* -------- PIO_PER : (PIO Offset: 0x00) ( /W 32) PIO Enable Register -------- */
#define PIO_PER_P0_Pos                        _UINT32_(0)                                          /* (PIO_PER) PIO Enable Position */
#define PIO_PER_P0_Msk                        (_UINT32_(0x1) << PIO_PER_P0_Pos)                    /* (PIO_PER) PIO Enable Mask */
#define PIO_PER_P0(value)                     (PIO_PER_P0_Msk & (_UINT32_(value) << PIO_PER_P0_Pos)) /* Assignment of value for P0 in the PIO_PER register */
#define PIO_PER_P1_Pos                        _UINT32_(1)                                          /* (PIO_PER) PIO Enable Position */
#define PIO_PER_P1_Msk                        (_UINT32_(0x1) << PIO_PER_P1_Pos)                    /* (PIO_PER) PIO Enable Mask */
#define PIO_PER_P1(value)                     (PIO_PER_P1_Msk & (_UINT32_(value) << PIO_PER_P1_Pos)) /* Assignment of value for P1 in the PIO_PER register */
#define PIO_PER_P2_Pos                        _UINT32_(2)                                          /* (PIO_PER) PIO Enable Position */
#define PIO_PER_P2_Msk                        (_UINT32_(0x1) << PIO_PER_P2_Pos)                    /* (PIO_PER) PIO Enable Mask */
#define PIO_PER_P2(value)                     (PIO_PER_P2_Msk & (_UINT32_(value) << PIO_PER_P2_Pos)) /* Assignment of value for P2 in the PIO_PER register */
#define PIO_PER_P3_Pos                        _UINT32_(3)                                          /* (PIO_PER) PIO Enable Position */
#define PIO_PER_P3_Msk                        (_UINT32_(0x1) << PIO_PER_P3_Pos)                    /* (PIO_PER) PIO Enable Mask */
#define PIO_PER_P3(value)                     (PIO_PER_P3_Msk & (_UINT32_(value) << PIO_PER_P3_Pos)) /* Assignment of value for P3 in the PIO_PER register */
#define PIO_PER_P4_Pos                        _UINT32_(4)                                          /* (PIO_PER) PIO Enable Position */
#define PIO_PER_P4_Msk                        (_UINT32_(0x1) << PIO_PER_P4_Pos)                    /* (PIO_PER) PIO Enable Mask */
#define PIO_PER_P4(value)                     (PIO_PER_P4_Msk & (_UINT32_(value) << PIO_PER_P4_Pos)) /* Assignment of value for P4 in the PIO_PER register */
#define PIO_PER_P5_Pos                        _UINT32_(5)                                          /* (PIO_PER) PIO Enable Position */
#define PIO_PER_P5_Msk                        (_UINT32_(0x1) << PIO_PER_P5_Pos)                    /* (PIO_PER) PIO Enable Mask */
#define PIO_PER_P5(value)                     (PIO_PER_P5_Msk & (_UINT32_(value) << PIO_PER_P5_Pos)) /* Assignment of value for P5 in the PIO_PER register */
#define PIO_PER_P6_Pos                        _UINT32_(6)                                          /* (PIO_PER) PIO Enable Position */
#define PIO_PER_P6_Msk                        (_UINT32_(0x1) << PIO_PER_P6_Pos)                    /* (PIO_PER) PIO Enable Mask */
#define PIO_PER_P6(value)                     (PIO_PER_P6_Msk & (_UINT32_(value) << PIO_PER_P6_Pos)) /* Assignment of value for P6 in the PIO_PER register */
#define PIO_PER_P7_Pos                        _UINT32_(7)                                          /* (PIO_PER) PIO Enable Position */
#define PIO_PER_P7_Msk                        (_UINT32_(0x1) << PIO_PER_P7_Pos)                    /* (PIO_PER) PIO Enable Mask */
#define PIO_PER_P7(value)                     (PIO_PER_P7_Msk & (_UINT32_(value) << PIO_PER_P7_Pos)) /* Assignment of value for P7 in the PIO_PER register */
#define PIO_PER_P8_Pos                        _UINT32_(8)                                          /* (PIO_PER) PIO Enable Position */
#define PIO_PER_P8_Msk                        (_UINT32_(0x1) << PIO_PER_P8_Pos)                    /* (PIO_PER) PIO Enable Mask */
#define PIO_PER_P8(value)                     (PIO_PER_P8_Msk & (_UINT32_(value) << PIO_PER_P8_Pos)) /* Assignment of value for P8 in the PIO_PER register */
#define PIO_PER_P9_Pos                        _UINT32_(9)                                          /* (PIO_PER) PIO Enable Position */
#define PIO_PER_P9_Msk                        (_UINT32_(0x1) << PIO_PER_P9_Pos)                    /* (PIO_PER) PIO Enable Mask */
#define PIO_PER_P9(value)                     (PIO_PER_P9_Msk & (_UINT32_(value) << PIO_PER_P9_Pos)) /* Assignment of value for P9 in the PIO_PER register */
#define PIO_PER_P10_Pos                       _UINT32_(10)                                         /* (PIO_PER) PIO Enable Position */
#define PIO_PER_P10_Msk                       (_UINT32_(0x1) << PIO_PER_P10_Pos)                   /* (PIO_PER) PIO Enable Mask */
#define PIO_PER_P10(value)                    (PIO_PER_P10_Msk & (_UINT32_(value) << PIO_PER_P10_Pos)) /* Assignment of value for P10 in the PIO_PER register */
#define PIO_PER_P11_Pos                       _UINT32_(11)                                         /* (PIO_PER) PIO Enable Position */
#define PIO_PER_P11_Msk                       (_UINT32_(0x1) << PIO_PER_P11_Pos)                   /* (PIO_PER) PIO Enable Mask */
#define PIO_PER_P11(value)                    (PIO_PER_P11_Msk & (_UINT32_(value) << PIO_PER_P11_Pos)) /* Assignment of value for P11 in the PIO_PER register */
#define PIO_PER_P12_Pos                       _UINT32_(12)                                         /* (PIO_PER) PIO Enable Position */
#define PIO_PER_P12_Msk                       (_UINT32_(0x1) << PIO_PER_P12_Pos)                   /* (PIO_PER) PIO Enable Mask */
#define PIO_PER_P12(value)                    (PIO_PER_P12_Msk & (_UINT32_(value) << PIO_PER_P12_Pos)) /* Assignment of value for P12 in the PIO_PER register */
#define PIO_PER_P13_Pos                       _UINT32_(13)                                         /* (PIO_PER) PIO Enable Position */
#define PIO_PER_P13_Msk                       (_UINT32_(0x1) << PIO_PER_P13_Pos)                   /* (PIO_PER) PIO Enable Mask */
#define PIO_PER_P13(value)                    (PIO_PER_P13_Msk & (_UINT32_(value) << PIO_PER_P13_Pos)) /* Assignment of value for P13 in the PIO_PER register */
#define PIO_PER_P14_Pos                       _UINT32_(14)                                         /* (PIO_PER) PIO Enable Position */
#define PIO_PER_P14_Msk                       (_UINT32_(0x1) << PIO_PER_P14_Pos)                   /* (PIO_PER) PIO Enable Mask */
#define PIO_PER_P14(value)                    (PIO_PER_P14_Msk & (_UINT32_(value) << PIO_PER_P14_Pos)) /* Assignment of value for P14 in the PIO_PER register */
#define PIO_PER_P15_Pos                       _UINT32_(15)                                         /* (PIO_PER) PIO Enable Position */
#define PIO_PER_P15_Msk                       (_UINT32_(0x1) << PIO_PER_P15_Pos)                   /* (PIO_PER) PIO Enable Mask */
#define PIO_PER_P15(value)                    (PIO_PER_P15_Msk & (_UINT32_(value) << PIO_PER_P15_Pos)) /* Assignment of value for P15 in the PIO_PER register */
#define PIO_PER_P16_Pos                       _UINT32_(16)                                         /* (PIO_PER) PIO Enable Position */
#define PIO_PER_P16_Msk                       (_UINT32_(0x1) << PIO_PER_P16_Pos)                   /* (PIO_PER) PIO Enable Mask */
#define PIO_PER_P16(value)                    (PIO_PER_P16_Msk & (_UINT32_(value) << PIO_PER_P16_Pos)) /* Assignment of value for P16 in the PIO_PER register */
#define PIO_PER_P17_Pos                       _UINT32_(17)                                         /* (PIO_PER) PIO Enable Position */
#define PIO_PER_P17_Msk                       (_UINT32_(0x1) << PIO_PER_P17_Pos)                   /* (PIO_PER) PIO Enable Mask */
#define PIO_PER_P17(value)                    (PIO_PER_P17_Msk & (_UINT32_(value) << PIO_PER_P17_Pos)) /* Assignment of value for P17 in the PIO_PER register */
#define PIO_PER_P18_Pos                       _UINT32_(18)                                         /* (PIO_PER) PIO Enable Position */
#define PIO_PER_P18_Msk                       (_UINT32_(0x1) << PIO_PER_P18_Pos)                   /* (PIO_PER) PIO Enable Mask */
#define PIO_PER_P18(value)                    (PIO_PER_P18_Msk & (_UINT32_(value) << PIO_PER_P18_Pos)) /* Assignment of value for P18 in the PIO_PER register */
#define PIO_PER_P19_Pos                       _UINT32_(19)                                         /* (PIO_PER) PIO Enable Position */
#define PIO_PER_P19_Msk                       (_UINT32_(0x1) << PIO_PER_P19_Pos)                   /* (PIO_PER) PIO Enable Mask */
#define PIO_PER_P19(value)                    (PIO_PER_P19_Msk & (_UINT32_(value) << PIO_PER_P19_Pos)) /* Assignment of value for P19 in the PIO_PER register */
#define PIO_PER_P20_Pos                       _UINT32_(20)                                         /* (PIO_PER) PIO Enable Position */
#define PIO_PER_P20_Msk                       (_UINT32_(0x1) << PIO_PER_P20_Pos)                   /* (PIO_PER) PIO Enable Mask */
#define PIO_PER_P20(value)                    (PIO_PER_P20_Msk & (_UINT32_(value) << PIO_PER_P20_Pos)) /* Assignment of value for P20 in the PIO_PER register */
#define PIO_PER_P21_Pos                       _UINT32_(21)                                         /* (PIO_PER) PIO Enable Position */
#define PIO_PER_P21_Msk                       (_UINT32_(0x1) << PIO_PER_P21_Pos)                   /* (PIO_PER) PIO Enable Mask */
#define PIO_PER_P21(value)                    (PIO_PER_P21_Msk & (_UINT32_(value) << PIO_PER_P21_Pos)) /* Assignment of value for P21 in the PIO_PER register */
#define PIO_PER_P22_Pos                       _UINT32_(22)                                         /* (PIO_PER) PIO Enable Position */
#define PIO_PER_P22_Msk                       (_UINT32_(0x1) << PIO_PER_P22_Pos)                   /* (PIO_PER) PIO Enable Mask */
#define PIO_PER_P22(value)                    (PIO_PER_P22_Msk & (_UINT32_(value) << PIO_PER_P22_Pos)) /* Assignment of value for P22 in the PIO_PER register */
#define PIO_PER_P23_Pos                       _UINT32_(23)                                         /* (PIO_PER) PIO Enable Position */
#define PIO_PER_P23_Msk                       (_UINT32_(0x1) << PIO_PER_P23_Pos)                   /* (PIO_PER) PIO Enable Mask */
#define PIO_PER_P23(value)                    (PIO_PER_P23_Msk & (_UINT32_(value) << PIO_PER_P23_Pos)) /* Assignment of value for P23 in the PIO_PER register */
#define PIO_PER_P24_Pos                       _UINT32_(24)                                         /* (PIO_PER) PIO Enable Position */
#define PIO_PER_P24_Msk                       (_UINT32_(0x1) << PIO_PER_P24_Pos)                   /* (PIO_PER) PIO Enable Mask */
#define PIO_PER_P24(value)                    (PIO_PER_P24_Msk & (_UINT32_(value) << PIO_PER_P24_Pos)) /* Assignment of value for P24 in the PIO_PER register */
#define PIO_PER_P25_Pos                       _UINT32_(25)                                         /* (PIO_PER) PIO Enable Position */
#define PIO_PER_P25_Msk                       (_UINT32_(0x1) << PIO_PER_P25_Pos)                   /* (PIO_PER) PIO Enable Mask */
#define PIO_PER_P25(value)                    (PIO_PER_P25_Msk & (_UINT32_(value) << PIO_PER_P25_Pos)) /* Assignment of value for P25 in the PIO_PER register */
#define PIO_PER_P26_Pos                       _UINT32_(26)                                         /* (PIO_PER) PIO Enable Position */
#define PIO_PER_P26_Msk                       (_UINT32_(0x1) << PIO_PER_P26_Pos)                   /* (PIO_PER) PIO Enable Mask */
#define PIO_PER_P26(value)                    (PIO_PER_P26_Msk & (_UINT32_(value) << PIO_PER_P26_Pos)) /* Assignment of value for P26 in the PIO_PER register */
#define PIO_PER_P27_Pos                       _UINT32_(27)                                         /* (PIO_PER) PIO Enable Position */
#define PIO_PER_P27_Msk                       (_UINT32_(0x1) << PIO_PER_P27_Pos)                   /* (PIO_PER) PIO Enable Mask */
#define PIO_PER_P27(value)                    (PIO_PER_P27_Msk & (_UINT32_(value) << PIO_PER_P27_Pos)) /* Assignment of value for P27 in the PIO_PER register */
#define PIO_PER_P28_Pos                       _UINT32_(28)                                         /* (PIO_PER) PIO Enable Position */
#define PIO_PER_P28_Msk                       (_UINT32_(0x1) << PIO_PER_P28_Pos)                   /* (PIO_PER) PIO Enable Mask */
#define PIO_PER_P28(value)                    (PIO_PER_P28_Msk & (_UINT32_(value) << PIO_PER_P28_Pos)) /* Assignment of value for P28 in the PIO_PER register */
#define PIO_PER_P29_Pos                       _UINT32_(29)                                         /* (PIO_PER) PIO Enable Position */
#define PIO_PER_P29_Msk                       (_UINT32_(0x1) << PIO_PER_P29_Pos)                   /* (PIO_PER) PIO Enable Mask */
#define PIO_PER_P29(value)                    (PIO_PER_P29_Msk & (_UINT32_(value) << PIO_PER_P29_Pos)) /* Assignment of value for P29 in the PIO_PER register */
#define PIO_PER_P30_Pos                       _UINT32_(30)                                         /* (PIO_PER) PIO Enable Position */
#define PIO_PER_P30_Msk                       (_UINT32_(0x1) << PIO_PER_P30_Pos)                   /* (PIO_PER) PIO Enable Mask */
#define PIO_PER_P30(value)                    (PIO_PER_P30_Msk & (_UINT32_(value) << PIO_PER_P30_Pos)) /* Assignment of value for P30 in the PIO_PER register */
#define PIO_PER_P31_Pos                       _UINT32_(31)                                         /* (PIO_PER) PIO Enable Position */
#define PIO_PER_P31_Msk                       (_UINT32_(0x1) << PIO_PER_P31_Pos)                   /* (PIO_PER) PIO Enable Mask */
#define PIO_PER_P31(value)                    (PIO_PER_P31_Msk & (_UINT32_(value) << PIO_PER_P31_Pos)) /* Assignment of value for P31 in the PIO_PER register */
#define PIO_PER_Msk                           _UINT32_(0xFFFFFFFF)                                 /* (PIO_PER) Register Mask  */

#define PIO_PER_P_Pos                         _UINT32_(0)                                          /* (PIO_PER Position) PIO Enable */
#define PIO_PER_P_Msk                         (_UINT32_(0xFFFFFFFF) << PIO_PER_P_Pos)              /* (PIO_PER Mask) P */
#define PIO_PER_P(value)                      (PIO_PER_P_Msk & (_UINT32_(value) << PIO_PER_P_Pos)) 

/* -------- PIO_PDR : (PIO Offset: 0x04) ( /W 32) PIO Disable Register -------- */
#define PIO_PDR_P0_Pos                        _UINT32_(0)                                          /* (PIO_PDR) PIO Disable Position */
#define PIO_PDR_P0_Msk                        (_UINT32_(0x1) << PIO_PDR_P0_Pos)                    /* (PIO_PDR) PIO Disable Mask */
#define PIO_PDR_P0(value)                     (PIO_PDR_P0_Msk & (_UINT32_(value) << PIO_PDR_P0_Pos)) /* Assignment of value for P0 in the PIO_PDR register */
#define PIO_PDR_P1_Pos                        _UINT32_(1)                                          /* (PIO_PDR) PIO Disable Position */
#define PIO_PDR_P1_Msk                        (_UINT32_(0x1) << PIO_PDR_P1_Pos)                    /* (PIO_PDR) PIO Disable Mask */
#define PIO_PDR_P1(value)                     (PIO_PDR_P1_Msk & (_UINT32_(value) << PIO_PDR_P1_Pos)) /* Assignment of value for P1 in the PIO_PDR register */
#define PIO_PDR_P2_Pos                        _UINT32_(2)                                          /* (PIO_PDR) PIO Disable Position */
#define PIO_PDR_P2_Msk                        (_UINT32_(0x1) << PIO_PDR_P2_Pos)                    /* (PIO_PDR) PIO Disable Mask */
#define PIO_PDR_P2(value)                     (PIO_PDR_P2_Msk & (_UINT32_(value) << PIO_PDR_P2_Pos)) /* Assignment of value for P2 in the PIO_PDR register */
#define PIO_PDR_P3_Pos                        _UINT32_(3)                                          /* (PIO_PDR) PIO Disable Position */
#define PIO_PDR_P3_Msk                        (_UINT32_(0x1) << PIO_PDR_P3_Pos)                    /* (PIO_PDR) PIO Disable Mask */
#define PIO_PDR_P3(value)                     (PIO_PDR_P3_Msk & (_UINT32_(value) << PIO_PDR_P3_Pos)) /* Assignment of value for P3 in the PIO_PDR register */
#define PIO_PDR_P4_Pos                        _UINT32_(4)                                          /* (PIO_PDR) PIO Disable Position */
#define PIO_PDR_P4_Msk                        (_UINT32_(0x1) << PIO_PDR_P4_Pos)                    /* (PIO_PDR) PIO Disable Mask */
#define PIO_PDR_P4(value)                     (PIO_PDR_P4_Msk & (_UINT32_(value) << PIO_PDR_P4_Pos)) /* Assignment of value for P4 in the PIO_PDR register */
#define PIO_PDR_P5_Pos                        _UINT32_(5)                                          /* (PIO_PDR) PIO Disable Position */
#define PIO_PDR_P5_Msk                        (_UINT32_(0x1) << PIO_PDR_P5_Pos)                    /* (PIO_PDR) PIO Disable Mask */
#define PIO_PDR_P5(value)                     (PIO_PDR_P5_Msk & (_UINT32_(value) << PIO_PDR_P5_Pos)) /* Assignment of value for P5 in the PIO_PDR register */
#define PIO_PDR_P6_Pos                        _UINT32_(6)                                          /* (PIO_PDR) PIO Disable Position */
#define PIO_PDR_P6_Msk                        (_UINT32_(0x1) << PIO_PDR_P6_Pos)                    /* (PIO_PDR) PIO Disable Mask */
#define PIO_PDR_P6(value)                     (PIO_PDR_P6_Msk & (_UINT32_(value) << PIO_PDR_P6_Pos)) /* Assignment of value for P6 in the PIO_PDR register */
#define PIO_PDR_P7_Pos                        _UINT32_(7)                                          /* (PIO_PDR) PIO Disable Position */
#define PIO_PDR_P7_Msk                        (_UINT32_(0x1) << PIO_PDR_P7_Pos)                    /* (PIO_PDR) PIO Disable Mask */
#define PIO_PDR_P7(value)                     (PIO_PDR_P7_Msk & (_UINT32_(value) << PIO_PDR_P7_Pos)) /* Assignment of value for P7 in the PIO_PDR register */
#define PIO_PDR_P8_Pos                        _UINT32_(8)                                          /* (PIO_PDR) PIO Disable Position */
#define PIO_PDR_P8_Msk                        (_UINT32_(0x1) << PIO_PDR_P8_Pos)                    /* (PIO_PDR) PIO Disable Mask */
#define PIO_PDR_P8(value)                     (PIO_PDR_P8_Msk & (_UINT32_(value) << PIO_PDR_P8_Pos)) /* Assignment of value for P8 in the PIO_PDR register */
#define PIO_PDR_P9_Pos                        _UINT32_(9)                                          /* (PIO_PDR) PIO Disable Position */
#define PIO_PDR_P9_Msk                        (_UINT32_(0x1) << PIO_PDR_P9_Pos)                    /* (PIO_PDR) PIO Disable Mask */
#define PIO_PDR_P9(value)                     (PIO_PDR_P9_Msk & (_UINT32_(value) << PIO_PDR_P9_Pos)) /* Assignment of value for P9 in the PIO_PDR register */
#define PIO_PDR_P10_Pos                       _UINT32_(10)                                         /* (PIO_PDR) PIO Disable Position */
#define PIO_PDR_P10_Msk                       (_UINT32_(0x1) << PIO_PDR_P10_Pos)                   /* (PIO_PDR) PIO Disable Mask */
#define PIO_PDR_P10(value)                    (PIO_PDR_P10_Msk & (_UINT32_(value) << PIO_PDR_P10_Pos)) /* Assignment of value for P10 in the PIO_PDR register */
#define PIO_PDR_P11_Pos                       _UINT32_(11)                                         /* (PIO_PDR) PIO Disable Position */
#define PIO_PDR_P11_Msk                       (_UINT32_(0x1) << PIO_PDR_P11_Pos)                   /* (PIO_PDR) PIO Disable Mask */
#define PIO_PDR_P11(value)                    (PIO_PDR_P11_Msk & (_UINT32_(value) << PIO_PDR_P11_Pos)) /* Assignment of value for P11 in the PIO_PDR register */
#define PIO_PDR_P12_Pos                       _UINT32_(12)                                         /* (PIO_PDR) PIO Disable Position */
#define PIO_PDR_P12_Msk                       (_UINT32_(0x1) << PIO_PDR_P12_Pos)                   /* (PIO_PDR) PIO Disable Mask */
#define PIO_PDR_P12(value)                    (PIO_PDR_P12_Msk & (_UINT32_(value) << PIO_PDR_P12_Pos)) /* Assignment of value for P12 in the PIO_PDR register */
#define PIO_PDR_P13_Pos                       _UINT32_(13)                                         /* (PIO_PDR) PIO Disable Position */
#define PIO_PDR_P13_Msk                       (_UINT32_(0x1) << PIO_PDR_P13_Pos)                   /* (PIO_PDR) PIO Disable Mask */
#define PIO_PDR_P13(value)                    (PIO_PDR_P13_Msk & (_UINT32_(value) << PIO_PDR_P13_Pos)) /* Assignment of value for P13 in the PIO_PDR register */
#define PIO_PDR_P14_Pos                       _UINT32_(14)                                         /* (PIO_PDR) PIO Disable Position */
#define PIO_PDR_P14_Msk                       (_UINT32_(0x1) << PIO_PDR_P14_Pos)                   /* (PIO_PDR) PIO Disable Mask */
#define PIO_PDR_P14(value)                    (PIO_PDR_P14_Msk & (_UINT32_(value) << PIO_PDR_P14_Pos)) /* Assignment of value for P14 in the PIO_PDR register */
#define PIO_PDR_P15_Pos                       _UINT32_(15)                                         /* (PIO_PDR) PIO Disable Position */
#define PIO_PDR_P15_Msk                       (_UINT32_(0x1) << PIO_PDR_P15_Pos)                   /* (PIO_PDR) PIO Disable Mask */
#define PIO_PDR_P15(value)                    (PIO_PDR_P15_Msk & (_UINT32_(value) << PIO_PDR_P15_Pos)) /* Assignment of value for P15 in the PIO_PDR register */
#define PIO_PDR_P16_Pos                       _UINT32_(16)                                         /* (PIO_PDR) PIO Disable Position */
#define PIO_PDR_P16_Msk                       (_UINT32_(0x1) << PIO_PDR_P16_Pos)                   /* (PIO_PDR) PIO Disable Mask */
#define PIO_PDR_P16(value)                    (PIO_PDR_P16_Msk & (_UINT32_(value) << PIO_PDR_P16_Pos)) /* Assignment of value for P16 in the PIO_PDR register */
#define PIO_PDR_P17_Pos                       _UINT32_(17)                                         /* (PIO_PDR) PIO Disable Position */
#define PIO_PDR_P17_Msk                       (_UINT32_(0x1) << PIO_PDR_P17_Pos)                   /* (PIO_PDR) PIO Disable Mask */
#define PIO_PDR_P17(value)                    (PIO_PDR_P17_Msk & (_UINT32_(value) << PIO_PDR_P17_Pos)) /* Assignment of value for P17 in the PIO_PDR register */
#define PIO_PDR_P18_Pos                       _UINT32_(18)                                         /* (PIO_PDR) PIO Disable Position */
#define PIO_PDR_P18_Msk                       (_UINT32_(0x1) << PIO_PDR_P18_Pos)                   /* (PIO_PDR) PIO Disable Mask */
#define PIO_PDR_P18(value)                    (PIO_PDR_P18_Msk & (_UINT32_(value) << PIO_PDR_P18_Pos)) /* Assignment of value for P18 in the PIO_PDR register */
#define PIO_PDR_P19_Pos                       _UINT32_(19)                                         /* (PIO_PDR) PIO Disable Position */
#define PIO_PDR_P19_Msk                       (_UINT32_(0x1) << PIO_PDR_P19_Pos)                   /* (PIO_PDR) PIO Disable Mask */
#define PIO_PDR_P19(value)                    (PIO_PDR_P19_Msk & (_UINT32_(value) << PIO_PDR_P19_Pos)) /* Assignment of value for P19 in the PIO_PDR register */
#define PIO_PDR_P20_Pos                       _UINT32_(20)                                         /* (PIO_PDR) PIO Disable Position */
#define PIO_PDR_P20_Msk                       (_UINT32_(0x1) << PIO_PDR_P20_Pos)                   /* (PIO_PDR) PIO Disable Mask */
#define PIO_PDR_P20(value)                    (PIO_PDR_P20_Msk & (_UINT32_(value) << PIO_PDR_P20_Pos)) /* Assignment of value for P20 in the PIO_PDR register */
#define PIO_PDR_P21_Pos                       _UINT32_(21)                                         /* (PIO_PDR) PIO Disable Position */
#define PIO_PDR_P21_Msk                       (_UINT32_(0x1) << PIO_PDR_P21_Pos)                   /* (PIO_PDR) PIO Disable Mask */
#define PIO_PDR_P21(value)                    (PIO_PDR_P21_Msk & (_UINT32_(value) << PIO_PDR_P21_Pos)) /* Assignment of value for P21 in the PIO_PDR register */
#define PIO_PDR_P22_Pos                       _UINT32_(22)                                         /* (PIO_PDR) PIO Disable Position */
#define PIO_PDR_P22_Msk                       (_UINT32_(0x1) << PIO_PDR_P22_Pos)                   /* (PIO_PDR) PIO Disable Mask */
#define PIO_PDR_P22(value)                    (PIO_PDR_P22_Msk & (_UINT32_(value) << PIO_PDR_P22_Pos)) /* Assignment of value for P22 in the PIO_PDR register */
#define PIO_PDR_P23_Pos                       _UINT32_(23)                                         /* (PIO_PDR) PIO Disable Position */
#define PIO_PDR_P23_Msk                       (_UINT32_(0x1) << PIO_PDR_P23_Pos)                   /* (PIO_PDR) PIO Disable Mask */
#define PIO_PDR_P23(value)                    (PIO_PDR_P23_Msk & (_UINT32_(value) << PIO_PDR_P23_Pos)) /* Assignment of value for P23 in the PIO_PDR register */
#define PIO_PDR_P24_Pos                       _UINT32_(24)                                         /* (PIO_PDR) PIO Disable Position */
#define PIO_PDR_P24_Msk                       (_UINT32_(0x1) << PIO_PDR_P24_Pos)                   /* (PIO_PDR) PIO Disable Mask */
#define PIO_PDR_P24(value)                    (PIO_PDR_P24_Msk & (_UINT32_(value) << PIO_PDR_P24_Pos)) /* Assignment of value for P24 in the PIO_PDR register */
#define PIO_PDR_P25_Pos                       _UINT32_(25)                                         /* (PIO_PDR) PIO Disable Position */
#define PIO_PDR_P25_Msk                       (_UINT32_(0x1) << PIO_PDR_P25_Pos)                   /* (PIO_PDR) PIO Disable Mask */
#define PIO_PDR_P25(value)                    (PIO_PDR_P25_Msk & (_UINT32_(value) << PIO_PDR_P25_Pos)) /* Assignment of value for P25 in the PIO_PDR register */
#define PIO_PDR_P26_Pos                       _UINT32_(26)                                         /* (PIO_PDR) PIO Disable Position */
#define PIO_PDR_P26_Msk                       (_UINT32_(0x1) << PIO_PDR_P26_Pos)                   /* (PIO_PDR) PIO Disable Mask */
#define PIO_PDR_P26(value)                    (PIO_PDR_P26_Msk & (_UINT32_(value) << PIO_PDR_P26_Pos)) /* Assignment of value for P26 in the PIO_PDR register */
#define PIO_PDR_P27_Pos                       _UINT32_(27)                                         /* (PIO_PDR) PIO Disable Position */
#define PIO_PDR_P27_Msk                       (_UINT32_(0x1) << PIO_PDR_P27_Pos)                   /* (PIO_PDR) PIO Disable Mask */
#define PIO_PDR_P27(value)                    (PIO_PDR_P27_Msk & (_UINT32_(value) << PIO_PDR_P27_Pos)) /* Assignment of value for P27 in the PIO_PDR register */
#define PIO_PDR_P28_Pos                       _UINT32_(28)                                         /* (PIO_PDR) PIO Disable Position */
#define PIO_PDR_P28_Msk                       (_UINT32_(0x1) << PIO_PDR_P28_Pos)                   /* (PIO_PDR) PIO Disable Mask */
#define PIO_PDR_P28(value)                    (PIO_PDR_P28_Msk & (_UINT32_(value) << PIO_PDR_P28_Pos)) /* Assignment of value for P28 in the PIO_PDR register */
#define PIO_PDR_P29_Pos                       _UINT32_(29)                                         /* (PIO_PDR) PIO Disable Position */
#define PIO_PDR_P29_Msk                       (_UINT32_(0x1) << PIO_PDR_P29_Pos)                   /* (PIO_PDR) PIO Disable Mask */
#define PIO_PDR_P29(value)                    (PIO_PDR_P29_Msk & (_UINT32_(value) << PIO_PDR_P29_Pos)) /* Assignment of value for P29 in the PIO_PDR register */
#define PIO_PDR_P30_Pos                       _UINT32_(30)                                         /* (PIO_PDR) PIO Disable Position */
#define PIO_PDR_P30_Msk                       (_UINT32_(0x1) << PIO_PDR_P30_Pos)                   /* (PIO_PDR) PIO Disable Mask */
#define PIO_PDR_P30(value)                    (PIO_PDR_P30_Msk & (_UINT32_(value) << PIO_PDR_P30_Pos)) /* Assignment of value for P30 in the PIO_PDR register */
#define PIO_PDR_P31_Pos                       _UINT32_(31)                                         /* (PIO_PDR) PIO Disable Position */
#define PIO_PDR_P31_Msk                       (_UINT32_(0x1) << PIO_PDR_P31_Pos)                   /* (PIO_PDR) PIO Disable Mask */
#define PIO_PDR_P31(value)                    (PIO_PDR_P31_Msk & (_UINT32_(value) << PIO_PDR_P31_Pos)) /* Assignment of value for P31 in the PIO_PDR register */
#define PIO_PDR_Msk                           _UINT32_(0xFFFFFFFF)                                 /* (PIO_PDR) Register Mask  */

#define PIO_PDR_P_Pos                         _UINT32_(0)                                          /* (PIO_PDR Position) PIO Disable */
#define PIO_PDR_P_Msk                         (_UINT32_(0xFFFFFFFF) << PIO_PDR_P_Pos)              /* (PIO_PDR Mask) P */
#define PIO_PDR_P(value)                      (PIO_PDR_P_Msk & (_UINT32_(value) << PIO_PDR_P_Pos)) 

/* -------- PIO_PSR : (PIO Offset: 0x08) ( R/ 32) PIO Status Register -------- */
#define PIO_PSR_P0_Pos                        _UINT32_(0)                                          /* (PIO_PSR) PIO Status Position */
#define PIO_PSR_P0_Msk                        (_UINT32_(0x1) << PIO_PSR_P0_Pos)                    /* (PIO_PSR) PIO Status Mask */
#define PIO_PSR_P0(value)                     (PIO_PSR_P0_Msk & (_UINT32_(value) << PIO_PSR_P0_Pos)) /* Assignment of value for P0 in the PIO_PSR register */
#define PIO_PSR_P1_Pos                        _UINT32_(1)                                          /* (PIO_PSR) PIO Status Position */
#define PIO_PSR_P1_Msk                        (_UINT32_(0x1) << PIO_PSR_P1_Pos)                    /* (PIO_PSR) PIO Status Mask */
#define PIO_PSR_P1(value)                     (PIO_PSR_P1_Msk & (_UINT32_(value) << PIO_PSR_P1_Pos)) /* Assignment of value for P1 in the PIO_PSR register */
#define PIO_PSR_P2_Pos                        _UINT32_(2)                                          /* (PIO_PSR) PIO Status Position */
#define PIO_PSR_P2_Msk                        (_UINT32_(0x1) << PIO_PSR_P2_Pos)                    /* (PIO_PSR) PIO Status Mask */
#define PIO_PSR_P2(value)                     (PIO_PSR_P2_Msk & (_UINT32_(value) << PIO_PSR_P2_Pos)) /* Assignment of value for P2 in the PIO_PSR register */
#define PIO_PSR_P3_Pos                        _UINT32_(3)                                          /* (PIO_PSR) PIO Status Position */
#define PIO_PSR_P3_Msk                        (_UINT32_(0x1) << PIO_PSR_P3_Pos)                    /* (PIO_PSR) PIO Status Mask */
#define PIO_PSR_P3(value)                     (PIO_PSR_P3_Msk & (_UINT32_(value) << PIO_PSR_P3_Pos)) /* Assignment of value for P3 in the PIO_PSR register */
#define PIO_PSR_P4_Pos                        _UINT32_(4)                                          /* (PIO_PSR) PIO Status Position */
#define PIO_PSR_P4_Msk                        (_UINT32_(0x1) << PIO_PSR_P4_Pos)                    /* (PIO_PSR) PIO Status Mask */
#define PIO_PSR_P4(value)                     (PIO_PSR_P4_Msk & (_UINT32_(value) << PIO_PSR_P4_Pos)) /* Assignment of value for P4 in the PIO_PSR register */
#define PIO_PSR_P5_Pos                        _UINT32_(5)                                          /* (PIO_PSR) PIO Status Position */
#define PIO_PSR_P5_Msk                        (_UINT32_(0x1) << PIO_PSR_P5_Pos)                    /* (PIO_PSR) PIO Status Mask */
#define PIO_PSR_P5(value)                     (PIO_PSR_P5_Msk & (_UINT32_(value) << PIO_PSR_P5_Pos)) /* Assignment of value for P5 in the PIO_PSR register */
#define PIO_PSR_P6_Pos                        _UINT32_(6)                                          /* (PIO_PSR) PIO Status Position */
#define PIO_PSR_P6_Msk                        (_UINT32_(0x1) << PIO_PSR_P6_Pos)                    /* (PIO_PSR) PIO Status Mask */
#define PIO_PSR_P6(value)                     (PIO_PSR_P6_Msk & (_UINT32_(value) << PIO_PSR_P6_Pos)) /* Assignment of value for P6 in the PIO_PSR register */
#define PIO_PSR_P7_Pos                        _UINT32_(7)                                          /* (PIO_PSR) PIO Status Position */
#define PIO_PSR_P7_Msk                        (_UINT32_(0x1) << PIO_PSR_P7_Pos)                    /* (PIO_PSR) PIO Status Mask */
#define PIO_PSR_P7(value)                     (PIO_PSR_P7_Msk & (_UINT32_(value) << PIO_PSR_P7_Pos)) /* Assignment of value for P7 in the PIO_PSR register */
#define PIO_PSR_P8_Pos                        _UINT32_(8)                                          /* (PIO_PSR) PIO Status Position */
#define PIO_PSR_P8_Msk                        (_UINT32_(0x1) << PIO_PSR_P8_Pos)                    /* (PIO_PSR) PIO Status Mask */
#define PIO_PSR_P8(value)                     (PIO_PSR_P8_Msk & (_UINT32_(value) << PIO_PSR_P8_Pos)) /* Assignment of value for P8 in the PIO_PSR register */
#define PIO_PSR_P9_Pos                        _UINT32_(9)                                          /* (PIO_PSR) PIO Status Position */
#define PIO_PSR_P9_Msk                        (_UINT32_(0x1) << PIO_PSR_P9_Pos)                    /* (PIO_PSR) PIO Status Mask */
#define PIO_PSR_P9(value)                     (PIO_PSR_P9_Msk & (_UINT32_(value) << PIO_PSR_P9_Pos)) /* Assignment of value for P9 in the PIO_PSR register */
#define PIO_PSR_P10_Pos                       _UINT32_(10)                                         /* (PIO_PSR) PIO Status Position */
#define PIO_PSR_P10_Msk                       (_UINT32_(0x1) << PIO_PSR_P10_Pos)                   /* (PIO_PSR) PIO Status Mask */
#define PIO_PSR_P10(value)                    (PIO_PSR_P10_Msk & (_UINT32_(value) << PIO_PSR_P10_Pos)) /* Assignment of value for P10 in the PIO_PSR register */
#define PIO_PSR_P11_Pos                       _UINT32_(11)                                         /* (PIO_PSR) PIO Status Position */
#define PIO_PSR_P11_Msk                       (_UINT32_(0x1) << PIO_PSR_P11_Pos)                   /* (PIO_PSR) PIO Status Mask */
#define PIO_PSR_P11(value)                    (PIO_PSR_P11_Msk & (_UINT32_(value) << PIO_PSR_P11_Pos)) /* Assignment of value for P11 in the PIO_PSR register */
#define PIO_PSR_P12_Pos                       _UINT32_(12)                                         /* (PIO_PSR) PIO Status Position */
#define PIO_PSR_P12_Msk                       (_UINT32_(0x1) << PIO_PSR_P12_Pos)                   /* (PIO_PSR) PIO Status Mask */
#define PIO_PSR_P12(value)                    (PIO_PSR_P12_Msk & (_UINT32_(value) << PIO_PSR_P12_Pos)) /* Assignment of value for P12 in the PIO_PSR register */
#define PIO_PSR_P13_Pos                       _UINT32_(13)                                         /* (PIO_PSR) PIO Status Position */
#define PIO_PSR_P13_Msk                       (_UINT32_(0x1) << PIO_PSR_P13_Pos)                   /* (PIO_PSR) PIO Status Mask */
#define PIO_PSR_P13(value)                    (PIO_PSR_P13_Msk & (_UINT32_(value) << PIO_PSR_P13_Pos)) /* Assignment of value for P13 in the PIO_PSR register */
#define PIO_PSR_P14_Pos                       _UINT32_(14)                                         /* (PIO_PSR) PIO Status Position */
#define PIO_PSR_P14_Msk                       (_UINT32_(0x1) << PIO_PSR_P14_Pos)                   /* (PIO_PSR) PIO Status Mask */
#define PIO_PSR_P14(value)                    (PIO_PSR_P14_Msk & (_UINT32_(value) << PIO_PSR_P14_Pos)) /* Assignment of value for P14 in the PIO_PSR register */
#define PIO_PSR_P15_Pos                       _UINT32_(15)                                         /* (PIO_PSR) PIO Status Position */
#define PIO_PSR_P15_Msk                       (_UINT32_(0x1) << PIO_PSR_P15_Pos)                   /* (PIO_PSR) PIO Status Mask */
#define PIO_PSR_P15(value)                    (PIO_PSR_P15_Msk & (_UINT32_(value) << PIO_PSR_P15_Pos)) /* Assignment of value for P15 in the PIO_PSR register */
#define PIO_PSR_P16_Pos                       _UINT32_(16)                                         /* (PIO_PSR) PIO Status Position */
#define PIO_PSR_P16_Msk                       (_UINT32_(0x1) << PIO_PSR_P16_Pos)                   /* (PIO_PSR) PIO Status Mask */
#define PIO_PSR_P16(value)                    (PIO_PSR_P16_Msk & (_UINT32_(value) << PIO_PSR_P16_Pos)) /* Assignment of value for P16 in the PIO_PSR register */
#define PIO_PSR_P17_Pos                       _UINT32_(17)                                         /* (PIO_PSR) PIO Status Position */
#define PIO_PSR_P17_Msk                       (_UINT32_(0x1) << PIO_PSR_P17_Pos)                   /* (PIO_PSR) PIO Status Mask */
#define PIO_PSR_P17(value)                    (PIO_PSR_P17_Msk & (_UINT32_(value) << PIO_PSR_P17_Pos)) /* Assignment of value for P17 in the PIO_PSR register */
#define PIO_PSR_P18_Pos                       _UINT32_(18)                                         /* (PIO_PSR) PIO Status Position */
#define PIO_PSR_P18_Msk                       (_UINT32_(0x1) << PIO_PSR_P18_Pos)                   /* (PIO_PSR) PIO Status Mask */
#define PIO_PSR_P18(value)                    (PIO_PSR_P18_Msk & (_UINT32_(value) << PIO_PSR_P18_Pos)) /* Assignment of value for P18 in the PIO_PSR register */
#define PIO_PSR_P19_Pos                       _UINT32_(19)                                         /* (PIO_PSR) PIO Status Position */
#define PIO_PSR_P19_Msk                       (_UINT32_(0x1) << PIO_PSR_P19_Pos)                   /* (PIO_PSR) PIO Status Mask */
#define PIO_PSR_P19(value)                    (PIO_PSR_P19_Msk & (_UINT32_(value) << PIO_PSR_P19_Pos)) /* Assignment of value for P19 in the PIO_PSR register */
#define PIO_PSR_P20_Pos                       _UINT32_(20)                                         /* (PIO_PSR) PIO Status Position */
#define PIO_PSR_P20_Msk                       (_UINT32_(0x1) << PIO_PSR_P20_Pos)                   /* (PIO_PSR) PIO Status Mask */
#define PIO_PSR_P20(value)                    (PIO_PSR_P20_Msk & (_UINT32_(value) << PIO_PSR_P20_Pos)) /* Assignment of value for P20 in the PIO_PSR register */
#define PIO_PSR_P21_Pos                       _UINT32_(21)                                         /* (PIO_PSR) PIO Status Position */
#define PIO_PSR_P21_Msk                       (_UINT32_(0x1) << PIO_PSR_P21_Pos)                   /* (PIO_PSR) PIO Status Mask */
#define PIO_PSR_P21(value)                    (PIO_PSR_P21_Msk & (_UINT32_(value) << PIO_PSR_P21_Pos)) /* Assignment of value for P21 in the PIO_PSR register */
#define PIO_PSR_P22_Pos                       _UINT32_(22)                                         /* (PIO_PSR) PIO Status Position */
#define PIO_PSR_P22_Msk                       (_UINT32_(0x1) << PIO_PSR_P22_Pos)                   /* (PIO_PSR) PIO Status Mask */
#define PIO_PSR_P22(value)                    (PIO_PSR_P22_Msk & (_UINT32_(value) << PIO_PSR_P22_Pos)) /* Assignment of value for P22 in the PIO_PSR register */
#define PIO_PSR_P23_Pos                       _UINT32_(23)                                         /* (PIO_PSR) PIO Status Position */
#define PIO_PSR_P23_Msk                       (_UINT32_(0x1) << PIO_PSR_P23_Pos)                   /* (PIO_PSR) PIO Status Mask */
#define PIO_PSR_P23(value)                    (PIO_PSR_P23_Msk & (_UINT32_(value) << PIO_PSR_P23_Pos)) /* Assignment of value for P23 in the PIO_PSR register */
#define PIO_PSR_P24_Pos                       _UINT32_(24)                                         /* (PIO_PSR) PIO Status Position */
#define PIO_PSR_P24_Msk                       (_UINT32_(0x1) << PIO_PSR_P24_Pos)                   /* (PIO_PSR) PIO Status Mask */
#define PIO_PSR_P24(value)                    (PIO_PSR_P24_Msk & (_UINT32_(value) << PIO_PSR_P24_Pos)) /* Assignment of value for P24 in the PIO_PSR register */
#define PIO_PSR_P25_Pos                       _UINT32_(25)                                         /* (PIO_PSR) PIO Status Position */
#define PIO_PSR_P25_Msk                       (_UINT32_(0x1) << PIO_PSR_P25_Pos)                   /* (PIO_PSR) PIO Status Mask */
#define PIO_PSR_P25(value)                    (PIO_PSR_P25_Msk & (_UINT32_(value) << PIO_PSR_P25_Pos)) /* Assignment of value for P25 in the PIO_PSR register */
#define PIO_PSR_P26_Pos                       _UINT32_(26)                                         /* (PIO_PSR) PIO Status Position */
#define PIO_PSR_P26_Msk                       (_UINT32_(0x1) << PIO_PSR_P26_Pos)                   /* (PIO_PSR) PIO Status Mask */
#define PIO_PSR_P26(value)                    (PIO_PSR_P26_Msk & (_UINT32_(value) << PIO_PSR_P26_Pos)) /* Assignment of value for P26 in the PIO_PSR register */
#define PIO_PSR_P27_Pos                       _UINT32_(27)                                         /* (PIO_PSR) PIO Status Position */
#define PIO_PSR_P27_Msk                       (_UINT32_(0x1) << PIO_PSR_P27_Pos)                   /* (PIO_PSR) PIO Status Mask */
#define PIO_PSR_P27(value)                    (PIO_PSR_P27_Msk & (_UINT32_(value) << PIO_PSR_P27_Pos)) /* Assignment of value for P27 in the PIO_PSR register */
#define PIO_PSR_P28_Pos                       _UINT32_(28)                                         /* (PIO_PSR) PIO Status Position */
#define PIO_PSR_P28_Msk                       (_UINT32_(0x1) << PIO_PSR_P28_Pos)                   /* (PIO_PSR) PIO Status Mask */
#define PIO_PSR_P28(value)                    (PIO_PSR_P28_Msk & (_UINT32_(value) << PIO_PSR_P28_Pos)) /* Assignment of value for P28 in the PIO_PSR register */
#define PIO_PSR_P29_Pos                       _UINT32_(29)                                         /* (PIO_PSR) PIO Status Position */
#define PIO_PSR_P29_Msk                       (_UINT32_(0x1) << PIO_PSR_P29_Pos)                   /* (PIO_PSR) PIO Status Mask */
#define PIO_PSR_P29(value)                    (PIO_PSR_P29_Msk & (_UINT32_(value) << PIO_PSR_P29_Pos)) /* Assignment of value for P29 in the PIO_PSR register */
#define PIO_PSR_P30_Pos                       _UINT32_(30)                                         /* (PIO_PSR) PIO Status Position */
#define PIO_PSR_P30_Msk                       (_UINT32_(0x1) << PIO_PSR_P30_Pos)                   /* (PIO_PSR) PIO Status Mask */
#define PIO_PSR_P30(value)                    (PIO_PSR_P30_Msk & (_UINT32_(value) << PIO_PSR_P30_Pos)) /* Assignment of value for P30 in the PIO_PSR register */
#define PIO_PSR_P31_Pos                       _UINT32_(31)                                         /* (PIO_PSR) PIO Status Position */
#define PIO_PSR_P31_Msk                       (_UINT32_(0x1) << PIO_PSR_P31_Pos)                   /* (PIO_PSR) PIO Status Mask */
#define PIO_PSR_P31(value)                    (PIO_PSR_P31_Msk & (_UINT32_(value) << PIO_PSR_P31_Pos)) /* Assignment of value for P31 in the PIO_PSR register */
#define PIO_PSR_Msk                           _UINT32_(0xFFFFFFFF)                                 /* (PIO_PSR) Register Mask  */

#define PIO_PSR_P_Pos                         _UINT32_(0)                                          /* (PIO_PSR Position) PIO Status */
#define PIO_PSR_P_Msk                         (_UINT32_(0xFFFFFFFF) << PIO_PSR_P_Pos)              /* (PIO_PSR Mask) P */
#define PIO_PSR_P(value)                      (PIO_PSR_P_Msk & (_UINT32_(value) << PIO_PSR_P_Pos)) 

/* -------- PIO_OER : (PIO Offset: 0x10) ( /W 32) Output Enable Register -------- */
#define PIO_OER_P0_Pos                        _UINT32_(0)                                          /* (PIO_OER) Output Enable Position */
#define PIO_OER_P0_Msk                        (_UINT32_(0x1) << PIO_OER_P0_Pos)                    /* (PIO_OER) Output Enable Mask */
#define PIO_OER_P0(value)                     (PIO_OER_P0_Msk & (_UINT32_(value) << PIO_OER_P0_Pos)) /* Assignment of value for P0 in the PIO_OER register */
#define PIO_OER_P1_Pos                        _UINT32_(1)                                          /* (PIO_OER) Output Enable Position */
#define PIO_OER_P1_Msk                        (_UINT32_(0x1) << PIO_OER_P1_Pos)                    /* (PIO_OER) Output Enable Mask */
#define PIO_OER_P1(value)                     (PIO_OER_P1_Msk & (_UINT32_(value) << PIO_OER_P1_Pos)) /* Assignment of value for P1 in the PIO_OER register */
#define PIO_OER_P2_Pos                        _UINT32_(2)                                          /* (PIO_OER) Output Enable Position */
#define PIO_OER_P2_Msk                        (_UINT32_(0x1) << PIO_OER_P2_Pos)                    /* (PIO_OER) Output Enable Mask */
#define PIO_OER_P2(value)                     (PIO_OER_P2_Msk & (_UINT32_(value) << PIO_OER_P2_Pos)) /* Assignment of value for P2 in the PIO_OER register */
#define PIO_OER_P3_Pos                        _UINT32_(3)                                          /* (PIO_OER) Output Enable Position */
#define PIO_OER_P3_Msk                        (_UINT32_(0x1) << PIO_OER_P3_Pos)                    /* (PIO_OER) Output Enable Mask */
#define PIO_OER_P3(value)                     (PIO_OER_P3_Msk & (_UINT32_(value) << PIO_OER_P3_Pos)) /* Assignment of value for P3 in the PIO_OER register */
#define PIO_OER_P4_Pos                        _UINT32_(4)                                          /* (PIO_OER) Output Enable Position */
#define PIO_OER_P4_Msk                        (_UINT32_(0x1) << PIO_OER_P4_Pos)                    /* (PIO_OER) Output Enable Mask */
#define PIO_OER_P4(value)                     (PIO_OER_P4_Msk & (_UINT32_(value) << PIO_OER_P4_Pos)) /* Assignment of value for P4 in the PIO_OER register */
#define PIO_OER_P5_Pos                        _UINT32_(5)                                          /* (PIO_OER) Output Enable Position */
#define PIO_OER_P5_Msk                        (_UINT32_(0x1) << PIO_OER_P5_Pos)                    /* (PIO_OER) Output Enable Mask */
#define PIO_OER_P5(value)                     (PIO_OER_P5_Msk & (_UINT32_(value) << PIO_OER_P5_Pos)) /* Assignment of value for P5 in the PIO_OER register */
#define PIO_OER_P6_Pos                        _UINT32_(6)                                          /* (PIO_OER) Output Enable Position */
#define PIO_OER_P6_Msk                        (_UINT32_(0x1) << PIO_OER_P6_Pos)                    /* (PIO_OER) Output Enable Mask */
#define PIO_OER_P6(value)                     (PIO_OER_P6_Msk & (_UINT32_(value) << PIO_OER_P6_Pos)) /* Assignment of value for P6 in the PIO_OER register */
#define PIO_OER_P7_Pos                        _UINT32_(7)                                          /* (PIO_OER) Output Enable Position */
#define PIO_OER_P7_Msk                        (_UINT32_(0x1) << PIO_OER_P7_Pos)                    /* (PIO_OER) Output Enable Mask */
#define PIO_OER_P7(value)                     (PIO_OER_P7_Msk & (_UINT32_(value) << PIO_OER_P7_Pos)) /* Assignment of value for P7 in the PIO_OER register */
#define PIO_OER_P8_Pos                        _UINT32_(8)                                          /* (PIO_OER) Output Enable Position */
#define PIO_OER_P8_Msk                        (_UINT32_(0x1) << PIO_OER_P8_Pos)                    /* (PIO_OER) Output Enable Mask */
#define PIO_OER_P8(value)                     (PIO_OER_P8_Msk & (_UINT32_(value) << PIO_OER_P8_Pos)) /* Assignment of value for P8 in the PIO_OER register */
#define PIO_OER_P9_Pos                        _UINT32_(9)                                          /* (PIO_OER) Output Enable Position */
#define PIO_OER_P9_Msk                        (_UINT32_(0x1) << PIO_OER_P9_Pos)                    /* (PIO_OER) Output Enable Mask */
#define PIO_OER_P9(value)                     (PIO_OER_P9_Msk & (_UINT32_(value) << PIO_OER_P9_Pos)) /* Assignment of value for P9 in the PIO_OER register */
#define PIO_OER_P10_Pos                       _UINT32_(10)                                         /* (PIO_OER) Output Enable Position */
#define PIO_OER_P10_Msk                       (_UINT32_(0x1) << PIO_OER_P10_Pos)                   /* (PIO_OER) Output Enable Mask */
#define PIO_OER_P10(value)                    (PIO_OER_P10_Msk & (_UINT32_(value) << PIO_OER_P10_Pos)) /* Assignment of value for P10 in the PIO_OER register */
#define PIO_OER_P11_Pos                       _UINT32_(11)                                         /* (PIO_OER) Output Enable Position */
#define PIO_OER_P11_Msk                       (_UINT32_(0x1) << PIO_OER_P11_Pos)                   /* (PIO_OER) Output Enable Mask */
#define PIO_OER_P11(value)                    (PIO_OER_P11_Msk & (_UINT32_(value) << PIO_OER_P11_Pos)) /* Assignment of value for P11 in the PIO_OER register */
#define PIO_OER_P12_Pos                       _UINT32_(12)                                         /* (PIO_OER) Output Enable Position */
#define PIO_OER_P12_Msk                       (_UINT32_(0x1) << PIO_OER_P12_Pos)                   /* (PIO_OER) Output Enable Mask */
#define PIO_OER_P12(value)                    (PIO_OER_P12_Msk & (_UINT32_(value) << PIO_OER_P12_Pos)) /* Assignment of value for P12 in the PIO_OER register */
#define PIO_OER_P13_Pos                       _UINT32_(13)                                         /* (PIO_OER) Output Enable Position */
#define PIO_OER_P13_Msk                       (_UINT32_(0x1) << PIO_OER_P13_Pos)                   /* (PIO_OER) Output Enable Mask */
#define PIO_OER_P13(value)                    (PIO_OER_P13_Msk & (_UINT32_(value) << PIO_OER_P13_Pos)) /* Assignment of value for P13 in the PIO_OER register */
#define PIO_OER_P14_Pos                       _UINT32_(14)                                         /* (PIO_OER) Output Enable Position */
#define PIO_OER_P14_Msk                       (_UINT32_(0x1) << PIO_OER_P14_Pos)                   /* (PIO_OER) Output Enable Mask */
#define PIO_OER_P14(value)                    (PIO_OER_P14_Msk & (_UINT32_(value) << PIO_OER_P14_Pos)) /* Assignment of value for P14 in the PIO_OER register */
#define PIO_OER_P15_Pos                       _UINT32_(15)                                         /* (PIO_OER) Output Enable Position */
#define PIO_OER_P15_Msk                       (_UINT32_(0x1) << PIO_OER_P15_Pos)                   /* (PIO_OER) Output Enable Mask */
#define PIO_OER_P15(value)                    (PIO_OER_P15_Msk & (_UINT32_(value) << PIO_OER_P15_Pos)) /* Assignment of value for P15 in the PIO_OER register */
#define PIO_OER_P16_Pos                       _UINT32_(16)                                         /* (PIO_OER) Output Enable Position */
#define PIO_OER_P16_Msk                       (_UINT32_(0x1) << PIO_OER_P16_Pos)                   /* (PIO_OER) Output Enable Mask */
#define PIO_OER_P16(value)                    (PIO_OER_P16_Msk & (_UINT32_(value) << PIO_OER_P16_Pos)) /* Assignment of value for P16 in the PIO_OER register */
#define PIO_OER_P17_Pos                       _UINT32_(17)                                         /* (PIO_OER) Output Enable Position */
#define PIO_OER_P17_Msk                       (_UINT32_(0x1) << PIO_OER_P17_Pos)                   /* (PIO_OER) Output Enable Mask */
#define PIO_OER_P17(value)                    (PIO_OER_P17_Msk & (_UINT32_(value) << PIO_OER_P17_Pos)) /* Assignment of value for P17 in the PIO_OER register */
#define PIO_OER_P18_Pos                       _UINT32_(18)                                         /* (PIO_OER) Output Enable Position */
#define PIO_OER_P18_Msk                       (_UINT32_(0x1) << PIO_OER_P18_Pos)                   /* (PIO_OER) Output Enable Mask */
#define PIO_OER_P18(value)                    (PIO_OER_P18_Msk & (_UINT32_(value) << PIO_OER_P18_Pos)) /* Assignment of value for P18 in the PIO_OER register */
#define PIO_OER_P19_Pos                       _UINT32_(19)                                         /* (PIO_OER) Output Enable Position */
#define PIO_OER_P19_Msk                       (_UINT32_(0x1) << PIO_OER_P19_Pos)                   /* (PIO_OER) Output Enable Mask */
#define PIO_OER_P19(value)                    (PIO_OER_P19_Msk & (_UINT32_(value) << PIO_OER_P19_Pos)) /* Assignment of value for P19 in the PIO_OER register */
#define PIO_OER_P20_Pos                       _UINT32_(20)                                         /* (PIO_OER) Output Enable Position */
#define PIO_OER_P20_Msk                       (_UINT32_(0x1) << PIO_OER_P20_Pos)                   /* (PIO_OER) Output Enable Mask */
#define PIO_OER_P20(value)                    (PIO_OER_P20_Msk & (_UINT32_(value) << PIO_OER_P20_Pos)) /* Assignment of value for P20 in the PIO_OER register */
#define PIO_OER_P21_Pos                       _UINT32_(21)                                         /* (PIO_OER) Output Enable Position */
#define PIO_OER_P21_Msk                       (_UINT32_(0x1) << PIO_OER_P21_Pos)                   /* (PIO_OER) Output Enable Mask */
#define PIO_OER_P21(value)                    (PIO_OER_P21_Msk & (_UINT32_(value) << PIO_OER_P21_Pos)) /* Assignment of value for P21 in the PIO_OER register */
#define PIO_OER_P22_Pos                       _UINT32_(22)                                         /* (PIO_OER) Output Enable Position */
#define PIO_OER_P22_Msk                       (_UINT32_(0x1) << PIO_OER_P22_Pos)                   /* (PIO_OER) Output Enable Mask */
#define PIO_OER_P22(value)                    (PIO_OER_P22_Msk & (_UINT32_(value) << PIO_OER_P22_Pos)) /* Assignment of value for P22 in the PIO_OER register */
#define PIO_OER_P23_Pos                       _UINT32_(23)                                         /* (PIO_OER) Output Enable Position */
#define PIO_OER_P23_Msk                       (_UINT32_(0x1) << PIO_OER_P23_Pos)                   /* (PIO_OER) Output Enable Mask */
#define PIO_OER_P23(value)                    (PIO_OER_P23_Msk & (_UINT32_(value) << PIO_OER_P23_Pos)) /* Assignment of value for P23 in the PIO_OER register */
#define PIO_OER_P24_Pos                       _UINT32_(24)                                         /* (PIO_OER) Output Enable Position */
#define PIO_OER_P24_Msk                       (_UINT32_(0x1) << PIO_OER_P24_Pos)                   /* (PIO_OER) Output Enable Mask */
#define PIO_OER_P24(value)                    (PIO_OER_P24_Msk & (_UINT32_(value) << PIO_OER_P24_Pos)) /* Assignment of value for P24 in the PIO_OER register */
#define PIO_OER_P25_Pos                       _UINT32_(25)                                         /* (PIO_OER) Output Enable Position */
#define PIO_OER_P25_Msk                       (_UINT32_(0x1) << PIO_OER_P25_Pos)                   /* (PIO_OER) Output Enable Mask */
#define PIO_OER_P25(value)                    (PIO_OER_P25_Msk & (_UINT32_(value) << PIO_OER_P25_Pos)) /* Assignment of value for P25 in the PIO_OER register */
#define PIO_OER_P26_Pos                       _UINT32_(26)                                         /* (PIO_OER) Output Enable Position */
#define PIO_OER_P26_Msk                       (_UINT32_(0x1) << PIO_OER_P26_Pos)                   /* (PIO_OER) Output Enable Mask */
#define PIO_OER_P26(value)                    (PIO_OER_P26_Msk & (_UINT32_(value) << PIO_OER_P26_Pos)) /* Assignment of value for P26 in the PIO_OER register */
#define PIO_OER_P27_Pos                       _UINT32_(27)                                         /* (PIO_OER) Output Enable Position */
#define PIO_OER_P27_Msk                       (_UINT32_(0x1) << PIO_OER_P27_Pos)                   /* (PIO_OER) Output Enable Mask */
#define PIO_OER_P27(value)                    (PIO_OER_P27_Msk & (_UINT32_(value) << PIO_OER_P27_Pos)) /* Assignment of value for P27 in the PIO_OER register */
#define PIO_OER_P28_Pos                       _UINT32_(28)                                         /* (PIO_OER) Output Enable Position */
#define PIO_OER_P28_Msk                       (_UINT32_(0x1) << PIO_OER_P28_Pos)                   /* (PIO_OER) Output Enable Mask */
#define PIO_OER_P28(value)                    (PIO_OER_P28_Msk & (_UINT32_(value) << PIO_OER_P28_Pos)) /* Assignment of value for P28 in the PIO_OER register */
#define PIO_OER_P29_Pos                       _UINT32_(29)                                         /* (PIO_OER) Output Enable Position */
#define PIO_OER_P29_Msk                       (_UINT32_(0x1) << PIO_OER_P29_Pos)                   /* (PIO_OER) Output Enable Mask */
#define PIO_OER_P29(value)                    (PIO_OER_P29_Msk & (_UINT32_(value) << PIO_OER_P29_Pos)) /* Assignment of value for P29 in the PIO_OER register */
#define PIO_OER_P30_Pos                       _UINT32_(30)                                         /* (PIO_OER) Output Enable Position */
#define PIO_OER_P30_Msk                       (_UINT32_(0x1) << PIO_OER_P30_Pos)                   /* (PIO_OER) Output Enable Mask */
#define PIO_OER_P30(value)                    (PIO_OER_P30_Msk & (_UINT32_(value) << PIO_OER_P30_Pos)) /* Assignment of value for P30 in the PIO_OER register */
#define PIO_OER_P31_Pos                       _UINT32_(31)                                         /* (PIO_OER) Output Enable Position */
#define PIO_OER_P31_Msk                       (_UINT32_(0x1) << PIO_OER_P31_Pos)                   /* (PIO_OER) Output Enable Mask */
#define PIO_OER_P31(value)                    (PIO_OER_P31_Msk & (_UINT32_(value) << PIO_OER_P31_Pos)) /* Assignment of value for P31 in the PIO_OER register */
#define PIO_OER_Msk                           _UINT32_(0xFFFFFFFF)                                 /* (PIO_OER) Register Mask  */

#define PIO_OER_P_Pos                         _UINT32_(0)                                          /* (PIO_OER Position) Output Enable */
#define PIO_OER_P_Msk                         (_UINT32_(0xFFFFFFFF) << PIO_OER_P_Pos)              /* (PIO_OER Mask) P */
#define PIO_OER_P(value)                      (PIO_OER_P_Msk & (_UINT32_(value) << PIO_OER_P_Pos)) 

/* -------- PIO_ODR : (PIO Offset: 0x14) ( /W 32) Output Disable Register -------- */
#define PIO_ODR_P0_Pos                        _UINT32_(0)                                          /* (PIO_ODR) Output Disable Position */
#define PIO_ODR_P0_Msk                        (_UINT32_(0x1) << PIO_ODR_P0_Pos)                    /* (PIO_ODR) Output Disable Mask */
#define PIO_ODR_P0(value)                     (PIO_ODR_P0_Msk & (_UINT32_(value) << PIO_ODR_P0_Pos)) /* Assignment of value for P0 in the PIO_ODR register */
#define PIO_ODR_P1_Pos                        _UINT32_(1)                                          /* (PIO_ODR) Output Disable Position */
#define PIO_ODR_P1_Msk                        (_UINT32_(0x1) << PIO_ODR_P1_Pos)                    /* (PIO_ODR) Output Disable Mask */
#define PIO_ODR_P1(value)                     (PIO_ODR_P1_Msk & (_UINT32_(value) << PIO_ODR_P1_Pos)) /* Assignment of value for P1 in the PIO_ODR register */
#define PIO_ODR_P2_Pos                        _UINT32_(2)                                          /* (PIO_ODR) Output Disable Position */
#define PIO_ODR_P2_Msk                        (_UINT32_(0x1) << PIO_ODR_P2_Pos)                    /* (PIO_ODR) Output Disable Mask */
#define PIO_ODR_P2(value)                     (PIO_ODR_P2_Msk & (_UINT32_(value) << PIO_ODR_P2_Pos)) /* Assignment of value for P2 in the PIO_ODR register */
#define PIO_ODR_P3_Pos                        _UINT32_(3)                                          /* (PIO_ODR) Output Disable Position */
#define PIO_ODR_P3_Msk                        (_UINT32_(0x1) << PIO_ODR_P3_Pos)                    /* (PIO_ODR) Output Disable Mask */
#define PIO_ODR_P3(value)                     (PIO_ODR_P3_Msk & (_UINT32_(value) << PIO_ODR_P3_Pos)) /* Assignment of value for P3 in the PIO_ODR register */
#define PIO_ODR_P4_Pos                        _UINT32_(4)                                          /* (PIO_ODR) Output Disable Position */
#define PIO_ODR_P4_Msk                        (_UINT32_(0x1) << PIO_ODR_P4_Pos)                    /* (PIO_ODR) Output Disable Mask */
#define PIO_ODR_P4(value)                     (PIO_ODR_P4_Msk & (_UINT32_(value) << PIO_ODR_P4_Pos)) /* Assignment of value for P4 in the PIO_ODR register */
#define PIO_ODR_P5_Pos                        _UINT32_(5)                                          /* (PIO_ODR) Output Disable Position */
#define PIO_ODR_P5_Msk                        (_UINT32_(0x1) << PIO_ODR_P5_Pos)                    /* (PIO_ODR) Output Disable Mask */
#define PIO_ODR_P5(value)                     (PIO_ODR_P5_Msk & (_UINT32_(value) << PIO_ODR_P5_Pos)) /* Assignment of value for P5 in the PIO_ODR register */
#define PIO_ODR_P6_Pos                        _UINT32_(6)                                          /* (PIO_ODR) Output Disable Position */
#define PIO_ODR_P6_Msk                        (_UINT32_(0x1) << PIO_ODR_P6_Pos)                    /* (PIO_ODR) Output Disable Mask */
#define PIO_ODR_P6(value)                     (PIO_ODR_P6_Msk & (_UINT32_(value) << PIO_ODR_P6_Pos)) /* Assignment of value for P6 in the PIO_ODR register */
#define PIO_ODR_P7_Pos                        _UINT32_(7)                                          /* (PIO_ODR) Output Disable Position */
#define PIO_ODR_P7_Msk                        (_UINT32_(0x1) << PIO_ODR_P7_Pos)                    /* (PIO_ODR) Output Disable Mask */
#define PIO_ODR_P7(value)                     (PIO_ODR_P7_Msk & (_UINT32_(value) << PIO_ODR_P7_Pos)) /* Assignment of value for P7 in the PIO_ODR register */
#define PIO_ODR_P8_Pos                        _UINT32_(8)                                          /* (PIO_ODR) Output Disable Position */
#define PIO_ODR_P8_Msk                        (_UINT32_(0x1) << PIO_ODR_P8_Pos)                    /* (PIO_ODR) Output Disable Mask */
#define PIO_ODR_P8(value)                     (PIO_ODR_P8_Msk & (_UINT32_(value) << PIO_ODR_P8_Pos)) /* Assignment of value for P8 in the PIO_ODR register */
#define PIO_ODR_P9_Pos                        _UINT32_(9)                                          /* (PIO_ODR) Output Disable Position */
#define PIO_ODR_P9_Msk                        (_UINT32_(0x1) << PIO_ODR_P9_Pos)                    /* (PIO_ODR) Output Disable Mask */
#define PIO_ODR_P9(value)                     (PIO_ODR_P9_Msk & (_UINT32_(value) << PIO_ODR_P9_Pos)) /* Assignment of value for P9 in the PIO_ODR register */
#define PIO_ODR_P10_Pos                       _UINT32_(10)                                         /* (PIO_ODR) Output Disable Position */
#define PIO_ODR_P10_Msk                       (_UINT32_(0x1) << PIO_ODR_P10_Pos)                   /* (PIO_ODR) Output Disable Mask */
#define PIO_ODR_P10(value)                    (PIO_ODR_P10_Msk & (_UINT32_(value) << PIO_ODR_P10_Pos)) /* Assignment of value for P10 in the PIO_ODR register */
#define PIO_ODR_P11_Pos                       _UINT32_(11)                                         /* (PIO_ODR) Output Disable Position */
#define PIO_ODR_P11_Msk                       (_UINT32_(0x1) << PIO_ODR_P11_Pos)                   /* (PIO_ODR) Output Disable Mask */
#define PIO_ODR_P11(value)                    (PIO_ODR_P11_Msk & (_UINT32_(value) << PIO_ODR_P11_Pos)) /* Assignment of value for P11 in the PIO_ODR register */
#define PIO_ODR_P12_Pos                       _UINT32_(12)                                         /* (PIO_ODR) Output Disable Position */
#define PIO_ODR_P12_Msk                       (_UINT32_(0x1) << PIO_ODR_P12_Pos)                   /* (PIO_ODR) Output Disable Mask */
#define PIO_ODR_P12(value)                    (PIO_ODR_P12_Msk & (_UINT32_(value) << PIO_ODR_P12_Pos)) /* Assignment of value for P12 in the PIO_ODR register */
#define PIO_ODR_P13_Pos                       _UINT32_(13)                                         /* (PIO_ODR) Output Disable Position */
#define PIO_ODR_P13_Msk                       (_UINT32_(0x1) << PIO_ODR_P13_Pos)                   /* (PIO_ODR) Output Disable Mask */
#define PIO_ODR_P13(value)                    (PIO_ODR_P13_Msk & (_UINT32_(value) << PIO_ODR_P13_Pos)) /* Assignment of value for P13 in the PIO_ODR register */
#define PIO_ODR_P14_Pos                       _UINT32_(14)                                         /* (PIO_ODR) Output Disable Position */
#define PIO_ODR_P14_Msk                       (_UINT32_(0x1) << PIO_ODR_P14_Pos)                   /* (PIO_ODR) Output Disable Mask */
#define PIO_ODR_P14(value)                    (PIO_ODR_P14_Msk & (_UINT32_(value) << PIO_ODR_P14_Pos)) /* Assignment of value for P14 in the PIO_ODR register */
#define PIO_ODR_P15_Pos                       _UINT32_(15)                                         /* (PIO_ODR) Output Disable Position */
#define PIO_ODR_P15_Msk                       (_UINT32_(0x1) << PIO_ODR_P15_Pos)                   /* (PIO_ODR) Output Disable Mask */
#define PIO_ODR_P15(value)                    (PIO_ODR_P15_Msk & (_UINT32_(value) << PIO_ODR_P15_Pos)) /* Assignment of value for P15 in the PIO_ODR register */
#define PIO_ODR_P16_Pos                       _UINT32_(16)                                         /* (PIO_ODR) Output Disable Position */
#define PIO_ODR_P16_Msk                       (_UINT32_(0x1) << PIO_ODR_P16_Pos)                   /* (PIO_ODR) Output Disable Mask */
#define PIO_ODR_P16(value)                    (PIO_ODR_P16_Msk & (_UINT32_(value) << PIO_ODR_P16_Pos)) /* Assignment of value for P16 in the PIO_ODR register */
#define PIO_ODR_P17_Pos                       _UINT32_(17)                                         /* (PIO_ODR) Output Disable Position */
#define PIO_ODR_P17_Msk                       (_UINT32_(0x1) << PIO_ODR_P17_Pos)                   /* (PIO_ODR) Output Disable Mask */
#define PIO_ODR_P17(value)                    (PIO_ODR_P17_Msk & (_UINT32_(value) << PIO_ODR_P17_Pos)) /* Assignment of value for P17 in the PIO_ODR register */
#define PIO_ODR_P18_Pos                       _UINT32_(18)                                         /* (PIO_ODR) Output Disable Position */
#define PIO_ODR_P18_Msk                       (_UINT32_(0x1) << PIO_ODR_P18_Pos)                   /* (PIO_ODR) Output Disable Mask */
#define PIO_ODR_P18(value)                    (PIO_ODR_P18_Msk & (_UINT32_(value) << PIO_ODR_P18_Pos)) /* Assignment of value for P18 in the PIO_ODR register */
#define PIO_ODR_P19_Pos                       _UINT32_(19)                                         /* (PIO_ODR) Output Disable Position */
#define PIO_ODR_P19_Msk                       (_UINT32_(0x1) << PIO_ODR_P19_Pos)                   /* (PIO_ODR) Output Disable Mask */
#define PIO_ODR_P19(value)                    (PIO_ODR_P19_Msk & (_UINT32_(value) << PIO_ODR_P19_Pos)) /* Assignment of value for P19 in the PIO_ODR register */
#define PIO_ODR_P20_Pos                       _UINT32_(20)                                         /* (PIO_ODR) Output Disable Position */
#define PIO_ODR_P20_Msk                       (_UINT32_(0x1) << PIO_ODR_P20_Pos)                   /* (PIO_ODR) Output Disable Mask */
#define PIO_ODR_P20(value)                    (PIO_ODR_P20_Msk & (_UINT32_(value) << PIO_ODR_P20_Pos)) /* Assignment of value for P20 in the PIO_ODR register */
#define PIO_ODR_P21_Pos                       _UINT32_(21)                                         /* (PIO_ODR) Output Disable Position */
#define PIO_ODR_P21_Msk                       (_UINT32_(0x1) << PIO_ODR_P21_Pos)                   /* (PIO_ODR) Output Disable Mask */
#define PIO_ODR_P21(value)                    (PIO_ODR_P21_Msk & (_UINT32_(value) << PIO_ODR_P21_Pos)) /* Assignment of value for P21 in the PIO_ODR register */
#define PIO_ODR_P22_Pos                       _UINT32_(22)                                         /* (PIO_ODR) Output Disable Position */
#define PIO_ODR_P22_Msk                       (_UINT32_(0x1) << PIO_ODR_P22_Pos)                   /* (PIO_ODR) Output Disable Mask */
#define PIO_ODR_P22(value)                    (PIO_ODR_P22_Msk & (_UINT32_(value) << PIO_ODR_P22_Pos)) /* Assignment of value for P22 in the PIO_ODR register */
#define PIO_ODR_P23_Pos                       _UINT32_(23)                                         /* (PIO_ODR) Output Disable Position */
#define PIO_ODR_P23_Msk                       (_UINT32_(0x1) << PIO_ODR_P23_Pos)                   /* (PIO_ODR) Output Disable Mask */
#define PIO_ODR_P23(value)                    (PIO_ODR_P23_Msk & (_UINT32_(value) << PIO_ODR_P23_Pos)) /* Assignment of value for P23 in the PIO_ODR register */
#define PIO_ODR_P24_Pos                       _UINT32_(24)                                         /* (PIO_ODR) Output Disable Position */
#define PIO_ODR_P24_Msk                       (_UINT32_(0x1) << PIO_ODR_P24_Pos)                   /* (PIO_ODR) Output Disable Mask */
#define PIO_ODR_P24(value)                    (PIO_ODR_P24_Msk & (_UINT32_(value) << PIO_ODR_P24_Pos)) /* Assignment of value for P24 in the PIO_ODR register */
#define PIO_ODR_P25_Pos                       _UINT32_(25)                                         /* (PIO_ODR) Output Disable Position */
#define PIO_ODR_P25_Msk                       (_UINT32_(0x1) << PIO_ODR_P25_Pos)                   /* (PIO_ODR) Output Disable Mask */
#define PIO_ODR_P25(value)                    (PIO_ODR_P25_Msk & (_UINT32_(value) << PIO_ODR_P25_Pos)) /* Assignment of value for P25 in the PIO_ODR register */
#define PIO_ODR_P26_Pos                       _UINT32_(26)                                         /* (PIO_ODR) Output Disable Position */
#define PIO_ODR_P26_Msk                       (_UINT32_(0x1) << PIO_ODR_P26_Pos)                   /* (PIO_ODR) Output Disable Mask */
#define PIO_ODR_P26(value)                    (PIO_ODR_P26_Msk & (_UINT32_(value) << PIO_ODR_P26_Pos)) /* Assignment of value for P26 in the PIO_ODR register */
#define PIO_ODR_P27_Pos                       _UINT32_(27)                                         /* (PIO_ODR) Output Disable Position */
#define PIO_ODR_P27_Msk                       (_UINT32_(0x1) << PIO_ODR_P27_Pos)                   /* (PIO_ODR) Output Disable Mask */
#define PIO_ODR_P27(value)                    (PIO_ODR_P27_Msk & (_UINT32_(value) << PIO_ODR_P27_Pos)) /* Assignment of value for P27 in the PIO_ODR register */
#define PIO_ODR_P28_Pos                       _UINT32_(28)                                         /* (PIO_ODR) Output Disable Position */
#define PIO_ODR_P28_Msk                       (_UINT32_(0x1) << PIO_ODR_P28_Pos)                   /* (PIO_ODR) Output Disable Mask */
#define PIO_ODR_P28(value)                    (PIO_ODR_P28_Msk & (_UINT32_(value) << PIO_ODR_P28_Pos)) /* Assignment of value for P28 in the PIO_ODR register */
#define PIO_ODR_P29_Pos                       _UINT32_(29)                                         /* (PIO_ODR) Output Disable Position */
#define PIO_ODR_P29_Msk                       (_UINT32_(0x1) << PIO_ODR_P29_Pos)                   /* (PIO_ODR) Output Disable Mask */
#define PIO_ODR_P29(value)                    (PIO_ODR_P29_Msk & (_UINT32_(value) << PIO_ODR_P29_Pos)) /* Assignment of value for P29 in the PIO_ODR register */
#define PIO_ODR_P30_Pos                       _UINT32_(30)                                         /* (PIO_ODR) Output Disable Position */
#define PIO_ODR_P30_Msk                       (_UINT32_(0x1) << PIO_ODR_P30_Pos)                   /* (PIO_ODR) Output Disable Mask */
#define PIO_ODR_P30(value)                    (PIO_ODR_P30_Msk & (_UINT32_(value) << PIO_ODR_P30_Pos)) /* Assignment of value for P30 in the PIO_ODR register */
#define PIO_ODR_P31_Pos                       _UINT32_(31)                                         /* (PIO_ODR) Output Disable Position */
#define PIO_ODR_P31_Msk                       (_UINT32_(0x1) << PIO_ODR_P31_Pos)                   /* (PIO_ODR) Output Disable Mask */
#define PIO_ODR_P31(value)                    (PIO_ODR_P31_Msk & (_UINT32_(value) << PIO_ODR_P31_Pos)) /* Assignment of value for P31 in the PIO_ODR register */
#define PIO_ODR_Msk                           _UINT32_(0xFFFFFFFF)                                 /* (PIO_ODR) Register Mask  */

#define PIO_ODR_P_Pos                         _UINT32_(0)                                          /* (PIO_ODR Position) Output Disable */
#define PIO_ODR_P_Msk                         (_UINT32_(0xFFFFFFFF) << PIO_ODR_P_Pos)              /* (PIO_ODR Mask) P */
#define PIO_ODR_P(value)                      (PIO_ODR_P_Msk & (_UINT32_(value) << PIO_ODR_P_Pos)) 

/* -------- PIO_OSR : (PIO Offset: 0x18) ( R/ 32) Output Status Register -------- */
#define PIO_OSR_P0_Pos                        _UINT32_(0)                                          /* (PIO_OSR) Output Status Position */
#define PIO_OSR_P0_Msk                        (_UINT32_(0x1) << PIO_OSR_P0_Pos)                    /* (PIO_OSR) Output Status Mask */
#define PIO_OSR_P0(value)                     (PIO_OSR_P0_Msk & (_UINT32_(value) << PIO_OSR_P0_Pos)) /* Assignment of value for P0 in the PIO_OSR register */
#define PIO_OSR_P1_Pos                        _UINT32_(1)                                          /* (PIO_OSR) Output Status Position */
#define PIO_OSR_P1_Msk                        (_UINT32_(0x1) << PIO_OSR_P1_Pos)                    /* (PIO_OSR) Output Status Mask */
#define PIO_OSR_P1(value)                     (PIO_OSR_P1_Msk & (_UINT32_(value) << PIO_OSR_P1_Pos)) /* Assignment of value for P1 in the PIO_OSR register */
#define PIO_OSR_P2_Pos                        _UINT32_(2)                                          /* (PIO_OSR) Output Status Position */
#define PIO_OSR_P2_Msk                        (_UINT32_(0x1) << PIO_OSR_P2_Pos)                    /* (PIO_OSR) Output Status Mask */
#define PIO_OSR_P2(value)                     (PIO_OSR_P2_Msk & (_UINT32_(value) << PIO_OSR_P2_Pos)) /* Assignment of value for P2 in the PIO_OSR register */
#define PIO_OSR_P3_Pos                        _UINT32_(3)                                          /* (PIO_OSR) Output Status Position */
#define PIO_OSR_P3_Msk                        (_UINT32_(0x1) << PIO_OSR_P3_Pos)                    /* (PIO_OSR) Output Status Mask */
#define PIO_OSR_P3(value)                     (PIO_OSR_P3_Msk & (_UINT32_(value) << PIO_OSR_P3_Pos)) /* Assignment of value for P3 in the PIO_OSR register */
#define PIO_OSR_P4_Pos                        _UINT32_(4)                                          /* (PIO_OSR) Output Status Position */
#define PIO_OSR_P4_Msk                        (_UINT32_(0x1) << PIO_OSR_P4_Pos)                    /* (PIO_OSR) Output Status Mask */
#define PIO_OSR_P4(value)                     (PIO_OSR_P4_Msk & (_UINT32_(value) << PIO_OSR_P4_Pos)) /* Assignment of value for P4 in the PIO_OSR register */
#define PIO_OSR_P5_Pos                        _UINT32_(5)                                          /* (PIO_OSR) Output Status Position */
#define PIO_OSR_P5_Msk                        (_UINT32_(0x1) << PIO_OSR_P5_Pos)                    /* (PIO_OSR) Output Status Mask */
#define PIO_OSR_P5(value)                     (PIO_OSR_P5_Msk & (_UINT32_(value) << PIO_OSR_P5_Pos)) /* Assignment of value for P5 in the PIO_OSR register */
#define PIO_OSR_P6_Pos                        _UINT32_(6)                                          /* (PIO_OSR) Output Status Position */
#define PIO_OSR_P6_Msk                        (_UINT32_(0x1) << PIO_OSR_P6_Pos)                    /* (PIO_OSR) Output Status Mask */
#define PIO_OSR_P6(value)                     (PIO_OSR_P6_Msk & (_UINT32_(value) << PIO_OSR_P6_Pos)) /* Assignment of value for P6 in the PIO_OSR register */
#define PIO_OSR_P7_Pos                        _UINT32_(7)                                          /* (PIO_OSR) Output Status Position */
#define PIO_OSR_P7_Msk                        (_UINT32_(0x1) << PIO_OSR_P7_Pos)                    /* (PIO_OSR) Output Status Mask */
#define PIO_OSR_P7(value)                     (PIO_OSR_P7_Msk & (_UINT32_(value) << PIO_OSR_P7_Pos)) /* Assignment of value for P7 in the PIO_OSR register */
#define PIO_OSR_P8_Pos                        _UINT32_(8)                                          /* (PIO_OSR) Output Status Position */
#define PIO_OSR_P8_Msk                        (_UINT32_(0x1) << PIO_OSR_P8_Pos)                    /* (PIO_OSR) Output Status Mask */
#define PIO_OSR_P8(value)                     (PIO_OSR_P8_Msk & (_UINT32_(value) << PIO_OSR_P8_Pos)) /* Assignment of value for P8 in the PIO_OSR register */
#define PIO_OSR_P9_Pos                        _UINT32_(9)                                          /* (PIO_OSR) Output Status Position */
#define PIO_OSR_P9_Msk                        (_UINT32_(0x1) << PIO_OSR_P9_Pos)                    /* (PIO_OSR) Output Status Mask */
#define PIO_OSR_P9(value)                     (PIO_OSR_P9_Msk & (_UINT32_(value) << PIO_OSR_P9_Pos)) /* Assignment of value for P9 in the PIO_OSR register */
#define PIO_OSR_P10_Pos                       _UINT32_(10)                                         /* (PIO_OSR) Output Status Position */
#define PIO_OSR_P10_Msk                       (_UINT32_(0x1) << PIO_OSR_P10_Pos)                   /* (PIO_OSR) Output Status Mask */
#define PIO_OSR_P10(value)                    (PIO_OSR_P10_Msk & (_UINT32_(value) << PIO_OSR_P10_Pos)) /* Assignment of value for P10 in the PIO_OSR register */
#define PIO_OSR_P11_Pos                       _UINT32_(11)                                         /* (PIO_OSR) Output Status Position */
#define PIO_OSR_P11_Msk                       (_UINT32_(0x1) << PIO_OSR_P11_Pos)                   /* (PIO_OSR) Output Status Mask */
#define PIO_OSR_P11(value)                    (PIO_OSR_P11_Msk & (_UINT32_(value) << PIO_OSR_P11_Pos)) /* Assignment of value for P11 in the PIO_OSR register */
#define PIO_OSR_P12_Pos                       _UINT32_(12)                                         /* (PIO_OSR) Output Status Position */
#define PIO_OSR_P12_Msk                       (_UINT32_(0x1) << PIO_OSR_P12_Pos)                   /* (PIO_OSR) Output Status Mask */
#define PIO_OSR_P12(value)                    (PIO_OSR_P12_Msk & (_UINT32_(value) << PIO_OSR_P12_Pos)) /* Assignment of value for P12 in the PIO_OSR register */
#define PIO_OSR_P13_Pos                       _UINT32_(13)                                         /* (PIO_OSR) Output Status Position */
#define PIO_OSR_P13_Msk                       (_UINT32_(0x1) << PIO_OSR_P13_Pos)                   /* (PIO_OSR) Output Status Mask */
#define PIO_OSR_P13(value)                    (PIO_OSR_P13_Msk & (_UINT32_(value) << PIO_OSR_P13_Pos)) /* Assignment of value for P13 in the PIO_OSR register */
#define PIO_OSR_P14_Pos                       _UINT32_(14)                                         /* (PIO_OSR) Output Status Position */
#define PIO_OSR_P14_Msk                       (_UINT32_(0x1) << PIO_OSR_P14_Pos)                   /* (PIO_OSR) Output Status Mask */
#define PIO_OSR_P14(value)                    (PIO_OSR_P14_Msk & (_UINT32_(value) << PIO_OSR_P14_Pos)) /* Assignment of value for P14 in the PIO_OSR register */
#define PIO_OSR_P15_Pos                       _UINT32_(15)                                         /* (PIO_OSR) Output Status Position */
#define PIO_OSR_P15_Msk                       (_UINT32_(0x1) << PIO_OSR_P15_Pos)                   /* (PIO_OSR) Output Status Mask */
#define PIO_OSR_P15(value)                    (PIO_OSR_P15_Msk & (_UINT32_(value) << PIO_OSR_P15_Pos)) /* Assignment of value for P15 in the PIO_OSR register */
#define PIO_OSR_P16_Pos                       _UINT32_(16)                                         /* (PIO_OSR) Output Status Position */
#define PIO_OSR_P16_Msk                       (_UINT32_(0x1) << PIO_OSR_P16_Pos)                   /* (PIO_OSR) Output Status Mask */
#define PIO_OSR_P16(value)                    (PIO_OSR_P16_Msk & (_UINT32_(value) << PIO_OSR_P16_Pos)) /* Assignment of value for P16 in the PIO_OSR register */
#define PIO_OSR_P17_Pos                       _UINT32_(17)                                         /* (PIO_OSR) Output Status Position */
#define PIO_OSR_P17_Msk                       (_UINT32_(0x1) << PIO_OSR_P17_Pos)                   /* (PIO_OSR) Output Status Mask */
#define PIO_OSR_P17(value)                    (PIO_OSR_P17_Msk & (_UINT32_(value) << PIO_OSR_P17_Pos)) /* Assignment of value for P17 in the PIO_OSR register */
#define PIO_OSR_P18_Pos                       _UINT32_(18)                                         /* (PIO_OSR) Output Status Position */
#define PIO_OSR_P18_Msk                       (_UINT32_(0x1) << PIO_OSR_P18_Pos)                   /* (PIO_OSR) Output Status Mask */
#define PIO_OSR_P18(value)                    (PIO_OSR_P18_Msk & (_UINT32_(value) << PIO_OSR_P18_Pos)) /* Assignment of value for P18 in the PIO_OSR register */
#define PIO_OSR_P19_Pos                       _UINT32_(19)                                         /* (PIO_OSR) Output Status Position */
#define PIO_OSR_P19_Msk                       (_UINT32_(0x1) << PIO_OSR_P19_Pos)                   /* (PIO_OSR) Output Status Mask */
#define PIO_OSR_P19(value)                    (PIO_OSR_P19_Msk & (_UINT32_(value) << PIO_OSR_P19_Pos)) /* Assignment of value for P19 in the PIO_OSR register */
#define PIO_OSR_P20_Pos                       _UINT32_(20)                                         /* (PIO_OSR) Output Status Position */
#define PIO_OSR_P20_Msk                       (_UINT32_(0x1) << PIO_OSR_P20_Pos)                   /* (PIO_OSR) Output Status Mask */
#define PIO_OSR_P20(value)                    (PIO_OSR_P20_Msk & (_UINT32_(value) << PIO_OSR_P20_Pos)) /* Assignment of value for P20 in the PIO_OSR register */
#define PIO_OSR_P21_Pos                       _UINT32_(21)                                         /* (PIO_OSR) Output Status Position */
#define PIO_OSR_P21_Msk                       (_UINT32_(0x1) << PIO_OSR_P21_Pos)                   /* (PIO_OSR) Output Status Mask */
#define PIO_OSR_P21(value)                    (PIO_OSR_P21_Msk & (_UINT32_(value) << PIO_OSR_P21_Pos)) /* Assignment of value for P21 in the PIO_OSR register */
#define PIO_OSR_P22_Pos                       _UINT32_(22)                                         /* (PIO_OSR) Output Status Position */
#define PIO_OSR_P22_Msk                       (_UINT32_(0x1) << PIO_OSR_P22_Pos)                   /* (PIO_OSR) Output Status Mask */
#define PIO_OSR_P22(value)                    (PIO_OSR_P22_Msk & (_UINT32_(value) << PIO_OSR_P22_Pos)) /* Assignment of value for P22 in the PIO_OSR register */
#define PIO_OSR_P23_Pos                       _UINT32_(23)                                         /* (PIO_OSR) Output Status Position */
#define PIO_OSR_P23_Msk                       (_UINT32_(0x1) << PIO_OSR_P23_Pos)                   /* (PIO_OSR) Output Status Mask */
#define PIO_OSR_P23(value)                    (PIO_OSR_P23_Msk & (_UINT32_(value) << PIO_OSR_P23_Pos)) /* Assignment of value for P23 in the PIO_OSR register */
#define PIO_OSR_P24_Pos                       _UINT32_(24)                                         /* (PIO_OSR) Output Status Position */
#define PIO_OSR_P24_Msk                       (_UINT32_(0x1) << PIO_OSR_P24_Pos)                   /* (PIO_OSR) Output Status Mask */
#define PIO_OSR_P24(value)                    (PIO_OSR_P24_Msk & (_UINT32_(value) << PIO_OSR_P24_Pos)) /* Assignment of value for P24 in the PIO_OSR register */
#define PIO_OSR_P25_Pos                       _UINT32_(25)                                         /* (PIO_OSR) Output Status Position */
#define PIO_OSR_P25_Msk                       (_UINT32_(0x1) << PIO_OSR_P25_Pos)                   /* (PIO_OSR) Output Status Mask */
#define PIO_OSR_P25(value)                    (PIO_OSR_P25_Msk & (_UINT32_(value) << PIO_OSR_P25_Pos)) /* Assignment of value for P25 in the PIO_OSR register */
#define PIO_OSR_P26_Pos                       _UINT32_(26)                                         /* (PIO_OSR) Output Status Position */
#define PIO_OSR_P26_Msk                       (_UINT32_(0x1) << PIO_OSR_P26_Pos)                   /* (PIO_OSR) Output Status Mask */
#define PIO_OSR_P26(value)                    (PIO_OSR_P26_Msk & (_UINT32_(value) << PIO_OSR_P26_Pos)) /* Assignment of value for P26 in the PIO_OSR register */
#define PIO_OSR_P27_Pos                       _UINT32_(27)                                         /* (PIO_OSR) Output Status Position */
#define PIO_OSR_P27_Msk                       (_UINT32_(0x1) << PIO_OSR_P27_Pos)                   /* (PIO_OSR) Output Status Mask */
#define PIO_OSR_P27(value)                    (PIO_OSR_P27_Msk & (_UINT32_(value) << PIO_OSR_P27_Pos)) /* Assignment of value for P27 in the PIO_OSR register */
#define PIO_OSR_P28_Pos                       _UINT32_(28)                                         /* (PIO_OSR) Output Status Position */
#define PIO_OSR_P28_Msk                       (_UINT32_(0x1) << PIO_OSR_P28_Pos)                   /* (PIO_OSR) Output Status Mask */
#define PIO_OSR_P28(value)                    (PIO_OSR_P28_Msk & (_UINT32_(value) << PIO_OSR_P28_Pos)) /* Assignment of value for P28 in the PIO_OSR register */
#define PIO_OSR_P29_Pos                       _UINT32_(29)                                         /* (PIO_OSR) Output Status Position */
#define PIO_OSR_P29_Msk                       (_UINT32_(0x1) << PIO_OSR_P29_Pos)                   /* (PIO_OSR) Output Status Mask */
#define PIO_OSR_P29(value)                    (PIO_OSR_P29_Msk & (_UINT32_(value) << PIO_OSR_P29_Pos)) /* Assignment of value for P29 in the PIO_OSR register */
#define PIO_OSR_P30_Pos                       _UINT32_(30)                                         /* (PIO_OSR) Output Status Position */
#define PIO_OSR_P30_Msk                       (_UINT32_(0x1) << PIO_OSR_P30_Pos)                   /* (PIO_OSR) Output Status Mask */
#define PIO_OSR_P30(value)                    (PIO_OSR_P30_Msk & (_UINT32_(value) << PIO_OSR_P30_Pos)) /* Assignment of value for P30 in the PIO_OSR register */
#define PIO_OSR_P31_Pos                       _UINT32_(31)                                         /* (PIO_OSR) Output Status Position */
#define PIO_OSR_P31_Msk                       (_UINT32_(0x1) << PIO_OSR_P31_Pos)                   /* (PIO_OSR) Output Status Mask */
#define PIO_OSR_P31(value)                    (PIO_OSR_P31_Msk & (_UINT32_(value) << PIO_OSR_P31_Pos)) /* Assignment of value for P31 in the PIO_OSR register */
#define PIO_OSR_Msk                           _UINT32_(0xFFFFFFFF)                                 /* (PIO_OSR) Register Mask  */

#define PIO_OSR_P_Pos                         _UINT32_(0)                                          /* (PIO_OSR Position) Output Status */
#define PIO_OSR_P_Msk                         (_UINT32_(0xFFFFFFFF) << PIO_OSR_P_Pos)              /* (PIO_OSR Mask) P */
#define PIO_OSR_P(value)                      (PIO_OSR_P_Msk & (_UINT32_(value) << PIO_OSR_P_Pos)) 

/* -------- PIO_IFER : (PIO Offset: 0x20) ( /W 32) Glitch Input Filter Enable Register -------- */
#define PIO_IFER_P0_Pos                       _UINT32_(0)                                          /* (PIO_IFER) Input Filter Enable Position */
#define PIO_IFER_P0_Msk                       (_UINT32_(0x1) << PIO_IFER_P0_Pos)                   /* (PIO_IFER) Input Filter Enable Mask */
#define PIO_IFER_P0(value)                    (PIO_IFER_P0_Msk & (_UINT32_(value) << PIO_IFER_P0_Pos)) /* Assignment of value for P0 in the PIO_IFER register */
#define PIO_IFER_P1_Pos                       _UINT32_(1)                                          /* (PIO_IFER) Input Filter Enable Position */
#define PIO_IFER_P1_Msk                       (_UINT32_(0x1) << PIO_IFER_P1_Pos)                   /* (PIO_IFER) Input Filter Enable Mask */
#define PIO_IFER_P1(value)                    (PIO_IFER_P1_Msk & (_UINT32_(value) << PIO_IFER_P1_Pos)) /* Assignment of value for P1 in the PIO_IFER register */
#define PIO_IFER_P2_Pos                       _UINT32_(2)                                          /* (PIO_IFER) Input Filter Enable Position */
#define PIO_IFER_P2_Msk                       (_UINT32_(0x1) << PIO_IFER_P2_Pos)                   /* (PIO_IFER) Input Filter Enable Mask */
#define PIO_IFER_P2(value)                    (PIO_IFER_P2_Msk & (_UINT32_(value) << PIO_IFER_P2_Pos)) /* Assignment of value for P2 in the PIO_IFER register */
#define PIO_IFER_P3_Pos                       _UINT32_(3)                                          /* (PIO_IFER) Input Filter Enable Position */
#define PIO_IFER_P3_Msk                       (_UINT32_(0x1) << PIO_IFER_P3_Pos)                   /* (PIO_IFER) Input Filter Enable Mask */
#define PIO_IFER_P3(value)                    (PIO_IFER_P3_Msk & (_UINT32_(value) << PIO_IFER_P3_Pos)) /* Assignment of value for P3 in the PIO_IFER register */
#define PIO_IFER_P4_Pos                       _UINT32_(4)                                          /* (PIO_IFER) Input Filter Enable Position */
#define PIO_IFER_P4_Msk                       (_UINT32_(0x1) << PIO_IFER_P4_Pos)                   /* (PIO_IFER) Input Filter Enable Mask */
#define PIO_IFER_P4(value)                    (PIO_IFER_P4_Msk & (_UINT32_(value) << PIO_IFER_P4_Pos)) /* Assignment of value for P4 in the PIO_IFER register */
#define PIO_IFER_P5_Pos                       _UINT32_(5)                                          /* (PIO_IFER) Input Filter Enable Position */
#define PIO_IFER_P5_Msk                       (_UINT32_(0x1) << PIO_IFER_P5_Pos)                   /* (PIO_IFER) Input Filter Enable Mask */
#define PIO_IFER_P5(value)                    (PIO_IFER_P5_Msk & (_UINT32_(value) << PIO_IFER_P5_Pos)) /* Assignment of value for P5 in the PIO_IFER register */
#define PIO_IFER_P6_Pos                       _UINT32_(6)                                          /* (PIO_IFER) Input Filter Enable Position */
#define PIO_IFER_P6_Msk                       (_UINT32_(0x1) << PIO_IFER_P6_Pos)                   /* (PIO_IFER) Input Filter Enable Mask */
#define PIO_IFER_P6(value)                    (PIO_IFER_P6_Msk & (_UINT32_(value) << PIO_IFER_P6_Pos)) /* Assignment of value for P6 in the PIO_IFER register */
#define PIO_IFER_P7_Pos                       _UINT32_(7)                                          /* (PIO_IFER) Input Filter Enable Position */
#define PIO_IFER_P7_Msk                       (_UINT32_(0x1) << PIO_IFER_P7_Pos)                   /* (PIO_IFER) Input Filter Enable Mask */
#define PIO_IFER_P7(value)                    (PIO_IFER_P7_Msk & (_UINT32_(value) << PIO_IFER_P7_Pos)) /* Assignment of value for P7 in the PIO_IFER register */
#define PIO_IFER_P8_Pos                       _UINT32_(8)                                          /* (PIO_IFER) Input Filter Enable Position */
#define PIO_IFER_P8_Msk                       (_UINT32_(0x1) << PIO_IFER_P8_Pos)                   /* (PIO_IFER) Input Filter Enable Mask */
#define PIO_IFER_P8(value)                    (PIO_IFER_P8_Msk & (_UINT32_(value) << PIO_IFER_P8_Pos)) /* Assignment of value for P8 in the PIO_IFER register */
#define PIO_IFER_P9_Pos                       _UINT32_(9)                                          /* (PIO_IFER) Input Filter Enable Position */
#define PIO_IFER_P9_Msk                       (_UINT32_(0x1) << PIO_IFER_P9_Pos)                   /* (PIO_IFER) Input Filter Enable Mask */
#define PIO_IFER_P9(value)                    (PIO_IFER_P9_Msk & (_UINT32_(value) << PIO_IFER_P9_Pos)) /* Assignment of value for P9 in the PIO_IFER register */
#define PIO_IFER_P10_Pos                      _UINT32_(10)                                         /* (PIO_IFER) Input Filter Enable Position */
#define PIO_IFER_P10_Msk                      (_UINT32_(0x1) << PIO_IFER_P10_Pos)                  /* (PIO_IFER) Input Filter Enable Mask */
#define PIO_IFER_P10(value)                   (PIO_IFER_P10_Msk & (_UINT32_(value) << PIO_IFER_P10_Pos)) /* Assignment of value for P10 in the PIO_IFER register */
#define PIO_IFER_P11_Pos                      _UINT32_(11)                                         /* (PIO_IFER) Input Filter Enable Position */
#define PIO_IFER_P11_Msk                      (_UINT32_(0x1) << PIO_IFER_P11_Pos)                  /* (PIO_IFER) Input Filter Enable Mask */
#define PIO_IFER_P11(value)                   (PIO_IFER_P11_Msk & (_UINT32_(value) << PIO_IFER_P11_Pos)) /* Assignment of value for P11 in the PIO_IFER register */
#define PIO_IFER_P12_Pos                      _UINT32_(12)                                         /* (PIO_IFER) Input Filter Enable Position */
#define PIO_IFER_P12_Msk                      (_UINT32_(0x1) << PIO_IFER_P12_Pos)                  /* (PIO_IFER) Input Filter Enable Mask */
#define PIO_IFER_P12(value)                   (PIO_IFER_P12_Msk & (_UINT32_(value) << PIO_IFER_P12_Pos)) /* Assignment of value for P12 in the PIO_IFER register */
#define PIO_IFER_P13_Pos                      _UINT32_(13)                                         /* (PIO_IFER) Input Filter Enable Position */
#define PIO_IFER_P13_Msk                      (_UINT32_(0x1) << PIO_IFER_P13_Pos)                  /* (PIO_IFER) Input Filter Enable Mask */
#define PIO_IFER_P13(value)                   (PIO_IFER_P13_Msk & (_UINT32_(value) << PIO_IFER_P13_Pos)) /* Assignment of value for P13 in the PIO_IFER register */
#define PIO_IFER_P14_Pos                      _UINT32_(14)                                         /* (PIO_IFER) Input Filter Enable Position */
#define PIO_IFER_P14_Msk                      (_UINT32_(0x1) << PIO_IFER_P14_Pos)                  /* (PIO_IFER) Input Filter Enable Mask */
#define PIO_IFER_P14(value)                   (PIO_IFER_P14_Msk & (_UINT32_(value) << PIO_IFER_P14_Pos)) /* Assignment of value for P14 in the PIO_IFER register */
#define PIO_IFER_P15_Pos                      _UINT32_(15)                                         /* (PIO_IFER) Input Filter Enable Position */
#define PIO_IFER_P15_Msk                      (_UINT32_(0x1) << PIO_IFER_P15_Pos)                  /* (PIO_IFER) Input Filter Enable Mask */
#define PIO_IFER_P15(value)                   (PIO_IFER_P15_Msk & (_UINT32_(value) << PIO_IFER_P15_Pos)) /* Assignment of value for P15 in the PIO_IFER register */
#define PIO_IFER_P16_Pos                      _UINT32_(16)                                         /* (PIO_IFER) Input Filter Enable Position */
#define PIO_IFER_P16_Msk                      (_UINT32_(0x1) << PIO_IFER_P16_Pos)                  /* (PIO_IFER) Input Filter Enable Mask */
#define PIO_IFER_P16(value)                   (PIO_IFER_P16_Msk & (_UINT32_(value) << PIO_IFER_P16_Pos)) /* Assignment of value for P16 in the PIO_IFER register */
#define PIO_IFER_P17_Pos                      _UINT32_(17)                                         /* (PIO_IFER) Input Filter Enable Position */
#define PIO_IFER_P17_Msk                      (_UINT32_(0x1) << PIO_IFER_P17_Pos)                  /* (PIO_IFER) Input Filter Enable Mask */
#define PIO_IFER_P17(value)                   (PIO_IFER_P17_Msk & (_UINT32_(value) << PIO_IFER_P17_Pos)) /* Assignment of value for P17 in the PIO_IFER register */
#define PIO_IFER_P18_Pos                      _UINT32_(18)                                         /* (PIO_IFER) Input Filter Enable Position */
#define PIO_IFER_P18_Msk                      (_UINT32_(0x1) << PIO_IFER_P18_Pos)                  /* (PIO_IFER) Input Filter Enable Mask */
#define PIO_IFER_P18(value)                   (PIO_IFER_P18_Msk & (_UINT32_(value) << PIO_IFER_P18_Pos)) /* Assignment of value for P18 in the PIO_IFER register */
#define PIO_IFER_P19_Pos                      _UINT32_(19)                                         /* (PIO_IFER) Input Filter Enable Position */
#define PIO_IFER_P19_Msk                      (_UINT32_(0x1) << PIO_IFER_P19_Pos)                  /* (PIO_IFER) Input Filter Enable Mask */
#define PIO_IFER_P19(value)                   (PIO_IFER_P19_Msk & (_UINT32_(value) << PIO_IFER_P19_Pos)) /* Assignment of value for P19 in the PIO_IFER register */
#define PIO_IFER_P20_Pos                      _UINT32_(20)                                         /* (PIO_IFER) Input Filter Enable Position */
#define PIO_IFER_P20_Msk                      (_UINT32_(0x1) << PIO_IFER_P20_Pos)                  /* (PIO_IFER) Input Filter Enable Mask */
#define PIO_IFER_P20(value)                   (PIO_IFER_P20_Msk & (_UINT32_(value) << PIO_IFER_P20_Pos)) /* Assignment of value for P20 in the PIO_IFER register */
#define PIO_IFER_P21_Pos                      _UINT32_(21)                                         /* (PIO_IFER) Input Filter Enable Position */
#define PIO_IFER_P21_Msk                      (_UINT32_(0x1) << PIO_IFER_P21_Pos)                  /* (PIO_IFER) Input Filter Enable Mask */
#define PIO_IFER_P21(value)                   (PIO_IFER_P21_Msk & (_UINT32_(value) << PIO_IFER_P21_Pos)) /* Assignment of value for P21 in the PIO_IFER register */
#define PIO_IFER_P22_Pos                      _UINT32_(22)                                         /* (PIO_IFER) Input Filter Enable Position */
#define PIO_IFER_P22_Msk                      (_UINT32_(0x1) << PIO_IFER_P22_Pos)                  /* (PIO_IFER) Input Filter Enable Mask */
#define PIO_IFER_P22(value)                   (PIO_IFER_P22_Msk & (_UINT32_(value) << PIO_IFER_P22_Pos)) /* Assignment of value for P22 in the PIO_IFER register */
#define PIO_IFER_P23_Pos                      _UINT32_(23)                                         /* (PIO_IFER) Input Filter Enable Position */
#define PIO_IFER_P23_Msk                      (_UINT32_(0x1) << PIO_IFER_P23_Pos)                  /* (PIO_IFER) Input Filter Enable Mask */
#define PIO_IFER_P23(value)                   (PIO_IFER_P23_Msk & (_UINT32_(value) << PIO_IFER_P23_Pos)) /* Assignment of value for P23 in the PIO_IFER register */
#define PIO_IFER_P24_Pos                      _UINT32_(24)                                         /* (PIO_IFER) Input Filter Enable Position */
#define PIO_IFER_P24_Msk                      (_UINT32_(0x1) << PIO_IFER_P24_Pos)                  /* (PIO_IFER) Input Filter Enable Mask */
#define PIO_IFER_P24(value)                   (PIO_IFER_P24_Msk & (_UINT32_(value) << PIO_IFER_P24_Pos)) /* Assignment of value for P24 in the PIO_IFER register */
#define PIO_IFER_P25_Pos                      _UINT32_(25)                                         /* (PIO_IFER) Input Filter Enable Position */
#define PIO_IFER_P25_Msk                      (_UINT32_(0x1) << PIO_IFER_P25_Pos)                  /* (PIO_IFER) Input Filter Enable Mask */
#define PIO_IFER_P25(value)                   (PIO_IFER_P25_Msk & (_UINT32_(value) << PIO_IFER_P25_Pos)) /* Assignment of value for P25 in the PIO_IFER register */
#define PIO_IFER_P26_Pos                      _UINT32_(26)                                         /* (PIO_IFER) Input Filter Enable Position */
#define PIO_IFER_P26_Msk                      (_UINT32_(0x1) << PIO_IFER_P26_Pos)                  /* (PIO_IFER) Input Filter Enable Mask */
#define PIO_IFER_P26(value)                   (PIO_IFER_P26_Msk & (_UINT32_(value) << PIO_IFER_P26_Pos)) /* Assignment of value for P26 in the PIO_IFER register */
#define PIO_IFER_P27_Pos                      _UINT32_(27)                                         /* (PIO_IFER) Input Filter Enable Position */
#define PIO_IFER_P27_Msk                      (_UINT32_(0x1) << PIO_IFER_P27_Pos)                  /* (PIO_IFER) Input Filter Enable Mask */
#define PIO_IFER_P27(value)                   (PIO_IFER_P27_Msk & (_UINT32_(value) << PIO_IFER_P27_Pos)) /* Assignment of value for P27 in the PIO_IFER register */
#define PIO_IFER_P28_Pos                      _UINT32_(28)                                         /* (PIO_IFER) Input Filter Enable Position */
#define PIO_IFER_P28_Msk                      (_UINT32_(0x1) << PIO_IFER_P28_Pos)                  /* (PIO_IFER) Input Filter Enable Mask */
#define PIO_IFER_P28(value)                   (PIO_IFER_P28_Msk & (_UINT32_(value) << PIO_IFER_P28_Pos)) /* Assignment of value for P28 in the PIO_IFER register */
#define PIO_IFER_P29_Pos                      _UINT32_(29)                                         /* (PIO_IFER) Input Filter Enable Position */
#define PIO_IFER_P29_Msk                      (_UINT32_(0x1) << PIO_IFER_P29_Pos)                  /* (PIO_IFER) Input Filter Enable Mask */
#define PIO_IFER_P29(value)                   (PIO_IFER_P29_Msk & (_UINT32_(value) << PIO_IFER_P29_Pos)) /* Assignment of value for P29 in the PIO_IFER register */
#define PIO_IFER_P30_Pos                      _UINT32_(30)                                         /* (PIO_IFER) Input Filter Enable Position */
#define PIO_IFER_P30_Msk                      (_UINT32_(0x1) << PIO_IFER_P30_Pos)                  /* (PIO_IFER) Input Filter Enable Mask */
#define PIO_IFER_P30(value)                   (PIO_IFER_P30_Msk & (_UINT32_(value) << PIO_IFER_P30_Pos)) /* Assignment of value for P30 in the PIO_IFER register */
#define PIO_IFER_P31_Pos                      _UINT32_(31)                                         /* (PIO_IFER) Input Filter Enable Position */
#define PIO_IFER_P31_Msk                      (_UINT32_(0x1) << PIO_IFER_P31_Pos)                  /* (PIO_IFER) Input Filter Enable Mask */
#define PIO_IFER_P31(value)                   (PIO_IFER_P31_Msk & (_UINT32_(value) << PIO_IFER_P31_Pos)) /* Assignment of value for P31 in the PIO_IFER register */
#define PIO_IFER_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (PIO_IFER) Register Mask  */

#define PIO_IFER_P_Pos                        _UINT32_(0)                                          /* (PIO_IFER Position) Input Filter Enable */
#define PIO_IFER_P_Msk                        (_UINT32_(0xFFFFFFFF) << PIO_IFER_P_Pos)             /* (PIO_IFER Mask) P */
#define PIO_IFER_P(value)                     (PIO_IFER_P_Msk & (_UINT32_(value) << PIO_IFER_P_Pos)) 

/* -------- PIO_IFDR : (PIO Offset: 0x24) ( /W 32) Glitch Input Filter Disable Register -------- */
#define PIO_IFDR_P0_Pos                       _UINT32_(0)                                          /* (PIO_IFDR) Input Filter Disable Position */
#define PIO_IFDR_P0_Msk                       (_UINT32_(0x1) << PIO_IFDR_P0_Pos)                   /* (PIO_IFDR) Input Filter Disable Mask */
#define PIO_IFDR_P0(value)                    (PIO_IFDR_P0_Msk & (_UINT32_(value) << PIO_IFDR_P0_Pos)) /* Assignment of value for P0 in the PIO_IFDR register */
#define PIO_IFDR_P1_Pos                       _UINT32_(1)                                          /* (PIO_IFDR) Input Filter Disable Position */
#define PIO_IFDR_P1_Msk                       (_UINT32_(0x1) << PIO_IFDR_P1_Pos)                   /* (PIO_IFDR) Input Filter Disable Mask */
#define PIO_IFDR_P1(value)                    (PIO_IFDR_P1_Msk & (_UINT32_(value) << PIO_IFDR_P1_Pos)) /* Assignment of value for P1 in the PIO_IFDR register */
#define PIO_IFDR_P2_Pos                       _UINT32_(2)                                          /* (PIO_IFDR) Input Filter Disable Position */
#define PIO_IFDR_P2_Msk                       (_UINT32_(0x1) << PIO_IFDR_P2_Pos)                   /* (PIO_IFDR) Input Filter Disable Mask */
#define PIO_IFDR_P2(value)                    (PIO_IFDR_P2_Msk & (_UINT32_(value) << PIO_IFDR_P2_Pos)) /* Assignment of value for P2 in the PIO_IFDR register */
#define PIO_IFDR_P3_Pos                       _UINT32_(3)                                          /* (PIO_IFDR) Input Filter Disable Position */
#define PIO_IFDR_P3_Msk                       (_UINT32_(0x1) << PIO_IFDR_P3_Pos)                   /* (PIO_IFDR) Input Filter Disable Mask */
#define PIO_IFDR_P3(value)                    (PIO_IFDR_P3_Msk & (_UINT32_(value) << PIO_IFDR_P3_Pos)) /* Assignment of value for P3 in the PIO_IFDR register */
#define PIO_IFDR_P4_Pos                       _UINT32_(4)                                          /* (PIO_IFDR) Input Filter Disable Position */
#define PIO_IFDR_P4_Msk                       (_UINT32_(0x1) << PIO_IFDR_P4_Pos)                   /* (PIO_IFDR) Input Filter Disable Mask */
#define PIO_IFDR_P4(value)                    (PIO_IFDR_P4_Msk & (_UINT32_(value) << PIO_IFDR_P4_Pos)) /* Assignment of value for P4 in the PIO_IFDR register */
#define PIO_IFDR_P5_Pos                       _UINT32_(5)                                          /* (PIO_IFDR) Input Filter Disable Position */
#define PIO_IFDR_P5_Msk                       (_UINT32_(0x1) << PIO_IFDR_P5_Pos)                   /* (PIO_IFDR) Input Filter Disable Mask */
#define PIO_IFDR_P5(value)                    (PIO_IFDR_P5_Msk & (_UINT32_(value) << PIO_IFDR_P5_Pos)) /* Assignment of value for P5 in the PIO_IFDR register */
#define PIO_IFDR_P6_Pos                       _UINT32_(6)                                          /* (PIO_IFDR) Input Filter Disable Position */
#define PIO_IFDR_P6_Msk                       (_UINT32_(0x1) << PIO_IFDR_P6_Pos)                   /* (PIO_IFDR) Input Filter Disable Mask */
#define PIO_IFDR_P6(value)                    (PIO_IFDR_P6_Msk & (_UINT32_(value) << PIO_IFDR_P6_Pos)) /* Assignment of value for P6 in the PIO_IFDR register */
#define PIO_IFDR_P7_Pos                       _UINT32_(7)                                          /* (PIO_IFDR) Input Filter Disable Position */
#define PIO_IFDR_P7_Msk                       (_UINT32_(0x1) << PIO_IFDR_P7_Pos)                   /* (PIO_IFDR) Input Filter Disable Mask */
#define PIO_IFDR_P7(value)                    (PIO_IFDR_P7_Msk & (_UINT32_(value) << PIO_IFDR_P7_Pos)) /* Assignment of value for P7 in the PIO_IFDR register */
#define PIO_IFDR_P8_Pos                       _UINT32_(8)                                          /* (PIO_IFDR) Input Filter Disable Position */
#define PIO_IFDR_P8_Msk                       (_UINT32_(0x1) << PIO_IFDR_P8_Pos)                   /* (PIO_IFDR) Input Filter Disable Mask */
#define PIO_IFDR_P8(value)                    (PIO_IFDR_P8_Msk & (_UINT32_(value) << PIO_IFDR_P8_Pos)) /* Assignment of value for P8 in the PIO_IFDR register */
#define PIO_IFDR_P9_Pos                       _UINT32_(9)                                          /* (PIO_IFDR) Input Filter Disable Position */
#define PIO_IFDR_P9_Msk                       (_UINT32_(0x1) << PIO_IFDR_P9_Pos)                   /* (PIO_IFDR) Input Filter Disable Mask */
#define PIO_IFDR_P9(value)                    (PIO_IFDR_P9_Msk & (_UINT32_(value) << PIO_IFDR_P9_Pos)) /* Assignment of value for P9 in the PIO_IFDR register */
#define PIO_IFDR_P10_Pos                      _UINT32_(10)                                         /* (PIO_IFDR) Input Filter Disable Position */
#define PIO_IFDR_P10_Msk                      (_UINT32_(0x1) << PIO_IFDR_P10_Pos)                  /* (PIO_IFDR) Input Filter Disable Mask */
#define PIO_IFDR_P10(value)                   (PIO_IFDR_P10_Msk & (_UINT32_(value) << PIO_IFDR_P10_Pos)) /* Assignment of value for P10 in the PIO_IFDR register */
#define PIO_IFDR_P11_Pos                      _UINT32_(11)                                         /* (PIO_IFDR) Input Filter Disable Position */
#define PIO_IFDR_P11_Msk                      (_UINT32_(0x1) << PIO_IFDR_P11_Pos)                  /* (PIO_IFDR) Input Filter Disable Mask */
#define PIO_IFDR_P11(value)                   (PIO_IFDR_P11_Msk & (_UINT32_(value) << PIO_IFDR_P11_Pos)) /* Assignment of value for P11 in the PIO_IFDR register */
#define PIO_IFDR_P12_Pos                      _UINT32_(12)                                         /* (PIO_IFDR) Input Filter Disable Position */
#define PIO_IFDR_P12_Msk                      (_UINT32_(0x1) << PIO_IFDR_P12_Pos)                  /* (PIO_IFDR) Input Filter Disable Mask */
#define PIO_IFDR_P12(value)                   (PIO_IFDR_P12_Msk & (_UINT32_(value) << PIO_IFDR_P12_Pos)) /* Assignment of value for P12 in the PIO_IFDR register */
#define PIO_IFDR_P13_Pos                      _UINT32_(13)                                         /* (PIO_IFDR) Input Filter Disable Position */
#define PIO_IFDR_P13_Msk                      (_UINT32_(0x1) << PIO_IFDR_P13_Pos)                  /* (PIO_IFDR) Input Filter Disable Mask */
#define PIO_IFDR_P13(value)                   (PIO_IFDR_P13_Msk & (_UINT32_(value) << PIO_IFDR_P13_Pos)) /* Assignment of value for P13 in the PIO_IFDR register */
#define PIO_IFDR_P14_Pos                      _UINT32_(14)                                         /* (PIO_IFDR) Input Filter Disable Position */
#define PIO_IFDR_P14_Msk                      (_UINT32_(0x1) << PIO_IFDR_P14_Pos)                  /* (PIO_IFDR) Input Filter Disable Mask */
#define PIO_IFDR_P14(value)                   (PIO_IFDR_P14_Msk & (_UINT32_(value) << PIO_IFDR_P14_Pos)) /* Assignment of value for P14 in the PIO_IFDR register */
#define PIO_IFDR_P15_Pos                      _UINT32_(15)                                         /* (PIO_IFDR) Input Filter Disable Position */
#define PIO_IFDR_P15_Msk                      (_UINT32_(0x1) << PIO_IFDR_P15_Pos)                  /* (PIO_IFDR) Input Filter Disable Mask */
#define PIO_IFDR_P15(value)                   (PIO_IFDR_P15_Msk & (_UINT32_(value) << PIO_IFDR_P15_Pos)) /* Assignment of value for P15 in the PIO_IFDR register */
#define PIO_IFDR_P16_Pos                      _UINT32_(16)                                         /* (PIO_IFDR) Input Filter Disable Position */
#define PIO_IFDR_P16_Msk                      (_UINT32_(0x1) << PIO_IFDR_P16_Pos)                  /* (PIO_IFDR) Input Filter Disable Mask */
#define PIO_IFDR_P16(value)                   (PIO_IFDR_P16_Msk & (_UINT32_(value) << PIO_IFDR_P16_Pos)) /* Assignment of value for P16 in the PIO_IFDR register */
#define PIO_IFDR_P17_Pos                      _UINT32_(17)                                         /* (PIO_IFDR) Input Filter Disable Position */
#define PIO_IFDR_P17_Msk                      (_UINT32_(0x1) << PIO_IFDR_P17_Pos)                  /* (PIO_IFDR) Input Filter Disable Mask */
#define PIO_IFDR_P17(value)                   (PIO_IFDR_P17_Msk & (_UINT32_(value) << PIO_IFDR_P17_Pos)) /* Assignment of value for P17 in the PIO_IFDR register */
#define PIO_IFDR_P18_Pos                      _UINT32_(18)                                         /* (PIO_IFDR) Input Filter Disable Position */
#define PIO_IFDR_P18_Msk                      (_UINT32_(0x1) << PIO_IFDR_P18_Pos)                  /* (PIO_IFDR) Input Filter Disable Mask */
#define PIO_IFDR_P18(value)                   (PIO_IFDR_P18_Msk & (_UINT32_(value) << PIO_IFDR_P18_Pos)) /* Assignment of value for P18 in the PIO_IFDR register */
#define PIO_IFDR_P19_Pos                      _UINT32_(19)                                         /* (PIO_IFDR) Input Filter Disable Position */
#define PIO_IFDR_P19_Msk                      (_UINT32_(0x1) << PIO_IFDR_P19_Pos)                  /* (PIO_IFDR) Input Filter Disable Mask */
#define PIO_IFDR_P19(value)                   (PIO_IFDR_P19_Msk & (_UINT32_(value) << PIO_IFDR_P19_Pos)) /* Assignment of value for P19 in the PIO_IFDR register */
#define PIO_IFDR_P20_Pos                      _UINT32_(20)                                         /* (PIO_IFDR) Input Filter Disable Position */
#define PIO_IFDR_P20_Msk                      (_UINT32_(0x1) << PIO_IFDR_P20_Pos)                  /* (PIO_IFDR) Input Filter Disable Mask */
#define PIO_IFDR_P20(value)                   (PIO_IFDR_P20_Msk & (_UINT32_(value) << PIO_IFDR_P20_Pos)) /* Assignment of value for P20 in the PIO_IFDR register */
#define PIO_IFDR_P21_Pos                      _UINT32_(21)                                         /* (PIO_IFDR) Input Filter Disable Position */
#define PIO_IFDR_P21_Msk                      (_UINT32_(0x1) << PIO_IFDR_P21_Pos)                  /* (PIO_IFDR) Input Filter Disable Mask */
#define PIO_IFDR_P21(value)                   (PIO_IFDR_P21_Msk & (_UINT32_(value) << PIO_IFDR_P21_Pos)) /* Assignment of value for P21 in the PIO_IFDR register */
#define PIO_IFDR_P22_Pos                      _UINT32_(22)                                         /* (PIO_IFDR) Input Filter Disable Position */
#define PIO_IFDR_P22_Msk                      (_UINT32_(0x1) << PIO_IFDR_P22_Pos)                  /* (PIO_IFDR) Input Filter Disable Mask */
#define PIO_IFDR_P22(value)                   (PIO_IFDR_P22_Msk & (_UINT32_(value) << PIO_IFDR_P22_Pos)) /* Assignment of value for P22 in the PIO_IFDR register */
#define PIO_IFDR_P23_Pos                      _UINT32_(23)                                         /* (PIO_IFDR) Input Filter Disable Position */
#define PIO_IFDR_P23_Msk                      (_UINT32_(0x1) << PIO_IFDR_P23_Pos)                  /* (PIO_IFDR) Input Filter Disable Mask */
#define PIO_IFDR_P23(value)                   (PIO_IFDR_P23_Msk & (_UINT32_(value) << PIO_IFDR_P23_Pos)) /* Assignment of value for P23 in the PIO_IFDR register */
#define PIO_IFDR_P24_Pos                      _UINT32_(24)                                         /* (PIO_IFDR) Input Filter Disable Position */
#define PIO_IFDR_P24_Msk                      (_UINT32_(0x1) << PIO_IFDR_P24_Pos)                  /* (PIO_IFDR) Input Filter Disable Mask */
#define PIO_IFDR_P24(value)                   (PIO_IFDR_P24_Msk & (_UINT32_(value) << PIO_IFDR_P24_Pos)) /* Assignment of value for P24 in the PIO_IFDR register */
#define PIO_IFDR_P25_Pos                      _UINT32_(25)                                         /* (PIO_IFDR) Input Filter Disable Position */
#define PIO_IFDR_P25_Msk                      (_UINT32_(0x1) << PIO_IFDR_P25_Pos)                  /* (PIO_IFDR) Input Filter Disable Mask */
#define PIO_IFDR_P25(value)                   (PIO_IFDR_P25_Msk & (_UINT32_(value) << PIO_IFDR_P25_Pos)) /* Assignment of value for P25 in the PIO_IFDR register */
#define PIO_IFDR_P26_Pos                      _UINT32_(26)                                         /* (PIO_IFDR) Input Filter Disable Position */
#define PIO_IFDR_P26_Msk                      (_UINT32_(0x1) << PIO_IFDR_P26_Pos)                  /* (PIO_IFDR) Input Filter Disable Mask */
#define PIO_IFDR_P26(value)                   (PIO_IFDR_P26_Msk & (_UINT32_(value) << PIO_IFDR_P26_Pos)) /* Assignment of value for P26 in the PIO_IFDR register */
#define PIO_IFDR_P27_Pos                      _UINT32_(27)                                         /* (PIO_IFDR) Input Filter Disable Position */
#define PIO_IFDR_P27_Msk                      (_UINT32_(0x1) << PIO_IFDR_P27_Pos)                  /* (PIO_IFDR) Input Filter Disable Mask */
#define PIO_IFDR_P27(value)                   (PIO_IFDR_P27_Msk & (_UINT32_(value) << PIO_IFDR_P27_Pos)) /* Assignment of value for P27 in the PIO_IFDR register */
#define PIO_IFDR_P28_Pos                      _UINT32_(28)                                         /* (PIO_IFDR) Input Filter Disable Position */
#define PIO_IFDR_P28_Msk                      (_UINT32_(0x1) << PIO_IFDR_P28_Pos)                  /* (PIO_IFDR) Input Filter Disable Mask */
#define PIO_IFDR_P28(value)                   (PIO_IFDR_P28_Msk & (_UINT32_(value) << PIO_IFDR_P28_Pos)) /* Assignment of value for P28 in the PIO_IFDR register */
#define PIO_IFDR_P29_Pos                      _UINT32_(29)                                         /* (PIO_IFDR) Input Filter Disable Position */
#define PIO_IFDR_P29_Msk                      (_UINT32_(0x1) << PIO_IFDR_P29_Pos)                  /* (PIO_IFDR) Input Filter Disable Mask */
#define PIO_IFDR_P29(value)                   (PIO_IFDR_P29_Msk & (_UINT32_(value) << PIO_IFDR_P29_Pos)) /* Assignment of value for P29 in the PIO_IFDR register */
#define PIO_IFDR_P30_Pos                      _UINT32_(30)                                         /* (PIO_IFDR) Input Filter Disable Position */
#define PIO_IFDR_P30_Msk                      (_UINT32_(0x1) << PIO_IFDR_P30_Pos)                  /* (PIO_IFDR) Input Filter Disable Mask */
#define PIO_IFDR_P30(value)                   (PIO_IFDR_P30_Msk & (_UINT32_(value) << PIO_IFDR_P30_Pos)) /* Assignment of value for P30 in the PIO_IFDR register */
#define PIO_IFDR_P31_Pos                      _UINT32_(31)                                         /* (PIO_IFDR) Input Filter Disable Position */
#define PIO_IFDR_P31_Msk                      (_UINT32_(0x1) << PIO_IFDR_P31_Pos)                  /* (PIO_IFDR) Input Filter Disable Mask */
#define PIO_IFDR_P31(value)                   (PIO_IFDR_P31_Msk & (_UINT32_(value) << PIO_IFDR_P31_Pos)) /* Assignment of value for P31 in the PIO_IFDR register */
#define PIO_IFDR_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (PIO_IFDR) Register Mask  */

#define PIO_IFDR_P_Pos                        _UINT32_(0)                                          /* (PIO_IFDR Position) Input Filter Disable */
#define PIO_IFDR_P_Msk                        (_UINT32_(0xFFFFFFFF) << PIO_IFDR_P_Pos)             /* (PIO_IFDR Mask) P */
#define PIO_IFDR_P(value)                     (PIO_IFDR_P_Msk & (_UINT32_(value) << PIO_IFDR_P_Pos)) 

/* -------- PIO_IFSR : (PIO Offset: 0x28) ( R/ 32) Glitch Input Filter Status Register -------- */
#define PIO_IFSR_P0_Pos                       _UINT32_(0)                                          /* (PIO_IFSR) Input Filter Status Position */
#define PIO_IFSR_P0_Msk                       (_UINT32_(0x1) << PIO_IFSR_P0_Pos)                   /* (PIO_IFSR) Input Filter Status Mask */
#define PIO_IFSR_P0(value)                    (PIO_IFSR_P0_Msk & (_UINT32_(value) << PIO_IFSR_P0_Pos)) /* Assignment of value for P0 in the PIO_IFSR register */
#define PIO_IFSR_P1_Pos                       _UINT32_(1)                                          /* (PIO_IFSR) Input Filter Status Position */
#define PIO_IFSR_P1_Msk                       (_UINT32_(0x1) << PIO_IFSR_P1_Pos)                   /* (PIO_IFSR) Input Filter Status Mask */
#define PIO_IFSR_P1(value)                    (PIO_IFSR_P1_Msk & (_UINT32_(value) << PIO_IFSR_P1_Pos)) /* Assignment of value for P1 in the PIO_IFSR register */
#define PIO_IFSR_P2_Pos                       _UINT32_(2)                                          /* (PIO_IFSR) Input Filter Status Position */
#define PIO_IFSR_P2_Msk                       (_UINT32_(0x1) << PIO_IFSR_P2_Pos)                   /* (PIO_IFSR) Input Filter Status Mask */
#define PIO_IFSR_P2(value)                    (PIO_IFSR_P2_Msk & (_UINT32_(value) << PIO_IFSR_P2_Pos)) /* Assignment of value for P2 in the PIO_IFSR register */
#define PIO_IFSR_P3_Pos                       _UINT32_(3)                                          /* (PIO_IFSR) Input Filter Status Position */
#define PIO_IFSR_P3_Msk                       (_UINT32_(0x1) << PIO_IFSR_P3_Pos)                   /* (PIO_IFSR) Input Filter Status Mask */
#define PIO_IFSR_P3(value)                    (PIO_IFSR_P3_Msk & (_UINT32_(value) << PIO_IFSR_P3_Pos)) /* Assignment of value for P3 in the PIO_IFSR register */
#define PIO_IFSR_P4_Pos                       _UINT32_(4)                                          /* (PIO_IFSR) Input Filter Status Position */
#define PIO_IFSR_P4_Msk                       (_UINT32_(0x1) << PIO_IFSR_P4_Pos)                   /* (PIO_IFSR) Input Filter Status Mask */
#define PIO_IFSR_P4(value)                    (PIO_IFSR_P4_Msk & (_UINT32_(value) << PIO_IFSR_P4_Pos)) /* Assignment of value for P4 in the PIO_IFSR register */
#define PIO_IFSR_P5_Pos                       _UINT32_(5)                                          /* (PIO_IFSR) Input Filter Status Position */
#define PIO_IFSR_P5_Msk                       (_UINT32_(0x1) << PIO_IFSR_P5_Pos)                   /* (PIO_IFSR) Input Filter Status Mask */
#define PIO_IFSR_P5(value)                    (PIO_IFSR_P5_Msk & (_UINT32_(value) << PIO_IFSR_P5_Pos)) /* Assignment of value for P5 in the PIO_IFSR register */
#define PIO_IFSR_P6_Pos                       _UINT32_(6)                                          /* (PIO_IFSR) Input Filter Status Position */
#define PIO_IFSR_P6_Msk                       (_UINT32_(0x1) << PIO_IFSR_P6_Pos)                   /* (PIO_IFSR) Input Filter Status Mask */
#define PIO_IFSR_P6(value)                    (PIO_IFSR_P6_Msk & (_UINT32_(value) << PIO_IFSR_P6_Pos)) /* Assignment of value for P6 in the PIO_IFSR register */
#define PIO_IFSR_P7_Pos                       _UINT32_(7)                                          /* (PIO_IFSR) Input Filter Status Position */
#define PIO_IFSR_P7_Msk                       (_UINT32_(0x1) << PIO_IFSR_P7_Pos)                   /* (PIO_IFSR) Input Filter Status Mask */
#define PIO_IFSR_P7(value)                    (PIO_IFSR_P7_Msk & (_UINT32_(value) << PIO_IFSR_P7_Pos)) /* Assignment of value for P7 in the PIO_IFSR register */
#define PIO_IFSR_P8_Pos                       _UINT32_(8)                                          /* (PIO_IFSR) Input Filter Status Position */
#define PIO_IFSR_P8_Msk                       (_UINT32_(0x1) << PIO_IFSR_P8_Pos)                   /* (PIO_IFSR) Input Filter Status Mask */
#define PIO_IFSR_P8(value)                    (PIO_IFSR_P8_Msk & (_UINT32_(value) << PIO_IFSR_P8_Pos)) /* Assignment of value for P8 in the PIO_IFSR register */
#define PIO_IFSR_P9_Pos                       _UINT32_(9)                                          /* (PIO_IFSR) Input Filter Status Position */
#define PIO_IFSR_P9_Msk                       (_UINT32_(0x1) << PIO_IFSR_P9_Pos)                   /* (PIO_IFSR) Input Filter Status Mask */
#define PIO_IFSR_P9(value)                    (PIO_IFSR_P9_Msk & (_UINT32_(value) << PIO_IFSR_P9_Pos)) /* Assignment of value for P9 in the PIO_IFSR register */
#define PIO_IFSR_P10_Pos                      _UINT32_(10)                                         /* (PIO_IFSR) Input Filter Status Position */
#define PIO_IFSR_P10_Msk                      (_UINT32_(0x1) << PIO_IFSR_P10_Pos)                  /* (PIO_IFSR) Input Filter Status Mask */
#define PIO_IFSR_P10(value)                   (PIO_IFSR_P10_Msk & (_UINT32_(value) << PIO_IFSR_P10_Pos)) /* Assignment of value for P10 in the PIO_IFSR register */
#define PIO_IFSR_P11_Pos                      _UINT32_(11)                                         /* (PIO_IFSR) Input Filter Status Position */
#define PIO_IFSR_P11_Msk                      (_UINT32_(0x1) << PIO_IFSR_P11_Pos)                  /* (PIO_IFSR) Input Filter Status Mask */
#define PIO_IFSR_P11(value)                   (PIO_IFSR_P11_Msk & (_UINT32_(value) << PIO_IFSR_P11_Pos)) /* Assignment of value for P11 in the PIO_IFSR register */
#define PIO_IFSR_P12_Pos                      _UINT32_(12)                                         /* (PIO_IFSR) Input Filter Status Position */
#define PIO_IFSR_P12_Msk                      (_UINT32_(0x1) << PIO_IFSR_P12_Pos)                  /* (PIO_IFSR) Input Filter Status Mask */
#define PIO_IFSR_P12(value)                   (PIO_IFSR_P12_Msk & (_UINT32_(value) << PIO_IFSR_P12_Pos)) /* Assignment of value for P12 in the PIO_IFSR register */
#define PIO_IFSR_P13_Pos                      _UINT32_(13)                                         /* (PIO_IFSR) Input Filter Status Position */
#define PIO_IFSR_P13_Msk                      (_UINT32_(0x1) << PIO_IFSR_P13_Pos)                  /* (PIO_IFSR) Input Filter Status Mask */
#define PIO_IFSR_P13(value)                   (PIO_IFSR_P13_Msk & (_UINT32_(value) << PIO_IFSR_P13_Pos)) /* Assignment of value for P13 in the PIO_IFSR register */
#define PIO_IFSR_P14_Pos                      _UINT32_(14)                                         /* (PIO_IFSR) Input Filter Status Position */
#define PIO_IFSR_P14_Msk                      (_UINT32_(0x1) << PIO_IFSR_P14_Pos)                  /* (PIO_IFSR) Input Filter Status Mask */
#define PIO_IFSR_P14(value)                   (PIO_IFSR_P14_Msk & (_UINT32_(value) << PIO_IFSR_P14_Pos)) /* Assignment of value for P14 in the PIO_IFSR register */
#define PIO_IFSR_P15_Pos                      _UINT32_(15)                                         /* (PIO_IFSR) Input Filter Status Position */
#define PIO_IFSR_P15_Msk                      (_UINT32_(0x1) << PIO_IFSR_P15_Pos)                  /* (PIO_IFSR) Input Filter Status Mask */
#define PIO_IFSR_P15(value)                   (PIO_IFSR_P15_Msk & (_UINT32_(value) << PIO_IFSR_P15_Pos)) /* Assignment of value for P15 in the PIO_IFSR register */
#define PIO_IFSR_P16_Pos                      _UINT32_(16)                                         /* (PIO_IFSR) Input Filter Status Position */
#define PIO_IFSR_P16_Msk                      (_UINT32_(0x1) << PIO_IFSR_P16_Pos)                  /* (PIO_IFSR) Input Filter Status Mask */
#define PIO_IFSR_P16(value)                   (PIO_IFSR_P16_Msk & (_UINT32_(value) << PIO_IFSR_P16_Pos)) /* Assignment of value for P16 in the PIO_IFSR register */
#define PIO_IFSR_P17_Pos                      _UINT32_(17)                                         /* (PIO_IFSR) Input Filter Status Position */
#define PIO_IFSR_P17_Msk                      (_UINT32_(0x1) << PIO_IFSR_P17_Pos)                  /* (PIO_IFSR) Input Filter Status Mask */
#define PIO_IFSR_P17(value)                   (PIO_IFSR_P17_Msk & (_UINT32_(value) << PIO_IFSR_P17_Pos)) /* Assignment of value for P17 in the PIO_IFSR register */
#define PIO_IFSR_P18_Pos                      _UINT32_(18)                                         /* (PIO_IFSR) Input Filter Status Position */
#define PIO_IFSR_P18_Msk                      (_UINT32_(0x1) << PIO_IFSR_P18_Pos)                  /* (PIO_IFSR) Input Filter Status Mask */
#define PIO_IFSR_P18(value)                   (PIO_IFSR_P18_Msk & (_UINT32_(value) << PIO_IFSR_P18_Pos)) /* Assignment of value for P18 in the PIO_IFSR register */
#define PIO_IFSR_P19_Pos                      _UINT32_(19)                                         /* (PIO_IFSR) Input Filter Status Position */
#define PIO_IFSR_P19_Msk                      (_UINT32_(0x1) << PIO_IFSR_P19_Pos)                  /* (PIO_IFSR) Input Filter Status Mask */
#define PIO_IFSR_P19(value)                   (PIO_IFSR_P19_Msk & (_UINT32_(value) << PIO_IFSR_P19_Pos)) /* Assignment of value for P19 in the PIO_IFSR register */
#define PIO_IFSR_P20_Pos                      _UINT32_(20)                                         /* (PIO_IFSR) Input Filter Status Position */
#define PIO_IFSR_P20_Msk                      (_UINT32_(0x1) << PIO_IFSR_P20_Pos)                  /* (PIO_IFSR) Input Filter Status Mask */
#define PIO_IFSR_P20(value)                   (PIO_IFSR_P20_Msk & (_UINT32_(value) << PIO_IFSR_P20_Pos)) /* Assignment of value for P20 in the PIO_IFSR register */
#define PIO_IFSR_P21_Pos                      _UINT32_(21)                                         /* (PIO_IFSR) Input Filter Status Position */
#define PIO_IFSR_P21_Msk                      (_UINT32_(0x1) << PIO_IFSR_P21_Pos)                  /* (PIO_IFSR) Input Filter Status Mask */
#define PIO_IFSR_P21(value)                   (PIO_IFSR_P21_Msk & (_UINT32_(value) << PIO_IFSR_P21_Pos)) /* Assignment of value for P21 in the PIO_IFSR register */
#define PIO_IFSR_P22_Pos                      _UINT32_(22)                                         /* (PIO_IFSR) Input Filter Status Position */
#define PIO_IFSR_P22_Msk                      (_UINT32_(0x1) << PIO_IFSR_P22_Pos)                  /* (PIO_IFSR) Input Filter Status Mask */
#define PIO_IFSR_P22(value)                   (PIO_IFSR_P22_Msk & (_UINT32_(value) << PIO_IFSR_P22_Pos)) /* Assignment of value for P22 in the PIO_IFSR register */
#define PIO_IFSR_P23_Pos                      _UINT32_(23)                                         /* (PIO_IFSR) Input Filter Status Position */
#define PIO_IFSR_P23_Msk                      (_UINT32_(0x1) << PIO_IFSR_P23_Pos)                  /* (PIO_IFSR) Input Filter Status Mask */
#define PIO_IFSR_P23(value)                   (PIO_IFSR_P23_Msk & (_UINT32_(value) << PIO_IFSR_P23_Pos)) /* Assignment of value for P23 in the PIO_IFSR register */
#define PIO_IFSR_P24_Pos                      _UINT32_(24)                                         /* (PIO_IFSR) Input Filter Status Position */
#define PIO_IFSR_P24_Msk                      (_UINT32_(0x1) << PIO_IFSR_P24_Pos)                  /* (PIO_IFSR) Input Filter Status Mask */
#define PIO_IFSR_P24(value)                   (PIO_IFSR_P24_Msk & (_UINT32_(value) << PIO_IFSR_P24_Pos)) /* Assignment of value for P24 in the PIO_IFSR register */
#define PIO_IFSR_P25_Pos                      _UINT32_(25)                                         /* (PIO_IFSR) Input Filter Status Position */
#define PIO_IFSR_P25_Msk                      (_UINT32_(0x1) << PIO_IFSR_P25_Pos)                  /* (PIO_IFSR) Input Filter Status Mask */
#define PIO_IFSR_P25(value)                   (PIO_IFSR_P25_Msk & (_UINT32_(value) << PIO_IFSR_P25_Pos)) /* Assignment of value for P25 in the PIO_IFSR register */
#define PIO_IFSR_P26_Pos                      _UINT32_(26)                                         /* (PIO_IFSR) Input Filter Status Position */
#define PIO_IFSR_P26_Msk                      (_UINT32_(0x1) << PIO_IFSR_P26_Pos)                  /* (PIO_IFSR) Input Filter Status Mask */
#define PIO_IFSR_P26(value)                   (PIO_IFSR_P26_Msk & (_UINT32_(value) << PIO_IFSR_P26_Pos)) /* Assignment of value for P26 in the PIO_IFSR register */
#define PIO_IFSR_P27_Pos                      _UINT32_(27)                                         /* (PIO_IFSR) Input Filter Status Position */
#define PIO_IFSR_P27_Msk                      (_UINT32_(0x1) << PIO_IFSR_P27_Pos)                  /* (PIO_IFSR) Input Filter Status Mask */
#define PIO_IFSR_P27(value)                   (PIO_IFSR_P27_Msk & (_UINT32_(value) << PIO_IFSR_P27_Pos)) /* Assignment of value for P27 in the PIO_IFSR register */
#define PIO_IFSR_P28_Pos                      _UINT32_(28)                                         /* (PIO_IFSR) Input Filter Status Position */
#define PIO_IFSR_P28_Msk                      (_UINT32_(0x1) << PIO_IFSR_P28_Pos)                  /* (PIO_IFSR) Input Filter Status Mask */
#define PIO_IFSR_P28(value)                   (PIO_IFSR_P28_Msk & (_UINT32_(value) << PIO_IFSR_P28_Pos)) /* Assignment of value for P28 in the PIO_IFSR register */
#define PIO_IFSR_P29_Pos                      _UINT32_(29)                                         /* (PIO_IFSR) Input Filter Status Position */
#define PIO_IFSR_P29_Msk                      (_UINT32_(0x1) << PIO_IFSR_P29_Pos)                  /* (PIO_IFSR) Input Filter Status Mask */
#define PIO_IFSR_P29(value)                   (PIO_IFSR_P29_Msk & (_UINT32_(value) << PIO_IFSR_P29_Pos)) /* Assignment of value for P29 in the PIO_IFSR register */
#define PIO_IFSR_P30_Pos                      _UINT32_(30)                                         /* (PIO_IFSR) Input Filter Status Position */
#define PIO_IFSR_P30_Msk                      (_UINT32_(0x1) << PIO_IFSR_P30_Pos)                  /* (PIO_IFSR) Input Filter Status Mask */
#define PIO_IFSR_P30(value)                   (PIO_IFSR_P30_Msk & (_UINT32_(value) << PIO_IFSR_P30_Pos)) /* Assignment of value for P30 in the PIO_IFSR register */
#define PIO_IFSR_P31_Pos                      _UINT32_(31)                                         /* (PIO_IFSR) Input Filter Status Position */
#define PIO_IFSR_P31_Msk                      (_UINT32_(0x1) << PIO_IFSR_P31_Pos)                  /* (PIO_IFSR) Input Filter Status Mask */
#define PIO_IFSR_P31(value)                   (PIO_IFSR_P31_Msk & (_UINT32_(value) << PIO_IFSR_P31_Pos)) /* Assignment of value for P31 in the PIO_IFSR register */
#define PIO_IFSR_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (PIO_IFSR) Register Mask  */

#define PIO_IFSR_P_Pos                        _UINT32_(0)                                          /* (PIO_IFSR Position) Input Filter Status */
#define PIO_IFSR_P_Msk                        (_UINT32_(0xFFFFFFFF) << PIO_IFSR_P_Pos)             /* (PIO_IFSR Mask) P */
#define PIO_IFSR_P(value)                     (PIO_IFSR_P_Msk & (_UINT32_(value) << PIO_IFSR_P_Pos)) 

/* -------- PIO_SODR : (PIO Offset: 0x30) ( /W 32) Set Output Data Register -------- */
#define PIO_SODR_P0_Pos                       _UINT32_(0)                                          /* (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P0_Msk                       (_UINT32_(0x1) << PIO_SODR_P0_Pos)                   /* (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P0(value)                    (PIO_SODR_P0_Msk & (_UINT32_(value) << PIO_SODR_P0_Pos)) /* Assignment of value for P0 in the PIO_SODR register */
#define PIO_SODR_P1_Pos                       _UINT32_(1)                                          /* (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P1_Msk                       (_UINT32_(0x1) << PIO_SODR_P1_Pos)                   /* (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P1(value)                    (PIO_SODR_P1_Msk & (_UINT32_(value) << PIO_SODR_P1_Pos)) /* Assignment of value for P1 in the PIO_SODR register */
#define PIO_SODR_P2_Pos                       _UINT32_(2)                                          /* (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P2_Msk                       (_UINT32_(0x1) << PIO_SODR_P2_Pos)                   /* (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P2(value)                    (PIO_SODR_P2_Msk & (_UINT32_(value) << PIO_SODR_P2_Pos)) /* Assignment of value for P2 in the PIO_SODR register */
#define PIO_SODR_P3_Pos                       _UINT32_(3)                                          /* (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P3_Msk                       (_UINT32_(0x1) << PIO_SODR_P3_Pos)                   /* (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P3(value)                    (PIO_SODR_P3_Msk & (_UINT32_(value) << PIO_SODR_P3_Pos)) /* Assignment of value for P3 in the PIO_SODR register */
#define PIO_SODR_P4_Pos                       _UINT32_(4)                                          /* (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P4_Msk                       (_UINT32_(0x1) << PIO_SODR_P4_Pos)                   /* (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P4(value)                    (PIO_SODR_P4_Msk & (_UINT32_(value) << PIO_SODR_P4_Pos)) /* Assignment of value for P4 in the PIO_SODR register */
#define PIO_SODR_P5_Pos                       _UINT32_(5)                                          /* (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P5_Msk                       (_UINT32_(0x1) << PIO_SODR_P5_Pos)                   /* (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P5(value)                    (PIO_SODR_P5_Msk & (_UINT32_(value) << PIO_SODR_P5_Pos)) /* Assignment of value for P5 in the PIO_SODR register */
#define PIO_SODR_P6_Pos                       _UINT32_(6)                                          /* (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P6_Msk                       (_UINT32_(0x1) << PIO_SODR_P6_Pos)                   /* (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P6(value)                    (PIO_SODR_P6_Msk & (_UINT32_(value) << PIO_SODR_P6_Pos)) /* Assignment of value for P6 in the PIO_SODR register */
#define PIO_SODR_P7_Pos                       _UINT32_(7)                                          /* (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P7_Msk                       (_UINT32_(0x1) << PIO_SODR_P7_Pos)                   /* (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P7(value)                    (PIO_SODR_P7_Msk & (_UINT32_(value) << PIO_SODR_P7_Pos)) /* Assignment of value for P7 in the PIO_SODR register */
#define PIO_SODR_P8_Pos                       _UINT32_(8)                                          /* (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P8_Msk                       (_UINT32_(0x1) << PIO_SODR_P8_Pos)                   /* (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P8(value)                    (PIO_SODR_P8_Msk & (_UINT32_(value) << PIO_SODR_P8_Pos)) /* Assignment of value for P8 in the PIO_SODR register */
#define PIO_SODR_P9_Pos                       _UINT32_(9)                                          /* (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P9_Msk                       (_UINT32_(0x1) << PIO_SODR_P9_Pos)                   /* (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P9(value)                    (PIO_SODR_P9_Msk & (_UINT32_(value) << PIO_SODR_P9_Pos)) /* Assignment of value for P9 in the PIO_SODR register */
#define PIO_SODR_P10_Pos                      _UINT32_(10)                                         /* (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P10_Msk                      (_UINT32_(0x1) << PIO_SODR_P10_Pos)                  /* (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P10(value)                   (PIO_SODR_P10_Msk & (_UINT32_(value) << PIO_SODR_P10_Pos)) /* Assignment of value for P10 in the PIO_SODR register */
#define PIO_SODR_P11_Pos                      _UINT32_(11)                                         /* (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P11_Msk                      (_UINT32_(0x1) << PIO_SODR_P11_Pos)                  /* (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P11(value)                   (PIO_SODR_P11_Msk & (_UINT32_(value) << PIO_SODR_P11_Pos)) /* Assignment of value for P11 in the PIO_SODR register */
#define PIO_SODR_P12_Pos                      _UINT32_(12)                                         /* (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P12_Msk                      (_UINT32_(0x1) << PIO_SODR_P12_Pos)                  /* (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P12(value)                   (PIO_SODR_P12_Msk & (_UINT32_(value) << PIO_SODR_P12_Pos)) /* Assignment of value for P12 in the PIO_SODR register */
#define PIO_SODR_P13_Pos                      _UINT32_(13)                                         /* (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P13_Msk                      (_UINT32_(0x1) << PIO_SODR_P13_Pos)                  /* (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P13(value)                   (PIO_SODR_P13_Msk & (_UINT32_(value) << PIO_SODR_P13_Pos)) /* Assignment of value for P13 in the PIO_SODR register */
#define PIO_SODR_P14_Pos                      _UINT32_(14)                                         /* (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P14_Msk                      (_UINT32_(0x1) << PIO_SODR_P14_Pos)                  /* (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P14(value)                   (PIO_SODR_P14_Msk & (_UINT32_(value) << PIO_SODR_P14_Pos)) /* Assignment of value for P14 in the PIO_SODR register */
#define PIO_SODR_P15_Pos                      _UINT32_(15)                                         /* (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P15_Msk                      (_UINT32_(0x1) << PIO_SODR_P15_Pos)                  /* (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P15(value)                   (PIO_SODR_P15_Msk & (_UINT32_(value) << PIO_SODR_P15_Pos)) /* Assignment of value for P15 in the PIO_SODR register */
#define PIO_SODR_P16_Pos                      _UINT32_(16)                                         /* (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P16_Msk                      (_UINT32_(0x1) << PIO_SODR_P16_Pos)                  /* (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P16(value)                   (PIO_SODR_P16_Msk & (_UINT32_(value) << PIO_SODR_P16_Pos)) /* Assignment of value for P16 in the PIO_SODR register */
#define PIO_SODR_P17_Pos                      _UINT32_(17)                                         /* (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P17_Msk                      (_UINT32_(0x1) << PIO_SODR_P17_Pos)                  /* (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P17(value)                   (PIO_SODR_P17_Msk & (_UINT32_(value) << PIO_SODR_P17_Pos)) /* Assignment of value for P17 in the PIO_SODR register */
#define PIO_SODR_P18_Pos                      _UINT32_(18)                                         /* (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P18_Msk                      (_UINT32_(0x1) << PIO_SODR_P18_Pos)                  /* (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P18(value)                   (PIO_SODR_P18_Msk & (_UINT32_(value) << PIO_SODR_P18_Pos)) /* Assignment of value for P18 in the PIO_SODR register */
#define PIO_SODR_P19_Pos                      _UINT32_(19)                                         /* (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P19_Msk                      (_UINT32_(0x1) << PIO_SODR_P19_Pos)                  /* (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P19(value)                   (PIO_SODR_P19_Msk & (_UINT32_(value) << PIO_SODR_P19_Pos)) /* Assignment of value for P19 in the PIO_SODR register */
#define PIO_SODR_P20_Pos                      _UINT32_(20)                                         /* (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P20_Msk                      (_UINT32_(0x1) << PIO_SODR_P20_Pos)                  /* (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P20(value)                   (PIO_SODR_P20_Msk & (_UINT32_(value) << PIO_SODR_P20_Pos)) /* Assignment of value for P20 in the PIO_SODR register */
#define PIO_SODR_P21_Pos                      _UINT32_(21)                                         /* (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P21_Msk                      (_UINT32_(0x1) << PIO_SODR_P21_Pos)                  /* (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P21(value)                   (PIO_SODR_P21_Msk & (_UINT32_(value) << PIO_SODR_P21_Pos)) /* Assignment of value for P21 in the PIO_SODR register */
#define PIO_SODR_P22_Pos                      _UINT32_(22)                                         /* (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P22_Msk                      (_UINT32_(0x1) << PIO_SODR_P22_Pos)                  /* (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P22(value)                   (PIO_SODR_P22_Msk & (_UINT32_(value) << PIO_SODR_P22_Pos)) /* Assignment of value for P22 in the PIO_SODR register */
#define PIO_SODR_P23_Pos                      _UINT32_(23)                                         /* (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P23_Msk                      (_UINT32_(0x1) << PIO_SODR_P23_Pos)                  /* (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P23(value)                   (PIO_SODR_P23_Msk & (_UINT32_(value) << PIO_SODR_P23_Pos)) /* Assignment of value for P23 in the PIO_SODR register */
#define PIO_SODR_P24_Pos                      _UINT32_(24)                                         /* (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P24_Msk                      (_UINT32_(0x1) << PIO_SODR_P24_Pos)                  /* (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P24(value)                   (PIO_SODR_P24_Msk & (_UINT32_(value) << PIO_SODR_P24_Pos)) /* Assignment of value for P24 in the PIO_SODR register */
#define PIO_SODR_P25_Pos                      _UINT32_(25)                                         /* (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P25_Msk                      (_UINT32_(0x1) << PIO_SODR_P25_Pos)                  /* (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P25(value)                   (PIO_SODR_P25_Msk & (_UINT32_(value) << PIO_SODR_P25_Pos)) /* Assignment of value for P25 in the PIO_SODR register */
#define PIO_SODR_P26_Pos                      _UINT32_(26)                                         /* (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P26_Msk                      (_UINT32_(0x1) << PIO_SODR_P26_Pos)                  /* (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P26(value)                   (PIO_SODR_P26_Msk & (_UINT32_(value) << PIO_SODR_P26_Pos)) /* Assignment of value for P26 in the PIO_SODR register */
#define PIO_SODR_P27_Pos                      _UINT32_(27)                                         /* (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P27_Msk                      (_UINT32_(0x1) << PIO_SODR_P27_Pos)                  /* (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P27(value)                   (PIO_SODR_P27_Msk & (_UINT32_(value) << PIO_SODR_P27_Pos)) /* Assignment of value for P27 in the PIO_SODR register */
#define PIO_SODR_P28_Pos                      _UINT32_(28)                                         /* (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P28_Msk                      (_UINT32_(0x1) << PIO_SODR_P28_Pos)                  /* (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P28(value)                   (PIO_SODR_P28_Msk & (_UINT32_(value) << PIO_SODR_P28_Pos)) /* Assignment of value for P28 in the PIO_SODR register */
#define PIO_SODR_P29_Pos                      _UINT32_(29)                                         /* (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P29_Msk                      (_UINT32_(0x1) << PIO_SODR_P29_Pos)                  /* (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P29(value)                   (PIO_SODR_P29_Msk & (_UINT32_(value) << PIO_SODR_P29_Pos)) /* Assignment of value for P29 in the PIO_SODR register */
#define PIO_SODR_P30_Pos                      _UINT32_(30)                                         /* (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P30_Msk                      (_UINT32_(0x1) << PIO_SODR_P30_Pos)                  /* (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P30(value)                   (PIO_SODR_P30_Msk & (_UINT32_(value) << PIO_SODR_P30_Pos)) /* Assignment of value for P30 in the PIO_SODR register */
#define PIO_SODR_P31_Pos                      _UINT32_(31)                                         /* (PIO_SODR) Set Output Data Position */
#define PIO_SODR_P31_Msk                      (_UINT32_(0x1) << PIO_SODR_P31_Pos)                  /* (PIO_SODR) Set Output Data Mask */
#define PIO_SODR_P31(value)                   (PIO_SODR_P31_Msk & (_UINT32_(value) << PIO_SODR_P31_Pos)) /* Assignment of value for P31 in the PIO_SODR register */
#define PIO_SODR_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (PIO_SODR) Register Mask  */

#define PIO_SODR_P_Pos                        _UINT32_(0)                                          /* (PIO_SODR Position) Set Output Data */
#define PIO_SODR_P_Msk                        (_UINT32_(0xFFFFFFFF) << PIO_SODR_P_Pos)             /* (PIO_SODR Mask) P */
#define PIO_SODR_P(value)                     (PIO_SODR_P_Msk & (_UINT32_(value) << PIO_SODR_P_Pos)) 

/* -------- PIO_CODR : (PIO Offset: 0x34) ( /W 32) Clear Output Data Register -------- */
#define PIO_CODR_P0_Pos                       _UINT32_(0)                                          /* (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P0_Msk                       (_UINT32_(0x1) << PIO_CODR_P0_Pos)                   /* (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P0(value)                    (PIO_CODR_P0_Msk & (_UINT32_(value) << PIO_CODR_P0_Pos)) /* Assignment of value for P0 in the PIO_CODR register */
#define PIO_CODR_P1_Pos                       _UINT32_(1)                                          /* (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P1_Msk                       (_UINT32_(0x1) << PIO_CODR_P1_Pos)                   /* (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P1(value)                    (PIO_CODR_P1_Msk & (_UINT32_(value) << PIO_CODR_P1_Pos)) /* Assignment of value for P1 in the PIO_CODR register */
#define PIO_CODR_P2_Pos                       _UINT32_(2)                                          /* (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P2_Msk                       (_UINT32_(0x1) << PIO_CODR_P2_Pos)                   /* (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P2(value)                    (PIO_CODR_P2_Msk & (_UINT32_(value) << PIO_CODR_P2_Pos)) /* Assignment of value for P2 in the PIO_CODR register */
#define PIO_CODR_P3_Pos                       _UINT32_(3)                                          /* (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P3_Msk                       (_UINT32_(0x1) << PIO_CODR_P3_Pos)                   /* (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P3(value)                    (PIO_CODR_P3_Msk & (_UINT32_(value) << PIO_CODR_P3_Pos)) /* Assignment of value for P3 in the PIO_CODR register */
#define PIO_CODR_P4_Pos                       _UINT32_(4)                                          /* (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P4_Msk                       (_UINT32_(0x1) << PIO_CODR_P4_Pos)                   /* (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P4(value)                    (PIO_CODR_P4_Msk & (_UINT32_(value) << PIO_CODR_P4_Pos)) /* Assignment of value for P4 in the PIO_CODR register */
#define PIO_CODR_P5_Pos                       _UINT32_(5)                                          /* (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P5_Msk                       (_UINT32_(0x1) << PIO_CODR_P5_Pos)                   /* (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P5(value)                    (PIO_CODR_P5_Msk & (_UINT32_(value) << PIO_CODR_P5_Pos)) /* Assignment of value for P5 in the PIO_CODR register */
#define PIO_CODR_P6_Pos                       _UINT32_(6)                                          /* (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P6_Msk                       (_UINT32_(0x1) << PIO_CODR_P6_Pos)                   /* (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P6(value)                    (PIO_CODR_P6_Msk & (_UINT32_(value) << PIO_CODR_P6_Pos)) /* Assignment of value for P6 in the PIO_CODR register */
#define PIO_CODR_P7_Pos                       _UINT32_(7)                                          /* (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P7_Msk                       (_UINT32_(0x1) << PIO_CODR_P7_Pos)                   /* (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P7(value)                    (PIO_CODR_P7_Msk & (_UINT32_(value) << PIO_CODR_P7_Pos)) /* Assignment of value for P7 in the PIO_CODR register */
#define PIO_CODR_P8_Pos                       _UINT32_(8)                                          /* (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P8_Msk                       (_UINT32_(0x1) << PIO_CODR_P8_Pos)                   /* (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P8(value)                    (PIO_CODR_P8_Msk & (_UINT32_(value) << PIO_CODR_P8_Pos)) /* Assignment of value for P8 in the PIO_CODR register */
#define PIO_CODR_P9_Pos                       _UINT32_(9)                                          /* (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P9_Msk                       (_UINT32_(0x1) << PIO_CODR_P9_Pos)                   /* (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P9(value)                    (PIO_CODR_P9_Msk & (_UINT32_(value) << PIO_CODR_P9_Pos)) /* Assignment of value for P9 in the PIO_CODR register */
#define PIO_CODR_P10_Pos                      _UINT32_(10)                                         /* (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P10_Msk                      (_UINT32_(0x1) << PIO_CODR_P10_Pos)                  /* (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P10(value)                   (PIO_CODR_P10_Msk & (_UINT32_(value) << PIO_CODR_P10_Pos)) /* Assignment of value for P10 in the PIO_CODR register */
#define PIO_CODR_P11_Pos                      _UINT32_(11)                                         /* (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P11_Msk                      (_UINT32_(0x1) << PIO_CODR_P11_Pos)                  /* (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P11(value)                   (PIO_CODR_P11_Msk & (_UINT32_(value) << PIO_CODR_P11_Pos)) /* Assignment of value for P11 in the PIO_CODR register */
#define PIO_CODR_P12_Pos                      _UINT32_(12)                                         /* (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P12_Msk                      (_UINT32_(0x1) << PIO_CODR_P12_Pos)                  /* (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P12(value)                   (PIO_CODR_P12_Msk & (_UINT32_(value) << PIO_CODR_P12_Pos)) /* Assignment of value for P12 in the PIO_CODR register */
#define PIO_CODR_P13_Pos                      _UINT32_(13)                                         /* (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P13_Msk                      (_UINT32_(0x1) << PIO_CODR_P13_Pos)                  /* (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P13(value)                   (PIO_CODR_P13_Msk & (_UINT32_(value) << PIO_CODR_P13_Pos)) /* Assignment of value for P13 in the PIO_CODR register */
#define PIO_CODR_P14_Pos                      _UINT32_(14)                                         /* (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P14_Msk                      (_UINT32_(0x1) << PIO_CODR_P14_Pos)                  /* (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P14(value)                   (PIO_CODR_P14_Msk & (_UINT32_(value) << PIO_CODR_P14_Pos)) /* Assignment of value for P14 in the PIO_CODR register */
#define PIO_CODR_P15_Pos                      _UINT32_(15)                                         /* (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P15_Msk                      (_UINT32_(0x1) << PIO_CODR_P15_Pos)                  /* (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P15(value)                   (PIO_CODR_P15_Msk & (_UINT32_(value) << PIO_CODR_P15_Pos)) /* Assignment of value for P15 in the PIO_CODR register */
#define PIO_CODR_P16_Pos                      _UINT32_(16)                                         /* (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P16_Msk                      (_UINT32_(0x1) << PIO_CODR_P16_Pos)                  /* (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P16(value)                   (PIO_CODR_P16_Msk & (_UINT32_(value) << PIO_CODR_P16_Pos)) /* Assignment of value for P16 in the PIO_CODR register */
#define PIO_CODR_P17_Pos                      _UINT32_(17)                                         /* (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P17_Msk                      (_UINT32_(0x1) << PIO_CODR_P17_Pos)                  /* (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P17(value)                   (PIO_CODR_P17_Msk & (_UINT32_(value) << PIO_CODR_P17_Pos)) /* Assignment of value for P17 in the PIO_CODR register */
#define PIO_CODR_P18_Pos                      _UINT32_(18)                                         /* (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P18_Msk                      (_UINT32_(0x1) << PIO_CODR_P18_Pos)                  /* (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P18(value)                   (PIO_CODR_P18_Msk & (_UINT32_(value) << PIO_CODR_P18_Pos)) /* Assignment of value for P18 in the PIO_CODR register */
#define PIO_CODR_P19_Pos                      _UINT32_(19)                                         /* (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P19_Msk                      (_UINT32_(0x1) << PIO_CODR_P19_Pos)                  /* (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P19(value)                   (PIO_CODR_P19_Msk & (_UINT32_(value) << PIO_CODR_P19_Pos)) /* Assignment of value for P19 in the PIO_CODR register */
#define PIO_CODR_P20_Pos                      _UINT32_(20)                                         /* (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P20_Msk                      (_UINT32_(0x1) << PIO_CODR_P20_Pos)                  /* (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P20(value)                   (PIO_CODR_P20_Msk & (_UINT32_(value) << PIO_CODR_P20_Pos)) /* Assignment of value for P20 in the PIO_CODR register */
#define PIO_CODR_P21_Pos                      _UINT32_(21)                                         /* (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P21_Msk                      (_UINT32_(0x1) << PIO_CODR_P21_Pos)                  /* (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P21(value)                   (PIO_CODR_P21_Msk & (_UINT32_(value) << PIO_CODR_P21_Pos)) /* Assignment of value for P21 in the PIO_CODR register */
#define PIO_CODR_P22_Pos                      _UINT32_(22)                                         /* (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P22_Msk                      (_UINT32_(0x1) << PIO_CODR_P22_Pos)                  /* (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P22(value)                   (PIO_CODR_P22_Msk & (_UINT32_(value) << PIO_CODR_P22_Pos)) /* Assignment of value for P22 in the PIO_CODR register */
#define PIO_CODR_P23_Pos                      _UINT32_(23)                                         /* (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P23_Msk                      (_UINT32_(0x1) << PIO_CODR_P23_Pos)                  /* (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P23(value)                   (PIO_CODR_P23_Msk & (_UINT32_(value) << PIO_CODR_P23_Pos)) /* Assignment of value for P23 in the PIO_CODR register */
#define PIO_CODR_P24_Pos                      _UINT32_(24)                                         /* (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P24_Msk                      (_UINT32_(0x1) << PIO_CODR_P24_Pos)                  /* (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P24(value)                   (PIO_CODR_P24_Msk & (_UINT32_(value) << PIO_CODR_P24_Pos)) /* Assignment of value for P24 in the PIO_CODR register */
#define PIO_CODR_P25_Pos                      _UINT32_(25)                                         /* (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P25_Msk                      (_UINT32_(0x1) << PIO_CODR_P25_Pos)                  /* (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P25(value)                   (PIO_CODR_P25_Msk & (_UINT32_(value) << PIO_CODR_P25_Pos)) /* Assignment of value for P25 in the PIO_CODR register */
#define PIO_CODR_P26_Pos                      _UINT32_(26)                                         /* (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P26_Msk                      (_UINT32_(0x1) << PIO_CODR_P26_Pos)                  /* (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P26(value)                   (PIO_CODR_P26_Msk & (_UINT32_(value) << PIO_CODR_P26_Pos)) /* Assignment of value for P26 in the PIO_CODR register */
#define PIO_CODR_P27_Pos                      _UINT32_(27)                                         /* (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P27_Msk                      (_UINT32_(0x1) << PIO_CODR_P27_Pos)                  /* (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P27(value)                   (PIO_CODR_P27_Msk & (_UINT32_(value) << PIO_CODR_P27_Pos)) /* Assignment of value for P27 in the PIO_CODR register */
#define PIO_CODR_P28_Pos                      _UINT32_(28)                                         /* (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P28_Msk                      (_UINT32_(0x1) << PIO_CODR_P28_Pos)                  /* (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P28(value)                   (PIO_CODR_P28_Msk & (_UINT32_(value) << PIO_CODR_P28_Pos)) /* Assignment of value for P28 in the PIO_CODR register */
#define PIO_CODR_P29_Pos                      _UINT32_(29)                                         /* (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P29_Msk                      (_UINT32_(0x1) << PIO_CODR_P29_Pos)                  /* (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P29(value)                   (PIO_CODR_P29_Msk & (_UINT32_(value) << PIO_CODR_P29_Pos)) /* Assignment of value for P29 in the PIO_CODR register */
#define PIO_CODR_P30_Pos                      _UINT32_(30)                                         /* (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P30_Msk                      (_UINT32_(0x1) << PIO_CODR_P30_Pos)                  /* (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P30(value)                   (PIO_CODR_P30_Msk & (_UINT32_(value) << PIO_CODR_P30_Pos)) /* Assignment of value for P30 in the PIO_CODR register */
#define PIO_CODR_P31_Pos                      _UINT32_(31)                                         /* (PIO_CODR) Clear Output Data Position */
#define PIO_CODR_P31_Msk                      (_UINT32_(0x1) << PIO_CODR_P31_Pos)                  /* (PIO_CODR) Clear Output Data Mask */
#define PIO_CODR_P31(value)                   (PIO_CODR_P31_Msk & (_UINT32_(value) << PIO_CODR_P31_Pos)) /* Assignment of value for P31 in the PIO_CODR register */
#define PIO_CODR_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (PIO_CODR) Register Mask  */

#define PIO_CODR_P_Pos                        _UINT32_(0)                                          /* (PIO_CODR Position) Clear Output Data */
#define PIO_CODR_P_Msk                        (_UINT32_(0xFFFFFFFF) << PIO_CODR_P_Pos)             /* (PIO_CODR Mask) P */
#define PIO_CODR_P(value)                     (PIO_CODR_P_Msk & (_UINT32_(value) << PIO_CODR_P_Pos)) 

/* -------- PIO_ODSR : (PIO Offset: 0x38) (R/W 32) Output Data Status Register -------- */
#define PIO_ODSR_P0_Pos                       _UINT32_(0)                                          /* (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P0_Msk                       (_UINT32_(0x1) << PIO_ODSR_P0_Pos)                   /* (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P0(value)                    (PIO_ODSR_P0_Msk & (_UINT32_(value) << PIO_ODSR_P0_Pos)) /* Assignment of value for P0 in the PIO_ODSR register */
#define PIO_ODSR_P1_Pos                       _UINT32_(1)                                          /* (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P1_Msk                       (_UINT32_(0x1) << PIO_ODSR_P1_Pos)                   /* (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P1(value)                    (PIO_ODSR_P1_Msk & (_UINT32_(value) << PIO_ODSR_P1_Pos)) /* Assignment of value for P1 in the PIO_ODSR register */
#define PIO_ODSR_P2_Pos                       _UINT32_(2)                                          /* (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P2_Msk                       (_UINT32_(0x1) << PIO_ODSR_P2_Pos)                   /* (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P2(value)                    (PIO_ODSR_P2_Msk & (_UINT32_(value) << PIO_ODSR_P2_Pos)) /* Assignment of value for P2 in the PIO_ODSR register */
#define PIO_ODSR_P3_Pos                       _UINT32_(3)                                          /* (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P3_Msk                       (_UINT32_(0x1) << PIO_ODSR_P3_Pos)                   /* (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P3(value)                    (PIO_ODSR_P3_Msk & (_UINT32_(value) << PIO_ODSR_P3_Pos)) /* Assignment of value for P3 in the PIO_ODSR register */
#define PIO_ODSR_P4_Pos                       _UINT32_(4)                                          /* (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P4_Msk                       (_UINT32_(0x1) << PIO_ODSR_P4_Pos)                   /* (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P4(value)                    (PIO_ODSR_P4_Msk & (_UINT32_(value) << PIO_ODSR_P4_Pos)) /* Assignment of value for P4 in the PIO_ODSR register */
#define PIO_ODSR_P5_Pos                       _UINT32_(5)                                          /* (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P5_Msk                       (_UINT32_(0x1) << PIO_ODSR_P5_Pos)                   /* (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P5(value)                    (PIO_ODSR_P5_Msk & (_UINT32_(value) << PIO_ODSR_P5_Pos)) /* Assignment of value for P5 in the PIO_ODSR register */
#define PIO_ODSR_P6_Pos                       _UINT32_(6)                                          /* (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P6_Msk                       (_UINT32_(0x1) << PIO_ODSR_P6_Pos)                   /* (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P6(value)                    (PIO_ODSR_P6_Msk & (_UINT32_(value) << PIO_ODSR_P6_Pos)) /* Assignment of value for P6 in the PIO_ODSR register */
#define PIO_ODSR_P7_Pos                       _UINT32_(7)                                          /* (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P7_Msk                       (_UINT32_(0x1) << PIO_ODSR_P7_Pos)                   /* (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P7(value)                    (PIO_ODSR_P7_Msk & (_UINT32_(value) << PIO_ODSR_P7_Pos)) /* Assignment of value for P7 in the PIO_ODSR register */
#define PIO_ODSR_P8_Pos                       _UINT32_(8)                                          /* (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P8_Msk                       (_UINT32_(0x1) << PIO_ODSR_P8_Pos)                   /* (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P8(value)                    (PIO_ODSR_P8_Msk & (_UINT32_(value) << PIO_ODSR_P8_Pos)) /* Assignment of value for P8 in the PIO_ODSR register */
#define PIO_ODSR_P9_Pos                       _UINT32_(9)                                          /* (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P9_Msk                       (_UINT32_(0x1) << PIO_ODSR_P9_Pos)                   /* (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P9(value)                    (PIO_ODSR_P9_Msk & (_UINT32_(value) << PIO_ODSR_P9_Pos)) /* Assignment of value for P9 in the PIO_ODSR register */
#define PIO_ODSR_P10_Pos                      _UINT32_(10)                                         /* (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P10_Msk                      (_UINT32_(0x1) << PIO_ODSR_P10_Pos)                  /* (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P10(value)                   (PIO_ODSR_P10_Msk & (_UINT32_(value) << PIO_ODSR_P10_Pos)) /* Assignment of value for P10 in the PIO_ODSR register */
#define PIO_ODSR_P11_Pos                      _UINT32_(11)                                         /* (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P11_Msk                      (_UINT32_(0x1) << PIO_ODSR_P11_Pos)                  /* (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P11(value)                   (PIO_ODSR_P11_Msk & (_UINT32_(value) << PIO_ODSR_P11_Pos)) /* Assignment of value for P11 in the PIO_ODSR register */
#define PIO_ODSR_P12_Pos                      _UINT32_(12)                                         /* (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P12_Msk                      (_UINT32_(0x1) << PIO_ODSR_P12_Pos)                  /* (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P12(value)                   (PIO_ODSR_P12_Msk & (_UINT32_(value) << PIO_ODSR_P12_Pos)) /* Assignment of value for P12 in the PIO_ODSR register */
#define PIO_ODSR_P13_Pos                      _UINT32_(13)                                         /* (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P13_Msk                      (_UINT32_(0x1) << PIO_ODSR_P13_Pos)                  /* (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P13(value)                   (PIO_ODSR_P13_Msk & (_UINT32_(value) << PIO_ODSR_P13_Pos)) /* Assignment of value for P13 in the PIO_ODSR register */
#define PIO_ODSR_P14_Pos                      _UINT32_(14)                                         /* (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P14_Msk                      (_UINT32_(0x1) << PIO_ODSR_P14_Pos)                  /* (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P14(value)                   (PIO_ODSR_P14_Msk & (_UINT32_(value) << PIO_ODSR_P14_Pos)) /* Assignment of value for P14 in the PIO_ODSR register */
#define PIO_ODSR_P15_Pos                      _UINT32_(15)                                         /* (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P15_Msk                      (_UINT32_(0x1) << PIO_ODSR_P15_Pos)                  /* (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P15(value)                   (PIO_ODSR_P15_Msk & (_UINT32_(value) << PIO_ODSR_P15_Pos)) /* Assignment of value for P15 in the PIO_ODSR register */
#define PIO_ODSR_P16_Pos                      _UINT32_(16)                                         /* (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P16_Msk                      (_UINT32_(0x1) << PIO_ODSR_P16_Pos)                  /* (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P16(value)                   (PIO_ODSR_P16_Msk & (_UINT32_(value) << PIO_ODSR_P16_Pos)) /* Assignment of value for P16 in the PIO_ODSR register */
#define PIO_ODSR_P17_Pos                      _UINT32_(17)                                         /* (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P17_Msk                      (_UINT32_(0x1) << PIO_ODSR_P17_Pos)                  /* (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P17(value)                   (PIO_ODSR_P17_Msk & (_UINT32_(value) << PIO_ODSR_P17_Pos)) /* Assignment of value for P17 in the PIO_ODSR register */
#define PIO_ODSR_P18_Pos                      _UINT32_(18)                                         /* (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P18_Msk                      (_UINT32_(0x1) << PIO_ODSR_P18_Pos)                  /* (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P18(value)                   (PIO_ODSR_P18_Msk & (_UINT32_(value) << PIO_ODSR_P18_Pos)) /* Assignment of value for P18 in the PIO_ODSR register */
#define PIO_ODSR_P19_Pos                      _UINT32_(19)                                         /* (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P19_Msk                      (_UINT32_(0x1) << PIO_ODSR_P19_Pos)                  /* (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P19(value)                   (PIO_ODSR_P19_Msk & (_UINT32_(value) << PIO_ODSR_P19_Pos)) /* Assignment of value for P19 in the PIO_ODSR register */
#define PIO_ODSR_P20_Pos                      _UINT32_(20)                                         /* (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P20_Msk                      (_UINT32_(0x1) << PIO_ODSR_P20_Pos)                  /* (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P20(value)                   (PIO_ODSR_P20_Msk & (_UINT32_(value) << PIO_ODSR_P20_Pos)) /* Assignment of value for P20 in the PIO_ODSR register */
#define PIO_ODSR_P21_Pos                      _UINT32_(21)                                         /* (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P21_Msk                      (_UINT32_(0x1) << PIO_ODSR_P21_Pos)                  /* (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P21(value)                   (PIO_ODSR_P21_Msk & (_UINT32_(value) << PIO_ODSR_P21_Pos)) /* Assignment of value for P21 in the PIO_ODSR register */
#define PIO_ODSR_P22_Pos                      _UINT32_(22)                                         /* (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P22_Msk                      (_UINT32_(0x1) << PIO_ODSR_P22_Pos)                  /* (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P22(value)                   (PIO_ODSR_P22_Msk & (_UINT32_(value) << PIO_ODSR_P22_Pos)) /* Assignment of value for P22 in the PIO_ODSR register */
#define PIO_ODSR_P23_Pos                      _UINT32_(23)                                         /* (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P23_Msk                      (_UINT32_(0x1) << PIO_ODSR_P23_Pos)                  /* (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P23(value)                   (PIO_ODSR_P23_Msk & (_UINT32_(value) << PIO_ODSR_P23_Pos)) /* Assignment of value for P23 in the PIO_ODSR register */
#define PIO_ODSR_P24_Pos                      _UINT32_(24)                                         /* (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P24_Msk                      (_UINT32_(0x1) << PIO_ODSR_P24_Pos)                  /* (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P24(value)                   (PIO_ODSR_P24_Msk & (_UINT32_(value) << PIO_ODSR_P24_Pos)) /* Assignment of value for P24 in the PIO_ODSR register */
#define PIO_ODSR_P25_Pos                      _UINT32_(25)                                         /* (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P25_Msk                      (_UINT32_(0x1) << PIO_ODSR_P25_Pos)                  /* (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P25(value)                   (PIO_ODSR_P25_Msk & (_UINT32_(value) << PIO_ODSR_P25_Pos)) /* Assignment of value for P25 in the PIO_ODSR register */
#define PIO_ODSR_P26_Pos                      _UINT32_(26)                                         /* (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P26_Msk                      (_UINT32_(0x1) << PIO_ODSR_P26_Pos)                  /* (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P26(value)                   (PIO_ODSR_P26_Msk & (_UINT32_(value) << PIO_ODSR_P26_Pos)) /* Assignment of value for P26 in the PIO_ODSR register */
#define PIO_ODSR_P27_Pos                      _UINT32_(27)                                         /* (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P27_Msk                      (_UINT32_(0x1) << PIO_ODSR_P27_Pos)                  /* (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P27(value)                   (PIO_ODSR_P27_Msk & (_UINT32_(value) << PIO_ODSR_P27_Pos)) /* Assignment of value for P27 in the PIO_ODSR register */
#define PIO_ODSR_P28_Pos                      _UINT32_(28)                                         /* (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P28_Msk                      (_UINT32_(0x1) << PIO_ODSR_P28_Pos)                  /* (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P28(value)                   (PIO_ODSR_P28_Msk & (_UINT32_(value) << PIO_ODSR_P28_Pos)) /* Assignment of value for P28 in the PIO_ODSR register */
#define PIO_ODSR_P29_Pos                      _UINT32_(29)                                         /* (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P29_Msk                      (_UINT32_(0x1) << PIO_ODSR_P29_Pos)                  /* (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P29(value)                   (PIO_ODSR_P29_Msk & (_UINT32_(value) << PIO_ODSR_P29_Pos)) /* Assignment of value for P29 in the PIO_ODSR register */
#define PIO_ODSR_P30_Pos                      _UINT32_(30)                                         /* (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P30_Msk                      (_UINT32_(0x1) << PIO_ODSR_P30_Pos)                  /* (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P30(value)                   (PIO_ODSR_P30_Msk & (_UINT32_(value) << PIO_ODSR_P30_Pos)) /* Assignment of value for P30 in the PIO_ODSR register */
#define PIO_ODSR_P31_Pos                      _UINT32_(31)                                         /* (PIO_ODSR) Output Data Status Position */
#define PIO_ODSR_P31_Msk                      (_UINT32_(0x1) << PIO_ODSR_P31_Pos)                  /* (PIO_ODSR) Output Data Status Mask */
#define PIO_ODSR_P31(value)                   (PIO_ODSR_P31_Msk & (_UINT32_(value) << PIO_ODSR_P31_Pos)) /* Assignment of value for P31 in the PIO_ODSR register */
#define PIO_ODSR_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (PIO_ODSR) Register Mask  */

#define PIO_ODSR_P_Pos                        _UINT32_(0)                                          /* (PIO_ODSR Position) Output Data Status */
#define PIO_ODSR_P_Msk                        (_UINT32_(0xFFFFFFFF) << PIO_ODSR_P_Pos)             /* (PIO_ODSR Mask) P */
#define PIO_ODSR_P(value)                     (PIO_ODSR_P_Msk & (_UINT32_(value) << PIO_ODSR_P_Pos)) 

/* -------- PIO_PDSR : (PIO Offset: 0x3C) ( R/ 32) Pin Data Status Register -------- */
#define PIO_PDSR_P0_Pos                       _UINT32_(0)                                          /* (PIO_PDSR) Output Data Status Position */
#define PIO_PDSR_P0_Msk                       (_UINT32_(0x1) << PIO_PDSR_P0_Pos)                   /* (PIO_PDSR) Output Data Status Mask */
#define PIO_PDSR_P0(value)                    (PIO_PDSR_P0_Msk & (_UINT32_(value) << PIO_PDSR_P0_Pos)) /* Assignment of value for P0 in the PIO_PDSR register */
#define PIO_PDSR_P1_Pos                       _UINT32_(1)                                          /* (PIO_PDSR) Output Data Status Position */
#define PIO_PDSR_P1_Msk                       (_UINT32_(0x1) << PIO_PDSR_P1_Pos)                   /* (PIO_PDSR) Output Data Status Mask */
#define PIO_PDSR_P1(value)                    (PIO_PDSR_P1_Msk & (_UINT32_(value) << PIO_PDSR_P1_Pos)) /* Assignment of value for P1 in the PIO_PDSR register */
#define PIO_PDSR_P2_Pos                       _UINT32_(2)                                          /* (PIO_PDSR) Output Data Status Position */
#define PIO_PDSR_P2_Msk                       (_UINT32_(0x1) << PIO_PDSR_P2_Pos)                   /* (PIO_PDSR) Output Data Status Mask */
#define PIO_PDSR_P2(value)                    (PIO_PDSR_P2_Msk & (_UINT32_(value) << PIO_PDSR_P2_Pos)) /* Assignment of value for P2 in the PIO_PDSR register */
#define PIO_PDSR_P3_Pos                       _UINT32_(3)                                          /* (PIO_PDSR) Output Data Status Position */
#define PIO_PDSR_P3_Msk                       (_UINT32_(0x1) << PIO_PDSR_P3_Pos)                   /* (PIO_PDSR) Output Data Status Mask */
#define PIO_PDSR_P3(value)                    (PIO_PDSR_P3_Msk & (_UINT32_(value) << PIO_PDSR_P3_Pos)) /* Assignment of value for P3 in the PIO_PDSR register */
#define PIO_PDSR_P4_Pos                       _UINT32_(4)                                          /* (PIO_PDSR) Output Data Status Position */
#define PIO_PDSR_P4_Msk                       (_UINT32_(0x1) << PIO_PDSR_P4_Pos)                   /* (PIO_PDSR) Output Data Status Mask */
#define PIO_PDSR_P4(value)                    (PIO_PDSR_P4_Msk & (_UINT32_(value) << PIO_PDSR_P4_Pos)) /* Assignment of value for P4 in the PIO_PDSR register */
#define PIO_PDSR_P5_Pos                       _UINT32_(5)                                          /* (PIO_PDSR) Output Data Status Position */
#define PIO_PDSR_P5_Msk                       (_UINT32_(0x1) << PIO_PDSR_P5_Pos)                   /* (PIO_PDSR) Output Data Status Mask */
#define PIO_PDSR_P5(value)                    (PIO_PDSR_P5_Msk & (_UINT32_(value) << PIO_PDSR_P5_Pos)) /* Assignment of value for P5 in the PIO_PDSR register */
#define PIO_PDSR_P6_Pos                       _UINT32_(6)                                          /* (PIO_PDSR) Output Data Status Position */
#define PIO_PDSR_P6_Msk                       (_UINT32_(0x1) << PIO_PDSR_P6_Pos)                   /* (PIO_PDSR) Output Data Status Mask */
#define PIO_PDSR_P6(value)                    (PIO_PDSR_P6_Msk & (_UINT32_(value) << PIO_PDSR_P6_Pos)) /* Assignment of value for P6 in the PIO_PDSR register */
#define PIO_PDSR_P7_Pos                       _UINT32_(7)                                          /* (PIO_PDSR) Output Data Status Position */
#define PIO_PDSR_P7_Msk                       (_UINT32_(0x1) << PIO_PDSR_P7_Pos)                   /* (PIO_PDSR) Output Data Status Mask */
#define PIO_PDSR_P7(value)                    (PIO_PDSR_P7_Msk & (_UINT32_(value) << PIO_PDSR_P7_Pos)) /* Assignment of value for P7 in the PIO_PDSR register */
#define PIO_PDSR_P8_Pos                       _UINT32_(8)                                          /* (PIO_PDSR) Output Data Status Position */
#define PIO_PDSR_P8_Msk                       (_UINT32_(0x1) << PIO_PDSR_P8_Pos)                   /* (PIO_PDSR) Output Data Status Mask */
#define PIO_PDSR_P8(value)                    (PIO_PDSR_P8_Msk & (_UINT32_(value) << PIO_PDSR_P8_Pos)) /* Assignment of value for P8 in the PIO_PDSR register */
#define PIO_PDSR_P9_Pos                       _UINT32_(9)                                          /* (PIO_PDSR) Output Data Status Position */
#define PIO_PDSR_P9_Msk                       (_UINT32_(0x1) << PIO_PDSR_P9_Pos)                   /* (PIO_PDSR) Output Data Status Mask */
#define PIO_PDSR_P9(value)                    (PIO_PDSR_P9_Msk & (_UINT32_(value) << PIO_PDSR_P9_Pos)) /* Assignment of value for P9 in the PIO_PDSR register */
#define PIO_PDSR_P10_Pos                      _UINT32_(10)                                         /* (PIO_PDSR) Output Data Status Position */
#define PIO_PDSR_P10_Msk                      (_UINT32_(0x1) << PIO_PDSR_P10_Pos)                  /* (PIO_PDSR) Output Data Status Mask */
#define PIO_PDSR_P10(value)                   (PIO_PDSR_P10_Msk & (_UINT32_(value) << PIO_PDSR_P10_Pos)) /* Assignment of value for P10 in the PIO_PDSR register */
#define PIO_PDSR_P11_Pos                      _UINT32_(11)                                         /* (PIO_PDSR) Output Data Status Position */
#define PIO_PDSR_P11_Msk                      (_UINT32_(0x1) << PIO_PDSR_P11_Pos)                  /* (PIO_PDSR) Output Data Status Mask */
#define PIO_PDSR_P11(value)                   (PIO_PDSR_P11_Msk & (_UINT32_(value) << PIO_PDSR_P11_Pos)) /* Assignment of value for P11 in the PIO_PDSR register */
#define PIO_PDSR_P12_Pos                      _UINT32_(12)                                         /* (PIO_PDSR) Output Data Status Position */
#define PIO_PDSR_P12_Msk                      (_UINT32_(0x1) << PIO_PDSR_P12_Pos)                  /* (PIO_PDSR) Output Data Status Mask */
#define PIO_PDSR_P12(value)                   (PIO_PDSR_P12_Msk & (_UINT32_(value) << PIO_PDSR_P12_Pos)) /* Assignment of value for P12 in the PIO_PDSR register */
#define PIO_PDSR_P13_Pos                      _UINT32_(13)                                         /* (PIO_PDSR) Output Data Status Position */
#define PIO_PDSR_P13_Msk                      (_UINT32_(0x1) << PIO_PDSR_P13_Pos)                  /* (PIO_PDSR) Output Data Status Mask */
#define PIO_PDSR_P13(value)                   (PIO_PDSR_P13_Msk & (_UINT32_(value) << PIO_PDSR_P13_Pos)) /* Assignment of value for P13 in the PIO_PDSR register */
#define PIO_PDSR_P14_Pos                      _UINT32_(14)                                         /* (PIO_PDSR) Output Data Status Position */
#define PIO_PDSR_P14_Msk                      (_UINT32_(0x1) << PIO_PDSR_P14_Pos)                  /* (PIO_PDSR) Output Data Status Mask */
#define PIO_PDSR_P14(value)                   (PIO_PDSR_P14_Msk & (_UINT32_(value) << PIO_PDSR_P14_Pos)) /* Assignment of value for P14 in the PIO_PDSR register */
#define PIO_PDSR_P15_Pos                      _UINT32_(15)                                         /* (PIO_PDSR) Output Data Status Position */
#define PIO_PDSR_P15_Msk                      (_UINT32_(0x1) << PIO_PDSR_P15_Pos)                  /* (PIO_PDSR) Output Data Status Mask */
#define PIO_PDSR_P15(value)                   (PIO_PDSR_P15_Msk & (_UINT32_(value) << PIO_PDSR_P15_Pos)) /* Assignment of value for P15 in the PIO_PDSR register */
#define PIO_PDSR_P16_Pos                      _UINT32_(16)                                         /* (PIO_PDSR) Output Data Status Position */
#define PIO_PDSR_P16_Msk                      (_UINT32_(0x1) << PIO_PDSR_P16_Pos)                  /* (PIO_PDSR) Output Data Status Mask */
#define PIO_PDSR_P16(value)                   (PIO_PDSR_P16_Msk & (_UINT32_(value) << PIO_PDSR_P16_Pos)) /* Assignment of value for P16 in the PIO_PDSR register */
#define PIO_PDSR_P17_Pos                      _UINT32_(17)                                         /* (PIO_PDSR) Output Data Status Position */
#define PIO_PDSR_P17_Msk                      (_UINT32_(0x1) << PIO_PDSR_P17_Pos)                  /* (PIO_PDSR) Output Data Status Mask */
#define PIO_PDSR_P17(value)                   (PIO_PDSR_P17_Msk & (_UINT32_(value) << PIO_PDSR_P17_Pos)) /* Assignment of value for P17 in the PIO_PDSR register */
#define PIO_PDSR_P18_Pos                      _UINT32_(18)                                         /* (PIO_PDSR) Output Data Status Position */
#define PIO_PDSR_P18_Msk                      (_UINT32_(0x1) << PIO_PDSR_P18_Pos)                  /* (PIO_PDSR) Output Data Status Mask */
#define PIO_PDSR_P18(value)                   (PIO_PDSR_P18_Msk & (_UINT32_(value) << PIO_PDSR_P18_Pos)) /* Assignment of value for P18 in the PIO_PDSR register */
#define PIO_PDSR_P19_Pos                      _UINT32_(19)                                         /* (PIO_PDSR) Output Data Status Position */
#define PIO_PDSR_P19_Msk                      (_UINT32_(0x1) << PIO_PDSR_P19_Pos)                  /* (PIO_PDSR) Output Data Status Mask */
#define PIO_PDSR_P19(value)                   (PIO_PDSR_P19_Msk & (_UINT32_(value) << PIO_PDSR_P19_Pos)) /* Assignment of value for P19 in the PIO_PDSR register */
#define PIO_PDSR_P20_Pos                      _UINT32_(20)                                         /* (PIO_PDSR) Output Data Status Position */
#define PIO_PDSR_P20_Msk                      (_UINT32_(0x1) << PIO_PDSR_P20_Pos)                  /* (PIO_PDSR) Output Data Status Mask */
#define PIO_PDSR_P20(value)                   (PIO_PDSR_P20_Msk & (_UINT32_(value) << PIO_PDSR_P20_Pos)) /* Assignment of value for P20 in the PIO_PDSR register */
#define PIO_PDSR_P21_Pos                      _UINT32_(21)                                         /* (PIO_PDSR) Output Data Status Position */
#define PIO_PDSR_P21_Msk                      (_UINT32_(0x1) << PIO_PDSR_P21_Pos)                  /* (PIO_PDSR) Output Data Status Mask */
#define PIO_PDSR_P21(value)                   (PIO_PDSR_P21_Msk & (_UINT32_(value) << PIO_PDSR_P21_Pos)) /* Assignment of value for P21 in the PIO_PDSR register */
#define PIO_PDSR_P22_Pos                      _UINT32_(22)                                         /* (PIO_PDSR) Output Data Status Position */
#define PIO_PDSR_P22_Msk                      (_UINT32_(0x1) << PIO_PDSR_P22_Pos)                  /* (PIO_PDSR) Output Data Status Mask */
#define PIO_PDSR_P22(value)                   (PIO_PDSR_P22_Msk & (_UINT32_(value) << PIO_PDSR_P22_Pos)) /* Assignment of value for P22 in the PIO_PDSR register */
#define PIO_PDSR_P23_Pos                      _UINT32_(23)                                         /* (PIO_PDSR) Output Data Status Position */
#define PIO_PDSR_P23_Msk                      (_UINT32_(0x1) << PIO_PDSR_P23_Pos)                  /* (PIO_PDSR) Output Data Status Mask */
#define PIO_PDSR_P23(value)                   (PIO_PDSR_P23_Msk & (_UINT32_(value) << PIO_PDSR_P23_Pos)) /* Assignment of value for P23 in the PIO_PDSR register */
#define PIO_PDSR_P24_Pos                      _UINT32_(24)                                         /* (PIO_PDSR) Output Data Status Position */
#define PIO_PDSR_P24_Msk                      (_UINT32_(0x1) << PIO_PDSR_P24_Pos)                  /* (PIO_PDSR) Output Data Status Mask */
#define PIO_PDSR_P24(value)                   (PIO_PDSR_P24_Msk & (_UINT32_(value) << PIO_PDSR_P24_Pos)) /* Assignment of value for P24 in the PIO_PDSR register */
#define PIO_PDSR_P25_Pos                      _UINT32_(25)                                         /* (PIO_PDSR) Output Data Status Position */
#define PIO_PDSR_P25_Msk                      (_UINT32_(0x1) << PIO_PDSR_P25_Pos)                  /* (PIO_PDSR) Output Data Status Mask */
#define PIO_PDSR_P25(value)                   (PIO_PDSR_P25_Msk & (_UINT32_(value) << PIO_PDSR_P25_Pos)) /* Assignment of value for P25 in the PIO_PDSR register */
#define PIO_PDSR_P26_Pos                      _UINT32_(26)                                         /* (PIO_PDSR) Output Data Status Position */
#define PIO_PDSR_P26_Msk                      (_UINT32_(0x1) << PIO_PDSR_P26_Pos)                  /* (PIO_PDSR) Output Data Status Mask */
#define PIO_PDSR_P26(value)                   (PIO_PDSR_P26_Msk & (_UINT32_(value) << PIO_PDSR_P26_Pos)) /* Assignment of value for P26 in the PIO_PDSR register */
#define PIO_PDSR_P27_Pos                      _UINT32_(27)                                         /* (PIO_PDSR) Output Data Status Position */
#define PIO_PDSR_P27_Msk                      (_UINT32_(0x1) << PIO_PDSR_P27_Pos)                  /* (PIO_PDSR) Output Data Status Mask */
#define PIO_PDSR_P27(value)                   (PIO_PDSR_P27_Msk & (_UINT32_(value) << PIO_PDSR_P27_Pos)) /* Assignment of value for P27 in the PIO_PDSR register */
#define PIO_PDSR_P28_Pos                      _UINT32_(28)                                         /* (PIO_PDSR) Output Data Status Position */
#define PIO_PDSR_P28_Msk                      (_UINT32_(0x1) << PIO_PDSR_P28_Pos)                  /* (PIO_PDSR) Output Data Status Mask */
#define PIO_PDSR_P28(value)                   (PIO_PDSR_P28_Msk & (_UINT32_(value) << PIO_PDSR_P28_Pos)) /* Assignment of value for P28 in the PIO_PDSR register */
#define PIO_PDSR_P29_Pos                      _UINT32_(29)                                         /* (PIO_PDSR) Output Data Status Position */
#define PIO_PDSR_P29_Msk                      (_UINT32_(0x1) << PIO_PDSR_P29_Pos)                  /* (PIO_PDSR) Output Data Status Mask */
#define PIO_PDSR_P29(value)                   (PIO_PDSR_P29_Msk & (_UINT32_(value) << PIO_PDSR_P29_Pos)) /* Assignment of value for P29 in the PIO_PDSR register */
#define PIO_PDSR_P30_Pos                      _UINT32_(30)                                         /* (PIO_PDSR) Output Data Status Position */
#define PIO_PDSR_P30_Msk                      (_UINT32_(0x1) << PIO_PDSR_P30_Pos)                  /* (PIO_PDSR) Output Data Status Mask */
#define PIO_PDSR_P30(value)                   (PIO_PDSR_P30_Msk & (_UINT32_(value) << PIO_PDSR_P30_Pos)) /* Assignment of value for P30 in the PIO_PDSR register */
#define PIO_PDSR_P31_Pos                      _UINT32_(31)                                         /* (PIO_PDSR) Output Data Status Position */
#define PIO_PDSR_P31_Msk                      (_UINT32_(0x1) << PIO_PDSR_P31_Pos)                  /* (PIO_PDSR) Output Data Status Mask */
#define PIO_PDSR_P31(value)                   (PIO_PDSR_P31_Msk & (_UINT32_(value) << PIO_PDSR_P31_Pos)) /* Assignment of value for P31 in the PIO_PDSR register */
#define PIO_PDSR_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (PIO_PDSR) Register Mask  */

#define PIO_PDSR_P_Pos                        _UINT32_(0)                                          /* (PIO_PDSR Position) Output Data Status */
#define PIO_PDSR_P_Msk                        (_UINT32_(0xFFFFFFFF) << PIO_PDSR_P_Pos)             /* (PIO_PDSR Mask) P */
#define PIO_PDSR_P(value)                     (PIO_PDSR_P_Msk & (_UINT32_(value) << PIO_PDSR_P_Pos)) 

/* -------- PIO_IER : (PIO Offset: 0x40) ( /W 32) Interrupt Enable Register -------- */
#define PIO_IER_P0_Pos                        _UINT32_(0)                                          /* (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P0_Msk                        (_UINT32_(0x1) << PIO_IER_P0_Pos)                    /* (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P0(value)                     (PIO_IER_P0_Msk & (_UINT32_(value) << PIO_IER_P0_Pos)) /* Assignment of value for P0 in the PIO_IER register */
#define PIO_IER_P1_Pos                        _UINT32_(1)                                          /* (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P1_Msk                        (_UINT32_(0x1) << PIO_IER_P1_Pos)                    /* (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P1(value)                     (PIO_IER_P1_Msk & (_UINT32_(value) << PIO_IER_P1_Pos)) /* Assignment of value for P1 in the PIO_IER register */
#define PIO_IER_P2_Pos                        _UINT32_(2)                                          /* (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P2_Msk                        (_UINT32_(0x1) << PIO_IER_P2_Pos)                    /* (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P2(value)                     (PIO_IER_P2_Msk & (_UINT32_(value) << PIO_IER_P2_Pos)) /* Assignment of value for P2 in the PIO_IER register */
#define PIO_IER_P3_Pos                        _UINT32_(3)                                          /* (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P3_Msk                        (_UINT32_(0x1) << PIO_IER_P3_Pos)                    /* (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P3(value)                     (PIO_IER_P3_Msk & (_UINT32_(value) << PIO_IER_P3_Pos)) /* Assignment of value for P3 in the PIO_IER register */
#define PIO_IER_P4_Pos                        _UINT32_(4)                                          /* (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P4_Msk                        (_UINT32_(0x1) << PIO_IER_P4_Pos)                    /* (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P4(value)                     (PIO_IER_P4_Msk & (_UINT32_(value) << PIO_IER_P4_Pos)) /* Assignment of value for P4 in the PIO_IER register */
#define PIO_IER_P5_Pos                        _UINT32_(5)                                          /* (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P5_Msk                        (_UINT32_(0x1) << PIO_IER_P5_Pos)                    /* (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P5(value)                     (PIO_IER_P5_Msk & (_UINT32_(value) << PIO_IER_P5_Pos)) /* Assignment of value for P5 in the PIO_IER register */
#define PIO_IER_P6_Pos                        _UINT32_(6)                                          /* (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P6_Msk                        (_UINT32_(0x1) << PIO_IER_P6_Pos)                    /* (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P6(value)                     (PIO_IER_P6_Msk & (_UINT32_(value) << PIO_IER_P6_Pos)) /* Assignment of value for P6 in the PIO_IER register */
#define PIO_IER_P7_Pos                        _UINT32_(7)                                          /* (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P7_Msk                        (_UINT32_(0x1) << PIO_IER_P7_Pos)                    /* (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P7(value)                     (PIO_IER_P7_Msk & (_UINT32_(value) << PIO_IER_P7_Pos)) /* Assignment of value for P7 in the PIO_IER register */
#define PIO_IER_P8_Pos                        _UINT32_(8)                                          /* (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P8_Msk                        (_UINT32_(0x1) << PIO_IER_P8_Pos)                    /* (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P8(value)                     (PIO_IER_P8_Msk & (_UINT32_(value) << PIO_IER_P8_Pos)) /* Assignment of value for P8 in the PIO_IER register */
#define PIO_IER_P9_Pos                        _UINT32_(9)                                          /* (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P9_Msk                        (_UINT32_(0x1) << PIO_IER_P9_Pos)                    /* (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P9(value)                     (PIO_IER_P9_Msk & (_UINT32_(value) << PIO_IER_P9_Pos)) /* Assignment of value for P9 in the PIO_IER register */
#define PIO_IER_P10_Pos                       _UINT32_(10)                                         /* (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P10_Msk                       (_UINT32_(0x1) << PIO_IER_P10_Pos)                   /* (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P10(value)                    (PIO_IER_P10_Msk & (_UINT32_(value) << PIO_IER_P10_Pos)) /* Assignment of value for P10 in the PIO_IER register */
#define PIO_IER_P11_Pos                       _UINT32_(11)                                         /* (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P11_Msk                       (_UINT32_(0x1) << PIO_IER_P11_Pos)                   /* (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P11(value)                    (PIO_IER_P11_Msk & (_UINT32_(value) << PIO_IER_P11_Pos)) /* Assignment of value for P11 in the PIO_IER register */
#define PIO_IER_P12_Pos                       _UINT32_(12)                                         /* (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P12_Msk                       (_UINT32_(0x1) << PIO_IER_P12_Pos)                   /* (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P12(value)                    (PIO_IER_P12_Msk & (_UINT32_(value) << PIO_IER_P12_Pos)) /* Assignment of value for P12 in the PIO_IER register */
#define PIO_IER_P13_Pos                       _UINT32_(13)                                         /* (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P13_Msk                       (_UINT32_(0x1) << PIO_IER_P13_Pos)                   /* (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P13(value)                    (PIO_IER_P13_Msk & (_UINT32_(value) << PIO_IER_P13_Pos)) /* Assignment of value for P13 in the PIO_IER register */
#define PIO_IER_P14_Pos                       _UINT32_(14)                                         /* (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P14_Msk                       (_UINT32_(0x1) << PIO_IER_P14_Pos)                   /* (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P14(value)                    (PIO_IER_P14_Msk & (_UINT32_(value) << PIO_IER_P14_Pos)) /* Assignment of value for P14 in the PIO_IER register */
#define PIO_IER_P15_Pos                       _UINT32_(15)                                         /* (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P15_Msk                       (_UINT32_(0x1) << PIO_IER_P15_Pos)                   /* (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P15(value)                    (PIO_IER_P15_Msk & (_UINT32_(value) << PIO_IER_P15_Pos)) /* Assignment of value for P15 in the PIO_IER register */
#define PIO_IER_P16_Pos                       _UINT32_(16)                                         /* (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P16_Msk                       (_UINT32_(0x1) << PIO_IER_P16_Pos)                   /* (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P16(value)                    (PIO_IER_P16_Msk & (_UINT32_(value) << PIO_IER_P16_Pos)) /* Assignment of value for P16 in the PIO_IER register */
#define PIO_IER_P17_Pos                       _UINT32_(17)                                         /* (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P17_Msk                       (_UINT32_(0x1) << PIO_IER_P17_Pos)                   /* (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P17(value)                    (PIO_IER_P17_Msk & (_UINT32_(value) << PIO_IER_P17_Pos)) /* Assignment of value for P17 in the PIO_IER register */
#define PIO_IER_P18_Pos                       _UINT32_(18)                                         /* (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P18_Msk                       (_UINT32_(0x1) << PIO_IER_P18_Pos)                   /* (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P18(value)                    (PIO_IER_P18_Msk & (_UINT32_(value) << PIO_IER_P18_Pos)) /* Assignment of value for P18 in the PIO_IER register */
#define PIO_IER_P19_Pos                       _UINT32_(19)                                         /* (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P19_Msk                       (_UINT32_(0x1) << PIO_IER_P19_Pos)                   /* (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P19(value)                    (PIO_IER_P19_Msk & (_UINT32_(value) << PIO_IER_P19_Pos)) /* Assignment of value for P19 in the PIO_IER register */
#define PIO_IER_P20_Pos                       _UINT32_(20)                                         /* (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P20_Msk                       (_UINT32_(0x1) << PIO_IER_P20_Pos)                   /* (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P20(value)                    (PIO_IER_P20_Msk & (_UINT32_(value) << PIO_IER_P20_Pos)) /* Assignment of value for P20 in the PIO_IER register */
#define PIO_IER_P21_Pos                       _UINT32_(21)                                         /* (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P21_Msk                       (_UINT32_(0x1) << PIO_IER_P21_Pos)                   /* (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P21(value)                    (PIO_IER_P21_Msk & (_UINT32_(value) << PIO_IER_P21_Pos)) /* Assignment of value for P21 in the PIO_IER register */
#define PIO_IER_P22_Pos                       _UINT32_(22)                                         /* (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P22_Msk                       (_UINT32_(0x1) << PIO_IER_P22_Pos)                   /* (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P22(value)                    (PIO_IER_P22_Msk & (_UINT32_(value) << PIO_IER_P22_Pos)) /* Assignment of value for P22 in the PIO_IER register */
#define PIO_IER_P23_Pos                       _UINT32_(23)                                         /* (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P23_Msk                       (_UINT32_(0x1) << PIO_IER_P23_Pos)                   /* (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P23(value)                    (PIO_IER_P23_Msk & (_UINT32_(value) << PIO_IER_P23_Pos)) /* Assignment of value for P23 in the PIO_IER register */
#define PIO_IER_P24_Pos                       _UINT32_(24)                                         /* (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P24_Msk                       (_UINT32_(0x1) << PIO_IER_P24_Pos)                   /* (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P24(value)                    (PIO_IER_P24_Msk & (_UINT32_(value) << PIO_IER_P24_Pos)) /* Assignment of value for P24 in the PIO_IER register */
#define PIO_IER_P25_Pos                       _UINT32_(25)                                         /* (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P25_Msk                       (_UINT32_(0x1) << PIO_IER_P25_Pos)                   /* (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P25(value)                    (PIO_IER_P25_Msk & (_UINT32_(value) << PIO_IER_P25_Pos)) /* Assignment of value for P25 in the PIO_IER register */
#define PIO_IER_P26_Pos                       _UINT32_(26)                                         /* (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P26_Msk                       (_UINT32_(0x1) << PIO_IER_P26_Pos)                   /* (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P26(value)                    (PIO_IER_P26_Msk & (_UINT32_(value) << PIO_IER_P26_Pos)) /* Assignment of value for P26 in the PIO_IER register */
#define PIO_IER_P27_Pos                       _UINT32_(27)                                         /* (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P27_Msk                       (_UINT32_(0x1) << PIO_IER_P27_Pos)                   /* (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P27(value)                    (PIO_IER_P27_Msk & (_UINT32_(value) << PIO_IER_P27_Pos)) /* Assignment of value for P27 in the PIO_IER register */
#define PIO_IER_P28_Pos                       _UINT32_(28)                                         /* (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P28_Msk                       (_UINT32_(0x1) << PIO_IER_P28_Pos)                   /* (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P28(value)                    (PIO_IER_P28_Msk & (_UINT32_(value) << PIO_IER_P28_Pos)) /* Assignment of value for P28 in the PIO_IER register */
#define PIO_IER_P29_Pos                       _UINT32_(29)                                         /* (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P29_Msk                       (_UINT32_(0x1) << PIO_IER_P29_Pos)                   /* (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P29(value)                    (PIO_IER_P29_Msk & (_UINT32_(value) << PIO_IER_P29_Pos)) /* Assignment of value for P29 in the PIO_IER register */
#define PIO_IER_P30_Pos                       _UINT32_(30)                                         /* (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P30_Msk                       (_UINT32_(0x1) << PIO_IER_P30_Pos)                   /* (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P30(value)                    (PIO_IER_P30_Msk & (_UINT32_(value) << PIO_IER_P30_Pos)) /* Assignment of value for P30 in the PIO_IER register */
#define PIO_IER_P31_Pos                       _UINT32_(31)                                         /* (PIO_IER) Input Change Interrupt Enable Position */
#define PIO_IER_P31_Msk                       (_UINT32_(0x1) << PIO_IER_P31_Pos)                   /* (PIO_IER) Input Change Interrupt Enable Mask */
#define PIO_IER_P31(value)                    (PIO_IER_P31_Msk & (_UINT32_(value) << PIO_IER_P31_Pos)) /* Assignment of value for P31 in the PIO_IER register */
#define PIO_IER_Msk                           _UINT32_(0xFFFFFFFF)                                 /* (PIO_IER) Register Mask  */

#define PIO_IER_P_Pos                         _UINT32_(0)                                          /* (PIO_IER Position) Input Change Interrupt Enable */
#define PIO_IER_P_Msk                         (_UINT32_(0xFFFFFFFF) << PIO_IER_P_Pos)              /* (PIO_IER Mask) P */
#define PIO_IER_P(value)                      (PIO_IER_P_Msk & (_UINT32_(value) << PIO_IER_P_Pos)) 

/* -------- PIO_IDR : (PIO Offset: 0x44) ( /W 32) Interrupt Disable Register -------- */
#define PIO_IDR_P0_Pos                        _UINT32_(0)                                          /* (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P0_Msk                        (_UINT32_(0x1) << PIO_IDR_P0_Pos)                    /* (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P0(value)                     (PIO_IDR_P0_Msk & (_UINT32_(value) << PIO_IDR_P0_Pos)) /* Assignment of value for P0 in the PIO_IDR register */
#define PIO_IDR_P1_Pos                        _UINT32_(1)                                          /* (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P1_Msk                        (_UINT32_(0x1) << PIO_IDR_P1_Pos)                    /* (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P1(value)                     (PIO_IDR_P1_Msk & (_UINT32_(value) << PIO_IDR_P1_Pos)) /* Assignment of value for P1 in the PIO_IDR register */
#define PIO_IDR_P2_Pos                        _UINT32_(2)                                          /* (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P2_Msk                        (_UINT32_(0x1) << PIO_IDR_P2_Pos)                    /* (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P2(value)                     (PIO_IDR_P2_Msk & (_UINT32_(value) << PIO_IDR_P2_Pos)) /* Assignment of value for P2 in the PIO_IDR register */
#define PIO_IDR_P3_Pos                        _UINT32_(3)                                          /* (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P3_Msk                        (_UINT32_(0x1) << PIO_IDR_P3_Pos)                    /* (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P3(value)                     (PIO_IDR_P3_Msk & (_UINT32_(value) << PIO_IDR_P3_Pos)) /* Assignment of value for P3 in the PIO_IDR register */
#define PIO_IDR_P4_Pos                        _UINT32_(4)                                          /* (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P4_Msk                        (_UINT32_(0x1) << PIO_IDR_P4_Pos)                    /* (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P4(value)                     (PIO_IDR_P4_Msk & (_UINT32_(value) << PIO_IDR_P4_Pos)) /* Assignment of value for P4 in the PIO_IDR register */
#define PIO_IDR_P5_Pos                        _UINT32_(5)                                          /* (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P5_Msk                        (_UINT32_(0x1) << PIO_IDR_P5_Pos)                    /* (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P5(value)                     (PIO_IDR_P5_Msk & (_UINT32_(value) << PIO_IDR_P5_Pos)) /* Assignment of value for P5 in the PIO_IDR register */
#define PIO_IDR_P6_Pos                        _UINT32_(6)                                          /* (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P6_Msk                        (_UINT32_(0x1) << PIO_IDR_P6_Pos)                    /* (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P6(value)                     (PIO_IDR_P6_Msk & (_UINT32_(value) << PIO_IDR_P6_Pos)) /* Assignment of value for P6 in the PIO_IDR register */
#define PIO_IDR_P7_Pos                        _UINT32_(7)                                          /* (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P7_Msk                        (_UINT32_(0x1) << PIO_IDR_P7_Pos)                    /* (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P7(value)                     (PIO_IDR_P7_Msk & (_UINT32_(value) << PIO_IDR_P7_Pos)) /* Assignment of value for P7 in the PIO_IDR register */
#define PIO_IDR_P8_Pos                        _UINT32_(8)                                          /* (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P8_Msk                        (_UINT32_(0x1) << PIO_IDR_P8_Pos)                    /* (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P8(value)                     (PIO_IDR_P8_Msk & (_UINT32_(value) << PIO_IDR_P8_Pos)) /* Assignment of value for P8 in the PIO_IDR register */
#define PIO_IDR_P9_Pos                        _UINT32_(9)                                          /* (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P9_Msk                        (_UINT32_(0x1) << PIO_IDR_P9_Pos)                    /* (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P9(value)                     (PIO_IDR_P9_Msk & (_UINT32_(value) << PIO_IDR_P9_Pos)) /* Assignment of value for P9 in the PIO_IDR register */
#define PIO_IDR_P10_Pos                       _UINT32_(10)                                         /* (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P10_Msk                       (_UINT32_(0x1) << PIO_IDR_P10_Pos)                   /* (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P10(value)                    (PIO_IDR_P10_Msk & (_UINT32_(value) << PIO_IDR_P10_Pos)) /* Assignment of value for P10 in the PIO_IDR register */
#define PIO_IDR_P11_Pos                       _UINT32_(11)                                         /* (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P11_Msk                       (_UINT32_(0x1) << PIO_IDR_P11_Pos)                   /* (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P11(value)                    (PIO_IDR_P11_Msk & (_UINT32_(value) << PIO_IDR_P11_Pos)) /* Assignment of value for P11 in the PIO_IDR register */
#define PIO_IDR_P12_Pos                       _UINT32_(12)                                         /* (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P12_Msk                       (_UINT32_(0x1) << PIO_IDR_P12_Pos)                   /* (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P12(value)                    (PIO_IDR_P12_Msk & (_UINT32_(value) << PIO_IDR_P12_Pos)) /* Assignment of value for P12 in the PIO_IDR register */
#define PIO_IDR_P13_Pos                       _UINT32_(13)                                         /* (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P13_Msk                       (_UINT32_(0x1) << PIO_IDR_P13_Pos)                   /* (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P13(value)                    (PIO_IDR_P13_Msk & (_UINT32_(value) << PIO_IDR_P13_Pos)) /* Assignment of value for P13 in the PIO_IDR register */
#define PIO_IDR_P14_Pos                       _UINT32_(14)                                         /* (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P14_Msk                       (_UINT32_(0x1) << PIO_IDR_P14_Pos)                   /* (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P14(value)                    (PIO_IDR_P14_Msk & (_UINT32_(value) << PIO_IDR_P14_Pos)) /* Assignment of value for P14 in the PIO_IDR register */
#define PIO_IDR_P15_Pos                       _UINT32_(15)                                         /* (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P15_Msk                       (_UINT32_(0x1) << PIO_IDR_P15_Pos)                   /* (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P15(value)                    (PIO_IDR_P15_Msk & (_UINT32_(value) << PIO_IDR_P15_Pos)) /* Assignment of value for P15 in the PIO_IDR register */
#define PIO_IDR_P16_Pos                       _UINT32_(16)                                         /* (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P16_Msk                       (_UINT32_(0x1) << PIO_IDR_P16_Pos)                   /* (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P16(value)                    (PIO_IDR_P16_Msk & (_UINT32_(value) << PIO_IDR_P16_Pos)) /* Assignment of value for P16 in the PIO_IDR register */
#define PIO_IDR_P17_Pos                       _UINT32_(17)                                         /* (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P17_Msk                       (_UINT32_(0x1) << PIO_IDR_P17_Pos)                   /* (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P17(value)                    (PIO_IDR_P17_Msk & (_UINT32_(value) << PIO_IDR_P17_Pos)) /* Assignment of value for P17 in the PIO_IDR register */
#define PIO_IDR_P18_Pos                       _UINT32_(18)                                         /* (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P18_Msk                       (_UINT32_(0x1) << PIO_IDR_P18_Pos)                   /* (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P18(value)                    (PIO_IDR_P18_Msk & (_UINT32_(value) << PIO_IDR_P18_Pos)) /* Assignment of value for P18 in the PIO_IDR register */
#define PIO_IDR_P19_Pos                       _UINT32_(19)                                         /* (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P19_Msk                       (_UINT32_(0x1) << PIO_IDR_P19_Pos)                   /* (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P19(value)                    (PIO_IDR_P19_Msk & (_UINT32_(value) << PIO_IDR_P19_Pos)) /* Assignment of value for P19 in the PIO_IDR register */
#define PIO_IDR_P20_Pos                       _UINT32_(20)                                         /* (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P20_Msk                       (_UINT32_(0x1) << PIO_IDR_P20_Pos)                   /* (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P20(value)                    (PIO_IDR_P20_Msk & (_UINT32_(value) << PIO_IDR_P20_Pos)) /* Assignment of value for P20 in the PIO_IDR register */
#define PIO_IDR_P21_Pos                       _UINT32_(21)                                         /* (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P21_Msk                       (_UINT32_(0x1) << PIO_IDR_P21_Pos)                   /* (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P21(value)                    (PIO_IDR_P21_Msk & (_UINT32_(value) << PIO_IDR_P21_Pos)) /* Assignment of value for P21 in the PIO_IDR register */
#define PIO_IDR_P22_Pos                       _UINT32_(22)                                         /* (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P22_Msk                       (_UINT32_(0x1) << PIO_IDR_P22_Pos)                   /* (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P22(value)                    (PIO_IDR_P22_Msk & (_UINT32_(value) << PIO_IDR_P22_Pos)) /* Assignment of value for P22 in the PIO_IDR register */
#define PIO_IDR_P23_Pos                       _UINT32_(23)                                         /* (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P23_Msk                       (_UINT32_(0x1) << PIO_IDR_P23_Pos)                   /* (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P23(value)                    (PIO_IDR_P23_Msk & (_UINT32_(value) << PIO_IDR_P23_Pos)) /* Assignment of value for P23 in the PIO_IDR register */
#define PIO_IDR_P24_Pos                       _UINT32_(24)                                         /* (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P24_Msk                       (_UINT32_(0x1) << PIO_IDR_P24_Pos)                   /* (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P24(value)                    (PIO_IDR_P24_Msk & (_UINT32_(value) << PIO_IDR_P24_Pos)) /* Assignment of value for P24 in the PIO_IDR register */
#define PIO_IDR_P25_Pos                       _UINT32_(25)                                         /* (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P25_Msk                       (_UINT32_(0x1) << PIO_IDR_P25_Pos)                   /* (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P25(value)                    (PIO_IDR_P25_Msk & (_UINT32_(value) << PIO_IDR_P25_Pos)) /* Assignment of value for P25 in the PIO_IDR register */
#define PIO_IDR_P26_Pos                       _UINT32_(26)                                         /* (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P26_Msk                       (_UINT32_(0x1) << PIO_IDR_P26_Pos)                   /* (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P26(value)                    (PIO_IDR_P26_Msk & (_UINT32_(value) << PIO_IDR_P26_Pos)) /* Assignment of value for P26 in the PIO_IDR register */
#define PIO_IDR_P27_Pos                       _UINT32_(27)                                         /* (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P27_Msk                       (_UINT32_(0x1) << PIO_IDR_P27_Pos)                   /* (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P27(value)                    (PIO_IDR_P27_Msk & (_UINT32_(value) << PIO_IDR_P27_Pos)) /* Assignment of value for P27 in the PIO_IDR register */
#define PIO_IDR_P28_Pos                       _UINT32_(28)                                         /* (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P28_Msk                       (_UINT32_(0x1) << PIO_IDR_P28_Pos)                   /* (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P28(value)                    (PIO_IDR_P28_Msk & (_UINT32_(value) << PIO_IDR_P28_Pos)) /* Assignment of value for P28 in the PIO_IDR register */
#define PIO_IDR_P29_Pos                       _UINT32_(29)                                         /* (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P29_Msk                       (_UINT32_(0x1) << PIO_IDR_P29_Pos)                   /* (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P29(value)                    (PIO_IDR_P29_Msk & (_UINT32_(value) << PIO_IDR_P29_Pos)) /* Assignment of value for P29 in the PIO_IDR register */
#define PIO_IDR_P30_Pos                       _UINT32_(30)                                         /* (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P30_Msk                       (_UINT32_(0x1) << PIO_IDR_P30_Pos)                   /* (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P30(value)                    (PIO_IDR_P30_Msk & (_UINT32_(value) << PIO_IDR_P30_Pos)) /* Assignment of value for P30 in the PIO_IDR register */
#define PIO_IDR_P31_Pos                       _UINT32_(31)                                         /* (PIO_IDR) Input Change Interrupt Disable Position */
#define PIO_IDR_P31_Msk                       (_UINT32_(0x1) << PIO_IDR_P31_Pos)                   /* (PIO_IDR) Input Change Interrupt Disable Mask */
#define PIO_IDR_P31(value)                    (PIO_IDR_P31_Msk & (_UINT32_(value) << PIO_IDR_P31_Pos)) /* Assignment of value for P31 in the PIO_IDR register */
#define PIO_IDR_Msk                           _UINT32_(0xFFFFFFFF)                                 /* (PIO_IDR) Register Mask  */

#define PIO_IDR_P_Pos                         _UINT32_(0)                                          /* (PIO_IDR Position) Input Change Interrupt Disable */
#define PIO_IDR_P_Msk                         (_UINT32_(0xFFFFFFFF) << PIO_IDR_P_Pos)              /* (PIO_IDR Mask) P */
#define PIO_IDR_P(value)                      (PIO_IDR_P_Msk & (_UINT32_(value) << PIO_IDR_P_Pos)) 

/* -------- PIO_IMR : (PIO Offset: 0x48) ( R/ 32) Interrupt Mask Register -------- */
#define PIO_IMR_P0_Pos                        _UINT32_(0)                                          /* (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P0_Msk                        (_UINT32_(0x1) << PIO_IMR_P0_Pos)                    /* (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P0(value)                     (PIO_IMR_P0_Msk & (_UINT32_(value) << PIO_IMR_P0_Pos)) /* Assignment of value for P0 in the PIO_IMR register */
#define PIO_IMR_P1_Pos                        _UINT32_(1)                                          /* (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P1_Msk                        (_UINT32_(0x1) << PIO_IMR_P1_Pos)                    /* (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P1(value)                     (PIO_IMR_P1_Msk & (_UINT32_(value) << PIO_IMR_P1_Pos)) /* Assignment of value for P1 in the PIO_IMR register */
#define PIO_IMR_P2_Pos                        _UINT32_(2)                                          /* (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P2_Msk                        (_UINT32_(0x1) << PIO_IMR_P2_Pos)                    /* (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P2(value)                     (PIO_IMR_P2_Msk & (_UINT32_(value) << PIO_IMR_P2_Pos)) /* Assignment of value for P2 in the PIO_IMR register */
#define PIO_IMR_P3_Pos                        _UINT32_(3)                                          /* (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P3_Msk                        (_UINT32_(0x1) << PIO_IMR_P3_Pos)                    /* (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P3(value)                     (PIO_IMR_P3_Msk & (_UINT32_(value) << PIO_IMR_P3_Pos)) /* Assignment of value for P3 in the PIO_IMR register */
#define PIO_IMR_P4_Pos                        _UINT32_(4)                                          /* (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P4_Msk                        (_UINT32_(0x1) << PIO_IMR_P4_Pos)                    /* (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P4(value)                     (PIO_IMR_P4_Msk & (_UINT32_(value) << PIO_IMR_P4_Pos)) /* Assignment of value for P4 in the PIO_IMR register */
#define PIO_IMR_P5_Pos                        _UINT32_(5)                                          /* (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P5_Msk                        (_UINT32_(0x1) << PIO_IMR_P5_Pos)                    /* (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P5(value)                     (PIO_IMR_P5_Msk & (_UINT32_(value) << PIO_IMR_P5_Pos)) /* Assignment of value for P5 in the PIO_IMR register */
#define PIO_IMR_P6_Pos                        _UINT32_(6)                                          /* (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P6_Msk                        (_UINT32_(0x1) << PIO_IMR_P6_Pos)                    /* (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P6(value)                     (PIO_IMR_P6_Msk & (_UINT32_(value) << PIO_IMR_P6_Pos)) /* Assignment of value for P6 in the PIO_IMR register */
#define PIO_IMR_P7_Pos                        _UINT32_(7)                                          /* (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P7_Msk                        (_UINT32_(0x1) << PIO_IMR_P7_Pos)                    /* (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P7(value)                     (PIO_IMR_P7_Msk & (_UINT32_(value) << PIO_IMR_P7_Pos)) /* Assignment of value for P7 in the PIO_IMR register */
#define PIO_IMR_P8_Pos                        _UINT32_(8)                                          /* (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P8_Msk                        (_UINT32_(0x1) << PIO_IMR_P8_Pos)                    /* (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P8(value)                     (PIO_IMR_P8_Msk & (_UINT32_(value) << PIO_IMR_P8_Pos)) /* Assignment of value for P8 in the PIO_IMR register */
#define PIO_IMR_P9_Pos                        _UINT32_(9)                                          /* (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P9_Msk                        (_UINT32_(0x1) << PIO_IMR_P9_Pos)                    /* (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P9(value)                     (PIO_IMR_P9_Msk & (_UINT32_(value) << PIO_IMR_P9_Pos)) /* Assignment of value for P9 in the PIO_IMR register */
#define PIO_IMR_P10_Pos                       _UINT32_(10)                                         /* (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P10_Msk                       (_UINT32_(0x1) << PIO_IMR_P10_Pos)                   /* (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P10(value)                    (PIO_IMR_P10_Msk & (_UINT32_(value) << PIO_IMR_P10_Pos)) /* Assignment of value for P10 in the PIO_IMR register */
#define PIO_IMR_P11_Pos                       _UINT32_(11)                                         /* (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P11_Msk                       (_UINT32_(0x1) << PIO_IMR_P11_Pos)                   /* (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P11(value)                    (PIO_IMR_P11_Msk & (_UINT32_(value) << PIO_IMR_P11_Pos)) /* Assignment of value for P11 in the PIO_IMR register */
#define PIO_IMR_P12_Pos                       _UINT32_(12)                                         /* (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P12_Msk                       (_UINT32_(0x1) << PIO_IMR_P12_Pos)                   /* (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P12(value)                    (PIO_IMR_P12_Msk & (_UINT32_(value) << PIO_IMR_P12_Pos)) /* Assignment of value for P12 in the PIO_IMR register */
#define PIO_IMR_P13_Pos                       _UINT32_(13)                                         /* (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P13_Msk                       (_UINT32_(0x1) << PIO_IMR_P13_Pos)                   /* (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P13(value)                    (PIO_IMR_P13_Msk & (_UINT32_(value) << PIO_IMR_P13_Pos)) /* Assignment of value for P13 in the PIO_IMR register */
#define PIO_IMR_P14_Pos                       _UINT32_(14)                                         /* (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P14_Msk                       (_UINT32_(0x1) << PIO_IMR_P14_Pos)                   /* (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P14(value)                    (PIO_IMR_P14_Msk & (_UINT32_(value) << PIO_IMR_P14_Pos)) /* Assignment of value for P14 in the PIO_IMR register */
#define PIO_IMR_P15_Pos                       _UINT32_(15)                                         /* (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P15_Msk                       (_UINT32_(0x1) << PIO_IMR_P15_Pos)                   /* (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P15(value)                    (PIO_IMR_P15_Msk & (_UINT32_(value) << PIO_IMR_P15_Pos)) /* Assignment of value for P15 in the PIO_IMR register */
#define PIO_IMR_P16_Pos                       _UINT32_(16)                                         /* (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P16_Msk                       (_UINT32_(0x1) << PIO_IMR_P16_Pos)                   /* (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P16(value)                    (PIO_IMR_P16_Msk & (_UINT32_(value) << PIO_IMR_P16_Pos)) /* Assignment of value for P16 in the PIO_IMR register */
#define PIO_IMR_P17_Pos                       _UINT32_(17)                                         /* (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P17_Msk                       (_UINT32_(0x1) << PIO_IMR_P17_Pos)                   /* (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P17(value)                    (PIO_IMR_P17_Msk & (_UINT32_(value) << PIO_IMR_P17_Pos)) /* Assignment of value for P17 in the PIO_IMR register */
#define PIO_IMR_P18_Pos                       _UINT32_(18)                                         /* (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P18_Msk                       (_UINT32_(0x1) << PIO_IMR_P18_Pos)                   /* (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P18(value)                    (PIO_IMR_P18_Msk & (_UINT32_(value) << PIO_IMR_P18_Pos)) /* Assignment of value for P18 in the PIO_IMR register */
#define PIO_IMR_P19_Pos                       _UINT32_(19)                                         /* (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P19_Msk                       (_UINT32_(0x1) << PIO_IMR_P19_Pos)                   /* (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P19(value)                    (PIO_IMR_P19_Msk & (_UINT32_(value) << PIO_IMR_P19_Pos)) /* Assignment of value for P19 in the PIO_IMR register */
#define PIO_IMR_P20_Pos                       _UINT32_(20)                                         /* (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P20_Msk                       (_UINT32_(0x1) << PIO_IMR_P20_Pos)                   /* (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P20(value)                    (PIO_IMR_P20_Msk & (_UINT32_(value) << PIO_IMR_P20_Pos)) /* Assignment of value for P20 in the PIO_IMR register */
#define PIO_IMR_P21_Pos                       _UINT32_(21)                                         /* (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P21_Msk                       (_UINT32_(0x1) << PIO_IMR_P21_Pos)                   /* (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P21(value)                    (PIO_IMR_P21_Msk & (_UINT32_(value) << PIO_IMR_P21_Pos)) /* Assignment of value for P21 in the PIO_IMR register */
#define PIO_IMR_P22_Pos                       _UINT32_(22)                                         /* (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P22_Msk                       (_UINT32_(0x1) << PIO_IMR_P22_Pos)                   /* (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P22(value)                    (PIO_IMR_P22_Msk & (_UINT32_(value) << PIO_IMR_P22_Pos)) /* Assignment of value for P22 in the PIO_IMR register */
#define PIO_IMR_P23_Pos                       _UINT32_(23)                                         /* (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P23_Msk                       (_UINT32_(0x1) << PIO_IMR_P23_Pos)                   /* (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P23(value)                    (PIO_IMR_P23_Msk & (_UINT32_(value) << PIO_IMR_P23_Pos)) /* Assignment of value for P23 in the PIO_IMR register */
#define PIO_IMR_P24_Pos                       _UINT32_(24)                                         /* (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P24_Msk                       (_UINT32_(0x1) << PIO_IMR_P24_Pos)                   /* (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P24(value)                    (PIO_IMR_P24_Msk & (_UINT32_(value) << PIO_IMR_P24_Pos)) /* Assignment of value for P24 in the PIO_IMR register */
#define PIO_IMR_P25_Pos                       _UINT32_(25)                                         /* (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P25_Msk                       (_UINT32_(0x1) << PIO_IMR_P25_Pos)                   /* (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P25(value)                    (PIO_IMR_P25_Msk & (_UINT32_(value) << PIO_IMR_P25_Pos)) /* Assignment of value for P25 in the PIO_IMR register */
#define PIO_IMR_P26_Pos                       _UINT32_(26)                                         /* (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P26_Msk                       (_UINT32_(0x1) << PIO_IMR_P26_Pos)                   /* (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P26(value)                    (PIO_IMR_P26_Msk & (_UINT32_(value) << PIO_IMR_P26_Pos)) /* Assignment of value for P26 in the PIO_IMR register */
#define PIO_IMR_P27_Pos                       _UINT32_(27)                                         /* (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P27_Msk                       (_UINT32_(0x1) << PIO_IMR_P27_Pos)                   /* (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P27(value)                    (PIO_IMR_P27_Msk & (_UINT32_(value) << PIO_IMR_P27_Pos)) /* Assignment of value for P27 in the PIO_IMR register */
#define PIO_IMR_P28_Pos                       _UINT32_(28)                                         /* (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P28_Msk                       (_UINT32_(0x1) << PIO_IMR_P28_Pos)                   /* (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P28(value)                    (PIO_IMR_P28_Msk & (_UINT32_(value) << PIO_IMR_P28_Pos)) /* Assignment of value for P28 in the PIO_IMR register */
#define PIO_IMR_P29_Pos                       _UINT32_(29)                                         /* (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P29_Msk                       (_UINT32_(0x1) << PIO_IMR_P29_Pos)                   /* (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P29(value)                    (PIO_IMR_P29_Msk & (_UINT32_(value) << PIO_IMR_P29_Pos)) /* Assignment of value for P29 in the PIO_IMR register */
#define PIO_IMR_P30_Pos                       _UINT32_(30)                                         /* (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P30_Msk                       (_UINT32_(0x1) << PIO_IMR_P30_Pos)                   /* (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P30(value)                    (PIO_IMR_P30_Msk & (_UINT32_(value) << PIO_IMR_P30_Pos)) /* Assignment of value for P30 in the PIO_IMR register */
#define PIO_IMR_P31_Pos                       _UINT32_(31)                                         /* (PIO_IMR) Input Change Interrupt Mask Position */
#define PIO_IMR_P31_Msk                       (_UINT32_(0x1) << PIO_IMR_P31_Pos)                   /* (PIO_IMR) Input Change Interrupt Mask Mask */
#define PIO_IMR_P31(value)                    (PIO_IMR_P31_Msk & (_UINT32_(value) << PIO_IMR_P31_Pos)) /* Assignment of value for P31 in the PIO_IMR register */
#define PIO_IMR_Msk                           _UINT32_(0xFFFFFFFF)                                 /* (PIO_IMR) Register Mask  */

#define PIO_IMR_P_Pos                         _UINT32_(0)                                          /* (PIO_IMR Position) Input Change Interrupt Mask */
#define PIO_IMR_P_Msk                         (_UINT32_(0xFFFFFFFF) << PIO_IMR_P_Pos)              /* (PIO_IMR Mask) P */
#define PIO_IMR_P(value)                      (PIO_IMR_P_Msk & (_UINT32_(value) << PIO_IMR_P_Pos)) 

/* -------- PIO_ISR : (PIO Offset: 0x4C) ( R/ 32) Interrupt Status Register -------- */
#define PIO_ISR_P0_Pos                        _UINT32_(0)                                          /* (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P0_Msk                        (_UINT32_(0x1) << PIO_ISR_P0_Pos)                    /* (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P0(value)                     (PIO_ISR_P0_Msk & (_UINT32_(value) << PIO_ISR_P0_Pos)) /* Assignment of value for P0 in the PIO_ISR register */
#define PIO_ISR_P1_Pos                        _UINT32_(1)                                          /* (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P1_Msk                        (_UINT32_(0x1) << PIO_ISR_P1_Pos)                    /* (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P1(value)                     (PIO_ISR_P1_Msk & (_UINT32_(value) << PIO_ISR_P1_Pos)) /* Assignment of value for P1 in the PIO_ISR register */
#define PIO_ISR_P2_Pos                        _UINT32_(2)                                          /* (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P2_Msk                        (_UINT32_(0x1) << PIO_ISR_P2_Pos)                    /* (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P2(value)                     (PIO_ISR_P2_Msk & (_UINT32_(value) << PIO_ISR_P2_Pos)) /* Assignment of value for P2 in the PIO_ISR register */
#define PIO_ISR_P3_Pos                        _UINT32_(3)                                          /* (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P3_Msk                        (_UINT32_(0x1) << PIO_ISR_P3_Pos)                    /* (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P3(value)                     (PIO_ISR_P3_Msk & (_UINT32_(value) << PIO_ISR_P3_Pos)) /* Assignment of value for P3 in the PIO_ISR register */
#define PIO_ISR_P4_Pos                        _UINT32_(4)                                          /* (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P4_Msk                        (_UINT32_(0x1) << PIO_ISR_P4_Pos)                    /* (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P4(value)                     (PIO_ISR_P4_Msk & (_UINT32_(value) << PIO_ISR_P4_Pos)) /* Assignment of value for P4 in the PIO_ISR register */
#define PIO_ISR_P5_Pos                        _UINT32_(5)                                          /* (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P5_Msk                        (_UINT32_(0x1) << PIO_ISR_P5_Pos)                    /* (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P5(value)                     (PIO_ISR_P5_Msk & (_UINT32_(value) << PIO_ISR_P5_Pos)) /* Assignment of value for P5 in the PIO_ISR register */
#define PIO_ISR_P6_Pos                        _UINT32_(6)                                          /* (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P6_Msk                        (_UINT32_(0x1) << PIO_ISR_P6_Pos)                    /* (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P6(value)                     (PIO_ISR_P6_Msk & (_UINT32_(value) << PIO_ISR_P6_Pos)) /* Assignment of value for P6 in the PIO_ISR register */
#define PIO_ISR_P7_Pos                        _UINT32_(7)                                          /* (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P7_Msk                        (_UINT32_(0x1) << PIO_ISR_P7_Pos)                    /* (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P7(value)                     (PIO_ISR_P7_Msk & (_UINT32_(value) << PIO_ISR_P7_Pos)) /* Assignment of value for P7 in the PIO_ISR register */
#define PIO_ISR_P8_Pos                        _UINT32_(8)                                          /* (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P8_Msk                        (_UINT32_(0x1) << PIO_ISR_P8_Pos)                    /* (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P8(value)                     (PIO_ISR_P8_Msk & (_UINT32_(value) << PIO_ISR_P8_Pos)) /* Assignment of value for P8 in the PIO_ISR register */
#define PIO_ISR_P9_Pos                        _UINT32_(9)                                          /* (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P9_Msk                        (_UINT32_(0x1) << PIO_ISR_P9_Pos)                    /* (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P9(value)                     (PIO_ISR_P9_Msk & (_UINT32_(value) << PIO_ISR_P9_Pos)) /* Assignment of value for P9 in the PIO_ISR register */
#define PIO_ISR_P10_Pos                       _UINT32_(10)                                         /* (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P10_Msk                       (_UINT32_(0x1) << PIO_ISR_P10_Pos)                   /* (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P10(value)                    (PIO_ISR_P10_Msk & (_UINT32_(value) << PIO_ISR_P10_Pos)) /* Assignment of value for P10 in the PIO_ISR register */
#define PIO_ISR_P11_Pos                       _UINT32_(11)                                         /* (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P11_Msk                       (_UINT32_(0x1) << PIO_ISR_P11_Pos)                   /* (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P11(value)                    (PIO_ISR_P11_Msk & (_UINT32_(value) << PIO_ISR_P11_Pos)) /* Assignment of value for P11 in the PIO_ISR register */
#define PIO_ISR_P12_Pos                       _UINT32_(12)                                         /* (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P12_Msk                       (_UINT32_(0x1) << PIO_ISR_P12_Pos)                   /* (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P12(value)                    (PIO_ISR_P12_Msk & (_UINT32_(value) << PIO_ISR_P12_Pos)) /* Assignment of value for P12 in the PIO_ISR register */
#define PIO_ISR_P13_Pos                       _UINT32_(13)                                         /* (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P13_Msk                       (_UINT32_(0x1) << PIO_ISR_P13_Pos)                   /* (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P13(value)                    (PIO_ISR_P13_Msk & (_UINT32_(value) << PIO_ISR_P13_Pos)) /* Assignment of value for P13 in the PIO_ISR register */
#define PIO_ISR_P14_Pos                       _UINT32_(14)                                         /* (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P14_Msk                       (_UINT32_(0x1) << PIO_ISR_P14_Pos)                   /* (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P14(value)                    (PIO_ISR_P14_Msk & (_UINT32_(value) << PIO_ISR_P14_Pos)) /* Assignment of value for P14 in the PIO_ISR register */
#define PIO_ISR_P15_Pos                       _UINT32_(15)                                         /* (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P15_Msk                       (_UINT32_(0x1) << PIO_ISR_P15_Pos)                   /* (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P15(value)                    (PIO_ISR_P15_Msk & (_UINT32_(value) << PIO_ISR_P15_Pos)) /* Assignment of value for P15 in the PIO_ISR register */
#define PIO_ISR_P16_Pos                       _UINT32_(16)                                         /* (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P16_Msk                       (_UINT32_(0x1) << PIO_ISR_P16_Pos)                   /* (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P16(value)                    (PIO_ISR_P16_Msk & (_UINT32_(value) << PIO_ISR_P16_Pos)) /* Assignment of value for P16 in the PIO_ISR register */
#define PIO_ISR_P17_Pos                       _UINT32_(17)                                         /* (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P17_Msk                       (_UINT32_(0x1) << PIO_ISR_P17_Pos)                   /* (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P17(value)                    (PIO_ISR_P17_Msk & (_UINT32_(value) << PIO_ISR_P17_Pos)) /* Assignment of value for P17 in the PIO_ISR register */
#define PIO_ISR_P18_Pos                       _UINT32_(18)                                         /* (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P18_Msk                       (_UINT32_(0x1) << PIO_ISR_P18_Pos)                   /* (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P18(value)                    (PIO_ISR_P18_Msk & (_UINT32_(value) << PIO_ISR_P18_Pos)) /* Assignment of value for P18 in the PIO_ISR register */
#define PIO_ISR_P19_Pos                       _UINT32_(19)                                         /* (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P19_Msk                       (_UINT32_(0x1) << PIO_ISR_P19_Pos)                   /* (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P19(value)                    (PIO_ISR_P19_Msk & (_UINT32_(value) << PIO_ISR_P19_Pos)) /* Assignment of value for P19 in the PIO_ISR register */
#define PIO_ISR_P20_Pos                       _UINT32_(20)                                         /* (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P20_Msk                       (_UINT32_(0x1) << PIO_ISR_P20_Pos)                   /* (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P20(value)                    (PIO_ISR_P20_Msk & (_UINT32_(value) << PIO_ISR_P20_Pos)) /* Assignment of value for P20 in the PIO_ISR register */
#define PIO_ISR_P21_Pos                       _UINT32_(21)                                         /* (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P21_Msk                       (_UINT32_(0x1) << PIO_ISR_P21_Pos)                   /* (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P21(value)                    (PIO_ISR_P21_Msk & (_UINT32_(value) << PIO_ISR_P21_Pos)) /* Assignment of value for P21 in the PIO_ISR register */
#define PIO_ISR_P22_Pos                       _UINT32_(22)                                         /* (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P22_Msk                       (_UINT32_(0x1) << PIO_ISR_P22_Pos)                   /* (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P22(value)                    (PIO_ISR_P22_Msk & (_UINT32_(value) << PIO_ISR_P22_Pos)) /* Assignment of value for P22 in the PIO_ISR register */
#define PIO_ISR_P23_Pos                       _UINT32_(23)                                         /* (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P23_Msk                       (_UINT32_(0x1) << PIO_ISR_P23_Pos)                   /* (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P23(value)                    (PIO_ISR_P23_Msk & (_UINT32_(value) << PIO_ISR_P23_Pos)) /* Assignment of value for P23 in the PIO_ISR register */
#define PIO_ISR_P24_Pos                       _UINT32_(24)                                         /* (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P24_Msk                       (_UINT32_(0x1) << PIO_ISR_P24_Pos)                   /* (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P24(value)                    (PIO_ISR_P24_Msk & (_UINT32_(value) << PIO_ISR_P24_Pos)) /* Assignment of value for P24 in the PIO_ISR register */
#define PIO_ISR_P25_Pos                       _UINT32_(25)                                         /* (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P25_Msk                       (_UINT32_(0x1) << PIO_ISR_P25_Pos)                   /* (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P25(value)                    (PIO_ISR_P25_Msk & (_UINT32_(value) << PIO_ISR_P25_Pos)) /* Assignment of value for P25 in the PIO_ISR register */
#define PIO_ISR_P26_Pos                       _UINT32_(26)                                         /* (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P26_Msk                       (_UINT32_(0x1) << PIO_ISR_P26_Pos)                   /* (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P26(value)                    (PIO_ISR_P26_Msk & (_UINT32_(value) << PIO_ISR_P26_Pos)) /* Assignment of value for P26 in the PIO_ISR register */
#define PIO_ISR_P27_Pos                       _UINT32_(27)                                         /* (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P27_Msk                       (_UINT32_(0x1) << PIO_ISR_P27_Pos)                   /* (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P27(value)                    (PIO_ISR_P27_Msk & (_UINT32_(value) << PIO_ISR_P27_Pos)) /* Assignment of value for P27 in the PIO_ISR register */
#define PIO_ISR_P28_Pos                       _UINT32_(28)                                         /* (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P28_Msk                       (_UINT32_(0x1) << PIO_ISR_P28_Pos)                   /* (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P28(value)                    (PIO_ISR_P28_Msk & (_UINT32_(value) << PIO_ISR_P28_Pos)) /* Assignment of value for P28 in the PIO_ISR register */
#define PIO_ISR_P29_Pos                       _UINT32_(29)                                         /* (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P29_Msk                       (_UINT32_(0x1) << PIO_ISR_P29_Pos)                   /* (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P29(value)                    (PIO_ISR_P29_Msk & (_UINT32_(value) << PIO_ISR_P29_Pos)) /* Assignment of value for P29 in the PIO_ISR register */
#define PIO_ISR_P30_Pos                       _UINT32_(30)                                         /* (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P30_Msk                       (_UINT32_(0x1) << PIO_ISR_P30_Pos)                   /* (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P30(value)                    (PIO_ISR_P30_Msk & (_UINT32_(value) << PIO_ISR_P30_Pos)) /* Assignment of value for P30 in the PIO_ISR register */
#define PIO_ISR_P31_Pos                       _UINT32_(31)                                         /* (PIO_ISR) Input Change Interrupt Status Position */
#define PIO_ISR_P31_Msk                       (_UINT32_(0x1) << PIO_ISR_P31_Pos)                   /* (PIO_ISR) Input Change Interrupt Status Mask */
#define PIO_ISR_P31(value)                    (PIO_ISR_P31_Msk & (_UINT32_(value) << PIO_ISR_P31_Pos)) /* Assignment of value for P31 in the PIO_ISR register */
#define PIO_ISR_Msk                           _UINT32_(0xFFFFFFFF)                                 /* (PIO_ISR) Register Mask  */

#define PIO_ISR_P_Pos                         _UINT32_(0)                                          /* (PIO_ISR Position) Input Change Interrupt Status */
#define PIO_ISR_P_Msk                         (_UINT32_(0xFFFFFFFF) << PIO_ISR_P_Pos)              /* (PIO_ISR Mask) P */
#define PIO_ISR_P(value)                      (PIO_ISR_P_Msk & (_UINT32_(value) << PIO_ISR_P_Pos)) 

/* -------- PIO_MDER : (PIO Offset: 0x50) ( /W 32) Multi-driver Enable Register -------- */
#define PIO_MDER_P0_Pos                       _UINT32_(0)                                          /* (PIO_MDER) Multi-drive Enable Position */
#define PIO_MDER_P0_Msk                       (_UINT32_(0x1) << PIO_MDER_P0_Pos)                   /* (PIO_MDER) Multi-drive Enable Mask */
#define PIO_MDER_P0(value)                    (PIO_MDER_P0_Msk & (_UINT32_(value) << PIO_MDER_P0_Pos)) /* Assignment of value for P0 in the PIO_MDER register */
#define PIO_MDER_P1_Pos                       _UINT32_(1)                                          /* (PIO_MDER) Multi-drive Enable Position */
#define PIO_MDER_P1_Msk                       (_UINT32_(0x1) << PIO_MDER_P1_Pos)                   /* (PIO_MDER) Multi-drive Enable Mask */
#define PIO_MDER_P1(value)                    (PIO_MDER_P1_Msk & (_UINT32_(value) << PIO_MDER_P1_Pos)) /* Assignment of value for P1 in the PIO_MDER register */
#define PIO_MDER_P2_Pos                       _UINT32_(2)                                          /* (PIO_MDER) Multi-drive Enable Position */
#define PIO_MDER_P2_Msk                       (_UINT32_(0x1) << PIO_MDER_P2_Pos)                   /* (PIO_MDER) Multi-drive Enable Mask */
#define PIO_MDER_P2(value)                    (PIO_MDER_P2_Msk & (_UINT32_(value) << PIO_MDER_P2_Pos)) /* Assignment of value for P2 in the PIO_MDER register */
#define PIO_MDER_P3_Pos                       _UINT32_(3)                                          /* (PIO_MDER) Multi-drive Enable Position */
#define PIO_MDER_P3_Msk                       (_UINT32_(0x1) << PIO_MDER_P3_Pos)                   /* (PIO_MDER) Multi-drive Enable Mask */
#define PIO_MDER_P3(value)                    (PIO_MDER_P3_Msk & (_UINT32_(value) << PIO_MDER_P3_Pos)) /* Assignment of value for P3 in the PIO_MDER register */
#define PIO_MDER_P4_Pos                       _UINT32_(4)                                          /* (PIO_MDER) Multi-drive Enable Position */
#define PIO_MDER_P4_Msk                       (_UINT32_(0x1) << PIO_MDER_P4_Pos)                   /* (PIO_MDER) Multi-drive Enable Mask */
#define PIO_MDER_P4(value)                    (PIO_MDER_P4_Msk & (_UINT32_(value) << PIO_MDER_P4_Pos)) /* Assignment of value for P4 in the PIO_MDER register */
#define PIO_MDER_P5_Pos                       _UINT32_(5)                                          /* (PIO_MDER) Multi-drive Enable Position */
#define PIO_MDER_P5_Msk                       (_UINT32_(0x1) << PIO_MDER_P5_Pos)                   /* (PIO_MDER) Multi-drive Enable Mask */
#define PIO_MDER_P5(value)                    (PIO_MDER_P5_Msk & (_UINT32_(value) << PIO_MDER_P5_Pos)) /* Assignment of value for P5 in the PIO_MDER register */
#define PIO_MDER_P6_Pos                       _UINT32_(6)                                          /* (PIO_MDER) Multi-drive Enable Position */
#define PIO_MDER_P6_Msk                       (_UINT32_(0x1) << PIO_MDER_P6_Pos)                   /* (PIO_MDER) Multi-drive Enable Mask */
#define PIO_MDER_P6(value)                    (PIO_MDER_P6_Msk & (_UINT32_(value) << PIO_MDER_P6_Pos)) /* Assignment of value for P6 in the PIO_MDER register */
#define PIO_MDER_P7_Pos                       _UINT32_(7)                                          /* (PIO_MDER) Multi-drive Enable Position */
#define PIO_MDER_P7_Msk                       (_UINT32_(0x1) << PIO_MDER_P7_Pos)                   /* (PIO_MDER) Multi-drive Enable Mask */
#define PIO_MDER_P7(value)                    (PIO_MDER_P7_Msk & (_UINT32_(value) << PIO_MDER_P7_Pos)) /* Assignment of value for P7 in the PIO_MDER register */
#define PIO_MDER_P8_Pos                       _UINT32_(8)                                          /* (PIO_MDER) Multi-drive Enable Position */
#define PIO_MDER_P8_Msk                       (_UINT32_(0x1) << PIO_MDER_P8_Pos)                   /* (PIO_MDER) Multi-drive Enable Mask */
#define PIO_MDER_P8(value)                    (PIO_MDER_P8_Msk & (_UINT32_(value) << PIO_MDER_P8_Pos)) /* Assignment of value for P8 in the PIO_MDER register */
#define PIO_MDER_P9_Pos                       _UINT32_(9)                                          /* (PIO_MDER) Multi-drive Enable Position */
#define PIO_MDER_P9_Msk                       (_UINT32_(0x1) << PIO_MDER_P9_Pos)                   /* (PIO_MDER) Multi-drive Enable Mask */
#define PIO_MDER_P9(value)                    (PIO_MDER_P9_Msk & (_UINT32_(value) << PIO_MDER_P9_Pos)) /* Assignment of value for P9 in the PIO_MDER register */
#define PIO_MDER_P10_Pos                      _UINT32_(10)                                         /* (PIO_MDER) Multi-drive Enable Position */
#define PIO_MDER_P10_Msk                      (_UINT32_(0x1) << PIO_MDER_P10_Pos)                  /* (PIO_MDER) Multi-drive Enable Mask */
#define PIO_MDER_P10(value)                   (PIO_MDER_P10_Msk & (_UINT32_(value) << PIO_MDER_P10_Pos)) /* Assignment of value for P10 in the PIO_MDER register */
#define PIO_MDER_P11_Pos                      _UINT32_(11)                                         /* (PIO_MDER) Multi-drive Enable Position */
#define PIO_MDER_P11_Msk                      (_UINT32_(0x1) << PIO_MDER_P11_Pos)                  /* (PIO_MDER) Multi-drive Enable Mask */
#define PIO_MDER_P11(value)                   (PIO_MDER_P11_Msk & (_UINT32_(value) << PIO_MDER_P11_Pos)) /* Assignment of value for P11 in the PIO_MDER register */
#define PIO_MDER_P12_Pos                      _UINT32_(12)                                         /* (PIO_MDER) Multi-drive Enable Position */
#define PIO_MDER_P12_Msk                      (_UINT32_(0x1) << PIO_MDER_P12_Pos)                  /* (PIO_MDER) Multi-drive Enable Mask */
#define PIO_MDER_P12(value)                   (PIO_MDER_P12_Msk & (_UINT32_(value) << PIO_MDER_P12_Pos)) /* Assignment of value for P12 in the PIO_MDER register */
#define PIO_MDER_P13_Pos                      _UINT32_(13)                                         /* (PIO_MDER) Multi-drive Enable Position */
#define PIO_MDER_P13_Msk                      (_UINT32_(0x1) << PIO_MDER_P13_Pos)                  /* (PIO_MDER) Multi-drive Enable Mask */
#define PIO_MDER_P13(value)                   (PIO_MDER_P13_Msk & (_UINT32_(value) << PIO_MDER_P13_Pos)) /* Assignment of value for P13 in the PIO_MDER register */
#define PIO_MDER_P14_Pos                      _UINT32_(14)                                         /* (PIO_MDER) Multi-drive Enable Position */
#define PIO_MDER_P14_Msk                      (_UINT32_(0x1) << PIO_MDER_P14_Pos)                  /* (PIO_MDER) Multi-drive Enable Mask */
#define PIO_MDER_P14(value)                   (PIO_MDER_P14_Msk & (_UINT32_(value) << PIO_MDER_P14_Pos)) /* Assignment of value for P14 in the PIO_MDER register */
#define PIO_MDER_P15_Pos                      _UINT32_(15)                                         /* (PIO_MDER) Multi-drive Enable Position */
#define PIO_MDER_P15_Msk                      (_UINT32_(0x1) << PIO_MDER_P15_Pos)                  /* (PIO_MDER) Multi-drive Enable Mask */
#define PIO_MDER_P15(value)                   (PIO_MDER_P15_Msk & (_UINT32_(value) << PIO_MDER_P15_Pos)) /* Assignment of value for P15 in the PIO_MDER register */
#define PIO_MDER_P16_Pos                      _UINT32_(16)                                         /* (PIO_MDER) Multi-drive Enable Position */
#define PIO_MDER_P16_Msk                      (_UINT32_(0x1) << PIO_MDER_P16_Pos)                  /* (PIO_MDER) Multi-drive Enable Mask */
#define PIO_MDER_P16(value)                   (PIO_MDER_P16_Msk & (_UINT32_(value) << PIO_MDER_P16_Pos)) /* Assignment of value for P16 in the PIO_MDER register */
#define PIO_MDER_P17_Pos                      _UINT32_(17)                                         /* (PIO_MDER) Multi-drive Enable Position */
#define PIO_MDER_P17_Msk                      (_UINT32_(0x1) << PIO_MDER_P17_Pos)                  /* (PIO_MDER) Multi-drive Enable Mask */
#define PIO_MDER_P17(value)                   (PIO_MDER_P17_Msk & (_UINT32_(value) << PIO_MDER_P17_Pos)) /* Assignment of value for P17 in the PIO_MDER register */
#define PIO_MDER_P18_Pos                      _UINT32_(18)                                         /* (PIO_MDER) Multi-drive Enable Position */
#define PIO_MDER_P18_Msk                      (_UINT32_(0x1) << PIO_MDER_P18_Pos)                  /* (PIO_MDER) Multi-drive Enable Mask */
#define PIO_MDER_P18(value)                   (PIO_MDER_P18_Msk & (_UINT32_(value) << PIO_MDER_P18_Pos)) /* Assignment of value for P18 in the PIO_MDER register */
#define PIO_MDER_P19_Pos                      _UINT32_(19)                                         /* (PIO_MDER) Multi-drive Enable Position */
#define PIO_MDER_P19_Msk                      (_UINT32_(0x1) << PIO_MDER_P19_Pos)                  /* (PIO_MDER) Multi-drive Enable Mask */
#define PIO_MDER_P19(value)                   (PIO_MDER_P19_Msk & (_UINT32_(value) << PIO_MDER_P19_Pos)) /* Assignment of value for P19 in the PIO_MDER register */
#define PIO_MDER_P20_Pos                      _UINT32_(20)                                         /* (PIO_MDER) Multi-drive Enable Position */
#define PIO_MDER_P20_Msk                      (_UINT32_(0x1) << PIO_MDER_P20_Pos)                  /* (PIO_MDER) Multi-drive Enable Mask */
#define PIO_MDER_P20(value)                   (PIO_MDER_P20_Msk & (_UINT32_(value) << PIO_MDER_P20_Pos)) /* Assignment of value for P20 in the PIO_MDER register */
#define PIO_MDER_P21_Pos                      _UINT32_(21)                                         /* (PIO_MDER) Multi-drive Enable Position */
#define PIO_MDER_P21_Msk                      (_UINT32_(0x1) << PIO_MDER_P21_Pos)                  /* (PIO_MDER) Multi-drive Enable Mask */
#define PIO_MDER_P21(value)                   (PIO_MDER_P21_Msk & (_UINT32_(value) << PIO_MDER_P21_Pos)) /* Assignment of value for P21 in the PIO_MDER register */
#define PIO_MDER_P22_Pos                      _UINT32_(22)                                         /* (PIO_MDER) Multi-drive Enable Position */
#define PIO_MDER_P22_Msk                      (_UINT32_(0x1) << PIO_MDER_P22_Pos)                  /* (PIO_MDER) Multi-drive Enable Mask */
#define PIO_MDER_P22(value)                   (PIO_MDER_P22_Msk & (_UINT32_(value) << PIO_MDER_P22_Pos)) /* Assignment of value for P22 in the PIO_MDER register */
#define PIO_MDER_P23_Pos                      _UINT32_(23)                                         /* (PIO_MDER) Multi-drive Enable Position */
#define PIO_MDER_P23_Msk                      (_UINT32_(0x1) << PIO_MDER_P23_Pos)                  /* (PIO_MDER) Multi-drive Enable Mask */
#define PIO_MDER_P23(value)                   (PIO_MDER_P23_Msk & (_UINT32_(value) << PIO_MDER_P23_Pos)) /* Assignment of value for P23 in the PIO_MDER register */
#define PIO_MDER_P24_Pos                      _UINT32_(24)                                         /* (PIO_MDER) Multi-drive Enable Position */
#define PIO_MDER_P24_Msk                      (_UINT32_(0x1) << PIO_MDER_P24_Pos)                  /* (PIO_MDER) Multi-drive Enable Mask */
#define PIO_MDER_P24(value)                   (PIO_MDER_P24_Msk & (_UINT32_(value) << PIO_MDER_P24_Pos)) /* Assignment of value for P24 in the PIO_MDER register */
#define PIO_MDER_P25_Pos                      _UINT32_(25)                                         /* (PIO_MDER) Multi-drive Enable Position */
#define PIO_MDER_P25_Msk                      (_UINT32_(0x1) << PIO_MDER_P25_Pos)                  /* (PIO_MDER) Multi-drive Enable Mask */
#define PIO_MDER_P25(value)                   (PIO_MDER_P25_Msk & (_UINT32_(value) << PIO_MDER_P25_Pos)) /* Assignment of value for P25 in the PIO_MDER register */
#define PIO_MDER_P26_Pos                      _UINT32_(26)                                         /* (PIO_MDER) Multi-drive Enable Position */
#define PIO_MDER_P26_Msk                      (_UINT32_(0x1) << PIO_MDER_P26_Pos)                  /* (PIO_MDER) Multi-drive Enable Mask */
#define PIO_MDER_P26(value)                   (PIO_MDER_P26_Msk & (_UINT32_(value) << PIO_MDER_P26_Pos)) /* Assignment of value for P26 in the PIO_MDER register */
#define PIO_MDER_P27_Pos                      _UINT32_(27)                                         /* (PIO_MDER) Multi-drive Enable Position */
#define PIO_MDER_P27_Msk                      (_UINT32_(0x1) << PIO_MDER_P27_Pos)                  /* (PIO_MDER) Multi-drive Enable Mask */
#define PIO_MDER_P27(value)                   (PIO_MDER_P27_Msk & (_UINT32_(value) << PIO_MDER_P27_Pos)) /* Assignment of value for P27 in the PIO_MDER register */
#define PIO_MDER_P28_Pos                      _UINT32_(28)                                         /* (PIO_MDER) Multi-drive Enable Position */
#define PIO_MDER_P28_Msk                      (_UINT32_(0x1) << PIO_MDER_P28_Pos)                  /* (PIO_MDER) Multi-drive Enable Mask */
#define PIO_MDER_P28(value)                   (PIO_MDER_P28_Msk & (_UINT32_(value) << PIO_MDER_P28_Pos)) /* Assignment of value for P28 in the PIO_MDER register */
#define PIO_MDER_P29_Pos                      _UINT32_(29)                                         /* (PIO_MDER) Multi-drive Enable Position */
#define PIO_MDER_P29_Msk                      (_UINT32_(0x1) << PIO_MDER_P29_Pos)                  /* (PIO_MDER) Multi-drive Enable Mask */
#define PIO_MDER_P29(value)                   (PIO_MDER_P29_Msk & (_UINT32_(value) << PIO_MDER_P29_Pos)) /* Assignment of value for P29 in the PIO_MDER register */
#define PIO_MDER_P30_Pos                      _UINT32_(30)                                         /* (PIO_MDER) Multi-drive Enable Position */
#define PIO_MDER_P30_Msk                      (_UINT32_(0x1) << PIO_MDER_P30_Pos)                  /* (PIO_MDER) Multi-drive Enable Mask */
#define PIO_MDER_P30(value)                   (PIO_MDER_P30_Msk & (_UINT32_(value) << PIO_MDER_P30_Pos)) /* Assignment of value for P30 in the PIO_MDER register */
#define PIO_MDER_P31_Pos                      _UINT32_(31)                                         /* (PIO_MDER) Multi-drive Enable Position */
#define PIO_MDER_P31_Msk                      (_UINT32_(0x1) << PIO_MDER_P31_Pos)                  /* (PIO_MDER) Multi-drive Enable Mask */
#define PIO_MDER_P31(value)                   (PIO_MDER_P31_Msk & (_UINT32_(value) << PIO_MDER_P31_Pos)) /* Assignment of value for P31 in the PIO_MDER register */
#define PIO_MDER_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (PIO_MDER) Register Mask  */

#define PIO_MDER_P_Pos                        _UINT32_(0)                                          /* (PIO_MDER Position) Multi-drive Enable */
#define PIO_MDER_P_Msk                        (_UINT32_(0xFFFFFFFF) << PIO_MDER_P_Pos)             /* (PIO_MDER Mask) P */
#define PIO_MDER_P(value)                     (PIO_MDER_P_Msk & (_UINT32_(value) << PIO_MDER_P_Pos)) 

/* -------- PIO_MDDR : (PIO Offset: 0x54) ( /W 32) Multi-driver Disable Register -------- */
#define PIO_MDDR_P0_Pos                       _UINT32_(0)                                          /* (PIO_MDDR) Multi-drive Disable Position */
#define PIO_MDDR_P0_Msk                       (_UINT32_(0x1) << PIO_MDDR_P0_Pos)                   /* (PIO_MDDR) Multi-drive Disable Mask */
#define PIO_MDDR_P0(value)                    (PIO_MDDR_P0_Msk & (_UINT32_(value) << PIO_MDDR_P0_Pos)) /* Assignment of value for P0 in the PIO_MDDR register */
#define PIO_MDDR_P1_Pos                       _UINT32_(1)                                          /* (PIO_MDDR) Multi-drive Disable Position */
#define PIO_MDDR_P1_Msk                       (_UINT32_(0x1) << PIO_MDDR_P1_Pos)                   /* (PIO_MDDR) Multi-drive Disable Mask */
#define PIO_MDDR_P1(value)                    (PIO_MDDR_P1_Msk & (_UINT32_(value) << PIO_MDDR_P1_Pos)) /* Assignment of value for P1 in the PIO_MDDR register */
#define PIO_MDDR_P2_Pos                       _UINT32_(2)                                          /* (PIO_MDDR) Multi-drive Disable Position */
#define PIO_MDDR_P2_Msk                       (_UINT32_(0x1) << PIO_MDDR_P2_Pos)                   /* (PIO_MDDR) Multi-drive Disable Mask */
#define PIO_MDDR_P2(value)                    (PIO_MDDR_P2_Msk & (_UINT32_(value) << PIO_MDDR_P2_Pos)) /* Assignment of value for P2 in the PIO_MDDR register */
#define PIO_MDDR_P3_Pos                       _UINT32_(3)                                          /* (PIO_MDDR) Multi-drive Disable Position */
#define PIO_MDDR_P3_Msk                       (_UINT32_(0x1) << PIO_MDDR_P3_Pos)                   /* (PIO_MDDR) Multi-drive Disable Mask */
#define PIO_MDDR_P3(value)                    (PIO_MDDR_P3_Msk & (_UINT32_(value) << PIO_MDDR_P3_Pos)) /* Assignment of value for P3 in the PIO_MDDR register */
#define PIO_MDDR_P4_Pos                       _UINT32_(4)                                          /* (PIO_MDDR) Multi-drive Disable Position */
#define PIO_MDDR_P4_Msk                       (_UINT32_(0x1) << PIO_MDDR_P4_Pos)                   /* (PIO_MDDR) Multi-drive Disable Mask */
#define PIO_MDDR_P4(value)                    (PIO_MDDR_P4_Msk & (_UINT32_(value) << PIO_MDDR_P4_Pos)) /* Assignment of value for P4 in the PIO_MDDR register */
#define PIO_MDDR_P5_Pos                       _UINT32_(5)                                          /* (PIO_MDDR) Multi-drive Disable Position */
#define PIO_MDDR_P5_Msk                       (_UINT32_(0x1) << PIO_MDDR_P5_Pos)                   /* (PIO_MDDR) Multi-drive Disable Mask */
#define PIO_MDDR_P5(value)                    (PIO_MDDR_P5_Msk & (_UINT32_(value) << PIO_MDDR_P5_Pos)) /* Assignment of value for P5 in the PIO_MDDR register */
#define PIO_MDDR_P6_Pos                       _UINT32_(6)                                          /* (PIO_MDDR) Multi-drive Disable Position */
#define PIO_MDDR_P6_Msk                       (_UINT32_(0x1) << PIO_MDDR_P6_Pos)                   /* (PIO_MDDR) Multi-drive Disable Mask */
#define PIO_MDDR_P6(value)                    (PIO_MDDR_P6_Msk & (_UINT32_(value) << PIO_MDDR_P6_Pos)) /* Assignment of value for P6 in the PIO_MDDR register */
#define PIO_MDDR_P7_Pos                       _UINT32_(7)                                          /* (PIO_MDDR) Multi-drive Disable Position */
#define PIO_MDDR_P7_Msk                       (_UINT32_(0x1) << PIO_MDDR_P7_Pos)                   /* (PIO_MDDR) Multi-drive Disable Mask */
#define PIO_MDDR_P7(value)                    (PIO_MDDR_P7_Msk & (_UINT32_(value) << PIO_MDDR_P7_Pos)) /* Assignment of value for P7 in the PIO_MDDR register */
#define PIO_MDDR_P8_Pos                       _UINT32_(8)                                          /* (PIO_MDDR) Multi-drive Disable Position */
#define PIO_MDDR_P8_Msk                       (_UINT32_(0x1) << PIO_MDDR_P8_Pos)                   /* (PIO_MDDR) Multi-drive Disable Mask */
#define PIO_MDDR_P8(value)                    (PIO_MDDR_P8_Msk & (_UINT32_(value) << PIO_MDDR_P8_Pos)) /* Assignment of value for P8 in the PIO_MDDR register */
#define PIO_MDDR_P9_Pos                       _UINT32_(9)                                          /* (PIO_MDDR) Multi-drive Disable Position */
#define PIO_MDDR_P9_Msk                       (_UINT32_(0x1) << PIO_MDDR_P9_Pos)                   /* (PIO_MDDR) Multi-drive Disable Mask */
#define PIO_MDDR_P9(value)                    (PIO_MDDR_P9_Msk & (_UINT32_(value) << PIO_MDDR_P9_Pos)) /* Assignment of value for P9 in the PIO_MDDR register */
#define PIO_MDDR_P10_Pos                      _UINT32_(10)                                         /* (PIO_MDDR) Multi-drive Disable Position */
#define PIO_MDDR_P10_Msk                      (_UINT32_(0x1) << PIO_MDDR_P10_Pos)                  /* (PIO_MDDR) Multi-drive Disable Mask */
#define PIO_MDDR_P10(value)                   (PIO_MDDR_P10_Msk & (_UINT32_(value) << PIO_MDDR_P10_Pos)) /* Assignment of value for P10 in the PIO_MDDR register */
#define PIO_MDDR_P11_Pos                      _UINT32_(11)                                         /* (PIO_MDDR) Multi-drive Disable Position */
#define PIO_MDDR_P11_Msk                      (_UINT32_(0x1) << PIO_MDDR_P11_Pos)                  /* (PIO_MDDR) Multi-drive Disable Mask */
#define PIO_MDDR_P11(value)                   (PIO_MDDR_P11_Msk & (_UINT32_(value) << PIO_MDDR_P11_Pos)) /* Assignment of value for P11 in the PIO_MDDR register */
#define PIO_MDDR_P12_Pos                      _UINT32_(12)                                         /* (PIO_MDDR) Multi-drive Disable Position */
#define PIO_MDDR_P12_Msk                      (_UINT32_(0x1) << PIO_MDDR_P12_Pos)                  /* (PIO_MDDR) Multi-drive Disable Mask */
#define PIO_MDDR_P12(value)                   (PIO_MDDR_P12_Msk & (_UINT32_(value) << PIO_MDDR_P12_Pos)) /* Assignment of value for P12 in the PIO_MDDR register */
#define PIO_MDDR_P13_Pos                      _UINT32_(13)                                         /* (PIO_MDDR) Multi-drive Disable Position */
#define PIO_MDDR_P13_Msk                      (_UINT32_(0x1) << PIO_MDDR_P13_Pos)                  /* (PIO_MDDR) Multi-drive Disable Mask */
#define PIO_MDDR_P13(value)                   (PIO_MDDR_P13_Msk & (_UINT32_(value) << PIO_MDDR_P13_Pos)) /* Assignment of value for P13 in the PIO_MDDR register */
#define PIO_MDDR_P14_Pos                      _UINT32_(14)                                         /* (PIO_MDDR) Multi-drive Disable Position */
#define PIO_MDDR_P14_Msk                      (_UINT32_(0x1) << PIO_MDDR_P14_Pos)                  /* (PIO_MDDR) Multi-drive Disable Mask */
#define PIO_MDDR_P14(value)                   (PIO_MDDR_P14_Msk & (_UINT32_(value) << PIO_MDDR_P14_Pos)) /* Assignment of value for P14 in the PIO_MDDR register */
#define PIO_MDDR_P15_Pos                      _UINT32_(15)                                         /* (PIO_MDDR) Multi-drive Disable Position */
#define PIO_MDDR_P15_Msk                      (_UINT32_(0x1) << PIO_MDDR_P15_Pos)                  /* (PIO_MDDR) Multi-drive Disable Mask */
#define PIO_MDDR_P15(value)                   (PIO_MDDR_P15_Msk & (_UINT32_(value) << PIO_MDDR_P15_Pos)) /* Assignment of value for P15 in the PIO_MDDR register */
#define PIO_MDDR_P16_Pos                      _UINT32_(16)                                         /* (PIO_MDDR) Multi-drive Disable Position */
#define PIO_MDDR_P16_Msk                      (_UINT32_(0x1) << PIO_MDDR_P16_Pos)                  /* (PIO_MDDR) Multi-drive Disable Mask */
#define PIO_MDDR_P16(value)                   (PIO_MDDR_P16_Msk & (_UINT32_(value) << PIO_MDDR_P16_Pos)) /* Assignment of value for P16 in the PIO_MDDR register */
#define PIO_MDDR_P17_Pos                      _UINT32_(17)                                         /* (PIO_MDDR) Multi-drive Disable Position */
#define PIO_MDDR_P17_Msk                      (_UINT32_(0x1) << PIO_MDDR_P17_Pos)                  /* (PIO_MDDR) Multi-drive Disable Mask */
#define PIO_MDDR_P17(value)                   (PIO_MDDR_P17_Msk & (_UINT32_(value) << PIO_MDDR_P17_Pos)) /* Assignment of value for P17 in the PIO_MDDR register */
#define PIO_MDDR_P18_Pos                      _UINT32_(18)                                         /* (PIO_MDDR) Multi-drive Disable Position */
#define PIO_MDDR_P18_Msk                      (_UINT32_(0x1) << PIO_MDDR_P18_Pos)                  /* (PIO_MDDR) Multi-drive Disable Mask */
#define PIO_MDDR_P18(value)                   (PIO_MDDR_P18_Msk & (_UINT32_(value) << PIO_MDDR_P18_Pos)) /* Assignment of value for P18 in the PIO_MDDR register */
#define PIO_MDDR_P19_Pos                      _UINT32_(19)                                         /* (PIO_MDDR) Multi-drive Disable Position */
#define PIO_MDDR_P19_Msk                      (_UINT32_(0x1) << PIO_MDDR_P19_Pos)                  /* (PIO_MDDR) Multi-drive Disable Mask */
#define PIO_MDDR_P19(value)                   (PIO_MDDR_P19_Msk & (_UINT32_(value) << PIO_MDDR_P19_Pos)) /* Assignment of value for P19 in the PIO_MDDR register */
#define PIO_MDDR_P20_Pos                      _UINT32_(20)                                         /* (PIO_MDDR) Multi-drive Disable Position */
#define PIO_MDDR_P20_Msk                      (_UINT32_(0x1) << PIO_MDDR_P20_Pos)                  /* (PIO_MDDR) Multi-drive Disable Mask */
#define PIO_MDDR_P20(value)                   (PIO_MDDR_P20_Msk & (_UINT32_(value) << PIO_MDDR_P20_Pos)) /* Assignment of value for P20 in the PIO_MDDR register */
#define PIO_MDDR_P21_Pos                      _UINT32_(21)                                         /* (PIO_MDDR) Multi-drive Disable Position */
#define PIO_MDDR_P21_Msk                      (_UINT32_(0x1) << PIO_MDDR_P21_Pos)                  /* (PIO_MDDR) Multi-drive Disable Mask */
#define PIO_MDDR_P21(value)                   (PIO_MDDR_P21_Msk & (_UINT32_(value) << PIO_MDDR_P21_Pos)) /* Assignment of value for P21 in the PIO_MDDR register */
#define PIO_MDDR_P22_Pos                      _UINT32_(22)                                         /* (PIO_MDDR) Multi-drive Disable Position */
#define PIO_MDDR_P22_Msk                      (_UINT32_(0x1) << PIO_MDDR_P22_Pos)                  /* (PIO_MDDR) Multi-drive Disable Mask */
#define PIO_MDDR_P22(value)                   (PIO_MDDR_P22_Msk & (_UINT32_(value) << PIO_MDDR_P22_Pos)) /* Assignment of value for P22 in the PIO_MDDR register */
#define PIO_MDDR_P23_Pos                      _UINT32_(23)                                         /* (PIO_MDDR) Multi-drive Disable Position */
#define PIO_MDDR_P23_Msk                      (_UINT32_(0x1) << PIO_MDDR_P23_Pos)                  /* (PIO_MDDR) Multi-drive Disable Mask */
#define PIO_MDDR_P23(value)                   (PIO_MDDR_P23_Msk & (_UINT32_(value) << PIO_MDDR_P23_Pos)) /* Assignment of value for P23 in the PIO_MDDR register */
#define PIO_MDDR_P24_Pos                      _UINT32_(24)                                         /* (PIO_MDDR) Multi-drive Disable Position */
#define PIO_MDDR_P24_Msk                      (_UINT32_(0x1) << PIO_MDDR_P24_Pos)                  /* (PIO_MDDR) Multi-drive Disable Mask */
#define PIO_MDDR_P24(value)                   (PIO_MDDR_P24_Msk & (_UINT32_(value) << PIO_MDDR_P24_Pos)) /* Assignment of value for P24 in the PIO_MDDR register */
#define PIO_MDDR_P25_Pos                      _UINT32_(25)                                         /* (PIO_MDDR) Multi-drive Disable Position */
#define PIO_MDDR_P25_Msk                      (_UINT32_(0x1) << PIO_MDDR_P25_Pos)                  /* (PIO_MDDR) Multi-drive Disable Mask */
#define PIO_MDDR_P25(value)                   (PIO_MDDR_P25_Msk & (_UINT32_(value) << PIO_MDDR_P25_Pos)) /* Assignment of value for P25 in the PIO_MDDR register */
#define PIO_MDDR_P26_Pos                      _UINT32_(26)                                         /* (PIO_MDDR) Multi-drive Disable Position */
#define PIO_MDDR_P26_Msk                      (_UINT32_(0x1) << PIO_MDDR_P26_Pos)                  /* (PIO_MDDR) Multi-drive Disable Mask */
#define PIO_MDDR_P26(value)                   (PIO_MDDR_P26_Msk & (_UINT32_(value) << PIO_MDDR_P26_Pos)) /* Assignment of value for P26 in the PIO_MDDR register */
#define PIO_MDDR_P27_Pos                      _UINT32_(27)                                         /* (PIO_MDDR) Multi-drive Disable Position */
#define PIO_MDDR_P27_Msk                      (_UINT32_(0x1) << PIO_MDDR_P27_Pos)                  /* (PIO_MDDR) Multi-drive Disable Mask */
#define PIO_MDDR_P27(value)                   (PIO_MDDR_P27_Msk & (_UINT32_(value) << PIO_MDDR_P27_Pos)) /* Assignment of value for P27 in the PIO_MDDR register */
#define PIO_MDDR_P28_Pos                      _UINT32_(28)                                         /* (PIO_MDDR) Multi-drive Disable Position */
#define PIO_MDDR_P28_Msk                      (_UINT32_(0x1) << PIO_MDDR_P28_Pos)                  /* (PIO_MDDR) Multi-drive Disable Mask */
#define PIO_MDDR_P28(value)                   (PIO_MDDR_P28_Msk & (_UINT32_(value) << PIO_MDDR_P28_Pos)) /* Assignment of value for P28 in the PIO_MDDR register */
#define PIO_MDDR_P29_Pos                      _UINT32_(29)                                         /* (PIO_MDDR) Multi-drive Disable Position */
#define PIO_MDDR_P29_Msk                      (_UINT32_(0x1) << PIO_MDDR_P29_Pos)                  /* (PIO_MDDR) Multi-drive Disable Mask */
#define PIO_MDDR_P29(value)                   (PIO_MDDR_P29_Msk & (_UINT32_(value) << PIO_MDDR_P29_Pos)) /* Assignment of value for P29 in the PIO_MDDR register */
#define PIO_MDDR_P30_Pos                      _UINT32_(30)                                         /* (PIO_MDDR) Multi-drive Disable Position */
#define PIO_MDDR_P30_Msk                      (_UINT32_(0x1) << PIO_MDDR_P30_Pos)                  /* (PIO_MDDR) Multi-drive Disable Mask */
#define PIO_MDDR_P30(value)                   (PIO_MDDR_P30_Msk & (_UINT32_(value) << PIO_MDDR_P30_Pos)) /* Assignment of value for P30 in the PIO_MDDR register */
#define PIO_MDDR_P31_Pos                      _UINT32_(31)                                         /* (PIO_MDDR) Multi-drive Disable Position */
#define PIO_MDDR_P31_Msk                      (_UINT32_(0x1) << PIO_MDDR_P31_Pos)                  /* (PIO_MDDR) Multi-drive Disable Mask */
#define PIO_MDDR_P31(value)                   (PIO_MDDR_P31_Msk & (_UINT32_(value) << PIO_MDDR_P31_Pos)) /* Assignment of value for P31 in the PIO_MDDR register */
#define PIO_MDDR_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (PIO_MDDR) Register Mask  */

#define PIO_MDDR_P_Pos                        _UINT32_(0)                                          /* (PIO_MDDR Position) Multi-drive Disable */
#define PIO_MDDR_P_Msk                        (_UINT32_(0xFFFFFFFF) << PIO_MDDR_P_Pos)             /* (PIO_MDDR Mask) P */
#define PIO_MDDR_P(value)                     (PIO_MDDR_P_Msk & (_UINT32_(value) << PIO_MDDR_P_Pos)) 

/* -------- PIO_MDSR : (PIO Offset: 0x58) ( R/ 32) Multi-driver Status Register -------- */
#define PIO_MDSR_P0_Pos                       _UINT32_(0)                                          /* (PIO_MDSR) Multi-drive Status Position */
#define PIO_MDSR_P0_Msk                       (_UINT32_(0x1) << PIO_MDSR_P0_Pos)                   /* (PIO_MDSR) Multi-drive Status Mask */
#define PIO_MDSR_P0(value)                    (PIO_MDSR_P0_Msk & (_UINT32_(value) << PIO_MDSR_P0_Pos)) /* Assignment of value for P0 in the PIO_MDSR register */
#define PIO_MDSR_P1_Pos                       _UINT32_(1)                                          /* (PIO_MDSR) Multi-drive Status Position */
#define PIO_MDSR_P1_Msk                       (_UINT32_(0x1) << PIO_MDSR_P1_Pos)                   /* (PIO_MDSR) Multi-drive Status Mask */
#define PIO_MDSR_P1(value)                    (PIO_MDSR_P1_Msk & (_UINT32_(value) << PIO_MDSR_P1_Pos)) /* Assignment of value for P1 in the PIO_MDSR register */
#define PIO_MDSR_P2_Pos                       _UINT32_(2)                                          /* (PIO_MDSR) Multi-drive Status Position */
#define PIO_MDSR_P2_Msk                       (_UINT32_(0x1) << PIO_MDSR_P2_Pos)                   /* (PIO_MDSR) Multi-drive Status Mask */
#define PIO_MDSR_P2(value)                    (PIO_MDSR_P2_Msk & (_UINT32_(value) << PIO_MDSR_P2_Pos)) /* Assignment of value for P2 in the PIO_MDSR register */
#define PIO_MDSR_P3_Pos                       _UINT32_(3)                                          /* (PIO_MDSR) Multi-drive Status Position */
#define PIO_MDSR_P3_Msk                       (_UINT32_(0x1) << PIO_MDSR_P3_Pos)                   /* (PIO_MDSR) Multi-drive Status Mask */
#define PIO_MDSR_P3(value)                    (PIO_MDSR_P3_Msk & (_UINT32_(value) << PIO_MDSR_P3_Pos)) /* Assignment of value for P3 in the PIO_MDSR register */
#define PIO_MDSR_P4_Pos                       _UINT32_(4)                                          /* (PIO_MDSR) Multi-drive Status Position */
#define PIO_MDSR_P4_Msk                       (_UINT32_(0x1) << PIO_MDSR_P4_Pos)                   /* (PIO_MDSR) Multi-drive Status Mask */
#define PIO_MDSR_P4(value)                    (PIO_MDSR_P4_Msk & (_UINT32_(value) << PIO_MDSR_P4_Pos)) /* Assignment of value for P4 in the PIO_MDSR register */
#define PIO_MDSR_P5_Pos                       _UINT32_(5)                                          /* (PIO_MDSR) Multi-drive Status Position */
#define PIO_MDSR_P5_Msk                       (_UINT32_(0x1) << PIO_MDSR_P5_Pos)                   /* (PIO_MDSR) Multi-drive Status Mask */
#define PIO_MDSR_P5(value)                    (PIO_MDSR_P5_Msk & (_UINT32_(value) << PIO_MDSR_P5_Pos)) /* Assignment of value for P5 in the PIO_MDSR register */
#define PIO_MDSR_P6_Pos                       _UINT32_(6)                                          /* (PIO_MDSR) Multi-drive Status Position */
#define PIO_MDSR_P6_Msk                       (_UINT32_(0x1) << PIO_MDSR_P6_Pos)                   /* (PIO_MDSR) Multi-drive Status Mask */
#define PIO_MDSR_P6(value)                    (PIO_MDSR_P6_Msk & (_UINT32_(value) << PIO_MDSR_P6_Pos)) /* Assignment of value for P6 in the PIO_MDSR register */
#define PIO_MDSR_P7_Pos                       _UINT32_(7)                                          /* (PIO_MDSR) Multi-drive Status Position */
#define PIO_MDSR_P7_Msk                       (_UINT32_(0x1) << PIO_MDSR_P7_Pos)                   /* (PIO_MDSR) Multi-drive Status Mask */
#define PIO_MDSR_P7(value)                    (PIO_MDSR_P7_Msk & (_UINT32_(value) << PIO_MDSR_P7_Pos)) /* Assignment of value for P7 in the PIO_MDSR register */
#define PIO_MDSR_P8_Pos                       _UINT32_(8)                                          /* (PIO_MDSR) Multi-drive Status Position */
#define PIO_MDSR_P8_Msk                       (_UINT32_(0x1) << PIO_MDSR_P8_Pos)                   /* (PIO_MDSR) Multi-drive Status Mask */
#define PIO_MDSR_P8(value)                    (PIO_MDSR_P8_Msk & (_UINT32_(value) << PIO_MDSR_P8_Pos)) /* Assignment of value for P8 in the PIO_MDSR register */
#define PIO_MDSR_P9_Pos                       _UINT32_(9)                                          /* (PIO_MDSR) Multi-drive Status Position */
#define PIO_MDSR_P9_Msk                       (_UINT32_(0x1) << PIO_MDSR_P9_Pos)                   /* (PIO_MDSR) Multi-drive Status Mask */
#define PIO_MDSR_P9(value)                    (PIO_MDSR_P9_Msk & (_UINT32_(value) << PIO_MDSR_P9_Pos)) /* Assignment of value for P9 in the PIO_MDSR register */
#define PIO_MDSR_P10_Pos                      _UINT32_(10)                                         /* (PIO_MDSR) Multi-drive Status Position */
#define PIO_MDSR_P10_Msk                      (_UINT32_(0x1) << PIO_MDSR_P10_Pos)                  /* (PIO_MDSR) Multi-drive Status Mask */
#define PIO_MDSR_P10(value)                   (PIO_MDSR_P10_Msk & (_UINT32_(value) << PIO_MDSR_P10_Pos)) /* Assignment of value for P10 in the PIO_MDSR register */
#define PIO_MDSR_P11_Pos                      _UINT32_(11)                                         /* (PIO_MDSR) Multi-drive Status Position */
#define PIO_MDSR_P11_Msk                      (_UINT32_(0x1) << PIO_MDSR_P11_Pos)                  /* (PIO_MDSR) Multi-drive Status Mask */
#define PIO_MDSR_P11(value)                   (PIO_MDSR_P11_Msk & (_UINT32_(value) << PIO_MDSR_P11_Pos)) /* Assignment of value for P11 in the PIO_MDSR register */
#define PIO_MDSR_P12_Pos                      _UINT32_(12)                                         /* (PIO_MDSR) Multi-drive Status Position */
#define PIO_MDSR_P12_Msk                      (_UINT32_(0x1) << PIO_MDSR_P12_Pos)                  /* (PIO_MDSR) Multi-drive Status Mask */
#define PIO_MDSR_P12(value)                   (PIO_MDSR_P12_Msk & (_UINT32_(value) << PIO_MDSR_P12_Pos)) /* Assignment of value for P12 in the PIO_MDSR register */
#define PIO_MDSR_P13_Pos                      _UINT32_(13)                                         /* (PIO_MDSR) Multi-drive Status Position */
#define PIO_MDSR_P13_Msk                      (_UINT32_(0x1) << PIO_MDSR_P13_Pos)                  /* (PIO_MDSR) Multi-drive Status Mask */
#define PIO_MDSR_P13(value)                   (PIO_MDSR_P13_Msk & (_UINT32_(value) << PIO_MDSR_P13_Pos)) /* Assignment of value for P13 in the PIO_MDSR register */
#define PIO_MDSR_P14_Pos                      _UINT32_(14)                                         /* (PIO_MDSR) Multi-drive Status Position */
#define PIO_MDSR_P14_Msk                      (_UINT32_(0x1) << PIO_MDSR_P14_Pos)                  /* (PIO_MDSR) Multi-drive Status Mask */
#define PIO_MDSR_P14(value)                   (PIO_MDSR_P14_Msk & (_UINT32_(value) << PIO_MDSR_P14_Pos)) /* Assignment of value for P14 in the PIO_MDSR register */
#define PIO_MDSR_P15_Pos                      _UINT32_(15)                                         /* (PIO_MDSR) Multi-drive Status Position */
#define PIO_MDSR_P15_Msk                      (_UINT32_(0x1) << PIO_MDSR_P15_Pos)                  /* (PIO_MDSR) Multi-drive Status Mask */
#define PIO_MDSR_P15(value)                   (PIO_MDSR_P15_Msk & (_UINT32_(value) << PIO_MDSR_P15_Pos)) /* Assignment of value for P15 in the PIO_MDSR register */
#define PIO_MDSR_P16_Pos                      _UINT32_(16)                                         /* (PIO_MDSR) Multi-drive Status Position */
#define PIO_MDSR_P16_Msk                      (_UINT32_(0x1) << PIO_MDSR_P16_Pos)                  /* (PIO_MDSR) Multi-drive Status Mask */
#define PIO_MDSR_P16(value)                   (PIO_MDSR_P16_Msk & (_UINT32_(value) << PIO_MDSR_P16_Pos)) /* Assignment of value for P16 in the PIO_MDSR register */
#define PIO_MDSR_P17_Pos                      _UINT32_(17)                                         /* (PIO_MDSR) Multi-drive Status Position */
#define PIO_MDSR_P17_Msk                      (_UINT32_(0x1) << PIO_MDSR_P17_Pos)                  /* (PIO_MDSR) Multi-drive Status Mask */
#define PIO_MDSR_P17(value)                   (PIO_MDSR_P17_Msk & (_UINT32_(value) << PIO_MDSR_P17_Pos)) /* Assignment of value for P17 in the PIO_MDSR register */
#define PIO_MDSR_P18_Pos                      _UINT32_(18)                                         /* (PIO_MDSR) Multi-drive Status Position */
#define PIO_MDSR_P18_Msk                      (_UINT32_(0x1) << PIO_MDSR_P18_Pos)                  /* (PIO_MDSR) Multi-drive Status Mask */
#define PIO_MDSR_P18(value)                   (PIO_MDSR_P18_Msk & (_UINT32_(value) << PIO_MDSR_P18_Pos)) /* Assignment of value for P18 in the PIO_MDSR register */
#define PIO_MDSR_P19_Pos                      _UINT32_(19)                                         /* (PIO_MDSR) Multi-drive Status Position */
#define PIO_MDSR_P19_Msk                      (_UINT32_(0x1) << PIO_MDSR_P19_Pos)                  /* (PIO_MDSR) Multi-drive Status Mask */
#define PIO_MDSR_P19(value)                   (PIO_MDSR_P19_Msk & (_UINT32_(value) << PIO_MDSR_P19_Pos)) /* Assignment of value for P19 in the PIO_MDSR register */
#define PIO_MDSR_P20_Pos                      _UINT32_(20)                                         /* (PIO_MDSR) Multi-drive Status Position */
#define PIO_MDSR_P20_Msk                      (_UINT32_(0x1) << PIO_MDSR_P20_Pos)                  /* (PIO_MDSR) Multi-drive Status Mask */
#define PIO_MDSR_P20(value)                   (PIO_MDSR_P20_Msk & (_UINT32_(value) << PIO_MDSR_P20_Pos)) /* Assignment of value for P20 in the PIO_MDSR register */
#define PIO_MDSR_P21_Pos                      _UINT32_(21)                                         /* (PIO_MDSR) Multi-drive Status Position */
#define PIO_MDSR_P21_Msk                      (_UINT32_(0x1) << PIO_MDSR_P21_Pos)                  /* (PIO_MDSR) Multi-drive Status Mask */
#define PIO_MDSR_P21(value)                   (PIO_MDSR_P21_Msk & (_UINT32_(value) << PIO_MDSR_P21_Pos)) /* Assignment of value for P21 in the PIO_MDSR register */
#define PIO_MDSR_P22_Pos                      _UINT32_(22)                                         /* (PIO_MDSR) Multi-drive Status Position */
#define PIO_MDSR_P22_Msk                      (_UINT32_(0x1) << PIO_MDSR_P22_Pos)                  /* (PIO_MDSR) Multi-drive Status Mask */
#define PIO_MDSR_P22(value)                   (PIO_MDSR_P22_Msk & (_UINT32_(value) << PIO_MDSR_P22_Pos)) /* Assignment of value for P22 in the PIO_MDSR register */
#define PIO_MDSR_P23_Pos                      _UINT32_(23)                                         /* (PIO_MDSR) Multi-drive Status Position */
#define PIO_MDSR_P23_Msk                      (_UINT32_(0x1) << PIO_MDSR_P23_Pos)                  /* (PIO_MDSR) Multi-drive Status Mask */
#define PIO_MDSR_P23(value)                   (PIO_MDSR_P23_Msk & (_UINT32_(value) << PIO_MDSR_P23_Pos)) /* Assignment of value for P23 in the PIO_MDSR register */
#define PIO_MDSR_P24_Pos                      _UINT32_(24)                                         /* (PIO_MDSR) Multi-drive Status Position */
#define PIO_MDSR_P24_Msk                      (_UINT32_(0x1) << PIO_MDSR_P24_Pos)                  /* (PIO_MDSR) Multi-drive Status Mask */
#define PIO_MDSR_P24(value)                   (PIO_MDSR_P24_Msk & (_UINT32_(value) << PIO_MDSR_P24_Pos)) /* Assignment of value for P24 in the PIO_MDSR register */
#define PIO_MDSR_P25_Pos                      _UINT32_(25)                                         /* (PIO_MDSR) Multi-drive Status Position */
#define PIO_MDSR_P25_Msk                      (_UINT32_(0x1) << PIO_MDSR_P25_Pos)                  /* (PIO_MDSR) Multi-drive Status Mask */
#define PIO_MDSR_P25(value)                   (PIO_MDSR_P25_Msk & (_UINT32_(value) << PIO_MDSR_P25_Pos)) /* Assignment of value for P25 in the PIO_MDSR register */
#define PIO_MDSR_P26_Pos                      _UINT32_(26)                                         /* (PIO_MDSR) Multi-drive Status Position */
#define PIO_MDSR_P26_Msk                      (_UINT32_(0x1) << PIO_MDSR_P26_Pos)                  /* (PIO_MDSR) Multi-drive Status Mask */
#define PIO_MDSR_P26(value)                   (PIO_MDSR_P26_Msk & (_UINT32_(value) << PIO_MDSR_P26_Pos)) /* Assignment of value for P26 in the PIO_MDSR register */
#define PIO_MDSR_P27_Pos                      _UINT32_(27)                                         /* (PIO_MDSR) Multi-drive Status Position */
#define PIO_MDSR_P27_Msk                      (_UINT32_(0x1) << PIO_MDSR_P27_Pos)                  /* (PIO_MDSR) Multi-drive Status Mask */
#define PIO_MDSR_P27(value)                   (PIO_MDSR_P27_Msk & (_UINT32_(value) << PIO_MDSR_P27_Pos)) /* Assignment of value for P27 in the PIO_MDSR register */
#define PIO_MDSR_P28_Pos                      _UINT32_(28)                                         /* (PIO_MDSR) Multi-drive Status Position */
#define PIO_MDSR_P28_Msk                      (_UINT32_(0x1) << PIO_MDSR_P28_Pos)                  /* (PIO_MDSR) Multi-drive Status Mask */
#define PIO_MDSR_P28(value)                   (PIO_MDSR_P28_Msk & (_UINT32_(value) << PIO_MDSR_P28_Pos)) /* Assignment of value for P28 in the PIO_MDSR register */
#define PIO_MDSR_P29_Pos                      _UINT32_(29)                                         /* (PIO_MDSR) Multi-drive Status Position */
#define PIO_MDSR_P29_Msk                      (_UINT32_(0x1) << PIO_MDSR_P29_Pos)                  /* (PIO_MDSR) Multi-drive Status Mask */
#define PIO_MDSR_P29(value)                   (PIO_MDSR_P29_Msk & (_UINT32_(value) << PIO_MDSR_P29_Pos)) /* Assignment of value for P29 in the PIO_MDSR register */
#define PIO_MDSR_P30_Pos                      _UINT32_(30)                                         /* (PIO_MDSR) Multi-drive Status Position */
#define PIO_MDSR_P30_Msk                      (_UINT32_(0x1) << PIO_MDSR_P30_Pos)                  /* (PIO_MDSR) Multi-drive Status Mask */
#define PIO_MDSR_P30(value)                   (PIO_MDSR_P30_Msk & (_UINT32_(value) << PIO_MDSR_P30_Pos)) /* Assignment of value for P30 in the PIO_MDSR register */
#define PIO_MDSR_P31_Pos                      _UINT32_(31)                                         /* (PIO_MDSR) Multi-drive Status Position */
#define PIO_MDSR_P31_Msk                      (_UINT32_(0x1) << PIO_MDSR_P31_Pos)                  /* (PIO_MDSR) Multi-drive Status Mask */
#define PIO_MDSR_P31(value)                   (PIO_MDSR_P31_Msk & (_UINT32_(value) << PIO_MDSR_P31_Pos)) /* Assignment of value for P31 in the PIO_MDSR register */
#define PIO_MDSR_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (PIO_MDSR) Register Mask  */

#define PIO_MDSR_P_Pos                        _UINT32_(0)                                          /* (PIO_MDSR Position) Multi-drive Status */
#define PIO_MDSR_P_Msk                        (_UINT32_(0xFFFFFFFF) << PIO_MDSR_P_Pos)             /* (PIO_MDSR Mask) P */
#define PIO_MDSR_P(value)                     (PIO_MDSR_P_Msk & (_UINT32_(value) << PIO_MDSR_P_Pos)) 

/* -------- PIO_PUDR : (PIO Offset: 0x60) ( /W 32) Pull-up Disable Register -------- */
#define PIO_PUDR_P0_Pos                       _UINT32_(0)                                          /* (PIO_PUDR) Pull-Up Disable Position */
#define PIO_PUDR_P0_Msk                       (_UINT32_(0x1) << PIO_PUDR_P0_Pos)                   /* (PIO_PUDR) Pull-Up Disable Mask */
#define PIO_PUDR_P0(value)                    (PIO_PUDR_P0_Msk & (_UINT32_(value) << PIO_PUDR_P0_Pos)) /* Assignment of value for P0 in the PIO_PUDR register */
#define PIO_PUDR_P1_Pos                       _UINT32_(1)                                          /* (PIO_PUDR) Pull-Up Disable Position */
#define PIO_PUDR_P1_Msk                       (_UINT32_(0x1) << PIO_PUDR_P1_Pos)                   /* (PIO_PUDR) Pull-Up Disable Mask */
#define PIO_PUDR_P1(value)                    (PIO_PUDR_P1_Msk & (_UINT32_(value) << PIO_PUDR_P1_Pos)) /* Assignment of value for P1 in the PIO_PUDR register */
#define PIO_PUDR_P2_Pos                       _UINT32_(2)                                          /* (PIO_PUDR) Pull-Up Disable Position */
#define PIO_PUDR_P2_Msk                       (_UINT32_(0x1) << PIO_PUDR_P2_Pos)                   /* (PIO_PUDR) Pull-Up Disable Mask */
#define PIO_PUDR_P2(value)                    (PIO_PUDR_P2_Msk & (_UINT32_(value) << PIO_PUDR_P2_Pos)) /* Assignment of value for P2 in the PIO_PUDR register */
#define PIO_PUDR_P3_Pos                       _UINT32_(3)                                          /* (PIO_PUDR) Pull-Up Disable Position */
#define PIO_PUDR_P3_Msk                       (_UINT32_(0x1) << PIO_PUDR_P3_Pos)                   /* (PIO_PUDR) Pull-Up Disable Mask */
#define PIO_PUDR_P3(value)                    (PIO_PUDR_P3_Msk & (_UINT32_(value) << PIO_PUDR_P3_Pos)) /* Assignment of value for P3 in the PIO_PUDR register */
#define PIO_PUDR_P4_Pos                       _UINT32_(4)                                          /* (PIO_PUDR) Pull-Up Disable Position */
#define PIO_PUDR_P4_Msk                       (_UINT32_(0x1) << PIO_PUDR_P4_Pos)                   /* (PIO_PUDR) Pull-Up Disable Mask */
#define PIO_PUDR_P4(value)                    (PIO_PUDR_P4_Msk & (_UINT32_(value) << PIO_PUDR_P4_Pos)) /* Assignment of value for P4 in the PIO_PUDR register */
#define PIO_PUDR_P5_Pos                       _UINT32_(5)                                          /* (PIO_PUDR) Pull-Up Disable Position */
#define PIO_PUDR_P5_Msk                       (_UINT32_(0x1) << PIO_PUDR_P5_Pos)                   /* (PIO_PUDR) Pull-Up Disable Mask */
#define PIO_PUDR_P5(value)                    (PIO_PUDR_P5_Msk & (_UINT32_(value) << PIO_PUDR_P5_Pos)) /* Assignment of value for P5 in the PIO_PUDR register */
#define PIO_PUDR_P6_Pos                       _UINT32_(6)                                          /* (PIO_PUDR) Pull-Up Disable Position */
#define PIO_PUDR_P6_Msk                       (_UINT32_(0x1) << PIO_PUDR_P6_Pos)                   /* (PIO_PUDR) Pull-Up Disable Mask */
#define PIO_PUDR_P6(value)                    (PIO_PUDR_P6_Msk & (_UINT32_(value) << PIO_PUDR_P6_Pos)) /* Assignment of value for P6 in the PIO_PUDR register */
#define PIO_PUDR_P7_Pos                       _UINT32_(7)                                          /* (PIO_PUDR) Pull-Up Disable Position */
#define PIO_PUDR_P7_Msk                       (_UINT32_(0x1) << PIO_PUDR_P7_Pos)                   /* (PIO_PUDR) Pull-Up Disable Mask */
#define PIO_PUDR_P7(value)                    (PIO_PUDR_P7_Msk & (_UINT32_(value) << PIO_PUDR_P7_Pos)) /* Assignment of value for P7 in the PIO_PUDR register */
#define PIO_PUDR_P8_Pos                       _UINT32_(8)                                          /* (PIO_PUDR) Pull-Up Disable Position */
#define PIO_PUDR_P8_Msk                       (_UINT32_(0x1) << PIO_PUDR_P8_Pos)                   /* (PIO_PUDR) Pull-Up Disable Mask */
#define PIO_PUDR_P8(value)                    (PIO_PUDR_P8_Msk & (_UINT32_(value) << PIO_PUDR_P8_Pos)) /* Assignment of value for P8 in the PIO_PUDR register */
#define PIO_PUDR_P9_Pos                       _UINT32_(9)                                          /* (PIO_PUDR) Pull-Up Disable Position */
#define PIO_PUDR_P9_Msk                       (_UINT32_(0x1) << PIO_PUDR_P9_Pos)                   /* (PIO_PUDR) Pull-Up Disable Mask */
#define PIO_PUDR_P9(value)                    (PIO_PUDR_P9_Msk & (_UINT32_(value) << PIO_PUDR_P9_Pos)) /* Assignment of value for P9 in the PIO_PUDR register */
#define PIO_PUDR_P10_Pos                      _UINT32_(10)                                         /* (PIO_PUDR) Pull-Up Disable Position */
#define PIO_PUDR_P10_Msk                      (_UINT32_(0x1) << PIO_PUDR_P10_Pos)                  /* (PIO_PUDR) Pull-Up Disable Mask */
#define PIO_PUDR_P10(value)                   (PIO_PUDR_P10_Msk & (_UINT32_(value) << PIO_PUDR_P10_Pos)) /* Assignment of value for P10 in the PIO_PUDR register */
#define PIO_PUDR_P11_Pos                      _UINT32_(11)                                         /* (PIO_PUDR) Pull-Up Disable Position */
#define PIO_PUDR_P11_Msk                      (_UINT32_(0x1) << PIO_PUDR_P11_Pos)                  /* (PIO_PUDR) Pull-Up Disable Mask */
#define PIO_PUDR_P11(value)                   (PIO_PUDR_P11_Msk & (_UINT32_(value) << PIO_PUDR_P11_Pos)) /* Assignment of value for P11 in the PIO_PUDR register */
#define PIO_PUDR_P12_Pos                      _UINT32_(12)                                         /* (PIO_PUDR) Pull-Up Disable Position */
#define PIO_PUDR_P12_Msk                      (_UINT32_(0x1) << PIO_PUDR_P12_Pos)                  /* (PIO_PUDR) Pull-Up Disable Mask */
#define PIO_PUDR_P12(value)                   (PIO_PUDR_P12_Msk & (_UINT32_(value) << PIO_PUDR_P12_Pos)) /* Assignment of value for P12 in the PIO_PUDR register */
#define PIO_PUDR_P13_Pos                      _UINT32_(13)                                         /* (PIO_PUDR) Pull-Up Disable Position */
#define PIO_PUDR_P13_Msk                      (_UINT32_(0x1) << PIO_PUDR_P13_Pos)                  /* (PIO_PUDR) Pull-Up Disable Mask */
#define PIO_PUDR_P13(value)                   (PIO_PUDR_P13_Msk & (_UINT32_(value) << PIO_PUDR_P13_Pos)) /* Assignment of value for P13 in the PIO_PUDR register */
#define PIO_PUDR_P14_Pos                      _UINT32_(14)                                         /* (PIO_PUDR) Pull-Up Disable Position */
#define PIO_PUDR_P14_Msk                      (_UINT32_(0x1) << PIO_PUDR_P14_Pos)                  /* (PIO_PUDR) Pull-Up Disable Mask */
#define PIO_PUDR_P14(value)                   (PIO_PUDR_P14_Msk & (_UINT32_(value) << PIO_PUDR_P14_Pos)) /* Assignment of value for P14 in the PIO_PUDR register */
#define PIO_PUDR_P15_Pos                      _UINT32_(15)                                         /* (PIO_PUDR) Pull-Up Disable Position */
#define PIO_PUDR_P15_Msk                      (_UINT32_(0x1) << PIO_PUDR_P15_Pos)                  /* (PIO_PUDR) Pull-Up Disable Mask */
#define PIO_PUDR_P15(value)                   (PIO_PUDR_P15_Msk & (_UINT32_(value) << PIO_PUDR_P15_Pos)) /* Assignment of value for P15 in the PIO_PUDR register */
#define PIO_PUDR_P16_Pos                      _UINT32_(16)                                         /* (PIO_PUDR) Pull-Up Disable Position */
#define PIO_PUDR_P16_Msk                      (_UINT32_(0x1) << PIO_PUDR_P16_Pos)                  /* (PIO_PUDR) Pull-Up Disable Mask */
#define PIO_PUDR_P16(value)                   (PIO_PUDR_P16_Msk & (_UINT32_(value) << PIO_PUDR_P16_Pos)) /* Assignment of value for P16 in the PIO_PUDR register */
#define PIO_PUDR_P17_Pos                      _UINT32_(17)                                         /* (PIO_PUDR) Pull-Up Disable Position */
#define PIO_PUDR_P17_Msk                      (_UINT32_(0x1) << PIO_PUDR_P17_Pos)                  /* (PIO_PUDR) Pull-Up Disable Mask */
#define PIO_PUDR_P17(value)                   (PIO_PUDR_P17_Msk & (_UINT32_(value) << PIO_PUDR_P17_Pos)) /* Assignment of value for P17 in the PIO_PUDR register */
#define PIO_PUDR_P18_Pos                      _UINT32_(18)                                         /* (PIO_PUDR) Pull-Up Disable Position */
#define PIO_PUDR_P18_Msk                      (_UINT32_(0x1) << PIO_PUDR_P18_Pos)                  /* (PIO_PUDR) Pull-Up Disable Mask */
#define PIO_PUDR_P18(value)                   (PIO_PUDR_P18_Msk & (_UINT32_(value) << PIO_PUDR_P18_Pos)) /* Assignment of value for P18 in the PIO_PUDR register */
#define PIO_PUDR_P19_Pos                      _UINT32_(19)                                         /* (PIO_PUDR) Pull-Up Disable Position */
#define PIO_PUDR_P19_Msk                      (_UINT32_(0x1) << PIO_PUDR_P19_Pos)                  /* (PIO_PUDR) Pull-Up Disable Mask */
#define PIO_PUDR_P19(value)                   (PIO_PUDR_P19_Msk & (_UINT32_(value) << PIO_PUDR_P19_Pos)) /* Assignment of value for P19 in the PIO_PUDR register */
#define PIO_PUDR_P20_Pos                      _UINT32_(20)                                         /* (PIO_PUDR) Pull-Up Disable Position */
#define PIO_PUDR_P20_Msk                      (_UINT32_(0x1) << PIO_PUDR_P20_Pos)                  /* (PIO_PUDR) Pull-Up Disable Mask */
#define PIO_PUDR_P20(value)                   (PIO_PUDR_P20_Msk & (_UINT32_(value) << PIO_PUDR_P20_Pos)) /* Assignment of value for P20 in the PIO_PUDR register */
#define PIO_PUDR_P21_Pos                      _UINT32_(21)                                         /* (PIO_PUDR) Pull-Up Disable Position */
#define PIO_PUDR_P21_Msk                      (_UINT32_(0x1) << PIO_PUDR_P21_Pos)                  /* (PIO_PUDR) Pull-Up Disable Mask */
#define PIO_PUDR_P21(value)                   (PIO_PUDR_P21_Msk & (_UINT32_(value) << PIO_PUDR_P21_Pos)) /* Assignment of value for P21 in the PIO_PUDR register */
#define PIO_PUDR_P22_Pos                      _UINT32_(22)                                         /* (PIO_PUDR) Pull-Up Disable Position */
#define PIO_PUDR_P22_Msk                      (_UINT32_(0x1) << PIO_PUDR_P22_Pos)                  /* (PIO_PUDR) Pull-Up Disable Mask */
#define PIO_PUDR_P22(value)                   (PIO_PUDR_P22_Msk & (_UINT32_(value) << PIO_PUDR_P22_Pos)) /* Assignment of value for P22 in the PIO_PUDR register */
#define PIO_PUDR_P23_Pos                      _UINT32_(23)                                         /* (PIO_PUDR) Pull-Up Disable Position */
#define PIO_PUDR_P23_Msk                      (_UINT32_(0x1) << PIO_PUDR_P23_Pos)                  /* (PIO_PUDR) Pull-Up Disable Mask */
#define PIO_PUDR_P23(value)                   (PIO_PUDR_P23_Msk & (_UINT32_(value) << PIO_PUDR_P23_Pos)) /* Assignment of value for P23 in the PIO_PUDR register */
#define PIO_PUDR_P24_Pos                      _UINT32_(24)                                         /* (PIO_PUDR) Pull-Up Disable Position */
#define PIO_PUDR_P24_Msk                      (_UINT32_(0x1) << PIO_PUDR_P24_Pos)                  /* (PIO_PUDR) Pull-Up Disable Mask */
#define PIO_PUDR_P24(value)                   (PIO_PUDR_P24_Msk & (_UINT32_(value) << PIO_PUDR_P24_Pos)) /* Assignment of value for P24 in the PIO_PUDR register */
#define PIO_PUDR_P25_Pos                      _UINT32_(25)                                         /* (PIO_PUDR) Pull-Up Disable Position */
#define PIO_PUDR_P25_Msk                      (_UINT32_(0x1) << PIO_PUDR_P25_Pos)                  /* (PIO_PUDR) Pull-Up Disable Mask */
#define PIO_PUDR_P25(value)                   (PIO_PUDR_P25_Msk & (_UINT32_(value) << PIO_PUDR_P25_Pos)) /* Assignment of value for P25 in the PIO_PUDR register */
#define PIO_PUDR_P26_Pos                      _UINT32_(26)                                         /* (PIO_PUDR) Pull-Up Disable Position */
#define PIO_PUDR_P26_Msk                      (_UINT32_(0x1) << PIO_PUDR_P26_Pos)                  /* (PIO_PUDR) Pull-Up Disable Mask */
#define PIO_PUDR_P26(value)                   (PIO_PUDR_P26_Msk & (_UINT32_(value) << PIO_PUDR_P26_Pos)) /* Assignment of value for P26 in the PIO_PUDR register */
#define PIO_PUDR_P27_Pos                      _UINT32_(27)                                         /* (PIO_PUDR) Pull-Up Disable Position */
#define PIO_PUDR_P27_Msk                      (_UINT32_(0x1) << PIO_PUDR_P27_Pos)                  /* (PIO_PUDR) Pull-Up Disable Mask */
#define PIO_PUDR_P27(value)                   (PIO_PUDR_P27_Msk & (_UINT32_(value) << PIO_PUDR_P27_Pos)) /* Assignment of value for P27 in the PIO_PUDR register */
#define PIO_PUDR_P28_Pos                      _UINT32_(28)                                         /* (PIO_PUDR) Pull-Up Disable Position */
#define PIO_PUDR_P28_Msk                      (_UINT32_(0x1) << PIO_PUDR_P28_Pos)                  /* (PIO_PUDR) Pull-Up Disable Mask */
#define PIO_PUDR_P28(value)                   (PIO_PUDR_P28_Msk & (_UINT32_(value) << PIO_PUDR_P28_Pos)) /* Assignment of value for P28 in the PIO_PUDR register */
#define PIO_PUDR_P29_Pos                      _UINT32_(29)                                         /* (PIO_PUDR) Pull-Up Disable Position */
#define PIO_PUDR_P29_Msk                      (_UINT32_(0x1) << PIO_PUDR_P29_Pos)                  /* (PIO_PUDR) Pull-Up Disable Mask */
#define PIO_PUDR_P29(value)                   (PIO_PUDR_P29_Msk & (_UINT32_(value) << PIO_PUDR_P29_Pos)) /* Assignment of value for P29 in the PIO_PUDR register */
#define PIO_PUDR_P30_Pos                      _UINT32_(30)                                         /* (PIO_PUDR) Pull-Up Disable Position */
#define PIO_PUDR_P30_Msk                      (_UINT32_(0x1) << PIO_PUDR_P30_Pos)                  /* (PIO_PUDR) Pull-Up Disable Mask */
#define PIO_PUDR_P30(value)                   (PIO_PUDR_P30_Msk & (_UINT32_(value) << PIO_PUDR_P30_Pos)) /* Assignment of value for P30 in the PIO_PUDR register */
#define PIO_PUDR_P31_Pos                      _UINT32_(31)                                         /* (PIO_PUDR) Pull-Up Disable Position */
#define PIO_PUDR_P31_Msk                      (_UINT32_(0x1) << PIO_PUDR_P31_Pos)                  /* (PIO_PUDR) Pull-Up Disable Mask */
#define PIO_PUDR_P31(value)                   (PIO_PUDR_P31_Msk & (_UINT32_(value) << PIO_PUDR_P31_Pos)) /* Assignment of value for P31 in the PIO_PUDR register */
#define PIO_PUDR_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (PIO_PUDR) Register Mask  */

#define PIO_PUDR_P_Pos                        _UINT32_(0)                                          /* (PIO_PUDR Position) Pull-Up Disable */
#define PIO_PUDR_P_Msk                        (_UINT32_(0xFFFFFFFF) << PIO_PUDR_P_Pos)             /* (PIO_PUDR Mask) P */
#define PIO_PUDR_P(value)                     (PIO_PUDR_P_Msk & (_UINT32_(value) << PIO_PUDR_P_Pos)) 

/* -------- PIO_PUER : (PIO Offset: 0x64) ( /W 32) Pull-up Enable Register -------- */
#define PIO_PUER_P0_Pos                       _UINT32_(0)                                          /* (PIO_PUER) Pull-Up Enable Position */
#define PIO_PUER_P0_Msk                       (_UINT32_(0x1) << PIO_PUER_P0_Pos)                   /* (PIO_PUER) Pull-Up Enable Mask */
#define PIO_PUER_P0(value)                    (PIO_PUER_P0_Msk & (_UINT32_(value) << PIO_PUER_P0_Pos)) /* Assignment of value for P0 in the PIO_PUER register */
#define PIO_PUER_P1_Pos                       _UINT32_(1)                                          /* (PIO_PUER) Pull-Up Enable Position */
#define PIO_PUER_P1_Msk                       (_UINT32_(0x1) << PIO_PUER_P1_Pos)                   /* (PIO_PUER) Pull-Up Enable Mask */
#define PIO_PUER_P1(value)                    (PIO_PUER_P1_Msk & (_UINT32_(value) << PIO_PUER_P1_Pos)) /* Assignment of value for P1 in the PIO_PUER register */
#define PIO_PUER_P2_Pos                       _UINT32_(2)                                          /* (PIO_PUER) Pull-Up Enable Position */
#define PIO_PUER_P2_Msk                       (_UINT32_(0x1) << PIO_PUER_P2_Pos)                   /* (PIO_PUER) Pull-Up Enable Mask */
#define PIO_PUER_P2(value)                    (PIO_PUER_P2_Msk & (_UINT32_(value) << PIO_PUER_P2_Pos)) /* Assignment of value for P2 in the PIO_PUER register */
#define PIO_PUER_P3_Pos                       _UINT32_(3)                                          /* (PIO_PUER) Pull-Up Enable Position */
#define PIO_PUER_P3_Msk                       (_UINT32_(0x1) << PIO_PUER_P3_Pos)                   /* (PIO_PUER) Pull-Up Enable Mask */
#define PIO_PUER_P3(value)                    (PIO_PUER_P3_Msk & (_UINT32_(value) << PIO_PUER_P3_Pos)) /* Assignment of value for P3 in the PIO_PUER register */
#define PIO_PUER_P4_Pos                       _UINT32_(4)                                          /* (PIO_PUER) Pull-Up Enable Position */
#define PIO_PUER_P4_Msk                       (_UINT32_(0x1) << PIO_PUER_P4_Pos)                   /* (PIO_PUER) Pull-Up Enable Mask */
#define PIO_PUER_P4(value)                    (PIO_PUER_P4_Msk & (_UINT32_(value) << PIO_PUER_P4_Pos)) /* Assignment of value for P4 in the PIO_PUER register */
#define PIO_PUER_P5_Pos                       _UINT32_(5)                                          /* (PIO_PUER) Pull-Up Enable Position */
#define PIO_PUER_P5_Msk                       (_UINT32_(0x1) << PIO_PUER_P5_Pos)                   /* (PIO_PUER) Pull-Up Enable Mask */
#define PIO_PUER_P5(value)                    (PIO_PUER_P5_Msk & (_UINT32_(value) << PIO_PUER_P5_Pos)) /* Assignment of value for P5 in the PIO_PUER register */
#define PIO_PUER_P6_Pos                       _UINT32_(6)                                          /* (PIO_PUER) Pull-Up Enable Position */
#define PIO_PUER_P6_Msk                       (_UINT32_(0x1) << PIO_PUER_P6_Pos)                   /* (PIO_PUER) Pull-Up Enable Mask */
#define PIO_PUER_P6(value)                    (PIO_PUER_P6_Msk & (_UINT32_(value) << PIO_PUER_P6_Pos)) /* Assignment of value for P6 in the PIO_PUER register */
#define PIO_PUER_P7_Pos                       _UINT32_(7)                                          /* (PIO_PUER) Pull-Up Enable Position */
#define PIO_PUER_P7_Msk                       (_UINT32_(0x1) << PIO_PUER_P7_Pos)                   /* (PIO_PUER) Pull-Up Enable Mask */
#define PIO_PUER_P7(value)                    (PIO_PUER_P7_Msk & (_UINT32_(value) << PIO_PUER_P7_Pos)) /* Assignment of value for P7 in the PIO_PUER register */
#define PIO_PUER_P8_Pos                       _UINT32_(8)                                          /* (PIO_PUER) Pull-Up Enable Position */
#define PIO_PUER_P8_Msk                       (_UINT32_(0x1) << PIO_PUER_P8_Pos)                   /* (PIO_PUER) Pull-Up Enable Mask */
#define PIO_PUER_P8(value)                    (PIO_PUER_P8_Msk & (_UINT32_(value) << PIO_PUER_P8_Pos)) /* Assignment of value for P8 in the PIO_PUER register */
#define PIO_PUER_P9_Pos                       _UINT32_(9)                                          /* (PIO_PUER) Pull-Up Enable Position */
#define PIO_PUER_P9_Msk                       (_UINT32_(0x1) << PIO_PUER_P9_Pos)                   /* (PIO_PUER) Pull-Up Enable Mask */
#define PIO_PUER_P9(value)                    (PIO_PUER_P9_Msk & (_UINT32_(value) << PIO_PUER_P9_Pos)) /* Assignment of value for P9 in the PIO_PUER register */
#define PIO_PUER_P10_Pos                      _UINT32_(10)                                         /* (PIO_PUER) Pull-Up Enable Position */
#define PIO_PUER_P10_Msk                      (_UINT32_(0x1) << PIO_PUER_P10_Pos)                  /* (PIO_PUER) Pull-Up Enable Mask */
#define PIO_PUER_P10(value)                   (PIO_PUER_P10_Msk & (_UINT32_(value) << PIO_PUER_P10_Pos)) /* Assignment of value for P10 in the PIO_PUER register */
#define PIO_PUER_P11_Pos                      _UINT32_(11)                                         /* (PIO_PUER) Pull-Up Enable Position */
#define PIO_PUER_P11_Msk                      (_UINT32_(0x1) << PIO_PUER_P11_Pos)                  /* (PIO_PUER) Pull-Up Enable Mask */
#define PIO_PUER_P11(value)                   (PIO_PUER_P11_Msk & (_UINT32_(value) << PIO_PUER_P11_Pos)) /* Assignment of value for P11 in the PIO_PUER register */
#define PIO_PUER_P12_Pos                      _UINT32_(12)                                         /* (PIO_PUER) Pull-Up Enable Position */
#define PIO_PUER_P12_Msk                      (_UINT32_(0x1) << PIO_PUER_P12_Pos)                  /* (PIO_PUER) Pull-Up Enable Mask */
#define PIO_PUER_P12(value)                   (PIO_PUER_P12_Msk & (_UINT32_(value) << PIO_PUER_P12_Pos)) /* Assignment of value for P12 in the PIO_PUER register */
#define PIO_PUER_P13_Pos                      _UINT32_(13)                                         /* (PIO_PUER) Pull-Up Enable Position */
#define PIO_PUER_P13_Msk                      (_UINT32_(0x1) << PIO_PUER_P13_Pos)                  /* (PIO_PUER) Pull-Up Enable Mask */
#define PIO_PUER_P13(value)                   (PIO_PUER_P13_Msk & (_UINT32_(value) << PIO_PUER_P13_Pos)) /* Assignment of value for P13 in the PIO_PUER register */
#define PIO_PUER_P14_Pos                      _UINT32_(14)                                         /* (PIO_PUER) Pull-Up Enable Position */
#define PIO_PUER_P14_Msk                      (_UINT32_(0x1) << PIO_PUER_P14_Pos)                  /* (PIO_PUER) Pull-Up Enable Mask */
#define PIO_PUER_P14(value)                   (PIO_PUER_P14_Msk & (_UINT32_(value) << PIO_PUER_P14_Pos)) /* Assignment of value for P14 in the PIO_PUER register */
#define PIO_PUER_P15_Pos                      _UINT32_(15)                                         /* (PIO_PUER) Pull-Up Enable Position */
#define PIO_PUER_P15_Msk                      (_UINT32_(0x1) << PIO_PUER_P15_Pos)                  /* (PIO_PUER) Pull-Up Enable Mask */
#define PIO_PUER_P15(value)                   (PIO_PUER_P15_Msk & (_UINT32_(value) << PIO_PUER_P15_Pos)) /* Assignment of value for P15 in the PIO_PUER register */
#define PIO_PUER_P16_Pos                      _UINT32_(16)                                         /* (PIO_PUER) Pull-Up Enable Position */
#define PIO_PUER_P16_Msk                      (_UINT32_(0x1) << PIO_PUER_P16_Pos)                  /* (PIO_PUER) Pull-Up Enable Mask */
#define PIO_PUER_P16(value)                   (PIO_PUER_P16_Msk & (_UINT32_(value) << PIO_PUER_P16_Pos)) /* Assignment of value for P16 in the PIO_PUER register */
#define PIO_PUER_P17_Pos                      _UINT32_(17)                                         /* (PIO_PUER) Pull-Up Enable Position */
#define PIO_PUER_P17_Msk                      (_UINT32_(0x1) << PIO_PUER_P17_Pos)                  /* (PIO_PUER) Pull-Up Enable Mask */
#define PIO_PUER_P17(value)                   (PIO_PUER_P17_Msk & (_UINT32_(value) << PIO_PUER_P17_Pos)) /* Assignment of value for P17 in the PIO_PUER register */
#define PIO_PUER_P18_Pos                      _UINT32_(18)                                         /* (PIO_PUER) Pull-Up Enable Position */
#define PIO_PUER_P18_Msk                      (_UINT32_(0x1) << PIO_PUER_P18_Pos)                  /* (PIO_PUER) Pull-Up Enable Mask */
#define PIO_PUER_P18(value)                   (PIO_PUER_P18_Msk & (_UINT32_(value) << PIO_PUER_P18_Pos)) /* Assignment of value for P18 in the PIO_PUER register */
#define PIO_PUER_P19_Pos                      _UINT32_(19)                                         /* (PIO_PUER) Pull-Up Enable Position */
#define PIO_PUER_P19_Msk                      (_UINT32_(0x1) << PIO_PUER_P19_Pos)                  /* (PIO_PUER) Pull-Up Enable Mask */
#define PIO_PUER_P19(value)                   (PIO_PUER_P19_Msk & (_UINT32_(value) << PIO_PUER_P19_Pos)) /* Assignment of value for P19 in the PIO_PUER register */
#define PIO_PUER_P20_Pos                      _UINT32_(20)                                         /* (PIO_PUER) Pull-Up Enable Position */
#define PIO_PUER_P20_Msk                      (_UINT32_(0x1) << PIO_PUER_P20_Pos)                  /* (PIO_PUER) Pull-Up Enable Mask */
#define PIO_PUER_P20(value)                   (PIO_PUER_P20_Msk & (_UINT32_(value) << PIO_PUER_P20_Pos)) /* Assignment of value for P20 in the PIO_PUER register */
#define PIO_PUER_P21_Pos                      _UINT32_(21)                                         /* (PIO_PUER) Pull-Up Enable Position */
#define PIO_PUER_P21_Msk                      (_UINT32_(0x1) << PIO_PUER_P21_Pos)                  /* (PIO_PUER) Pull-Up Enable Mask */
#define PIO_PUER_P21(value)                   (PIO_PUER_P21_Msk & (_UINT32_(value) << PIO_PUER_P21_Pos)) /* Assignment of value for P21 in the PIO_PUER register */
#define PIO_PUER_P22_Pos                      _UINT32_(22)                                         /* (PIO_PUER) Pull-Up Enable Position */
#define PIO_PUER_P22_Msk                      (_UINT32_(0x1) << PIO_PUER_P22_Pos)                  /* (PIO_PUER) Pull-Up Enable Mask */
#define PIO_PUER_P22(value)                   (PIO_PUER_P22_Msk & (_UINT32_(value) << PIO_PUER_P22_Pos)) /* Assignment of value for P22 in the PIO_PUER register */
#define PIO_PUER_P23_Pos                      _UINT32_(23)                                         /* (PIO_PUER) Pull-Up Enable Position */
#define PIO_PUER_P23_Msk                      (_UINT32_(0x1) << PIO_PUER_P23_Pos)                  /* (PIO_PUER) Pull-Up Enable Mask */
#define PIO_PUER_P23(value)                   (PIO_PUER_P23_Msk & (_UINT32_(value) << PIO_PUER_P23_Pos)) /* Assignment of value for P23 in the PIO_PUER register */
#define PIO_PUER_P24_Pos                      _UINT32_(24)                                         /* (PIO_PUER) Pull-Up Enable Position */
#define PIO_PUER_P24_Msk                      (_UINT32_(0x1) << PIO_PUER_P24_Pos)                  /* (PIO_PUER) Pull-Up Enable Mask */
#define PIO_PUER_P24(value)                   (PIO_PUER_P24_Msk & (_UINT32_(value) << PIO_PUER_P24_Pos)) /* Assignment of value for P24 in the PIO_PUER register */
#define PIO_PUER_P25_Pos                      _UINT32_(25)                                         /* (PIO_PUER) Pull-Up Enable Position */
#define PIO_PUER_P25_Msk                      (_UINT32_(0x1) << PIO_PUER_P25_Pos)                  /* (PIO_PUER) Pull-Up Enable Mask */
#define PIO_PUER_P25(value)                   (PIO_PUER_P25_Msk & (_UINT32_(value) << PIO_PUER_P25_Pos)) /* Assignment of value for P25 in the PIO_PUER register */
#define PIO_PUER_P26_Pos                      _UINT32_(26)                                         /* (PIO_PUER) Pull-Up Enable Position */
#define PIO_PUER_P26_Msk                      (_UINT32_(0x1) << PIO_PUER_P26_Pos)                  /* (PIO_PUER) Pull-Up Enable Mask */
#define PIO_PUER_P26(value)                   (PIO_PUER_P26_Msk & (_UINT32_(value) << PIO_PUER_P26_Pos)) /* Assignment of value for P26 in the PIO_PUER register */
#define PIO_PUER_P27_Pos                      _UINT32_(27)                                         /* (PIO_PUER) Pull-Up Enable Position */
#define PIO_PUER_P27_Msk                      (_UINT32_(0x1) << PIO_PUER_P27_Pos)                  /* (PIO_PUER) Pull-Up Enable Mask */
#define PIO_PUER_P27(value)                   (PIO_PUER_P27_Msk & (_UINT32_(value) << PIO_PUER_P27_Pos)) /* Assignment of value for P27 in the PIO_PUER register */
#define PIO_PUER_P28_Pos                      _UINT32_(28)                                         /* (PIO_PUER) Pull-Up Enable Position */
#define PIO_PUER_P28_Msk                      (_UINT32_(0x1) << PIO_PUER_P28_Pos)                  /* (PIO_PUER) Pull-Up Enable Mask */
#define PIO_PUER_P28(value)                   (PIO_PUER_P28_Msk & (_UINT32_(value) << PIO_PUER_P28_Pos)) /* Assignment of value for P28 in the PIO_PUER register */
#define PIO_PUER_P29_Pos                      _UINT32_(29)                                         /* (PIO_PUER) Pull-Up Enable Position */
#define PIO_PUER_P29_Msk                      (_UINT32_(0x1) << PIO_PUER_P29_Pos)                  /* (PIO_PUER) Pull-Up Enable Mask */
#define PIO_PUER_P29(value)                   (PIO_PUER_P29_Msk & (_UINT32_(value) << PIO_PUER_P29_Pos)) /* Assignment of value for P29 in the PIO_PUER register */
#define PIO_PUER_P30_Pos                      _UINT32_(30)                                         /* (PIO_PUER) Pull-Up Enable Position */
#define PIO_PUER_P30_Msk                      (_UINT32_(0x1) << PIO_PUER_P30_Pos)                  /* (PIO_PUER) Pull-Up Enable Mask */
#define PIO_PUER_P30(value)                   (PIO_PUER_P30_Msk & (_UINT32_(value) << PIO_PUER_P30_Pos)) /* Assignment of value for P30 in the PIO_PUER register */
#define PIO_PUER_P31_Pos                      _UINT32_(31)                                         /* (PIO_PUER) Pull-Up Enable Position */
#define PIO_PUER_P31_Msk                      (_UINT32_(0x1) << PIO_PUER_P31_Pos)                  /* (PIO_PUER) Pull-Up Enable Mask */
#define PIO_PUER_P31(value)                   (PIO_PUER_P31_Msk & (_UINT32_(value) << PIO_PUER_P31_Pos)) /* Assignment of value for P31 in the PIO_PUER register */
#define PIO_PUER_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (PIO_PUER) Register Mask  */

#define PIO_PUER_P_Pos                        _UINT32_(0)                                          /* (PIO_PUER Position) Pull-Up Enable */
#define PIO_PUER_P_Msk                        (_UINT32_(0xFFFFFFFF) << PIO_PUER_P_Pos)             /* (PIO_PUER Mask) P */
#define PIO_PUER_P(value)                     (PIO_PUER_P_Msk & (_UINT32_(value) << PIO_PUER_P_Pos)) 

/* -------- PIO_PUSR : (PIO Offset: 0x68) ( R/ 32) Pad Pull-up Status Register -------- */
#define PIO_PUSR_P0_Pos                       _UINT32_(0)                                          /* (PIO_PUSR) Pull-Up Status Position */
#define PIO_PUSR_P0_Msk                       (_UINT32_(0x1) << PIO_PUSR_P0_Pos)                   /* (PIO_PUSR) Pull-Up Status Mask */
#define PIO_PUSR_P0(value)                    (PIO_PUSR_P0_Msk & (_UINT32_(value) << PIO_PUSR_P0_Pos)) /* Assignment of value for P0 in the PIO_PUSR register */
#define PIO_PUSR_P1_Pos                       _UINT32_(1)                                          /* (PIO_PUSR) Pull-Up Status Position */
#define PIO_PUSR_P1_Msk                       (_UINT32_(0x1) << PIO_PUSR_P1_Pos)                   /* (PIO_PUSR) Pull-Up Status Mask */
#define PIO_PUSR_P1(value)                    (PIO_PUSR_P1_Msk & (_UINT32_(value) << PIO_PUSR_P1_Pos)) /* Assignment of value for P1 in the PIO_PUSR register */
#define PIO_PUSR_P2_Pos                       _UINT32_(2)                                          /* (PIO_PUSR) Pull-Up Status Position */
#define PIO_PUSR_P2_Msk                       (_UINT32_(0x1) << PIO_PUSR_P2_Pos)                   /* (PIO_PUSR) Pull-Up Status Mask */
#define PIO_PUSR_P2(value)                    (PIO_PUSR_P2_Msk & (_UINT32_(value) << PIO_PUSR_P2_Pos)) /* Assignment of value for P2 in the PIO_PUSR register */
#define PIO_PUSR_P3_Pos                       _UINT32_(3)                                          /* (PIO_PUSR) Pull-Up Status Position */
#define PIO_PUSR_P3_Msk                       (_UINT32_(0x1) << PIO_PUSR_P3_Pos)                   /* (PIO_PUSR) Pull-Up Status Mask */
#define PIO_PUSR_P3(value)                    (PIO_PUSR_P3_Msk & (_UINT32_(value) << PIO_PUSR_P3_Pos)) /* Assignment of value for P3 in the PIO_PUSR register */
#define PIO_PUSR_P4_Pos                       _UINT32_(4)                                          /* (PIO_PUSR) Pull-Up Status Position */
#define PIO_PUSR_P4_Msk                       (_UINT32_(0x1) << PIO_PUSR_P4_Pos)                   /* (PIO_PUSR) Pull-Up Status Mask */
#define PIO_PUSR_P4(value)                    (PIO_PUSR_P4_Msk & (_UINT32_(value) << PIO_PUSR_P4_Pos)) /* Assignment of value for P4 in the PIO_PUSR register */
#define PIO_PUSR_P5_Pos                       _UINT32_(5)                                          /* (PIO_PUSR) Pull-Up Status Position */
#define PIO_PUSR_P5_Msk                       (_UINT32_(0x1) << PIO_PUSR_P5_Pos)                   /* (PIO_PUSR) Pull-Up Status Mask */
#define PIO_PUSR_P5(value)                    (PIO_PUSR_P5_Msk & (_UINT32_(value) << PIO_PUSR_P5_Pos)) /* Assignment of value for P5 in the PIO_PUSR register */
#define PIO_PUSR_P6_Pos                       _UINT32_(6)                                          /* (PIO_PUSR) Pull-Up Status Position */
#define PIO_PUSR_P6_Msk                       (_UINT32_(0x1) << PIO_PUSR_P6_Pos)                   /* (PIO_PUSR) Pull-Up Status Mask */
#define PIO_PUSR_P6(value)                    (PIO_PUSR_P6_Msk & (_UINT32_(value) << PIO_PUSR_P6_Pos)) /* Assignment of value for P6 in the PIO_PUSR register */
#define PIO_PUSR_P7_Pos                       _UINT32_(7)                                          /* (PIO_PUSR) Pull-Up Status Position */
#define PIO_PUSR_P7_Msk                       (_UINT32_(0x1) << PIO_PUSR_P7_Pos)                   /* (PIO_PUSR) Pull-Up Status Mask */
#define PIO_PUSR_P7(value)                    (PIO_PUSR_P7_Msk & (_UINT32_(value) << PIO_PUSR_P7_Pos)) /* Assignment of value for P7 in the PIO_PUSR register */
#define PIO_PUSR_P8_Pos                       _UINT32_(8)                                          /* (PIO_PUSR) Pull-Up Status Position */
#define PIO_PUSR_P8_Msk                       (_UINT32_(0x1) << PIO_PUSR_P8_Pos)                   /* (PIO_PUSR) Pull-Up Status Mask */
#define PIO_PUSR_P8(value)                    (PIO_PUSR_P8_Msk & (_UINT32_(value) << PIO_PUSR_P8_Pos)) /* Assignment of value for P8 in the PIO_PUSR register */
#define PIO_PUSR_P9_Pos                       _UINT32_(9)                                          /* (PIO_PUSR) Pull-Up Status Position */
#define PIO_PUSR_P9_Msk                       (_UINT32_(0x1) << PIO_PUSR_P9_Pos)                   /* (PIO_PUSR) Pull-Up Status Mask */
#define PIO_PUSR_P9(value)                    (PIO_PUSR_P9_Msk & (_UINT32_(value) << PIO_PUSR_P9_Pos)) /* Assignment of value for P9 in the PIO_PUSR register */
#define PIO_PUSR_P10_Pos                      _UINT32_(10)                                         /* (PIO_PUSR) Pull-Up Status Position */
#define PIO_PUSR_P10_Msk                      (_UINT32_(0x1) << PIO_PUSR_P10_Pos)                  /* (PIO_PUSR) Pull-Up Status Mask */
#define PIO_PUSR_P10(value)                   (PIO_PUSR_P10_Msk & (_UINT32_(value) << PIO_PUSR_P10_Pos)) /* Assignment of value for P10 in the PIO_PUSR register */
#define PIO_PUSR_P11_Pos                      _UINT32_(11)                                         /* (PIO_PUSR) Pull-Up Status Position */
#define PIO_PUSR_P11_Msk                      (_UINT32_(0x1) << PIO_PUSR_P11_Pos)                  /* (PIO_PUSR) Pull-Up Status Mask */
#define PIO_PUSR_P11(value)                   (PIO_PUSR_P11_Msk & (_UINT32_(value) << PIO_PUSR_P11_Pos)) /* Assignment of value for P11 in the PIO_PUSR register */
#define PIO_PUSR_P12_Pos                      _UINT32_(12)                                         /* (PIO_PUSR) Pull-Up Status Position */
#define PIO_PUSR_P12_Msk                      (_UINT32_(0x1) << PIO_PUSR_P12_Pos)                  /* (PIO_PUSR) Pull-Up Status Mask */
#define PIO_PUSR_P12(value)                   (PIO_PUSR_P12_Msk & (_UINT32_(value) << PIO_PUSR_P12_Pos)) /* Assignment of value for P12 in the PIO_PUSR register */
#define PIO_PUSR_P13_Pos                      _UINT32_(13)                                         /* (PIO_PUSR) Pull-Up Status Position */
#define PIO_PUSR_P13_Msk                      (_UINT32_(0x1) << PIO_PUSR_P13_Pos)                  /* (PIO_PUSR) Pull-Up Status Mask */
#define PIO_PUSR_P13(value)                   (PIO_PUSR_P13_Msk & (_UINT32_(value) << PIO_PUSR_P13_Pos)) /* Assignment of value for P13 in the PIO_PUSR register */
#define PIO_PUSR_P14_Pos                      _UINT32_(14)                                         /* (PIO_PUSR) Pull-Up Status Position */
#define PIO_PUSR_P14_Msk                      (_UINT32_(0x1) << PIO_PUSR_P14_Pos)                  /* (PIO_PUSR) Pull-Up Status Mask */
#define PIO_PUSR_P14(value)                   (PIO_PUSR_P14_Msk & (_UINT32_(value) << PIO_PUSR_P14_Pos)) /* Assignment of value for P14 in the PIO_PUSR register */
#define PIO_PUSR_P15_Pos                      _UINT32_(15)                                         /* (PIO_PUSR) Pull-Up Status Position */
#define PIO_PUSR_P15_Msk                      (_UINT32_(0x1) << PIO_PUSR_P15_Pos)                  /* (PIO_PUSR) Pull-Up Status Mask */
#define PIO_PUSR_P15(value)                   (PIO_PUSR_P15_Msk & (_UINT32_(value) << PIO_PUSR_P15_Pos)) /* Assignment of value for P15 in the PIO_PUSR register */
#define PIO_PUSR_P16_Pos                      _UINT32_(16)                                         /* (PIO_PUSR) Pull-Up Status Position */
#define PIO_PUSR_P16_Msk                      (_UINT32_(0x1) << PIO_PUSR_P16_Pos)                  /* (PIO_PUSR) Pull-Up Status Mask */
#define PIO_PUSR_P16(value)                   (PIO_PUSR_P16_Msk & (_UINT32_(value) << PIO_PUSR_P16_Pos)) /* Assignment of value for P16 in the PIO_PUSR register */
#define PIO_PUSR_P17_Pos                      _UINT32_(17)                                         /* (PIO_PUSR) Pull-Up Status Position */
#define PIO_PUSR_P17_Msk                      (_UINT32_(0x1) << PIO_PUSR_P17_Pos)                  /* (PIO_PUSR) Pull-Up Status Mask */
#define PIO_PUSR_P17(value)                   (PIO_PUSR_P17_Msk & (_UINT32_(value) << PIO_PUSR_P17_Pos)) /* Assignment of value for P17 in the PIO_PUSR register */
#define PIO_PUSR_P18_Pos                      _UINT32_(18)                                         /* (PIO_PUSR) Pull-Up Status Position */
#define PIO_PUSR_P18_Msk                      (_UINT32_(0x1) << PIO_PUSR_P18_Pos)                  /* (PIO_PUSR) Pull-Up Status Mask */
#define PIO_PUSR_P18(value)                   (PIO_PUSR_P18_Msk & (_UINT32_(value) << PIO_PUSR_P18_Pos)) /* Assignment of value for P18 in the PIO_PUSR register */
#define PIO_PUSR_P19_Pos                      _UINT32_(19)                                         /* (PIO_PUSR) Pull-Up Status Position */
#define PIO_PUSR_P19_Msk                      (_UINT32_(0x1) << PIO_PUSR_P19_Pos)                  /* (PIO_PUSR) Pull-Up Status Mask */
#define PIO_PUSR_P19(value)                   (PIO_PUSR_P19_Msk & (_UINT32_(value) << PIO_PUSR_P19_Pos)) /* Assignment of value for P19 in the PIO_PUSR register */
#define PIO_PUSR_P20_Pos                      _UINT32_(20)                                         /* (PIO_PUSR) Pull-Up Status Position */
#define PIO_PUSR_P20_Msk                      (_UINT32_(0x1) << PIO_PUSR_P20_Pos)                  /* (PIO_PUSR) Pull-Up Status Mask */
#define PIO_PUSR_P20(value)                   (PIO_PUSR_P20_Msk & (_UINT32_(value) << PIO_PUSR_P20_Pos)) /* Assignment of value for P20 in the PIO_PUSR register */
#define PIO_PUSR_P21_Pos                      _UINT32_(21)                                         /* (PIO_PUSR) Pull-Up Status Position */
#define PIO_PUSR_P21_Msk                      (_UINT32_(0x1) << PIO_PUSR_P21_Pos)                  /* (PIO_PUSR) Pull-Up Status Mask */
#define PIO_PUSR_P21(value)                   (PIO_PUSR_P21_Msk & (_UINT32_(value) << PIO_PUSR_P21_Pos)) /* Assignment of value for P21 in the PIO_PUSR register */
#define PIO_PUSR_P22_Pos                      _UINT32_(22)                                         /* (PIO_PUSR) Pull-Up Status Position */
#define PIO_PUSR_P22_Msk                      (_UINT32_(0x1) << PIO_PUSR_P22_Pos)                  /* (PIO_PUSR) Pull-Up Status Mask */
#define PIO_PUSR_P22(value)                   (PIO_PUSR_P22_Msk & (_UINT32_(value) << PIO_PUSR_P22_Pos)) /* Assignment of value for P22 in the PIO_PUSR register */
#define PIO_PUSR_P23_Pos                      _UINT32_(23)                                         /* (PIO_PUSR) Pull-Up Status Position */
#define PIO_PUSR_P23_Msk                      (_UINT32_(0x1) << PIO_PUSR_P23_Pos)                  /* (PIO_PUSR) Pull-Up Status Mask */
#define PIO_PUSR_P23(value)                   (PIO_PUSR_P23_Msk & (_UINT32_(value) << PIO_PUSR_P23_Pos)) /* Assignment of value for P23 in the PIO_PUSR register */
#define PIO_PUSR_P24_Pos                      _UINT32_(24)                                         /* (PIO_PUSR) Pull-Up Status Position */
#define PIO_PUSR_P24_Msk                      (_UINT32_(0x1) << PIO_PUSR_P24_Pos)                  /* (PIO_PUSR) Pull-Up Status Mask */
#define PIO_PUSR_P24(value)                   (PIO_PUSR_P24_Msk & (_UINT32_(value) << PIO_PUSR_P24_Pos)) /* Assignment of value for P24 in the PIO_PUSR register */
#define PIO_PUSR_P25_Pos                      _UINT32_(25)                                         /* (PIO_PUSR) Pull-Up Status Position */
#define PIO_PUSR_P25_Msk                      (_UINT32_(0x1) << PIO_PUSR_P25_Pos)                  /* (PIO_PUSR) Pull-Up Status Mask */
#define PIO_PUSR_P25(value)                   (PIO_PUSR_P25_Msk & (_UINT32_(value) << PIO_PUSR_P25_Pos)) /* Assignment of value for P25 in the PIO_PUSR register */
#define PIO_PUSR_P26_Pos                      _UINT32_(26)                                         /* (PIO_PUSR) Pull-Up Status Position */
#define PIO_PUSR_P26_Msk                      (_UINT32_(0x1) << PIO_PUSR_P26_Pos)                  /* (PIO_PUSR) Pull-Up Status Mask */
#define PIO_PUSR_P26(value)                   (PIO_PUSR_P26_Msk & (_UINT32_(value) << PIO_PUSR_P26_Pos)) /* Assignment of value for P26 in the PIO_PUSR register */
#define PIO_PUSR_P27_Pos                      _UINT32_(27)                                         /* (PIO_PUSR) Pull-Up Status Position */
#define PIO_PUSR_P27_Msk                      (_UINT32_(0x1) << PIO_PUSR_P27_Pos)                  /* (PIO_PUSR) Pull-Up Status Mask */
#define PIO_PUSR_P27(value)                   (PIO_PUSR_P27_Msk & (_UINT32_(value) << PIO_PUSR_P27_Pos)) /* Assignment of value for P27 in the PIO_PUSR register */
#define PIO_PUSR_P28_Pos                      _UINT32_(28)                                         /* (PIO_PUSR) Pull-Up Status Position */
#define PIO_PUSR_P28_Msk                      (_UINT32_(0x1) << PIO_PUSR_P28_Pos)                  /* (PIO_PUSR) Pull-Up Status Mask */
#define PIO_PUSR_P28(value)                   (PIO_PUSR_P28_Msk & (_UINT32_(value) << PIO_PUSR_P28_Pos)) /* Assignment of value for P28 in the PIO_PUSR register */
#define PIO_PUSR_P29_Pos                      _UINT32_(29)                                         /* (PIO_PUSR) Pull-Up Status Position */
#define PIO_PUSR_P29_Msk                      (_UINT32_(0x1) << PIO_PUSR_P29_Pos)                  /* (PIO_PUSR) Pull-Up Status Mask */
#define PIO_PUSR_P29(value)                   (PIO_PUSR_P29_Msk & (_UINT32_(value) << PIO_PUSR_P29_Pos)) /* Assignment of value for P29 in the PIO_PUSR register */
#define PIO_PUSR_P30_Pos                      _UINT32_(30)                                         /* (PIO_PUSR) Pull-Up Status Position */
#define PIO_PUSR_P30_Msk                      (_UINT32_(0x1) << PIO_PUSR_P30_Pos)                  /* (PIO_PUSR) Pull-Up Status Mask */
#define PIO_PUSR_P30(value)                   (PIO_PUSR_P30_Msk & (_UINT32_(value) << PIO_PUSR_P30_Pos)) /* Assignment of value for P30 in the PIO_PUSR register */
#define PIO_PUSR_P31_Pos                      _UINT32_(31)                                         /* (PIO_PUSR) Pull-Up Status Position */
#define PIO_PUSR_P31_Msk                      (_UINT32_(0x1) << PIO_PUSR_P31_Pos)                  /* (PIO_PUSR) Pull-Up Status Mask */
#define PIO_PUSR_P31(value)                   (PIO_PUSR_P31_Msk & (_UINT32_(value) << PIO_PUSR_P31_Pos)) /* Assignment of value for P31 in the PIO_PUSR register */
#define PIO_PUSR_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (PIO_PUSR) Register Mask  */

#define PIO_PUSR_P_Pos                        _UINT32_(0)                                          /* (PIO_PUSR Position) Pull-Up Status */
#define PIO_PUSR_P_Msk                        (_UINT32_(0xFFFFFFFF) << PIO_PUSR_P_Pos)             /* (PIO_PUSR Mask) P */
#define PIO_PUSR_P(value)                     (PIO_PUSR_P_Msk & (_UINT32_(value) << PIO_PUSR_P_Pos)) 

/* -------- PIO_ABCDSR : (PIO Offset: 0x70) (R/W 32) Peripheral ABCD Select Register 0 -------- */
#define PIO_ABCDSR_P0_Pos                     _UINT32_(0)                                          /* (PIO_ABCDSR) Peripheral Select Position */
#define PIO_ABCDSR_P0_Msk                     (_UINT32_(0x1) << PIO_ABCDSR_P0_Pos)                 /* (PIO_ABCDSR) Peripheral Select Mask */
#define PIO_ABCDSR_P0(value)                  (PIO_ABCDSR_P0_Msk & (_UINT32_(value) << PIO_ABCDSR_P0_Pos)) /* Assignment of value for P0 in the PIO_ABCDSR register */
#define PIO_ABCDSR_P1_Pos                     _UINT32_(1)                                          /* (PIO_ABCDSR) Peripheral Select Position */
#define PIO_ABCDSR_P1_Msk                     (_UINT32_(0x1) << PIO_ABCDSR_P1_Pos)                 /* (PIO_ABCDSR) Peripheral Select Mask */
#define PIO_ABCDSR_P1(value)                  (PIO_ABCDSR_P1_Msk & (_UINT32_(value) << PIO_ABCDSR_P1_Pos)) /* Assignment of value for P1 in the PIO_ABCDSR register */
#define PIO_ABCDSR_P2_Pos                     _UINT32_(2)                                          /* (PIO_ABCDSR) Peripheral Select Position */
#define PIO_ABCDSR_P2_Msk                     (_UINT32_(0x1) << PIO_ABCDSR_P2_Pos)                 /* (PIO_ABCDSR) Peripheral Select Mask */
#define PIO_ABCDSR_P2(value)                  (PIO_ABCDSR_P2_Msk & (_UINT32_(value) << PIO_ABCDSR_P2_Pos)) /* Assignment of value for P2 in the PIO_ABCDSR register */
#define PIO_ABCDSR_P3_Pos                     _UINT32_(3)                                          /* (PIO_ABCDSR) Peripheral Select Position */
#define PIO_ABCDSR_P3_Msk                     (_UINT32_(0x1) << PIO_ABCDSR_P3_Pos)                 /* (PIO_ABCDSR) Peripheral Select Mask */
#define PIO_ABCDSR_P3(value)                  (PIO_ABCDSR_P3_Msk & (_UINT32_(value) << PIO_ABCDSR_P3_Pos)) /* Assignment of value for P3 in the PIO_ABCDSR register */
#define PIO_ABCDSR_P4_Pos                     _UINT32_(4)                                          /* (PIO_ABCDSR) Peripheral Select Position */
#define PIO_ABCDSR_P4_Msk                     (_UINT32_(0x1) << PIO_ABCDSR_P4_Pos)                 /* (PIO_ABCDSR) Peripheral Select Mask */
#define PIO_ABCDSR_P4(value)                  (PIO_ABCDSR_P4_Msk & (_UINT32_(value) << PIO_ABCDSR_P4_Pos)) /* Assignment of value for P4 in the PIO_ABCDSR register */
#define PIO_ABCDSR_P5_Pos                     _UINT32_(5)                                          /* (PIO_ABCDSR) Peripheral Select Position */
#define PIO_ABCDSR_P5_Msk                     (_UINT32_(0x1) << PIO_ABCDSR_P5_Pos)                 /* (PIO_ABCDSR) Peripheral Select Mask */
#define PIO_ABCDSR_P5(value)                  (PIO_ABCDSR_P5_Msk & (_UINT32_(value) << PIO_ABCDSR_P5_Pos)) /* Assignment of value for P5 in the PIO_ABCDSR register */
#define PIO_ABCDSR_P6_Pos                     _UINT32_(6)                                          /* (PIO_ABCDSR) Peripheral Select Position */
#define PIO_ABCDSR_P6_Msk                     (_UINT32_(0x1) << PIO_ABCDSR_P6_Pos)                 /* (PIO_ABCDSR) Peripheral Select Mask */
#define PIO_ABCDSR_P6(value)                  (PIO_ABCDSR_P6_Msk & (_UINT32_(value) << PIO_ABCDSR_P6_Pos)) /* Assignment of value for P6 in the PIO_ABCDSR register */
#define PIO_ABCDSR_P7_Pos                     _UINT32_(7)                                          /* (PIO_ABCDSR) Peripheral Select Position */
#define PIO_ABCDSR_P7_Msk                     (_UINT32_(0x1) << PIO_ABCDSR_P7_Pos)                 /* (PIO_ABCDSR) Peripheral Select Mask */
#define PIO_ABCDSR_P7(value)                  (PIO_ABCDSR_P7_Msk & (_UINT32_(value) << PIO_ABCDSR_P7_Pos)) /* Assignment of value for P7 in the PIO_ABCDSR register */
#define PIO_ABCDSR_P8_Pos                     _UINT32_(8)                                          /* (PIO_ABCDSR) Peripheral Select Position */
#define PIO_ABCDSR_P8_Msk                     (_UINT32_(0x1) << PIO_ABCDSR_P8_Pos)                 /* (PIO_ABCDSR) Peripheral Select Mask */
#define PIO_ABCDSR_P8(value)                  (PIO_ABCDSR_P8_Msk & (_UINT32_(value) << PIO_ABCDSR_P8_Pos)) /* Assignment of value for P8 in the PIO_ABCDSR register */
#define PIO_ABCDSR_P9_Pos                     _UINT32_(9)                                          /* (PIO_ABCDSR) Peripheral Select Position */
#define PIO_ABCDSR_P9_Msk                     (_UINT32_(0x1) << PIO_ABCDSR_P9_Pos)                 /* (PIO_ABCDSR) Peripheral Select Mask */
#define PIO_ABCDSR_P9(value)                  (PIO_ABCDSR_P9_Msk & (_UINT32_(value) << PIO_ABCDSR_P9_Pos)) /* Assignment of value for P9 in the PIO_ABCDSR register */
#define PIO_ABCDSR_P10_Pos                    _UINT32_(10)                                         /* (PIO_ABCDSR) Peripheral Select Position */
#define PIO_ABCDSR_P10_Msk                    (_UINT32_(0x1) << PIO_ABCDSR_P10_Pos)                /* (PIO_ABCDSR) Peripheral Select Mask */
#define PIO_ABCDSR_P10(value)                 (PIO_ABCDSR_P10_Msk & (_UINT32_(value) << PIO_ABCDSR_P10_Pos)) /* Assignment of value for P10 in the PIO_ABCDSR register */
#define PIO_ABCDSR_P11_Pos                    _UINT32_(11)                                         /* (PIO_ABCDSR) Peripheral Select Position */
#define PIO_ABCDSR_P11_Msk                    (_UINT32_(0x1) << PIO_ABCDSR_P11_Pos)                /* (PIO_ABCDSR) Peripheral Select Mask */
#define PIO_ABCDSR_P11(value)                 (PIO_ABCDSR_P11_Msk & (_UINT32_(value) << PIO_ABCDSR_P11_Pos)) /* Assignment of value for P11 in the PIO_ABCDSR register */
#define PIO_ABCDSR_P12_Pos                    _UINT32_(12)                                         /* (PIO_ABCDSR) Peripheral Select Position */
#define PIO_ABCDSR_P12_Msk                    (_UINT32_(0x1) << PIO_ABCDSR_P12_Pos)                /* (PIO_ABCDSR) Peripheral Select Mask */
#define PIO_ABCDSR_P12(value)                 (PIO_ABCDSR_P12_Msk & (_UINT32_(value) << PIO_ABCDSR_P12_Pos)) /* Assignment of value for P12 in the PIO_ABCDSR register */
#define PIO_ABCDSR_P13_Pos                    _UINT32_(13)                                         /* (PIO_ABCDSR) Peripheral Select Position */
#define PIO_ABCDSR_P13_Msk                    (_UINT32_(0x1) << PIO_ABCDSR_P13_Pos)                /* (PIO_ABCDSR) Peripheral Select Mask */
#define PIO_ABCDSR_P13(value)                 (PIO_ABCDSR_P13_Msk & (_UINT32_(value) << PIO_ABCDSR_P13_Pos)) /* Assignment of value for P13 in the PIO_ABCDSR register */
#define PIO_ABCDSR_P14_Pos                    _UINT32_(14)                                         /* (PIO_ABCDSR) Peripheral Select Position */
#define PIO_ABCDSR_P14_Msk                    (_UINT32_(0x1) << PIO_ABCDSR_P14_Pos)                /* (PIO_ABCDSR) Peripheral Select Mask */
#define PIO_ABCDSR_P14(value)                 (PIO_ABCDSR_P14_Msk & (_UINT32_(value) << PIO_ABCDSR_P14_Pos)) /* Assignment of value for P14 in the PIO_ABCDSR register */
#define PIO_ABCDSR_P15_Pos                    _UINT32_(15)                                         /* (PIO_ABCDSR) Peripheral Select Position */
#define PIO_ABCDSR_P15_Msk                    (_UINT32_(0x1) << PIO_ABCDSR_P15_Pos)                /* (PIO_ABCDSR) Peripheral Select Mask */
#define PIO_ABCDSR_P15(value)                 (PIO_ABCDSR_P15_Msk & (_UINT32_(value) << PIO_ABCDSR_P15_Pos)) /* Assignment of value for P15 in the PIO_ABCDSR register */
#define PIO_ABCDSR_P16_Pos                    _UINT32_(16)                                         /* (PIO_ABCDSR) Peripheral Select Position */
#define PIO_ABCDSR_P16_Msk                    (_UINT32_(0x1) << PIO_ABCDSR_P16_Pos)                /* (PIO_ABCDSR) Peripheral Select Mask */
#define PIO_ABCDSR_P16(value)                 (PIO_ABCDSR_P16_Msk & (_UINT32_(value) << PIO_ABCDSR_P16_Pos)) /* Assignment of value for P16 in the PIO_ABCDSR register */
#define PIO_ABCDSR_P17_Pos                    _UINT32_(17)                                         /* (PIO_ABCDSR) Peripheral Select Position */
#define PIO_ABCDSR_P17_Msk                    (_UINT32_(0x1) << PIO_ABCDSR_P17_Pos)                /* (PIO_ABCDSR) Peripheral Select Mask */
#define PIO_ABCDSR_P17(value)                 (PIO_ABCDSR_P17_Msk & (_UINT32_(value) << PIO_ABCDSR_P17_Pos)) /* Assignment of value for P17 in the PIO_ABCDSR register */
#define PIO_ABCDSR_P18_Pos                    _UINT32_(18)                                         /* (PIO_ABCDSR) Peripheral Select Position */
#define PIO_ABCDSR_P18_Msk                    (_UINT32_(0x1) << PIO_ABCDSR_P18_Pos)                /* (PIO_ABCDSR) Peripheral Select Mask */
#define PIO_ABCDSR_P18(value)                 (PIO_ABCDSR_P18_Msk & (_UINT32_(value) << PIO_ABCDSR_P18_Pos)) /* Assignment of value for P18 in the PIO_ABCDSR register */
#define PIO_ABCDSR_P19_Pos                    _UINT32_(19)                                         /* (PIO_ABCDSR) Peripheral Select Position */
#define PIO_ABCDSR_P19_Msk                    (_UINT32_(0x1) << PIO_ABCDSR_P19_Pos)                /* (PIO_ABCDSR) Peripheral Select Mask */
#define PIO_ABCDSR_P19(value)                 (PIO_ABCDSR_P19_Msk & (_UINT32_(value) << PIO_ABCDSR_P19_Pos)) /* Assignment of value for P19 in the PIO_ABCDSR register */
#define PIO_ABCDSR_P20_Pos                    _UINT32_(20)                                         /* (PIO_ABCDSR) Peripheral Select Position */
#define PIO_ABCDSR_P20_Msk                    (_UINT32_(0x1) << PIO_ABCDSR_P20_Pos)                /* (PIO_ABCDSR) Peripheral Select Mask */
#define PIO_ABCDSR_P20(value)                 (PIO_ABCDSR_P20_Msk & (_UINT32_(value) << PIO_ABCDSR_P20_Pos)) /* Assignment of value for P20 in the PIO_ABCDSR register */
#define PIO_ABCDSR_P21_Pos                    _UINT32_(21)                                         /* (PIO_ABCDSR) Peripheral Select Position */
#define PIO_ABCDSR_P21_Msk                    (_UINT32_(0x1) << PIO_ABCDSR_P21_Pos)                /* (PIO_ABCDSR) Peripheral Select Mask */
#define PIO_ABCDSR_P21(value)                 (PIO_ABCDSR_P21_Msk & (_UINT32_(value) << PIO_ABCDSR_P21_Pos)) /* Assignment of value for P21 in the PIO_ABCDSR register */
#define PIO_ABCDSR_P22_Pos                    _UINT32_(22)                                         /* (PIO_ABCDSR) Peripheral Select Position */
#define PIO_ABCDSR_P22_Msk                    (_UINT32_(0x1) << PIO_ABCDSR_P22_Pos)                /* (PIO_ABCDSR) Peripheral Select Mask */
#define PIO_ABCDSR_P22(value)                 (PIO_ABCDSR_P22_Msk & (_UINT32_(value) << PIO_ABCDSR_P22_Pos)) /* Assignment of value for P22 in the PIO_ABCDSR register */
#define PIO_ABCDSR_P23_Pos                    _UINT32_(23)                                         /* (PIO_ABCDSR) Peripheral Select Position */
#define PIO_ABCDSR_P23_Msk                    (_UINT32_(0x1) << PIO_ABCDSR_P23_Pos)                /* (PIO_ABCDSR) Peripheral Select Mask */
#define PIO_ABCDSR_P23(value)                 (PIO_ABCDSR_P23_Msk & (_UINT32_(value) << PIO_ABCDSR_P23_Pos)) /* Assignment of value for P23 in the PIO_ABCDSR register */
#define PIO_ABCDSR_P24_Pos                    _UINT32_(24)                                         /* (PIO_ABCDSR) Peripheral Select Position */
#define PIO_ABCDSR_P24_Msk                    (_UINT32_(0x1) << PIO_ABCDSR_P24_Pos)                /* (PIO_ABCDSR) Peripheral Select Mask */
#define PIO_ABCDSR_P24(value)                 (PIO_ABCDSR_P24_Msk & (_UINT32_(value) << PIO_ABCDSR_P24_Pos)) /* Assignment of value for P24 in the PIO_ABCDSR register */
#define PIO_ABCDSR_P25_Pos                    _UINT32_(25)                                         /* (PIO_ABCDSR) Peripheral Select Position */
#define PIO_ABCDSR_P25_Msk                    (_UINT32_(0x1) << PIO_ABCDSR_P25_Pos)                /* (PIO_ABCDSR) Peripheral Select Mask */
#define PIO_ABCDSR_P25(value)                 (PIO_ABCDSR_P25_Msk & (_UINT32_(value) << PIO_ABCDSR_P25_Pos)) /* Assignment of value for P25 in the PIO_ABCDSR register */
#define PIO_ABCDSR_P26_Pos                    _UINT32_(26)                                         /* (PIO_ABCDSR) Peripheral Select Position */
#define PIO_ABCDSR_P26_Msk                    (_UINT32_(0x1) << PIO_ABCDSR_P26_Pos)                /* (PIO_ABCDSR) Peripheral Select Mask */
#define PIO_ABCDSR_P26(value)                 (PIO_ABCDSR_P26_Msk & (_UINT32_(value) << PIO_ABCDSR_P26_Pos)) /* Assignment of value for P26 in the PIO_ABCDSR register */
#define PIO_ABCDSR_P27_Pos                    _UINT32_(27)                                         /* (PIO_ABCDSR) Peripheral Select Position */
#define PIO_ABCDSR_P27_Msk                    (_UINT32_(0x1) << PIO_ABCDSR_P27_Pos)                /* (PIO_ABCDSR) Peripheral Select Mask */
#define PIO_ABCDSR_P27(value)                 (PIO_ABCDSR_P27_Msk & (_UINT32_(value) << PIO_ABCDSR_P27_Pos)) /* Assignment of value for P27 in the PIO_ABCDSR register */
#define PIO_ABCDSR_P28_Pos                    _UINT32_(28)                                         /* (PIO_ABCDSR) Peripheral Select Position */
#define PIO_ABCDSR_P28_Msk                    (_UINT32_(0x1) << PIO_ABCDSR_P28_Pos)                /* (PIO_ABCDSR) Peripheral Select Mask */
#define PIO_ABCDSR_P28(value)                 (PIO_ABCDSR_P28_Msk & (_UINT32_(value) << PIO_ABCDSR_P28_Pos)) /* Assignment of value for P28 in the PIO_ABCDSR register */
#define PIO_ABCDSR_P29_Pos                    _UINT32_(29)                                         /* (PIO_ABCDSR) Peripheral Select Position */
#define PIO_ABCDSR_P29_Msk                    (_UINT32_(0x1) << PIO_ABCDSR_P29_Pos)                /* (PIO_ABCDSR) Peripheral Select Mask */
#define PIO_ABCDSR_P29(value)                 (PIO_ABCDSR_P29_Msk & (_UINT32_(value) << PIO_ABCDSR_P29_Pos)) /* Assignment of value for P29 in the PIO_ABCDSR register */
#define PIO_ABCDSR_P30_Pos                    _UINT32_(30)                                         /* (PIO_ABCDSR) Peripheral Select Position */
#define PIO_ABCDSR_P30_Msk                    (_UINT32_(0x1) << PIO_ABCDSR_P30_Pos)                /* (PIO_ABCDSR) Peripheral Select Mask */
#define PIO_ABCDSR_P30(value)                 (PIO_ABCDSR_P30_Msk & (_UINT32_(value) << PIO_ABCDSR_P30_Pos)) /* Assignment of value for P30 in the PIO_ABCDSR register */
#define PIO_ABCDSR_P31_Pos                    _UINT32_(31)                                         /* (PIO_ABCDSR) Peripheral Select Position */
#define PIO_ABCDSR_P31_Msk                    (_UINT32_(0x1) << PIO_ABCDSR_P31_Pos)                /* (PIO_ABCDSR) Peripheral Select Mask */
#define PIO_ABCDSR_P31(value)                 (PIO_ABCDSR_P31_Msk & (_UINT32_(value) << PIO_ABCDSR_P31_Pos)) /* Assignment of value for P31 in the PIO_ABCDSR register */
#define PIO_ABCDSR_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (PIO_ABCDSR) Register Mask  */

#define PIO_ABCDSR_P_Pos                      _UINT32_(0)                                          /* (PIO_ABCDSR Position) Peripheral Select */
#define PIO_ABCDSR_P_Msk                      (_UINT32_(0xFFFFFFFF) << PIO_ABCDSR_P_Pos)           /* (PIO_ABCDSR Mask) P */
#define PIO_ABCDSR_P(value)                   (PIO_ABCDSR_P_Msk & (_UINT32_(value) << PIO_ABCDSR_P_Pos)) 

/* -------- PIO_IFSCDR : (PIO Offset: 0x80) ( /W 32) Input Filter Slow Clock Disable Register -------- */
#define PIO_IFSCDR_P0_Pos                     _UINT32_(0)                                          /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Position */
#define PIO_IFSCDR_P0_Msk                     (_UINT32_(0x1) << PIO_IFSCDR_P0_Pos)                 /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Mask */
#define PIO_IFSCDR_P0(value)                  (PIO_IFSCDR_P0_Msk & (_UINT32_(value) << PIO_IFSCDR_P0_Pos)) /* Assignment of value for P0 in the PIO_IFSCDR register */
#define PIO_IFSCDR_P1_Pos                     _UINT32_(1)                                          /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Position */
#define PIO_IFSCDR_P1_Msk                     (_UINT32_(0x1) << PIO_IFSCDR_P1_Pos)                 /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Mask */
#define PIO_IFSCDR_P1(value)                  (PIO_IFSCDR_P1_Msk & (_UINT32_(value) << PIO_IFSCDR_P1_Pos)) /* Assignment of value for P1 in the PIO_IFSCDR register */
#define PIO_IFSCDR_P2_Pos                     _UINT32_(2)                                          /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Position */
#define PIO_IFSCDR_P2_Msk                     (_UINT32_(0x1) << PIO_IFSCDR_P2_Pos)                 /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Mask */
#define PIO_IFSCDR_P2(value)                  (PIO_IFSCDR_P2_Msk & (_UINT32_(value) << PIO_IFSCDR_P2_Pos)) /* Assignment of value for P2 in the PIO_IFSCDR register */
#define PIO_IFSCDR_P3_Pos                     _UINT32_(3)                                          /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Position */
#define PIO_IFSCDR_P3_Msk                     (_UINT32_(0x1) << PIO_IFSCDR_P3_Pos)                 /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Mask */
#define PIO_IFSCDR_P3(value)                  (PIO_IFSCDR_P3_Msk & (_UINT32_(value) << PIO_IFSCDR_P3_Pos)) /* Assignment of value for P3 in the PIO_IFSCDR register */
#define PIO_IFSCDR_P4_Pos                     _UINT32_(4)                                          /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Position */
#define PIO_IFSCDR_P4_Msk                     (_UINT32_(0x1) << PIO_IFSCDR_P4_Pos)                 /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Mask */
#define PIO_IFSCDR_P4(value)                  (PIO_IFSCDR_P4_Msk & (_UINT32_(value) << PIO_IFSCDR_P4_Pos)) /* Assignment of value for P4 in the PIO_IFSCDR register */
#define PIO_IFSCDR_P5_Pos                     _UINT32_(5)                                          /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Position */
#define PIO_IFSCDR_P5_Msk                     (_UINT32_(0x1) << PIO_IFSCDR_P5_Pos)                 /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Mask */
#define PIO_IFSCDR_P5(value)                  (PIO_IFSCDR_P5_Msk & (_UINT32_(value) << PIO_IFSCDR_P5_Pos)) /* Assignment of value for P5 in the PIO_IFSCDR register */
#define PIO_IFSCDR_P6_Pos                     _UINT32_(6)                                          /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Position */
#define PIO_IFSCDR_P6_Msk                     (_UINT32_(0x1) << PIO_IFSCDR_P6_Pos)                 /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Mask */
#define PIO_IFSCDR_P6(value)                  (PIO_IFSCDR_P6_Msk & (_UINT32_(value) << PIO_IFSCDR_P6_Pos)) /* Assignment of value for P6 in the PIO_IFSCDR register */
#define PIO_IFSCDR_P7_Pos                     _UINT32_(7)                                          /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Position */
#define PIO_IFSCDR_P7_Msk                     (_UINT32_(0x1) << PIO_IFSCDR_P7_Pos)                 /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Mask */
#define PIO_IFSCDR_P7(value)                  (PIO_IFSCDR_P7_Msk & (_UINT32_(value) << PIO_IFSCDR_P7_Pos)) /* Assignment of value for P7 in the PIO_IFSCDR register */
#define PIO_IFSCDR_P8_Pos                     _UINT32_(8)                                          /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Position */
#define PIO_IFSCDR_P8_Msk                     (_UINT32_(0x1) << PIO_IFSCDR_P8_Pos)                 /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Mask */
#define PIO_IFSCDR_P8(value)                  (PIO_IFSCDR_P8_Msk & (_UINT32_(value) << PIO_IFSCDR_P8_Pos)) /* Assignment of value for P8 in the PIO_IFSCDR register */
#define PIO_IFSCDR_P9_Pos                     _UINT32_(9)                                          /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Position */
#define PIO_IFSCDR_P9_Msk                     (_UINT32_(0x1) << PIO_IFSCDR_P9_Pos)                 /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Mask */
#define PIO_IFSCDR_P9(value)                  (PIO_IFSCDR_P9_Msk & (_UINT32_(value) << PIO_IFSCDR_P9_Pos)) /* Assignment of value for P9 in the PIO_IFSCDR register */
#define PIO_IFSCDR_P10_Pos                    _UINT32_(10)                                         /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Position */
#define PIO_IFSCDR_P10_Msk                    (_UINT32_(0x1) << PIO_IFSCDR_P10_Pos)                /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Mask */
#define PIO_IFSCDR_P10(value)                 (PIO_IFSCDR_P10_Msk & (_UINT32_(value) << PIO_IFSCDR_P10_Pos)) /* Assignment of value for P10 in the PIO_IFSCDR register */
#define PIO_IFSCDR_P11_Pos                    _UINT32_(11)                                         /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Position */
#define PIO_IFSCDR_P11_Msk                    (_UINT32_(0x1) << PIO_IFSCDR_P11_Pos)                /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Mask */
#define PIO_IFSCDR_P11(value)                 (PIO_IFSCDR_P11_Msk & (_UINT32_(value) << PIO_IFSCDR_P11_Pos)) /* Assignment of value for P11 in the PIO_IFSCDR register */
#define PIO_IFSCDR_P12_Pos                    _UINT32_(12)                                         /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Position */
#define PIO_IFSCDR_P12_Msk                    (_UINT32_(0x1) << PIO_IFSCDR_P12_Pos)                /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Mask */
#define PIO_IFSCDR_P12(value)                 (PIO_IFSCDR_P12_Msk & (_UINT32_(value) << PIO_IFSCDR_P12_Pos)) /* Assignment of value for P12 in the PIO_IFSCDR register */
#define PIO_IFSCDR_P13_Pos                    _UINT32_(13)                                         /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Position */
#define PIO_IFSCDR_P13_Msk                    (_UINT32_(0x1) << PIO_IFSCDR_P13_Pos)                /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Mask */
#define PIO_IFSCDR_P13(value)                 (PIO_IFSCDR_P13_Msk & (_UINT32_(value) << PIO_IFSCDR_P13_Pos)) /* Assignment of value for P13 in the PIO_IFSCDR register */
#define PIO_IFSCDR_P14_Pos                    _UINT32_(14)                                         /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Position */
#define PIO_IFSCDR_P14_Msk                    (_UINT32_(0x1) << PIO_IFSCDR_P14_Pos)                /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Mask */
#define PIO_IFSCDR_P14(value)                 (PIO_IFSCDR_P14_Msk & (_UINT32_(value) << PIO_IFSCDR_P14_Pos)) /* Assignment of value for P14 in the PIO_IFSCDR register */
#define PIO_IFSCDR_P15_Pos                    _UINT32_(15)                                         /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Position */
#define PIO_IFSCDR_P15_Msk                    (_UINT32_(0x1) << PIO_IFSCDR_P15_Pos)                /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Mask */
#define PIO_IFSCDR_P15(value)                 (PIO_IFSCDR_P15_Msk & (_UINT32_(value) << PIO_IFSCDR_P15_Pos)) /* Assignment of value for P15 in the PIO_IFSCDR register */
#define PIO_IFSCDR_P16_Pos                    _UINT32_(16)                                         /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Position */
#define PIO_IFSCDR_P16_Msk                    (_UINT32_(0x1) << PIO_IFSCDR_P16_Pos)                /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Mask */
#define PIO_IFSCDR_P16(value)                 (PIO_IFSCDR_P16_Msk & (_UINT32_(value) << PIO_IFSCDR_P16_Pos)) /* Assignment of value for P16 in the PIO_IFSCDR register */
#define PIO_IFSCDR_P17_Pos                    _UINT32_(17)                                         /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Position */
#define PIO_IFSCDR_P17_Msk                    (_UINT32_(0x1) << PIO_IFSCDR_P17_Pos)                /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Mask */
#define PIO_IFSCDR_P17(value)                 (PIO_IFSCDR_P17_Msk & (_UINT32_(value) << PIO_IFSCDR_P17_Pos)) /* Assignment of value for P17 in the PIO_IFSCDR register */
#define PIO_IFSCDR_P18_Pos                    _UINT32_(18)                                         /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Position */
#define PIO_IFSCDR_P18_Msk                    (_UINT32_(0x1) << PIO_IFSCDR_P18_Pos)                /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Mask */
#define PIO_IFSCDR_P18(value)                 (PIO_IFSCDR_P18_Msk & (_UINT32_(value) << PIO_IFSCDR_P18_Pos)) /* Assignment of value for P18 in the PIO_IFSCDR register */
#define PIO_IFSCDR_P19_Pos                    _UINT32_(19)                                         /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Position */
#define PIO_IFSCDR_P19_Msk                    (_UINT32_(0x1) << PIO_IFSCDR_P19_Pos)                /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Mask */
#define PIO_IFSCDR_P19(value)                 (PIO_IFSCDR_P19_Msk & (_UINT32_(value) << PIO_IFSCDR_P19_Pos)) /* Assignment of value for P19 in the PIO_IFSCDR register */
#define PIO_IFSCDR_P20_Pos                    _UINT32_(20)                                         /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Position */
#define PIO_IFSCDR_P20_Msk                    (_UINT32_(0x1) << PIO_IFSCDR_P20_Pos)                /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Mask */
#define PIO_IFSCDR_P20(value)                 (PIO_IFSCDR_P20_Msk & (_UINT32_(value) << PIO_IFSCDR_P20_Pos)) /* Assignment of value for P20 in the PIO_IFSCDR register */
#define PIO_IFSCDR_P21_Pos                    _UINT32_(21)                                         /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Position */
#define PIO_IFSCDR_P21_Msk                    (_UINT32_(0x1) << PIO_IFSCDR_P21_Pos)                /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Mask */
#define PIO_IFSCDR_P21(value)                 (PIO_IFSCDR_P21_Msk & (_UINT32_(value) << PIO_IFSCDR_P21_Pos)) /* Assignment of value for P21 in the PIO_IFSCDR register */
#define PIO_IFSCDR_P22_Pos                    _UINT32_(22)                                         /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Position */
#define PIO_IFSCDR_P22_Msk                    (_UINT32_(0x1) << PIO_IFSCDR_P22_Pos)                /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Mask */
#define PIO_IFSCDR_P22(value)                 (PIO_IFSCDR_P22_Msk & (_UINT32_(value) << PIO_IFSCDR_P22_Pos)) /* Assignment of value for P22 in the PIO_IFSCDR register */
#define PIO_IFSCDR_P23_Pos                    _UINT32_(23)                                         /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Position */
#define PIO_IFSCDR_P23_Msk                    (_UINT32_(0x1) << PIO_IFSCDR_P23_Pos)                /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Mask */
#define PIO_IFSCDR_P23(value)                 (PIO_IFSCDR_P23_Msk & (_UINT32_(value) << PIO_IFSCDR_P23_Pos)) /* Assignment of value for P23 in the PIO_IFSCDR register */
#define PIO_IFSCDR_P24_Pos                    _UINT32_(24)                                         /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Position */
#define PIO_IFSCDR_P24_Msk                    (_UINT32_(0x1) << PIO_IFSCDR_P24_Pos)                /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Mask */
#define PIO_IFSCDR_P24(value)                 (PIO_IFSCDR_P24_Msk & (_UINT32_(value) << PIO_IFSCDR_P24_Pos)) /* Assignment of value for P24 in the PIO_IFSCDR register */
#define PIO_IFSCDR_P25_Pos                    _UINT32_(25)                                         /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Position */
#define PIO_IFSCDR_P25_Msk                    (_UINT32_(0x1) << PIO_IFSCDR_P25_Pos)                /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Mask */
#define PIO_IFSCDR_P25(value)                 (PIO_IFSCDR_P25_Msk & (_UINT32_(value) << PIO_IFSCDR_P25_Pos)) /* Assignment of value for P25 in the PIO_IFSCDR register */
#define PIO_IFSCDR_P26_Pos                    _UINT32_(26)                                         /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Position */
#define PIO_IFSCDR_P26_Msk                    (_UINT32_(0x1) << PIO_IFSCDR_P26_Pos)                /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Mask */
#define PIO_IFSCDR_P26(value)                 (PIO_IFSCDR_P26_Msk & (_UINT32_(value) << PIO_IFSCDR_P26_Pos)) /* Assignment of value for P26 in the PIO_IFSCDR register */
#define PIO_IFSCDR_P27_Pos                    _UINT32_(27)                                         /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Position */
#define PIO_IFSCDR_P27_Msk                    (_UINT32_(0x1) << PIO_IFSCDR_P27_Pos)                /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Mask */
#define PIO_IFSCDR_P27(value)                 (PIO_IFSCDR_P27_Msk & (_UINT32_(value) << PIO_IFSCDR_P27_Pos)) /* Assignment of value for P27 in the PIO_IFSCDR register */
#define PIO_IFSCDR_P28_Pos                    _UINT32_(28)                                         /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Position */
#define PIO_IFSCDR_P28_Msk                    (_UINT32_(0x1) << PIO_IFSCDR_P28_Pos)                /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Mask */
#define PIO_IFSCDR_P28(value)                 (PIO_IFSCDR_P28_Msk & (_UINT32_(value) << PIO_IFSCDR_P28_Pos)) /* Assignment of value for P28 in the PIO_IFSCDR register */
#define PIO_IFSCDR_P29_Pos                    _UINT32_(29)                                         /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Position */
#define PIO_IFSCDR_P29_Msk                    (_UINT32_(0x1) << PIO_IFSCDR_P29_Pos)                /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Mask */
#define PIO_IFSCDR_P29(value)                 (PIO_IFSCDR_P29_Msk & (_UINT32_(value) << PIO_IFSCDR_P29_Pos)) /* Assignment of value for P29 in the PIO_IFSCDR register */
#define PIO_IFSCDR_P30_Pos                    _UINT32_(30)                                         /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Position */
#define PIO_IFSCDR_P30_Msk                    (_UINT32_(0x1) << PIO_IFSCDR_P30_Pos)                /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Mask */
#define PIO_IFSCDR_P30(value)                 (PIO_IFSCDR_P30_Msk & (_UINT32_(value) << PIO_IFSCDR_P30_Pos)) /* Assignment of value for P30 in the PIO_IFSCDR register */
#define PIO_IFSCDR_P31_Pos                    _UINT32_(31)                                         /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Position */
#define PIO_IFSCDR_P31_Msk                    (_UINT32_(0x1) << PIO_IFSCDR_P31_Pos)                /* (PIO_IFSCDR) Peripheral Clock Glitch Filtering Select Mask */
#define PIO_IFSCDR_P31(value)                 (PIO_IFSCDR_P31_Msk & (_UINT32_(value) << PIO_IFSCDR_P31_Pos)) /* Assignment of value for P31 in the PIO_IFSCDR register */
#define PIO_IFSCDR_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (PIO_IFSCDR) Register Mask  */

#define PIO_IFSCDR_P_Pos                      _UINT32_(0)                                          /* (PIO_IFSCDR Position) Peripheral Clock Glitch Filtering Select */
#define PIO_IFSCDR_P_Msk                      (_UINT32_(0xFFFFFFFF) << PIO_IFSCDR_P_Pos)           /* (PIO_IFSCDR Mask) P */
#define PIO_IFSCDR_P(value)                   (PIO_IFSCDR_P_Msk & (_UINT32_(value) << PIO_IFSCDR_P_Pos)) 

/* -------- PIO_IFSCER : (PIO Offset: 0x84) ( /W 32) Input Filter Slow Clock Enable Register -------- */
#define PIO_IFSCER_P0_Pos                     _UINT32_(0)                                          /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Position */
#define PIO_IFSCER_P0_Msk                     (_UINT32_(0x1) << PIO_IFSCER_P0_Pos)                 /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Mask */
#define PIO_IFSCER_P0(value)                  (PIO_IFSCER_P0_Msk & (_UINT32_(value) << PIO_IFSCER_P0_Pos)) /* Assignment of value for P0 in the PIO_IFSCER register */
#define PIO_IFSCER_P1_Pos                     _UINT32_(1)                                          /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Position */
#define PIO_IFSCER_P1_Msk                     (_UINT32_(0x1) << PIO_IFSCER_P1_Pos)                 /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Mask */
#define PIO_IFSCER_P1(value)                  (PIO_IFSCER_P1_Msk & (_UINT32_(value) << PIO_IFSCER_P1_Pos)) /* Assignment of value for P1 in the PIO_IFSCER register */
#define PIO_IFSCER_P2_Pos                     _UINT32_(2)                                          /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Position */
#define PIO_IFSCER_P2_Msk                     (_UINT32_(0x1) << PIO_IFSCER_P2_Pos)                 /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Mask */
#define PIO_IFSCER_P2(value)                  (PIO_IFSCER_P2_Msk & (_UINT32_(value) << PIO_IFSCER_P2_Pos)) /* Assignment of value for P2 in the PIO_IFSCER register */
#define PIO_IFSCER_P3_Pos                     _UINT32_(3)                                          /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Position */
#define PIO_IFSCER_P3_Msk                     (_UINT32_(0x1) << PIO_IFSCER_P3_Pos)                 /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Mask */
#define PIO_IFSCER_P3(value)                  (PIO_IFSCER_P3_Msk & (_UINT32_(value) << PIO_IFSCER_P3_Pos)) /* Assignment of value for P3 in the PIO_IFSCER register */
#define PIO_IFSCER_P4_Pos                     _UINT32_(4)                                          /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Position */
#define PIO_IFSCER_P4_Msk                     (_UINT32_(0x1) << PIO_IFSCER_P4_Pos)                 /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Mask */
#define PIO_IFSCER_P4(value)                  (PIO_IFSCER_P4_Msk & (_UINT32_(value) << PIO_IFSCER_P4_Pos)) /* Assignment of value for P4 in the PIO_IFSCER register */
#define PIO_IFSCER_P5_Pos                     _UINT32_(5)                                          /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Position */
#define PIO_IFSCER_P5_Msk                     (_UINT32_(0x1) << PIO_IFSCER_P5_Pos)                 /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Mask */
#define PIO_IFSCER_P5(value)                  (PIO_IFSCER_P5_Msk & (_UINT32_(value) << PIO_IFSCER_P5_Pos)) /* Assignment of value for P5 in the PIO_IFSCER register */
#define PIO_IFSCER_P6_Pos                     _UINT32_(6)                                          /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Position */
#define PIO_IFSCER_P6_Msk                     (_UINT32_(0x1) << PIO_IFSCER_P6_Pos)                 /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Mask */
#define PIO_IFSCER_P6(value)                  (PIO_IFSCER_P6_Msk & (_UINT32_(value) << PIO_IFSCER_P6_Pos)) /* Assignment of value for P6 in the PIO_IFSCER register */
#define PIO_IFSCER_P7_Pos                     _UINT32_(7)                                          /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Position */
#define PIO_IFSCER_P7_Msk                     (_UINT32_(0x1) << PIO_IFSCER_P7_Pos)                 /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Mask */
#define PIO_IFSCER_P7(value)                  (PIO_IFSCER_P7_Msk & (_UINT32_(value) << PIO_IFSCER_P7_Pos)) /* Assignment of value for P7 in the PIO_IFSCER register */
#define PIO_IFSCER_P8_Pos                     _UINT32_(8)                                          /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Position */
#define PIO_IFSCER_P8_Msk                     (_UINT32_(0x1) << PIO_IFSCER_P8_Pos)                 /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Mask */
#define PIO_IFSCER_P8(value)                  (PIO_IFSCER_P8_Msk & (_UINT32_(value) << PIO_IFSCER_P8_Pos)) /* Assignment of value for P8 in the PIO_IFSCER register */
#define PIO_IFSCER_P9_Pos                     _UINT32_(9)                                          /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Position */
#define PIO_IFSCER_P9_Msk                     (_UINT32_(0x1) << PIO_IFSCER_P9_Pos)                 /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Mask */
#define PIO_IFSCER_P9(value)                  (PIO_IFSCER_P9_Msk & (_UINT32_(value) << PIO_IFSCER_P9_Pos)) /* Assignment of value for P9 in the PIO_IFSCER register */
#define PIO_IFSCER_P10_Pos                    _UINT32_(10)                                         /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Position */
#define PIO_IFSCER_P10_Msk                    (_UINT32_(0x1) << PIO_IFSCER_P10_Pos)                /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Mask */
#define PIO_IFSCER_P10(value)                 (PIO_IFSCER_P10_Msk & (_UINT32_(value) << PIO_IFSCER_P10_Pos)) /* Assignment of value for P10 in the PIO_IFSCER register */
#define PIO_IFSCER_P11_Pos                    _UINT32_(11)                                         /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Position */
#define PIO_IFSCER_P11_Msk                    (_UINT32_(0x1) << PIO_IFSCER_P11_Pos)                /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Mask */
#define PIO_IFSCER_P11(value)                 (PIO_IFSCER_P11_Msk & (_UINT32_(value) << PIO_IFSCER_P11_Pos)) /* Assignment of value for P11 in the PIO_IFSCER register */
#define PIO_IFSCER_P12_Pos                    _UINT32_(12)                                         /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Position */
#define PIO_IFSCER_P12_Msk                    (_UINT32_(0x1) << PIO_IFSCER_P12_Pos)                /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Mask */
#define PIO_IFSCER_P12(value)                 (PIO_IFSCER_P12_Msk & (_UINT32_(value) << PIO_IFSCER_P12_Pos)) /* Assignment of value for P12 in the PIO_IFSCER register */
#define PIO_IFSCER_P13_Pos                    _UINT32_(13)                                         /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Position */
#define PIO_IFSCER_P13_Msk                    (_UINT32_(0x1) << PIO_IFSCER_P13_Pos)                /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Mask */
#define PIO_IFSCER_P13(value)                 (PIO_IFSCER_P13_Msk & (_UINT32_(value) << PIO_IFSCER_P13_Pos)) /* Assignment of value for P13 in the PIO_IFSCER register */
#define PIO_IFSCER_P14_Pos                    _UINT32_(14)                                         /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Position */
#define PIO_IFSCER_P14_Msk                    (_UINT32_(0x1) << PIO_IFSCER_P14_Pos)                /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Mask */
#define PIO_IFSCER_P14(value)                 (PIO_IFSCER_P14_Msk & (_UINT32_(value) << PIO_IFSCER_P14_Pos)) /* Assignment of value for P14 in the PIO_IFSCER register */
#define PIO_IFSCER_P15_Pos                    _UINT32_(15)                                         /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Position */
#define PIO_IFSCER_P15_Msk                    (_UINT32_(0x1) << PIO_IFSCER_P15_Pos)                /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Mask */
#define PIO_IFSCER_P15(value)                 (PIO_IFSCER_P15_Msk & (_UINT32_(value) << PIO_IFSCER_P15_Pos)) /* Assignment of value for P15 in the PIO_IFSCER register */
#define PIO_IFSCER_P16_Pos                    _UINT32_(16)                                         /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Position */
#define PIO_IFSCER_P16_Msk                    (_UINT32_(0x1) << PIO_IFSCER_P16_Pos)                /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Mask */
#define PIO_IFSCER_P16(value)                 (PIO_IFSCER_P16_Msk & (_UINT32_(value) << PIO_IFSCER_P16_Pos)) /* Assignment of value for P16 in the PIO_IFSCER register */
#define PIO_IFSCER_P17_Pos                    _UINT32_(17)                                         /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Position */
#define PIO_IFSCER_P17_Msk                    (_UINT32_(0x1) << PIO_IFSCER_P17_Pos)                /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Mask */
#define PIO_IFSCER_P17(value)                 (PIO_IFSCER_P17_Msk & (_UINT32_(value) << PIO_IFSCER_P17_Pos)) /* Assignment of value for P17 in the PIO_IFSCER register */
#define PIO_IFSCER_P18_Pos                    _UINT32_(18)                                         /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Position */
#define PIO_IFSCER_P18_Msk                    (_UINT32_(0x1) << PIO_IFSCER_P18_Pos)                /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Mask */
#define PIO_IFSCER_P18(value)                 (PIO_IFSCER_P18_Msk & (_UINT32_(value) << PIO_IFSCER_P18_Pos)) /* Assignment of value for P18 in the PIO_IFSCER register */
#define PIO_IFSCER_P19_Pos                    _UINT32_(19)                                         /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Position */
#define PIO_IFSCER_P19_Msk                    (_UINT32_(0x1) << PIO_IFSCER_P19_Pos)                /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Mask */
#define PIO_IFSCER_P19(value)                 (PIO_IFSCER_P19_Msk & (_UINT32_(value) << PIO_IFSCER_P19_Pos)) /* Assignment of value for P19 in the PIO_IFSCER register */
#define PIO_IFSCER_P20_Pos                    _UINT32_(20)                                         /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Position */
#define PIO_IFSCER_P20_Msk                    (_UINT32_(0x1) << PIO_IFSCER_P20_Pos)                /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Mask */
#define PIO_IFSCER_P20(value)                 (PIO_IFSCER_P20_Msk & (_UINT32_(value) << PIO_IFSCER_P20_Pos)) /* Assignment of value for P20 in the PIO_IFSCER register */
#define PIO_IFSCER_P21_Pos                    _UINT32_(21)                                         /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Position */
#define PIO_IFSCER_P21_Msk                    (_UINT32_(0x1) << PIO_IFSCER_P21_Pos)                /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Mask */
#define PIO_IFSCER_P21(value)                 (PIO_IFSCER_P21_Msk & (_UINT32_(value) << PIO_IFSCER_P21_Pos)) /* Assignment of value for P21 in the PIO_IFSCER register */
#define PIO_IFSCER_P22_Pos                    _UINT32_(22)                                         /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Position */
#define PIO_IFSCER_P22_Msk                    (_UINT32_(0x1) << PIO_IFSCER_P22_Pos)                /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Mask */
#define PIO_IFSCER_P22(value)                 (PIO_IFSCER_P22_Msk & (_UINT32_(value) << PIO_IFSCER_P22_Pos)) /* Assignment of value for P22 in the PIO_IFSCER register */
#define PIO_IFSCER_P23_Pos                    _UINT32_(23)                                         /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Position */
#define PIO_IFSCER_P23_Msk                    (_UINT32_(0x1) << PIO_IFSCER_P23_Pos)                /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Mask */
#define PIO_IFSCER_P23(value)                 (PIO_IFSCER_P23_Msk & (_UINT32_(value) << PIO_IFSCER_P23_Pos)) /* Assignment of value for P23 in the PIO_IFSCER register */
#define PIO_IFSCER_P24_Pos                    _UINT32_(24)                                         /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Position */
#define PIO_IFSCER_P24_Msk                    (_UINT32_(0x1) << PIO_IFSCER_P24_Pos)                /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Mask */
#define PIO_IFSCER_P24(value)                 (PIO_IFSCER_P24_Msk & (_UINT32_(value) << PIO_IFSCER_P24_Pos)) /* Assignment of value for P24 in the PIO_IFSCER register */
#define PIO_IFSCER_P25_Pos                    _UINT32_(25)                                         /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Position */
#define PIO_IFSCER_P25_Msk                    (_UINT32_(0x1) << PIO_IFSCER_P25_Pos)                /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Mask */
#define PIO_IFSCER_P25(value)                 (PIO_IFSCER_P25_Msk & (_UINT32_(value) << PIO_IFSCER_P25_Pos)) /* Assignment of value for P25 in the PIO_IFSCER register */
#define PIO_IFSCER_P26_Pos                    _UINT32_(26)                                         /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Position */
#define PIO_IFSCER_P26_Msk                    (_UINT32_(0x1) << PIO_IFSCER_P26_Pos)                /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Mask */
#define PIO_IFSCER_P26(value)                 (PIO_IFSCER_P26_Msk & (_UINT32_(value) << PIO_IFSCER_P26_Pos)) /* Assignment of value for P26 in the PIO_IFSCER register */
#define PIO_IFSCER_P27_Pos                    _UINT32_(27)                                         /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Position */
#define PIO_IFSCER_P27_Msk                    (_UINT32_(0x1) << PIO_IFSCER_P27_Pos)                /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Mask */
#define PIO_IFSCER_P27(value)                 (PIO_IFSCER_P27_Msk & (_UINT32_(value) << PIO_IFSCER_P27_Pos)) /* Assignment of value for P27 in the PIO_IFSCER register */
#define PIO_IFSCER_P28_Pos                    _UINT32_(28)                                         /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Position */
#define PIO_IFSCER_P28_Msk                    (_UINT32_(0x1) << PIO_IFSCER_P28_Pos)                /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Mask */
#define PIO_IFSCER_P28(value)                 (PIO_IFSCER_P28_Msk & (_UINT32_(value) << PIO_IFSCER_P28_Pos)) /* Assignment of value for P28 in the PIO_IFSCER register */
#define PIO_IFSCER_P29_Pos                    _UINT32_(29)                                         /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Position */
#define PIO_IFSCER_P29_Msk                    (_UINT32_(0x1) << PIO_IFSCER_P29_Pos)                /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Mask */
#define PIO_IFSCER_P29(value)                 (PIO_IFSCER_P29_Msk & (_UINT32_(value) << PIO_IFSCER_P29_Pos)) /* Assignment of value for P29 in the PIO_IFSCER register */
#define PIO_IFSCER_P30_Pos                    _UINT32_(30)                                         /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Position */
#define PIO_IFSCER_P30_Msk                    (_UINT32_(0x1) << PIO_IFSCER_P30_Pos)                /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Mask */
#define PIO_IFSCER_P30(value)                 (PIO_IFSCER_P30_Msk & (_UINT32_(value) << PIO_IFSCER_P30_Pos)) /* Assignment of value for P30 in the PIO_IFSCER register */
#define PIO_IFSCER_P31_Pos                    _UINT32_(31)                                         /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Position */
#define PIO_IFSCER_P31_Msk                    (_UINT32_(0x1) << PIO_IFSCER_P31_Pos)                /* (PIO_IFSCER) Slow Clock Debouncing Filtering Select Mask */
#define PIO_IFSCER_P31(value)                 (PIO_IFSCER_P31_Msk & (_UINT32_(value) << PIO_IFSCER_P31_Pos)) /* Assignment of value for P31 in the PIO_IFSCER register */
#define PIO_IFSCER_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (PIO_IFSCER) Register Mask  */

#define PIO_IFSCER_P_Pos                      _UINT32_(0)                                          /* (PIO_IFSCER Position) Slow Clock Debouncing Filtering Select */
#define PIO_IFSCER_P_Msk                      (_UINT32_(0xFFFFFFFF) << PIO_IFSCER_P_Pos)           /* (PIO_IFSCER Mask) P */
#define PIO_IFSCER_P(value)                   (PIO_IFSCER_P_Msk & (_UINT32_(value) << PIO_IFSCER_P_Pos)) 

/* -------- PIO_IFSCSR : (PIO Offset: 0x88) ( R/ 32) Input Filter Slow Clock Status Register -------- */
#define PIO_IFSCSR_P0_Pos                     _UINT32_(0)                                          /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Position */
#define PIO_IFSCSR_P0_Msk                     (_UINT32_(0x1) << PIO_IFSCSR_P0_Pos)                 /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Mask */
#define PIO_IFSCSR_P0(value)                  (PIO_IFSCSR_P0_Msk & (_UINT32_(value) << PIO_IFSCSR_P0_Pos)) /* Assignment of value for P0 in the PIO_IFSCSR register */
#define PIO_IFSCSR_P1_Pos                     _UINT32_(1)                                          /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Position */
#define PIO_IFSCSR_P1_Msk                     (_UINT32_(0x1) << PIO_IFSCSR_P1_Pos)                 /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Mask */
#define PIO_IFSCSR_P1(value)                  (PIO_IFSCSR_P1_Msk & (_UINT32_(value) << PIO_IFSCSR_P1_Pos)) /* Assignment of value for P1 in the PIO_IFSCSR register */
#define PIO_IFSCSR_P2_Pos                     _UINT32_(2)                                          /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Position */
#define PIO_IFSCSR_P2_Msk                     (_UINT32_(0x1) << PIO_IFSCSR_P2_Pos)                 /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Mask */
#define PIO_IFSCSR_P2(value)                  (PIO_IFSCSR_P2_Msk & (_UINT32_(value) << PIO_IFSCSR_P2_Pos)) /* Assignment of value for P2 in the PIO_IFSCSR register */
#define PIO_IFSCSR_P3_Pos                     _UINT32_(3)                                          /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Position */
#define PIO_IFSCSR_P3_Msk                     (_UINT32_(0x1) << PIO_IFSCSR_P3_Pos)                 /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Mask */
#define PIO_IFSCSR_P3(value)                  (PIO_IFSCSR_P3_Msk & (_UINT32_(value) << PIO_IFSCSR_P3_Pos)) /* Assignment of value for P3 in the PIO_IFSCSR register */
#define PIO_IFSCSR_P4_Pos                     _UINT32_(4)                                          /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Position */
#define PIO_IFSCSR_P4_Msk                     (_UINT32_(0x1) << PIO_IFSCSR_P4_Pos)                 /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Mask */
#define PIO_IFSCSR_P4(value)                  (PIO_IFSCSR_P4_Msk & (_UINT32_(value) << PIO_IFSCSR_P4_Pos)) /* Assignment of value for P4 in the PIO_IFSCSR register */
#define PIO_IFSCSR_P5_Pos                     _UINT32_(5)                                          /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Position */
#define PIO_IFSCSR_P5_Msk                     (_UINT32_(0x1) << PIO_IFSCSR_P5_Pos)                 /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Mask */
#define PIO_IFSCSR_P5(value)                  (PIO_IFSCSR_P5_Msk & (_UINT32_(value) << PIO_IFSCSR_P5_Pos)) /* Assignment of value for P5 in the PIO_IFSCSR register */
#define PIO_IFSCSR_P6_Pos                     _UINT32_(6)                                          /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Position */
#define PIO_IFSCSR_P6_Msk                     (_UINT32_(0x1) << PIO_IFSCSR_P6_Pos)                 /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Mask */
#define PIO_IFSCSR_P6(value)                  (PIO_IFSCSR_P6_Msk & (_UINT32_(value) << PIO_IFSCSR_P6_Pos)) /* Assignment of value for P6 in the PIO_IFSCSR register */
#define PIO_IFSCSR_P7_Pos                     _UINT32_(7)                                          /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Position */
#define PIO_IFSCSR_P7_Msk                     (_UINT32_(0x1) << PIO_IFSCSR_P7_Pos)                 /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Mask */
#define PIO_IFSCSR_P7(value)                  (PIO_IFSCSR_P7_Msk & (_UINT32_(value) << PIO_IFSCSR_P7_Pos)) /* Assignment of value for P7 in the PIO_IFSCSR register */
#define PIO_IFSCSR_P8_Pos                     _UINT32_(8)                                          /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Position */
#define PIO_IFSCSR_P8_Msk                     (_UINT32_(0x1) << PIO_IFSCSR_P8_Pos)                 /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Mask */
#define PIO_IFSCSR_P8(value)                  (PIO_IFSCSR_P8_Msk & (_UINT32_(value) << PIO_IFSCSR_P8_Pos)) /* Assignment of value for P8 in the PIO_IFSCSR register */
#define PIO_IFSCSR_P9_Pos                     _UINT32_(9)                                          /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Position */
#define PIO_IFSCSR_P9_Msk                     (_UINT32_(0x1) << PIO_IFSCSR_P9_Pos)                 /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Mask */
#define PIO_IFSCSR_P9(value)                  (PIO_IFSCSR_P9_Msk & (_UINT32_(value) << PIO_IFSCSR_P9_Pos)) /* Assignment of value for P9 in the PIO_IFSCSR register */
#define PIO_IFSCSR_P10_Pos                    _UINT32_(10)                                         /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Position */
#define PIO_IFSCSR_P10_Msk                    (_UINT32_(0x1) << PIO_IFSCSR_P10_Pos)                /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Mask */
#define PIO_IFSCSR_P10(value)                 (PIO_IFSCSR_P10_Msk & (_UINT32_(value) << PIO_IFSCSR_P10_Pos)) /* Assignment of value for P10 in the PIO_IFSCSR register */
#define PIO_IFSCSR_P11_Pos                    _UINT32_(11)                                         /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Position */
#define PIO_IFSCSR_P11_Msk                    (_UINT32_(0x1) << PIO_IFSCSR_P11_Pos)                /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Mask */
#define PIO_IFSCSR_P11(value)                 (PIO_IFSCSR_P11_Msk & (_UINT32_(value) << PIO_IFSCSR_P11_Pos)) /* Assignment of value for P11 in the PIO_IFSCSR register */
#define PIO_IFSCSR_P12_Pos                    _UINT32_(12)                                         /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Position */
#define PIO_IFSCSR_P12_Msk                    (_UINT32_(0x1) << PIO_IFSCSR_P12_Pos)                /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Mask */
#define PIO_IFSCSR_P12(value)                 (PIO_IFSCSR_P12_Msk & (_UINT32_(value) << PIO_IFSCSR_P12_Pos)) /* Assignment of value for P12 in the PIO_IFSCSR register */
#define PIO_IFSCSR_P13_Pos                    _UINT32_(13)                                         /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Position */
#define PIO_IFSCSR_P13_Msk                    (_UINT32_(0x1) << PIO_IFSCSR_P13_Pos)                /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Mask */
#define PIO_IFSCSR_P13(value)                 (PIO_IFSCSR_P13_Msk & (_UINT32_(value) << PIO_IFSCSR_P13_Pos)) /* Assignment of value for P13 in the PIO_IFSCSR register */
#define PIO_IFSCSR_P14_Pos                    _UINT32_(14)                                         /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Position */
#define PIO_IFSCSR_P14_Msk                    (_UINT32_(0x1) << PIO_IFSCSR_P14_Pos)                /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Mask */
#define PIO_IFSCSR_P14(value)                 (PIO_IFSCSR_P14_Msk & (_UINT32_(value) << PIO_IFSCSR_P14_Pos)) /* Assignment of value for P14 in the PIO_IFSCSR register */
#define PIO_IFSCSR_P15_Pos                    _UINT32_(15)                                         /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Position */
#define PIO_IFSCSR_P15_Msk                    (_UINT32_(0x1) << PIO_IFSCSR_P15_Pos)                /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Mask */
#define PIO_IFSCSR_P15(value)                 (PIO_IFSCSR_P15_Msk & (_UINT32_(value) << PIO_IFSCSR_P15_Pos)) /* Assignment of value for P15 in the PIO_IFSCSR register */
#define PIO_IFSCSR_P16_Pos                    _UINT32_(16)                                         /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Position */
#define PIO_IFSCSR_P16_Msk                    (_UINT32_(0x1) << PIO_IFSCSR_P16_Pos)                /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Mask */
#define PIO_IFSCSR_P16(value)                 (PIO_IFSCSR_P16_Msk & (_UINT32_(value) << PIO_IFSCSR_P16_Pos)) /* Assignment of value for P16 in the PIO_IFSCSR register */
#define PIO_IFSCSR_P17_Pos                    _UINT32_(17)                                         /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Position */
#define PIO_IFSCSR_P17_Msk                    (_UINT32_(0x1) << PIO_IFSCSR_P17_Pos)                /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Mask */
#define PIO_IFSCSR_P17(value)                 (PIO_IFSCSR_P17_Msk & (_UINT32_(value) << PIO_IFSCSR_P17_Pos)) /* Assignment of value for P17 in the PIO_IFSCSR register */
#define PIO_IFSCSR_P18_Pos                    _UINT32_(18)                                         /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Position */
#define PIO_IFSCSR_P18_Msk                    (_UINT32_(0x1) << PIO_IFSCSR_P18_Pos)                /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Mask */
#define PIO_IFSCSR_P18(value)                 (PIO_IFSCSR_P18_Msk & (_UINT32_(value) << PIO_IFSCSR_P18_Pos)) /* Assignment of value for P18 in the PIO_IFSCSR register */
#define PIO_IFSCSR_P19_Pos                    _UINT32_(19)                                         /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Position */
#define PIO_IFSCSR_P19_Msk                    (_UINT32_(0x1) << PIO_IFSCSR_P19_Pos)                /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Mask */
#define PIO_IFSCSR_P19(value)                 (PIO_IFSCSR_P19_Msk & (_UINT32_(value) << PIO_IFSCSR_P19_Pos)) /* Assignment of value for P19 in the PIO_IFSCSR register */
#define PIO_IFSCSR_P20_Pos                    _UINT32_(20)                                         /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Position */
#define PIO_IFSCSR_P20_Msk                    (_UINT32_(0x1) << PIO_IFSCSR_P20_Pos)                /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Mask */
#define PIO_IFSCSR_P20(value)                 (PIO_IFSCSR_P20_Msk & (_UINT32_(value) << PIO_IFSCSR_P20_Pos)) /* Assignment of value for P20 in the PIO_IFSCSR register */
#define PIO_IFSCSR_P21_Pos                    _UINT32_(21)                                         /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Position */
#define PIO_IFSCSR_P21_Msk                    (_UINT32_(0x1) << PIO_IFSCSR_P21_Pos)                /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Mask */
#define PIO_IFSCSR_P21(value)                 (PIO_IFSCSR_P21_Msk & (_UINT32_(value) << PIO_IFSCSR_P21_Pos)) /* Assignment of value for P21 in the PIO_IFSCSR register */
#define PIO_IFSCSR_P22_Pos                    _UINT32_(22)                                         /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Position */
#define PIO_IFSCSR_P22_Msk                    (_UINT32_(0x1) << PIO_IFSCSR_P22_Pos)                /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Mask */
#define PIO_IFSCSR_P22(value)                 (PIO_IFSCSR_P22_Msk & (_UINT32_(value) << PIO_IFSCSR_P22_Pos)) /* Assignment of value for P22 in the PIO_IFSCSR register */
#define PIO_IFSCSR_P23_Pos                    _UINT32_(23)                                         /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Position */
#define PIO_IFSCSR_P23_Msk                    (_UINT32_(0x1) << PIO_IFSCSR_P23_Pos)                /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Mask */
#define PIO_IFSCSR_P23(value)                 (PIO_IFSCSR_P23_Msk & (_UINT32_(value) << PIO_IFSCSR_P23_Pos)) /* Assignment of value for P23 in the PIO_IFSCSR register */
#define PIO_IFSCSR_P24_Pos                    _UINT32_(24)                                         /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Position */
#define PIO_IFSCSR_P24_Msk                    (_UINT32_(0x1) << PIO_IFSCSR_P24_Pos)                /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Mask */
#define PIO_IFSCSR_P24(value)                 (PIO_IFSCSR_P24_Msk & (_UINT32_(value) << PIO_IFSCSR_P24_Pos)) /* Assignment of value for P24 in the PIO_IFSCSR register */
#define PIO_IFSCSR_P25_Pos                    _UINT32_(25)                                         /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Position */
#define PIO_IFSCSR_P25_Msk                    (_UINT32_(0x1) << PIO_IFSCSR_P25_Pos)                /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Mask */
#define PIO_IFSCSR_P25(value)                 (PIO_IFSCSR_P25_Msk & (_UINT32_(value) << PIO_IFSCSR_P25_Pos)) /* Assignment of value for P25 in the PIO_IFSCSR register */
#define PIO_IFSCSR_P26_Pos                    _UINT32_(26)                                         /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Position */
#define PIO_IFSCSR_P26_Msk                    (_UINT32_(0x1) << PIO_IFSCSR_P26_Pos)                /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Mask */
#define PIO_IFSCSR_P26(value)                 (PIO_IFSCSR_P26_Msk & (_UINT32_(value) << PIO_IFSCSR_P26_Pos)) /* Assignment of value for P26 in the PIO_IFSCSR register */
#define PIO_IFSCSR_P27_Pos                    _UINT32_(27)                                         /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Position */
#define PIO_IFSCSR_P27_Msk                    (_UINT32_(0x1) << PIO_IFSCSR_P27_Pos)                /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Mask */
#define PIO_IFSCSR_P27(value)                 (PIO_IFSCSR_P27_Msk & (_UINT32_(value) << PIO_IFSCSR_P27_Pos)) /* Assignment of value for P27 in the PIO_IFSCSR register */
#define PIO_IFSCSR_P28_Pos                    _UINT32_(28)                                         /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Position */
#define PIO_IFSCSR_P28_Msk                    (_UINT32_(0x1) << PIO_IFSCSR_P28_Pos)                /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Mask */
#define PIO_IFSCSR_P28(value)                 (PIO_IFSCSR_P28_Msk & (_UINT32_(value) << PIO_IFSCSR_P28_Pos)) /* Assignment of value for P28 in the PIO_IFSCSR register */
#define PIO_IFSCSR_P29_Pos                    _UINT32_(29)                                         /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Position */
#define PIO_IFSCSR_P29_Msk                    (_UINT32_(0x1) << PIO_IFSCSR_P29_Pos)                /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Mask */
#define PIO_IFSCSR_P29(value)                 (PIO_IFSCSR_P29_Msk & (_UINT32_(value) << PIO_IFSCSR_P29_Pos)) /* Assignment of value for P29 in the PIO_IFSCSR register */
#define PIO_IFSCSR_P30_Pos                    _UINT32_(30)                                         /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Position */
#define PIO_IFSCSR_P30_Msk                    (_UINT32_(0x1) << PIO_IFSCSR_P30_Pos)                /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Mask */
#define PIO_IFSCSR_P30(value)                 (PIO_IFSCSR_P30_Msk & (_UINT32_(value) << PIO_IFSCSR_P30_Pos)) /* Assignment of value for P30 in the PIO_IFSCSR register */
#define PIO_IFSCSR_P31_Pos                    _UINT32_(31)                                         /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Position */
#define PIO_IFSCSR_P31_Msk                    (_UINT32_(0x1) << PIO_IFSCSR_P31_Pos)                /* (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status Mask */
#define PIO_IFSCSR_P31(value)                 (PIO_IFSCSR_P31_Msk & (_UINT32_(value) << PIO_IFSCSR_P31_Pos)) /* Assignment of value for P31 in the PIO_IFSCSR register */
#define PIO_IFSCSR_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (PIO_IFSCSR) Register Mask  */

#define PIO_IFSCSR_P_Pos                      _UINT32_(0)                                          /* (PIO_IFSCSR Position) Glitch or Debouncing Filter Selection Status */
#define PIO_IFSCSR_P_Msk                      (_UINT32_(0xFFFFFFFF) << PIO_IFSCSR_P_Pos)           /* (PIO_IFSCSR Mask) P */
#define PIO_IFSCSR_P(value)                   (PIO_IFSCSR_P_Msk & (_UINT32_(value) << PIO_IFSCSR_P_Pos)) 

/* -------- PIO_SCDR : (PIO Offset: 0x8C) (R/W 32) Slow Clock Divider Debouncing Register -------- */
#define PIO_SCDR_DIV_Pos                      _UINT32_(0)                                          /* (PIO_SCDR) Slow Clock Divider Selection for Debouncing Position */
#define PIO_SCDR_DIV_Msk                      (_UINT32_(0x3FFF) << PIO_SCDR_DIV_Pos)               /* (PIO_SCDR) Slow Clock Divider Selection for Debouncing Mask */
#define PIO_SCDR_DIV(value)                   (PIO_SCDR_DIV_Msk & (_UINT32_(value) << PIO_SCDR_DIV_Pos)) /* Assignment of value for DIV in the PIO_SCDR register */
#define PIO_SCDR_Msk                          _UINT32_(0x00003FFF)                                 /* (PIO_SCDR) Register Mask  */


/* -------- PIO_PPDDR : (PIO Offset: 0x90) ( /W 32) Pad Pull-down Disable Register -------- */
#define PIO_PPDDR_P0_Pos                      _UINT32_(0)                                          /* (PIO_PPDDR) Pull-Down Disable Position */
#define PIO_PPDDR_P0_Msk                      (_UINT32_(0x1) << PIO_PPDDR_P0_Pos)                  /* (PIO_PPDDR) Pull-Down Disable Mask */
#define PIO_PPDDR_P0(value)                   (PIO_PPDDR_P0_Msk & (_UINT32_(value) << PIO_PPDDR_P0_Pos)) /* Assignment of value for P0 in the PIO_PPDDR register */
#define PIO_PPDDR_P1_Pos                      _UINT32_(1)                                          /* (PIO_PPDDR) Pull-Down Disable Position */
#define PIO_PPDDR_P1_Msk                      (_UINT32_(0x1) << PIO_PPDDR_P1_Pos)                  /* (PIO_PPDDR) Pull-Down Disable Mask */
#define PIO_PPDDR_P1(value)                   (PIO_PPDDR_P1_Msk & (_UINT32_(value) << PIO_PPDDR_P1_Pos)) /* Assignment of value for P1 in the PIO_PPDDR register */
#define PIO_PPDDR_P2_Pos                      _UINT32_(2)                                          /* (PIO_PPDDR) Pull-Down Disable Position */
#define PIO_PPDDR_P2_Msk                      (_UINT32_(0x1) << PIO_PPDDR_P2_Pos)                  /* (PIO_PPDDR) Pull-Down Disable Mask */
#define PIO_PPDDR_P2(value)                   (PIO_PPDDR_P2_Msk & (_UINT32_(value) << PIO_PPDDR_P2_Pos)) /* Assignment of value for P2 in the PIO_PPDDR register */
#define PIO_PPDDR_P3_Pos                      _UINT32_(3)                                          /* (PIO_PPDDR) Pull-Down Disable Position */
#define PIO_PPDDR_P3_Msk                      (_UINT32_(0x1) << PIO_PPDDR_P3_Pos)                  /* (PIO_PPDDR) Pull-Down Disable Mask */
#define PIO_PPDDR_P3(value)                   (PIO_PPDDR_P3_Msk & (_UINT32_(value) << PIO_PPDDR_P3_Pos)) /* Assignment of value for P3 in the PIO_PPDDR register */
#define PIO_PPDDR_P4_Pos                      _UINT32_(4)                                          /* (PIO_PPDDR) Pull-Down Disable Position */
#define PIO_PPDDR_P4_Msk                      (_UINT32_(0x1) << PIO_PPDDR_P4_Pos)                  /* (PIO_PPDDR) Pull-Down Disable Mask */
#define PIO_PPDDR_P4(value)                   (PIO_PPDDR_P4_Msk & (_UINT32_(value) << PIO_PPDDR_P4_Pos)) /* Assignment of value for P4 in the PIO_PPDDR register */
#define PIO_PPDDR_P5_Pos                      _UINT32_(5)                                          /* (PIO_PPDDR) Pull-Down Disable Position */
#define PIO_PPDDR_P5_Msk                      (_UINT32_(0x1) << PIO_PPDDR_P5_Pos)                  /* (PIO_PPDDR) Pull-Down Disable Mask */
#define PIO_PPDDR_P5(value)                   (PIO_PPDDR_P5_Msk & (_UINT32_(value) << PIO_PPDDR_P5_Pos)) /* Assignment of value for P5 in the PIO_PPDDR register */
#define PIO_PPDDR_P6_Pos                      _UINT32_(6)                                          /* (PIO_PPDDR) Pull-Down Disable Position */
#define PIO_PPDDR_P6_Msk                      (_UINT32_(0x1) << PIO_PPDDR_P6_Pos)                  /* (PIO_PPDDR) Pull-Down Disable Mask */
#define PIO_PPDDR_P6(value)                   (PIO_PPDDR_P6_Msk & (_UINT32_(value) << PIO_PPDDR_P6_Pos)) /* Assignment of value for P6 in the PIO_PPDDR register */
#define PIO_PPDDR_P7_Pos                      _UINT32_(7)                                          /* (PIO_PPDDR) Pull-Down Disable Position */
#define PIO_PPDDR_P7_Msk                      (_UINT32_(0x1) << PIO_PPDDR_P7_Pos)                  /* (PIO_PPDDR) Pull-Down Disable Mask */
#define PIO_PPDDR_P7(value)                   (PIO_PPDDR_P7_Msk & (_UINT32_(value) << PIO_PPDDR_P7_Pos)) /* Assignment of value for P7 in the PIO_PPDDR register */
#define PIO_PPDDR_P8_Pos                      _UINT32_(8)                                          /* (PIO_PPDDR) Pull-Down Disable Position */
#define PIO_PPDDR_P8_Msk                      (_UINT32_(0x1) << PIO_PPDDR_P8_Pos)                  /* (PIO_PPDDR) Pull-Down Disable Mask */
#define PIO_PPDDR_P8(value)                   (PIO_PPDDR_P8_Msk & (_UINT32_(value) << PIO_PPDDR_P8_Pos)) /* Assignment of value for P8 in the PIO_PPDDR register */
#define PIO_PPDDR_P9_Pos                      _UINT32_(9)                                          /* (PIO_PPDDR) Pull-Down Disable Position */
#define PIO_PPDDR_P9_Msk                      (_UINT32_(0x1) << PIO_PPDDR_P9_Pos)                  /* (PIO_PPDDR) Pull-Down Disable Mask */
#define PIO_PPDDR_P9(value)                   (PIO_PPDDR_P9_Msk & (_UINT32_(value) << PIO_PPDDR_P9_Pos)) /* Assignment of value for P9 in the PIO_PPDDR register */
#define PIO_PPDDR_P10_Pos                     _UINT32_(10)                                         /* (PIO_PPDDR) Pull-Down Disable Position */
#define PIO_PPDDR_P10_Msk                     (_UINT32_(0x1) << PIO_PPDDR_P10_Pos)                 /* (PIO_PPDDR) Pull-Down Disable Mask */
#define PIO_PPDDR_P10(value)                  (PIO_PPDDR_P10_Msk & (_UINT32_(value) << PIO_PPDDR_P10_Pos)) /* Assignment of value for P10 in the PIO_PPDDR register */
#define PIO_PPDDR_P11_Pos                     _UINT32_(11)                                         /* (PIO_PPDDR) Pull-Down Disable Position */
#define PIO_PPDDR_P11_Msk                     (_UINT32_(0x1) << PIO_PPDDR_P11_Pos)                 /* (PIO_PPDDR) Pull-Down Disable Mask */
#define PIO_PPDDR_P11(value)                  (PIO_PPDDR_P11_Msk & (_UINT32_(value) << PIO_PPDDR_P11_Pos)) /* Assignment of value for P11 in the PIO_PPDDR register */
#define PIO_PPDDR_P12_Pos                     _UINT32_(12)                                         /* (PIO_PPDDR) Pull-Down Disable Position */
#define PIO_PPDDR_P12_Msk                     (_UINT32_(0x1) << PIO_PPDDR_P12_Pos)                 /* (PIO_PPDDR) Pull-Down Disable Mask */
#define PIO_PPDDR_P12(value)                  (PIO_PPDDR_P12_Msk & (_UINT32_(value) << PIO_PPDDR_P12_Pos)) /* Assignment of value for P12 in the PIO_PPDDR register */
#define PIO_PPDDR_P13_Pos                     _UINT32_(13)                                         /* (PIO_PPDDR) Pull-Down Disable Position */
#define PIO_PPDDR_P13_Msk                     (_UINT32_(0x1) << PIO_PPDDR_P13_Pos)                 /* (PIO_PPDDR) Pull-Down Disable Mask */
#define PIO_PPDDR_P13(value)                  (PIO_PPDDR_P13_Msk & (_UINT32_(value) << PIO_PPDDR_P13_Pos)) /* Assignment of value for P13 in the PIO_PPDDR register */
#define PIO_PPDDR_P14_Pos                     _UINT32_(14)                                         /* (PIO_PPDDR) Pull-Down Disable Position */
#define PIO_PPDDR_P14_Msk                     (_UINT32_(0x1) << PIO_PPDDR_P14_Pos)                 /* (PIO_PPDDR) Pull-Down Disable Mask */
#define PIO_PPDDR_P14(value)                  (PIO_PPDDR_P14_Msk & (_UINT32_(value) << PIO_PPDDR_P14_Pos)) /* Assignment of value for P14 in the PIO_PPDDR register */
#define PIO_PPDDR_P15_Pos                     _UINT32_(15)                                         /* (PIO_PPDDR) Pull-Down Disable Position */
#define PIO_PPDDR_P15_Msk                     (_UINT32_(0x1) << PIO_PPDDR_P15_Pos)                 /* (PIO_PPDDR) Pull-Down Disable Mask */
#define PIO_PPDDR_P15(value)                  (PIO_PPDDR_P15_Msk & (_UINT32_(value) << PIO_PPDDR_P15_Pos)) /* Assignment of value for P15 in the PIO_PPDDR register */
#define PIO_PPDDR_P16_Pos                     _UINT32_(16)                                         /* (PIO_PPDDR) Pull-Down Disable Position */
#define PIO_PPDDR_P16_Msk                     (_UINT32_(0x1) << PIO_PPDDR_P16_Pos)                 /* (PIO_PPDDR) Pull-Down Disable Mask */
#define PIO_PPDDR_P16(value)                  (PIO_PPDDR_P16_Msk & (_UINT32_(value) << PIO_PPDDR_P16_Pos)) /* Assignment of value for P16 in the PIO_PPDDR register */
#define PIO_PPDDR_P17_Pos                     _UINT32_(17)                                         /* (PIO_PPDDR) Pull-Down Disable Position */
#define PIO_PPDDR_P17_Msk                     (_UINT32_(0x1) << PIO_PPDDR_P17_Pos)                 /* (PIO_PPDDR) Pull-Down Disable Mask */
#define PIO_PPDDR_P17(value)                  (PIO_PPDDR_P17_Msk & (_UINT32_(value) << PIO_PPDDR_P17_Pos)) /* Assignment of value for P17 in the PIO_PPDDR register */
#define PIO_PPDDR_P18_Pos                     _UINT32_(18)                                         /* (PIO_PPDDR) Pull-Down Disable Position */
#define PIO_PPDDR_P18_Msk                     (_UINT32_(0x1) << PIO_PPDDR_P18_Pos)                 /* (PIO_PPDDR) Pull-Down Disable Mask */
#define PIO_PPDDR_P18(value)                  (PIO_PPDDR_P18_Msk & (_UINT32_(value) << PIO_PPDDR_P18_Pos)) /* Assignment of value for P18 in the PIO_PPDDR register */
#define PIO_PPDDR_P19_Pos                     _UINT32_(19)                                         /* (PIO_PPDDR) Pull-Down Disable Position */
#define PIO_PPDDR_P19_Msk                     (_UINT32_(0x1) << PIO_PPDDR_P19_Pos)                 /* (PIO_PPDDR) Pull-Down Disable Mask */
#define PIO_PPDDR_P19(value)                  (PIO_PPDDR_P19_Msk & (_UINT32_(value) << PIO_PPDDR_P19_Pos)) /* Assignment of value for P19 in the PIO_PPDDR register */
#define PIO_PPDDR_P20_Pos                     _UINT32_(20)                                         /* (PIO_PPDDR) Pull-Down Disable Position */
#define PIO_PPDDR_P20_Msk                     (_UINT32_(0x1) << PIO_PPDDR_P20_Pos)                 /* (PIO_PPDDR) Pull-Down Disable Mask */
#define PIO_PPDDR_P20(value)                  (PIO_PPDDR_P20_Msk & (_UINT32_(value) << PIO_PPDDR_P20_Pos)) /* Assignment of value for P20 in the PIO_PPDDR register */
#define PIO_PPDDR_P21_Pos                     _UINT32_(21)                                         /* (PIO_PPDDR) Pull-Down Disable Position */
#define PIO_PPDDR_P21_Msk                     (_UINT32_(0x1) << PIO_PPDDR_P21_Pos)                 /* (PIO_PPDDR) Pull-Down Disable Mask */
#define PIO_PPDDR_P21(value)                  (PIO_PPDDR_P21_Msk & (_UINT32_(value) << PIO_PPDDR_P21_Pos)) /* Assignment of value for P21 in the PIO_PPDDR register */
#define PIO_PPDDR_P22_Pos                     _UINT32_(22)                                         /* (PIO_PPDDR) Pull-Down Disable Position */
#define PIO_PPDDR_P22_Msk                     (_UINT32_(0x1) << PIO_PPDDR_P22_Pos)                 /* (PIO_PPDDR) Pull-Down Disable Mask */
#define PIO_PPDDR_P22(value)                  (PIO_PPDDR_P22_Msk & (_UINT32_(value) << PIO_PPDDR_P22_Pos)) /* Assignment of value for P22 in the PIO_PPDDR register */
#define PIO_PPDDR_P23_Pos                     _UINT32_(23)                                         /* (PIO_PPDDR) Pull-Down Disable Position */
#define PIO_PPDDR_P23_Msk                     (_UINT32_(0x1) << PIO_PPDDR_P23_Pos)                 /* (PIO_PPDDR) Pull-Down Disable Mask */
#define PIO_PPDDR_P23(value)                  (PIO_PPDDR_P23_Msk & (_UINT32_(value) << PIO_PPDDR_P23_Pos)) /* Assignment of value for P23 in the PIO_PPDDR register */
#define PIO_PPDDR_P24_Pos                     _UINT32_(24)                                         /* (PIO_PPDDR) Pull-Down Disable Position */
#define PIO_PPDDR_P24_Msk                     (_UINT32_(0x1) << PIO_PPDDR_P24_Pos)                 /* (PIO_PPDDR) Pull-Down Disable Mask */
#define PIO_PPDDR_P24(value)                  (PIO_PPDDR_P24_Msk & (_UINT32_(value) << PIO_PPDDR_P24_Pos)) /* Assignment of value for P24 in the PIO_PPDDR register */
#define PIO_PPDDR_P25_Pos                     _UINT32_(25)                                         /* (PIO_PPDDR) Pull-Down Disable Position */
#define PIO_PPDDR_P25_Msk                     (_UINT32_(0x1) << PIO_PPDDR_P25_Pos)                 /* (PIO_PPDDR) Pull-Down Disable Mask */
#define PIO_PPDDR_P25(value)                  (PIO_PPDDR_P25_Msk & (_UINT32_(value) << PIO_PPDDR_P25_Pos)) /* Assignment of value for P25 in the PIO_PPDDR register */
#define PIO_PPDDR_P26_Pos                     _UINT32_(26)                                         /* (PIO_PPDDR) Pull-Down Disable Position */
#define PIO_PPDDR_P26_Msk                     (_UINT32_(0x1) << PIO_PPDDR_P26_Pos)                 /* (PIO_PPDDR) Pull-Down Disable Mask */
#define PIO_PPDDR_P26(value)                  (PIO_PPDDR_P26_Msk & (_UINT32_(value) << PIO_PPDDR_P26_Pos)) /* Assignment of value for P26 in the PIO_PPDDR register */
#define PIO_PPDDR_P27_Pos                     _UINT32_(27)                                         /* (PIO_PPDDR) Pull-Down Disable Position */
#define PIO_PPDDR_P27_Msk                     (_UINT32_(0x1) << PIO_PPDDR_P27_Pos)                 /* (PIO_PPDDR) Pull-Down Disable Mask */
#define PIO_PPDDR_P27(value)                  (PIO_PPDDR_P27_Msk & (_UINT32_(value) << PIO_PPDDR_P27_Pos)) /* Assignment of value for P27 in the PIO_PPDDR register */
#define PIO_PPDDR_P28_Pos                     _UINT32_(28)                                         /* (PIO_PPDDR) Pull-Down Disable Position */
#define PIO_PPDDR_P28_Msk                     (_UINT32_(0x1) << PIO_PPDDR_P28_Pos)                 /* (PIO_PPDDR) Pull-Down Disable Mask */
#define PIO_PPDDR_P28(value)                  (PIO_PPDDR_P28_Msk & (_UINT32_(value) << PIO_PPDDR_P28_Pos)) /* Assignment of value for P28 in the PIO_PPDDR register */
#define PIO_PPDDR_P29_Pos                     _UINT32_(29)                                         /* (PIO_PPDDR) Pull-Down Disable Position */
#define PIO_PPDDR_P29_Msk                     (_UINT32_(0x1) << PIO_PPDDR_P29_Pos)                 /* (PIO_PPDDR) Pull-Down Disable Mask */
#define PIO_PPDDR_P29(value)                  (PIO_PPDDR_P29_Msk & (_UINT32_(value) << PIO_PPDDR_P29_Pos)) /* Assignment of value for P29 in the PIO_PPDDR register */
#define PIO_PPDDR_P30_Pos                     _UINT32_(30)                                         /* (PIO_PPDDR) Pull-Down Disable Position */
#define PIO_PPDDR_P30_Msk                     (_UINT32_(0x1) << PIO_PPDDR_P30_Pos)                 /* (PIO_PPDDR) Pull-Down Disable Mask */
#define PIO_PPDDR_P30(value)                  (PIO_PPDDR_P30_Msk & (_UINT32_(value) << PIO_PPDDR_P30_Pos)) /* Assignment of value for P30 in the PIO_PPDDR register */
#define PIO_PPDDR_P31_Pos                     _UINT32_(31)                                         /* (PIO_PPDDR) Pull-Down Disable Position */
#define PIO_PPDDR_P31_Msk                     (_UINT32_(0x1) << PIO_PPDDR_P31_Pos)                 /* (PIO_PPDDR) Pull-Down Disable Mask */
#define PIO_PPDDR_P31(value)                  (PIO_PPDDR_P31_Msk & (_UINT32_(value) << PIO_PPDDR_P31_Pos)) /* Assignment of value for P31 in the PIO_PPDDR register */
#define PIO_PPDDR_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (PIO_PPDDR) Register Mask  */

#define PIO_PPDDR_P_Pos                       _UINT32_(0)                                          /* (PIO_PPDDR Position) Pull-Down Disable */
#define PIO_PPDDR_P_Msk                       (_UINT32_(0xFFFFFFFF) << PIO_PPDDR_P_Pos)            /* (PIO_PPDDR Mask) P */
#define PIO_PPDDR_P(value)                    (PIO_PPDDR_P_Msk & (_UINT32_(value) << PIO_PPDDR_P_Pos)) 

/* -------- PIO_PPDER : (PIO Offset: 0x94) ( /W 32) Pad Pull-down Enable Register -------- */
#define PIO_PPDER_P0_Pos                      _UINT32_(0)                                          /* (PIO_PPDER) Pull-Down Enable Position */
#define PIO_PPDER_P0_Msk                      (_UINT32_(0x1) << PIO_PPDER_P0_Pos)                  /* (PIO_PPDER) Pull-Down Enable Mask */
#define PIO_PPDER_P0(value)                   (PIO_PPDER_P0_Msk & (_UINT32_(value) << PIO_PPDER_P0_Pos)) /* Assignment of value for P0 in the PIO_PPDER register */
#define PIO_PPDER_P1_Pos                      _UINT32_(1)                                          /* (PIO_PPDER) Pull-Down Enable Position */
#define PIO_PPDER_P1_Msk                      (_UINT32_(0x1) << PIO_PPDER_P1_Pos)                  /* (PIO_PPDER) Pull-Down Enable Mask */
#define PIO_PPDER_P1(value)                   (PIO_PPDER_P1_Msk & (_UINT32_(value) << PIO_PPDER_P1_Pos)) /* Assignment of value for P1 in the PIO_PPDER register */
#define PIO_PPDER_P2_Pos                      _UINT32_(2)                                          /* (PIO_PPDER) Pull-Down Enable Position */
#define PIO_PPDER_P2_Msk                      (_UINT32_(0x1) << PIO_PPDER_P2_Pos)                  /* (PIO_PPDER) Pull-Down Enable Mask */
#define PIO_PPDER_P2(value)                   (PIO_PPDER_P2_Msk & (_UINT32_(value) << PIO_PPDER_P2_Pos)) /* Assignment of value for P2 in the PIO_PPDER register */
#define PIO_PPDER_P3_Pos                      _UINT32_(3)                                          /* (PIO_PPDER) Pull-Down Enable Position */
#define PIO_PPDER_P3_Msk                      (_UINT32_(0x1) << PIO_PPDER_P3_Pos)                  /* (PIO_PPDER) Pull-Down Enable Mask */
#define PIO_PPDER_P3(value)                   (PIO_PPDER_P3_Msk & (_UINT32_(value) << PIO_PPDER_P3_Pos)) /* Assignment of value for P3 in the PIO_PPDER register */
#define PIO_PPDER_P4_Pos                      _UINT32_(4)                                          /* (PIO_PPDER) Pull-Down Enable Position */
#define PIO_PPDER_P4_Msk                      (_UINT32_(0x1) << PIO_PPDER_P4_Pos)                  /* (PIO_PPDER) Pull-Down Enable Mask */
#define PIO_PPDER_P4(value)                   (PIO_PPDER_P4_Msk & (_UINT32_(value) << PIO_PPDER_P4_Pos)) /* Assignment of value for P4 in the PIO_PPDER register */
#define PIO_PPDER_P5_Pos                      _UINT32_(5)                                          /* (PIO_PPDER) Pull-Down Enable Position */
#define PIO_PPDER_P5_Msk                      (_UINT32_(0x1) << PIO_PPDER_P5_Pos)                  /* (PIO_PPDER) Pull-Down Enable Mask */
#define PIO_PPDER_P5(value)                   (PIO_PPDER_P5_Msk & (_UINT32_(value) << PIO_PPDER_P5_Pos)) /* Assignment of value for P5 in the PIO_PPDER register */
#define PIO_PPDER_P6_Pos                      _UINT32_(6)                                          /* (PIO_PPDER) Pull-Down Enable Position */
#define PIO_PPDER_P6_Msk                      (_UINT32_(0x1) << PIO_PPDER_P6_Pos)                  /* (PIO_PPDER) Pull-Down Enable Mask */
#define PIO_PPDER_P6(value)                   (PIO_PPDER_P6_Msk & (_UINT32_(value) << PIO_PPDER_P6_Pos)) /* Assignment of value for P6 in the PIO_PPDER register */
#define PIO_PPDER_P7_Pos                      _UINT32_(7)                                          /* (PIO_PPDER) Pull-Down Enable Position */
#define PIO_PPDER_P7_Msk                      (_UINT32_(0x1) << PIO_PPDER_P7_Pos)                  /* (PIO_PPDER) Pull-Down Enable Mask */
#define PIO_PPDER_P7(value)                   (PIO_PPDER_P7_Msk & (_UINT32_(value) << PIO_PPDER_P7_Pos)) /* Assignment of value for P7 in the PIO_PPDER register */
#define PIO_PPDER_P8_Pos                      _UINT32_(8)                                          /* (PIO_PPDER) Pull-Down Enable Position */
#define PIO_PPDER_P8_Msk                      (_UINT32_(0x1) << PIO_PPDER_P8_Pos)                  /* (PIO_PPDER) Pull-Down Enable Mask */
#define PIO_PPDER_P8(value)                   (PIO_PPDER_P8_Msk & (_UINT32_(value) << PIO_PPDER_P8_Pos)) /* Assignment of value for P8 in the PIO_PPDER register */
#define PIO_PPDER_P9_Pos                      _UINT32_(9)                                          /* (PIO_PPDER) Pull-Down Enable Position */
#define PIO_PPDER_P9_Msk                      (_UINT32_(0x1) << PIO_PPDER_P9_Pos)                  /* (PIO_PPDER) Pull-Down Enable Mask */
#define PIO_PPDER_P9(value)                   (PIO_PPDER_P9_Msk & (_UINT32_(value) << PIO_PPDER_P9_Pos)) /* Assignment of value for P9 in the PIO_PPDER register */
#define PIO_PPDER_P10_Pos                     _UINT32_(10)                                         /* (PIO_PPDER) Pull-Down Enable Position */
#define PIO_PPDER_P10_Msk                     (_UINT32_(0x1) << PIO_PPDER_P10_Pos)                 /* (PIO_PPDER) Pull-Down Enable Mask */
#define PIO_PPDER_P10(value)                  (PIO_PPDER_P10_Msk & (_UINT32_(value) << PIO_PPDER_P10_Pos)) /* Assignment of value for P10 in the PIO_PPDER register */
#define PIO_PPDER_P11_Pos                     _UINT32_(11)                                         /* (PIO_PPDER) Pull-Down Enable Position */
#define PIO_PPDER_P11_Msk                     (_UINT32_(0x1) << PIO_PPDER_P11_Pos)                 /* (PIO_PPDER) Pull-Down Enable Mask */
#define PIO_PPDER_P11(value)                  (PIO_PPDER_P11_Msk & (_UINT32_(value) << PIO_PPDER_P11_Pos)) /* Assignment of value for P11 in the PIO_PPDER register */
#define PIO_PPDER_P12_Pos                     _UINT32_(12)                                         /* (PIO_PPDER) Pull-Down Enable Position */
#define PIO_PPDER_P12_Msk                     (_UINT32_(0x1) << PIO_PPDER_P12_Pos)                 /* (PIO_PPDER) Pull-Down Enable Mask */
#define PIO_PPDER_P12(value)                  (PIO_PPDER_P12_Msk & (_UINT32_(value) << PIO_PPDER_P12_Pos)) /* Assignment of value for P12 in the PIO_PPDER register */
#define PIO_PPDER_P13_Pos                     _UINT32_(13)                                         /* (PIO_PPDER) Pull-Down Enable Position */
#define PIO_PPDER_P13_Msk                     (_UINT32_(0x1) << PIO_PPDER_P13_Pos)                 /* (PIO_PPDER) Pull-Down Enable Mask */
#define PIO_PPDER_P13(value)                  (PIO_PPDER_P13_Msk & (_UINT32_(value) << PIO_PPDER_P13_Pos)) /* Assignment of value for P13 in the PIO_PPDER register */
#define PIO_PPDER_P14_Pos                     _UINT32_(14)                                         /* (PIO_PPDER) Pull-Down Enable Position */
#define PIO_PPDER_P14_Msk                     (_UINT32_(0x1) << PIO_PPDER_P14_Pos)                 /* (PIO_PPDER) Pull-Down Enable Mask */
#define PIO_PPDER_P14(value)                  (PIO_PPDER_P14_Msk & (_UINT32_(value) << PIO_PPDER_P14_Pos)) /* Assignment of value for P14 in the PIO_PPDER register */
#define PIO_PPDER_P15_Pos                     _UINT32_(15)                                         /* (PIO_PPDER) Pull-Down Enable Position */
#define PIO_PPDER_P15_Msk                     (_UINT32_(0x1) << PIO_PPDER_P15_Pos)                 /* (PIO_PPDER) Pull-Down Enable Mask */
#define PIO_PPDER_P15(value)                  (PIO_PPDER_P15_Msk & (_UINT32_(value) << PIO_PPDER_P15_Pos)) /* Assignment of value for P15 in the PIO_PPDER register */
#define PIO_PPDER_P16_Pos                     _UINT32_(16)                                         /* (PIO_PPDER) Pull-Down Enable Position */
#define PIO_PPDER_P16_Msk                     (_UINT32_(0x1) << PIO_PPDER_P16_Pos)                 /* (PIO_PPDER) Pull-Down Enable Mask */
#define PIO_PPDER_P16(value)                  (PIO_PPDER_P16_Msk & (_UINT32_(value) << PIO_PPDER_P16_Pos)) /* Assignment of value for P16 in the PIO_PPDER register */
#define PIO_PPDER_P17_Pos                     _UINT32_(17)                                         /* (PIO_PPDER) Pull-Down Enable Position */
#define PIO_PPDER_P17_Msk                     (_UINT32_(0x1) << PIO_PPDER_P17_Pos)                 /* (PIO_PPDER) Pull-Down Enable Mask */
#define PIO_PPDER_P17(value)                  (PIO_PPDER_P17_Msk & (_UINT32_(value) << PIO_PPDER_P17_Pos)) /* Assignment of value for P17 in the PIO_PPDER register */
#define PIO_PPDER_P18_Pos                     _UINT32_(18)                                         /* (PIO_PPDER) Pull-Down Enable Position */
#define PIO_PPDER_P18_Msk                     (_UINT32_(0x1) << PIO_PPDER_P18_Pos)                 /* (PIO_PPDER) Pull-Down Enable Mask */
#define PIO_PPDER_P18(value)                  (PIO_PPDER_P18_Msk & (_UINT32_(value) << PIO_PPDER_P18_Pos)) /* Assignment of value for P18 in the PIO_PPDER register */
#define PIO_PPDER_P19_Pos                     _UINT32_(19)                                         /* (PIO_PPDER) Pull-Down Enable Position */
#define PIO_PPDER_P19_Msk                     (_UINT32_(0x1) << PIO_PPDER_P19_Pos)                 /* (PIO_PPDER) Pull-Down Enable Mask */
#define PIO_PPDER_P19(value)                  (PIO_PPDER_P19_Msk & (_UINT32_(value) << PIO_PPDER_P19_Pos)) /* Assignment of value for P19 in the PIO_PPDER register */
#define PIO_PPDER_P20_Pos                     _UINT32_(20)                                         /* (PIO_PPDER) Pull-Down Enable Position */
#define PIO_PPDER_P20_Msk                     (_UINT32_(0x1) << PIO_PPDER_P20_Pos)                 /* (PIO_PPDER) Pull-Down Enable Mask */
#define PIO_PPDER_P20(value)                  (PIO_PPDER_P20_Msk & (_UINT32_(value) << PIO_PPDER_P20_Pos)) /* Assignment of value for P20 in the PIO_PPDER register */
#define PIO_PPDER_P21_Pos                     _UINT32_(21)                                         /* (PIO_PPDER) Pull-Down Enable Position */
#define PIO_PPDER_P21_Msk                     (_UINT32_(0x1) << PIO_PPDER_P21_Pos)                 /* (PIO_PPDER) Pull-Down Enable Mask */
#define PIO_PPDER_P21(value)                  (PIO_PPDER_P21_Msk & (_UINT32_(value) << PIO_PPDER_P21_Pos)) /* Assignment of value for P21 in the PIO_PPDER register */
#define PIO_PPDER_P22_Pos                     _UINT32_(22)                                         /* (PIO_PPDER) Pull-Down Enable Position */
#define PIO_PPDER_P22_Msk                     (_UINT32_(0x1) << PIO_PPDER_P22_Pos)                 /* (PIO_PPDER) Pull-Down Enable Mask */
#define PIO_PPDER_P22(value)                  (PIO_PPDER_P22_Msk & (_UINT32_(value) << PIO_PPDER_P22_Pos)) /* Assignment of value for P22 in the PIO_PPDER register */
#define PIO_PPDER_P23_Pos                     _UINT32_(23)                                         /* (PIO_PPDER) Pull-Down Enable Position */
#define PIO_PPDER_P23_Msk                     (_UINT32_(0x1) << PIO_PPDER_P23_Pos)                 /* (PIO_PPDER) Pull-Down Enable Mask */
#define PIO_PPDER_P23(value)                  (PIO_PPDER_P23_Msk & (_UINT32_(value) << PIO_PPDER_P23_Pos)) /* Assignment of value for P23 in the PIO_PPDER register */
#define PIO_PPDER_P24_Pos                     _UINT32_(24)                                         /* (PIO_PPDER) Pull-Down Enable Position */
#define PIO_PPDER_P24_Msk                     (_UINT32_(0x1) << PIO_PPDER_P24_Pos)                 /* (PIO_PPDER) Pull-Down Enable Mask */
#define PIO_PPDER_P24(value)                  (PIO_PPDER_P24_Msk & (_UINT32_(value) << PIO_PPDER_P24_Pos)) /* Assignment of value for P24 in the PIO_PPDER register */
#define PIO_PPDER_P25_Pos                     _UINT32_(25)                                         /* (PIO_PPDER) Pull-Down Enable Position */
#define PIO_PPDER_P25_Msk                     (_UINT32_(0x1) << PIO_PPDER_P25_Pos)                 /* (PIO_PPDER) Pull-Down Enable Mask */
#define PIO_PPDER_P25(value)                  (PIO_PPDER_P25_Msk & (_UINT32_(value) << PIO_PPDER_P25_Pos)) /* Assignment of value for P25 in the PIO_PPDER register */
#define PIO_PPDER_P26_Pos                     _UINT32_(26)                                         /* (PIO_PPDER) Pull-Down Enable Position */
#define PIO_PPDER_P26_Msk                     (_UINT32_(0x1) << PIO_PPDER_P26_Pos)                 /* (PIO_PPDER) Pull-Down Enable Mask */
#define PIO_PPDER_P26(value)                  (PIO_PPDER_P26_Msk & (_UINT32_(value) << PIO_PPDER_P26_Pos)) /* Assignment of value for P26 in the PIO_PPDER register */
#define PIO_PPDER_P27_Pos                     _UINT32_(27)                                         /* (PIO_PPDER) Pull-Down Enable Position */
#define PIO_PPDER_P27_Msk                     (_UINT32_(0x1) << PIO_PPDER_P27_Pos)                 /* (PIO_PPDER) Pull-Down Enable Mask */
#define PIO_PPDER_P27(value)                  (PIO_PPDER_P27_Msk & (_UINT32_(value) << PIO_PPDER_P27_Pos)) /* Assignment of value for P27 in the PIO_PPDER register */
#define PIO_PPDER_P28_Pos                     _UINT32_(28)                                         /* (PIO_PPDER) Pull-Down Enable Position */
#define PIO_PPDER_P28_Msk                     (_UINT32_(0x1) << PIO_PPDER_P28_Pos)                 /* (PIO_PPDER) Pull-Down Enable Mask */
#define PIO_PPDER_P28(value)                  (PIO_PPDER_P28_Msk & (_UINT32_(value) << PIO_PPDER_P28_Pos)) /* Assignment of value for P28 in the PIO_PPDER register */
#define PIO_PPDER_P29_Pos                     _UINT32_(29)                                         /* (PIO_PPDER) Pull-Down Enable Position */
#define PIO_PPDER_P29_Msk                     (_UINT32_(0x1) << PIO_PPDER_P29_Pos)                 /* (PIO_PPDER) Pull-Down Enable Mask */
#define PIO_PPDER_P29(value)                  (PIO_PPDER_P29_Msk & (_UINT32_(value) << PIO_PPDER_P29_Pos)) /* Assignment of value for P29 in the PIO_PPDER register */
#define PIO_PPDER_P30_Pos                     _UINT32_(30)                                         /* (PIO_PPDER) Pull-Down Enable Position */
#define PIO_PPDER_P30_Msk                     (_UINT32_(0x1) << PIO_PPDER_P30_Pos)                 /* (PIO_PPDER) Pull-Down Enable Mask */
#define PIO_PPDER_P30(value)                  (PIO_PPDER_P30_Msk & (_UINT32_(value) << PIO_PPDER_P30_Pos)) /* Assignment of value for P30 in the PIO_PPDER register */
#define PIO_PPDER_P31_Pos                     _UINT32_(31)                                         /* (PIO_PPDER) Pull-Down Enable Position */
#define PIO_PPDER_P31_Msk                     (_UINT32_(0x1) << PIO_PPDER_P31_Pos)                 /* (PIO_PPDER) Pull-Down Enable Mask */
#define PIO_PPDER_P31(value)                  (PIO_PPDER_P31_Msk & (_UINT32_(value) << PIO_PPDER_P31_Pos)) /* Assignment of value for P31 in the PIO_PPDER register */
#define PIO_PPDER_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (PIO_PPDER) Register Mask  */

#define PIO_PPDER_P_Pos                       _UINT32_(0)                                          /* (PIO_PPDER Position) Pull-Down Enable */
#define PIO_PPDER_P_Msk                       (_UINT32_(0xFFFFFFFF) << PIO_PPDER_P_Pos)            /* (PIO_PPDER Mask) P */
#define PIO_PPDER_P(value)                    (PIO_PPDER_P_Msk & (_UINT32_(value) << PIO_PPDER_P_Pos)) 

/* -------- PIO_PPDSR : (PIO Offset: 0x98) ( R/ 32) Pad Pull-down Status Register -------- */
#define PIO_PPDSR_P0_Pos                      _UINT32_(0)                                          /* (PIO_PPDSR) Pull-Down Status Position */
#define PIO_PPDSR_P0_Msk                      (_UINT32_(0x1) << PIO_PPDSR_P0_Pos)                  /* (PIO_PPDSR) Pull-Down Status Mask */
#define PIO_PPDSR_P0(value)                   (PIO_PPDSR_P0_Msk & (_UINT32_(value) << PIO_PPDSR_P0_Pos)) /* Assignment of value for P0 in the PIO_PPDSR register */
#define PIO_PPDSR_P1_Pos                      _UINT32_(1)                                          /* (PIO_PPDSR) Pull-Down Status Position */
#define PIO_PPDSR_P1_Msk                      (_UINT32_(0x1) << PIO_PPDSR_P1_Pos)                  /* (PIO_PPDSR) Pull-Down Status Mask */
#define PIO_PPDSR_P1(value)                   (PIO_PPDSR_P1_Msk & (_UINT32_(value) << PIO_PPDSR_P1_Pos)) /* Assignment of value for P1 in the PIO_PPDSR register */
#define PIO_PPDSR_P2_Pos                      _UINT32_(2)                                          /* (PIO_PPDSR) Pull-Down Status Position */
#define PIO_PPDSR_P2_Msk                      (_UINT32_(0x1) << PIO_PPDSR_P2_Pos)                  /* (PIO_PPDSR) Pull-Down Status Mask */
#define PIO_PPDSR_P2(value)                   (PIO_PPDSR_P2_Msk & (_UINT32_(value) << PIO_PPDSR_P2_Pos)) /* Assignment of value for P2 in the PIO_PPDSR register */
#define PIO_PPDSR_P3_Pos                      _UINT32_(3)                                          /* (PIO_PPDSR) Pull-Down Status Position */
#define PIO_PPDSR_P3_Msk                      (_UINT32_(0x1) << PIO_PPDSR_P3_Pos)                  /* (PIO_PPDSR) Pull-Down Status Mask */
#define PIO_PPDSR_P3(value)                   (PIO_PPDSR_P3_Msk & (_UINT32_(value) << PIO_PPDSR_P3_Pos)) /* Assignment of value for P3 in the PIO_PPDSR register */
#define PIO_PPDSR_P4_Pos                      _UINT32_(4)                                          /* (PIO_PPDSR) Pull-Down Status Position */
#define PIO_PPDSR_P4_Msk                      (_UINT32_(0x1) << PIO_PPDSR_P4_Pos)                  /* (PIO_PPDSR) Pull-Down Status Mask */
#define PIO_PPDSR_P4(value)                   (PIO_PPDSR_P4_Msk & (_UINT32_(value) << PIO_PPDSR_P4_Pos)) /* Assignment of value for P4 in the PIO_PPDSR register */
#define PIO_PPDSR_P5_Pos                      _UINT32_(5)                                          /* (PIO_PPDSR) Pull-Down Status Position */
#define PIO_PPDSR_P5_Msk                      (_UINT32_(0x1) << PIO_PPDSR_P5_Pos)                  /* (PIO_PPDSR) Pull-Down Status Mask */
#define PIO_PPDSR_P5(value)                   (PIO_PPDSR_P5_Msk & (_UINT32_(value) << PIO_PPDSR_P5_Pos)) /* Assignment of value for P5 in the PIO_PPDSR register */
#define PIO_PPDSR_P6_Pos                      _UINT32_(6)                                          /* (PIO_PPDSR) Pull-Down Status Position */
#define PIO_PPDSR_P6_Msk                      (_UINT32_(0x1) << PIO_PPDSR_P6_Pos)                  /* (PIO_PPDSR) Pull-Down Status Mask */
#define PIO_PPDSR_P6(value)                   (PIO_PPDSR_P6_Msk & (_UINT32_(value) << PIO_PPDSR_P6_Pos)) /* Assignment of value for P6 in the PIO_PPDSR register */
#define PIO_PPDSR_P7_Pos                      _UINT32_(7)                                          /* (PIO_PPDSR) Pull-Down Status Position */
#define PIO_PPDSR_P7_Msk                      (_UINT32_(0x1) << PIO_PPDSR_P7_Pos)                  /* (PIO_PPDSR) Pull-Down Status Mask */
#define PIO_PPDSR_P7(value)                   (PIO_PPDSR_P7_Msk & (_UINT32_(value) << PIO_PPDSR_P7_Pos)) /* Assignment of value for P7 in the PIO_PPDSR register */
#define PIO_PPDSR_P8_Pos                      _UINT32_(8)                                          /* (PIO_PPDSR) Pull-Down Status Position */
#define PIO_PPDSR_P8_Msk                      (_UINT32_(0x1) << PIO_PPDSR_P8_Pos)                  /* (PIO_PPDSR) Pull-Down Status Mask */
#define PIO_PPDSR_P8(value)                   (PIO_PPDSR_P8_Msk & (_UINT32_(value) << PIO_PPDSR_P8_Pos)) /* Assignment of value for P8 in the PIO_PPDSR register */
#define PIO_PPDSR_P9_Pos                      _UINT32_(9)                                          /* (PIO_PPDSR) Pull-Down Status Position */
#define PIO_PPDSR_P9_Msk                      (_UINT32_(0x1) << PIO_PPDSR_P9_Pos)                  /* (PIO_PPDSR) Pull-Down Status Mask */
#define PIO_PPDSR_P9(value)                   (PIO_PPDSR_P9_Msk & (_UINT32_(value) << PIO_PPDSR_P9_Pos)) /* Assignment of value for P9 in the PIO_PPDSR register */
#define PIO_PPDSR_P10_Pos                     _UINT32_(10)                                         /* (PIO_PPDSR) Pull-Down Status Position */
#define PIO_PPDSR_P10_Msk                     (_UINT32_(0x1) << PIO_PPDSR_P10_Pos)                 /* (PIO_PPDSR) Pull-Down Status Mask */
#define PIO_PPDSR_P10(value)                  (PIO_PPDSR_P10_Msk & (_UINT32_(value) << PIO_PPDSR_P10_Pos)) /* Assignment of value for P10 in the PIO_PPDSR register */
#define PIO_PPDSR_P11_Pos                     _UINT32_(11)                                         /* (PIO_PPDSR) Pull-Down Status Position */
#define PIO_PPDSR_P11_Msk                     (_UINT32_(0x1) << PIO_PPDSR_P11_Pos)                 /* (PIO_PPDSR) Pull-Down Status Mask */
#define PIO_PPDSR_P11(value)                  (PIO_PPDSR_P11_Msk & (_UINT32_(value) << PIO_PPDSR_P11_Pos)) /* Assignment of value for P11 in the PIO_PPDSR register */
#define PIO_PPDSR_P12_Pos                     _UINT32_(12)                                         /* (PIO_PPDSR) Pull-Down Status Position */
#define PIO_PPDSR_P12_Msk                     (_UINT32_(0x1) << PIO_PPDSR_P12_Pos)                 /* (PIO_PPDSR) Pull-Down Status Mask */
#define PIO_PPDSR_P12(value)                  (PIO_PPDSR_P12_Msk & (_UINT32_(value) << PIO_PPDSR_P12_Pos)) /* Assignment of value for P12 in the PIO_PPDSR register */
#define PIO_PPDSR_P13_Pos                     _UINT32_(13)                                         /* (PIO_PPDSR) Pull-Down Status Position */
#define PIO_PPDSR_P13_Msk                     (_UINT32_(0x1) << PIO_PPDSR_P13_Pos)                 /* (PIO_PPDSR) Pull-Down Status Mask */
#define PIO_PPDSR_P13(value)                  (PIO_PPDSR_P13_Msk & (_UINT32_(value) << PIO_PPDSR_P13_Pos)) /* Assignment of value for P13 in the PIO_PPDSR register */
#define PIO_PPDSR_P14_Pos                     _UINT32_(14)                                         /* (PIO_PPDSR) Pull-Down Status Position */
#define PIO_PPDSR_P14_Msk                     (_UINT32_(0x1) << PIO_PPDSR_P14_Pos)                 /* (PIO_PPDSR) Pull-Down Status Mask */
#define PIO_PPDSR_P14(value)                  (PIO_PPDSR_P14_Msk & (_UINT32_(value) << PIO_PPDSR_P14_Pos)) /* Assignment of value for P14 in the PIO_PPDSR register */
#define PIO_PPDSR_P15_Pos                     _UINT32_(15)                                         /* (PIO_PPDSR) Pull-Down Status Position */
#define PIO_PPDSR_P15_Msk                     (_UINT32_(0x1) << PIO_PPDSR_P15_Pos)                 /* (PIO_PPDSR) Pull-Down Status Mask */
#define PIO_PPDSR_P15(value)                  (PIO_PPDSR_P15_Msk & (_UINT32_(value) << PIO_PPDSR_P15_Pos)) /* Assignment of value for P15 in the PIO_PPDSR register */
#define PIO_PPDSR_P16_Pos                     _UINT32_(16)                                         /* (PIO_PPDSR) Pull-Down Status Position */
#define PIO_PPDSR_P16_Msk                     (_UINT32_(0x1) << PIO_PPDSR_P16_Pos)                 /* (PIO_PPDSR) Pull-Down Status Mask */
#define PIO_PPDSR_P16(value)                  (PIO_PPDSR_P16_Msk & (_UINT32_(value) << PIO_PPDSR_P16_Pos)) /* Assignment of value for P16 in the PIO_PPDSR register */
#define PIO_PPDSR_P17_Pos                     _UINT32_(17)                                         /* (PIO_PPDSR) Pull-Down Status Position */
#define PIO_PPDSR_P17_Msk                     (_UINT32_(0x1) << PIO_PPDSR_P17_Pos)                 /* (PIO_PPDSR) Pull-Down Status Mask */
#define PIO_PPDSR_P17(value)                  (PIO_PPDSR_P17_Msk & (_UINT32_(value) << PIO_PPDSR_P17_Pos)) /* Assignment of value for P17 in the PIO_PPDSR register */
#define PIO_PPDSR_P18_Pos                     _UINT32_(18)                                         /* (PIO_PPDSR) Pull-Down Status Position */
#define PIO_PPDSR_P18_Msk                     (_UINT32_(0x1) << PIO_PPDSR_P18_Pos)                 /* (PIO_PPDSR) Pull-Down Status Mask */
#define PIO_PPDSR_P18(value)                  (PIO_PPDSR_P18_Msk & (_UINT32_(value) << PIO_PPDSR_P18_Pos)) /* Assignment of value for P18 in the PIO_PPDSR register */
#define PIO_PPDSR_P19_Pos                     _UINT32_(19)                                         /* (PIO_PPDSR) Pull-Down Status Position */
#define PIO_PPDSR_P19_Msk                     (_UINT32_(0x1) << PIO_PPDSR_P19_Pos)                 /* (PIO_PPDSR) Pull-Down Status Mask */
#define PIO_PPDSR_P19(value)                  (PIO_PPDSR_P19_Msk & (_UINT32_(value) << PIO_PPDSR_P19_Pos)) /* Assignment of value for P19 in the PIO_PPDSR register */
#define PIO_PPDSR_P20_Pos                     _UINT32_(20)                                         /* (PIO_PPDSR) Pull-Down Status Position */
#define PIO_PPDSR_P20_Msk                     (_UINT32_(0x1) << PIO_PPDSR_P20_Pos)                 /* (PIO_PPDSR) Pull-Down Status Mask */
#define PIO_PPDSR_P20(value)                  (PIO_PPDSR_P20_Msk & (_UINT32_(value) << PIO_PPDSR_P20_Pos)) /* Assignment of value for P20 in the PIO_PPDSR register */
#define PIO_PPDSR_P21_Pos                     _UINT32_(21)                                         /* (PIO_PPDSR) Pull-Down Status Position */
#define PIO_PPDSR_P21_Msk                     (_UINT32_(0x1) << PIO_PPDSR_P21_Pos)                 /* (PIO_PPDSR) Pull-Down Status Mask */
#define PIO_PPDSR_P21(value)                  (PIO_PPDSR_P21_Msk & (_UINT32_(value) << PIO_PPDSR_P21_Pos)) /* Assignment of value for P21 in the PIO_PPDSR register */
#define PIO_PPDSR_P22_Pos                     _UINT32_(22)                                         /* (PIO_PPDSR) Pull-Down Status Position */
#define PIO_PPDSR_P22_Msk                     (_UINT32_(0x1) << PIO_PPDSR_P22_Pos)                 /* (PIO_PPDSR) Pull-Down Status Mask */
#define PIO_PPDSR_P22(value)                  (PIO_PPDSR_P22_Msk & (_UINT32_(value) << PIO_PPDSR_P22_Pos)) /* Assignment of value for P22 in the PIO_PPDSR register */
#define PIO_PPDSR_P23_Pos                     _UINT32_(23)                                         /* (PIO_PPDSR) Pull-Down Status Position */
#define PIO_PPDSR_P23_Msk                     (_UINT32_(0x1) << PIO_PPDSR_P23_Pos)                 /* (PIO_PPDSR) Pull-Down Status Mask */
#define PIO_PPDSR_P23(value)                  (PIO_PPDSR_P23_Msk & (_UINT32_(value) << PIO_PPDSR_P23_Pos)) /* Assignment of value for P23 in the PIO_PPDSR register */
#define PIO_PPDSR_P24_Pos                     _UINT32_(24)                                         /* (PIO_PPDSR) Pull-Down Status Position */
#define PIO_PPDSR_P24_Msk                     (_UINT32_(0x1) << PIO_PPDSR_P24_Pos)                 /* (PIO_PPDSR) Pull-Down Status Mask */
#define PIO_PPDSR_P24(value)                  (PIO_PPDSR_P24_Msk & (_UINT32_(value) << PIO_PPDSR_P24_Pos)) /* Assignment of value for P24 in the PIO_PPDSR register */
#define PIO_PPDSR_P25_Pos                     _UINT32_(25)                                         /* (PIO_PPDSR) Pull-Down Status Position */
#define PIO_PPDSR_P25_Msk                     (_UINT32_(0x1) << PIO_PPDSR_P25_Pos)                 /* (PIO_PPDSR) Pull-Down Status Mask */
#define PIO_PPDSR_P25(value)                  (PIO_PPDSR_P25_Msk & (_UINT32_(value) << PIO_PPDSR_P25_Pos)) /* Assignment of value for P25 in the PIO_PPDSR register */
#define PIO_PPDSR_P26_Pos                     _UINT32_(26)                                         /* (PIO_PPDSR) Pull-Down Status Position */
#define PIO_PPDSR_P26_Msk                     (_UINT32_(0x1) << PIO_PPDSR_P26_Pos)                 /* (PIO_PPDSR) Pull-Down Status Mask */
#define PIO_PPDSR_P26(value)                  (PIO_PPDSR_P26_Msk & (_UINT32_(value) << PIO_PPDSR_P26_Pos)) /* Assignment of value for P26 in the PIO_PPDSR register */
#define PIO_PPDSR_P27_Pos                     _UINT32_(27)                                         /* (PIO_PPDSR) Pull-Down Status Position */
#define PIO_PPDSR_P27_Msk                     (_UINT32_(0x1) << PIO_PPDSR_P27_Pos)                 /* (PIO_PPDSR) Pull-Down Status Mask */
#define PIO_PPDSR_P27(value)                  (PIO_PPDSR_P27_Msk & (_UINT32_(value) << PIO_PPDSR_P27_Pos)) /* Assignment of value for P27 in the PIO_PPDSR register */
#define PIO_PPDSR_P28_Pos                     _UINT32_(28)                                         /* (PIO_PPDSR) Pull-Down Status Position */
#define PIO_PPDSR_P28_Msk                     (_UINT32_(0x1) << PIO_PPDSR_P28_Pos)                 /* (PIO_PPDSR) Pull-Down Status Mask */
#define PIO_PPDSR_P28(value)                  (PIO_PPDSR_P28_Msk & (_UINT32_(value) << PIO_PPDSR_P28_Pos)) /* Assignment of value for P28 in the PIO_PPDSR register */
#define PIO_PPDSR_P29_Pos                     _UINT32_(29)                                         /* (PIO_PPDSR) Pull-Down Status Position */
#define PIO_PPDSR_P29_Msk                     (_UINT32_(0x1) << PIO_PPDSR_P29_Pos)                 /* (PIO_PPDSR) Pull-Down Status Mask */
#define PIO_PPDSR_P29(value)                  (PIO_PPDSR_P29_Msk & (_UINT32_(value) << PIO_PPDSR_P29_Pos)) /* Assignment of value for P29 in the PIO_PPDSR register */
#define PIO_PPDSR_P30_Pos                     _UINT32_(30)                                         /* (PIO_PPDSR) Pull-Down Status Position */
#define PIO_PPDSR_P30_Msk                     (_UINT32_(0x1) << PIO_PPDSR_P30_Pos)                 /* (PIO_PPDSR) Pull-Down Status Mask */
#define PIO_PPDSR_P30(value)                  (PIO_PPDSR_P30_Msk & (_UINT32_(value) << PIO_PPDSR_P30_Pos)) /* Assignment of value for P30 in the PIO_PPDSR register */
#define PIO_PPDSR_P31_Pos                     _UINT32_(31)                                         /* (PIO_PPDSR) Pull-Down Status Position */
#define PIO_PPDSR_P31_Msk                     (_UINT32_(0x1) << PIO_PPDSR_P31_Pos)                 /* (PIO_PPDSR) Pull-Down Status Mask */
#define PIO_PPDSR_P31(value)                  (PIO_PPDSR_P31_Msk & (_UINT32_(value) << PIO_PPDSR_P31_Pos)) /* Assignment of value for P31 in the PIO_PPDSR register */
#define PIO_PPDSR_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (PIO_PPDSR) Register Mask  */

#define PIO_PPDSR_P_Pos                       _UINT32_(0)                                          /* (PIO_PPDSR Position) Pull-Down Status */
#define PIO_PPDSR_P_Msk                       (_UINT32_(0xFFFFFFFF) << PIO_PPDSR_P_Pos)            /* (PIO_PPDSR Mask) P */
#define PIO_PPDSR_P(value)                    (PIO_PPDSR_P_Msk & (_UINT32_(value) << PIO_PPDSR_P_Pos)) 

/* -------- PIO_OWER : (PIO Offset: 0xA0) ( /W 32) Output Write Enable -------- */
#define PIO_OWER_P0_Pos                       _UINT32_(0)                                          /* (PIO_OWER) Output Write Enable Position */
#define PIO_OWER_P0_Msk                       (_UINT32_(0x1) << PIO_OWER_P0_Pos)                   /* (PIO_OWER) Output Write Enable Mask */
#define PIO_OWER_P0(value)                    (PIO_OWER_P0_Msk & (_UINT32_(value) << PIO_OWER_P0_Pos)) /* Assignment of value for P0 in the PIO_OWER register */
#define PIO_OWER_P1_Pos                       _UINT32_(1)                                          /* (PIO_OWER) Output Write Enable Position */
#define PIO_OWER_P1_Msk                       (_UINT32_(0x1) << PIO_OWER_P1_Pos)                   /* (PIO_OWER) Output Write Enable Mask */
#define PIO_OWER_P1(value)                    (PIO_OWER_P1_Msk & (_UINT32_(value) << PIO_OWER_P1_Pos)) /* Assignment of value for P1 in the PIO_OWER register */
#define PIO_OWER_P2_Pos                       _UINT32_(2)                                          /* (PIO_OWER) Output Write Enable Position */
#define PIO_OWER_P2_Msk                       (_UINT32_(0x1) << PIO_OWER_P2_Pos)                   /* (PIO_OWER) Output Write Enable Mask */
#define PIO_OWER_P2(value)                    (PIO_OWER_P2_Msk & (_UINT32_(value) << PIO_OWER_P2_Pos)) /* Assignment of value for P2 in the PIO_OWER register */
#define PIO_OWER_P3_Pos                       _UINT32_(3)                                          /* (PIO_OWER) Output Write Enable Position */
#define PIO_OWER_P3_Msk                       (_UINT32_(0x1) << PIO_OWER_P3_Pos)                   /* (PIO_OWER) Output Write Enable Mask */
#define PIO_OWER_P3(value)                    (PIO_OWER_P3_Msk & (_UINT32_(value) << PIO_OWER_P3_Pos)) /* Assignment of value for P3 in the PIO_OWER register */
#define PIO_OWER_P4_Pos                       _UINT32_(4)                                          /* (PIO_OWER) Output Write Enable Position */
#define PIO_OWER_P4_Msk                       (_UINT32_(0x1) << PIO_OWER_P4_Pos)                   /* (PIO_OWER) Output Write Enable Mask */
#define PIO_OWER_P4(value)                    (PIO_OWER_P4_Msk & (_UINT32_(value) << PIO_OWER_P4_Pos)) /* Assignment of value for P4 in the PIO_OWER register */
#define PIO_OWER_P5_Pos                       _UINT32_(5)                                          /* (PIO_OWER) Output Write Enable Position */
#define PIO_OWER_P5_Msk                       (_UINT32_(0x1) << PIO_OWER_P5_Pos)                   /* (PIO_OWER) Output Write Enable Mask */
#define PIO_OWER_P5(value)                    (PIO_OWER_P5_Msk & (_UINT32_(value) << PIO_OWER_P5_Pos)) /* Assignment of value for P5 in the PIO_OWER register */
#define PIO_OWER_P6_Pos                       _UINT32_(6)                                          /* (PIO_OWER) Output Write Enable Position */
#define PIO_OWER_P6_Msk                       (_UINT32_(0x1) << PIO_OWER_P6_Pos)                   /* (PIO_OWER) Output Write Enable Mask */
#define PIO_OWER_P6(value)                    (PIO_OWER_P6_Msk & (_UINT32_(value) << PIO_OWER_P6_Pos)) /* Assignment of value for P6 in the PIO_OWER register */
#define PIO_OWER_P7_Pos                       _UINT32_(7)                                          /* (PIO_OWER) Output Write Enable Position */
#define PIO_OWER_P7_Msk                       (_UINT32_(0x1) << PIO_OWER_P7_Pos)                   /* (PIO_OWER) Output Write Enable Mask */
#define PIO_OWER_P7(value)                    (PIO_OWER_P7_Msk & (_UINT32_(value) << PIO_OWER_P7_Pos)) /* Assignment of value for P7 in the PIO_OWER register */
#define PIO_OWER_P8_Pos                       _UINT32_(8)                                          /* (PIO_OWER) Output Write Enable Position */
#define PIO_OWER_P8_Msk                       (_UINT32_(0x1) << PIO_OWER_P8_Pos)                   /* (PIO_OWER) Output Write Enable Mask */
#define PIO_OWER_P8(value)                    (PIO_OWER_P8_Msk & (_UINT32_(value) << PIO_OWER_P8_Pos)) /* Assignment of value for P8 in the PIO_OWER register */
#define PIO_OWER_P9_Pos                       _UINT32_(9)                                          /* (PIO_OWER) Output Write Enable Position */
#define PIO_OWER_P9_Msk                       (_UINT32_(0x1) << PIO_OWER_P9_Pos)                   /* (PIO_OWER) Output Write Enable Mask */
#define PIO_OWER_P9(value)                    (PIO_OWER_P9_Msk & (_UINT32_(value) << PIO_OWER_P9_Pos)) /* Assignment of value for P9 in the PIO_OWER register */
#define PIO_OWER_P10_Pos                      _UINT32_(10)                                         /* (PIO_OWER) Output Write Enable Position */
#define PIO_OWER_P10_Msk                      (_UINT32_(0x1) << PIO_OWER_P10_Pos)                  /* (PIO_OWER) Output Write Enable Mask */
#define PIO_OWER_P10(value)                   (PIO_OWER_P10_Msk & (_UINT32_(value) << PIO_OWER_P10_Pos)) /* Assignment of value for P10 in the PIO_OWER register */
#define PIO_OWER_P11_Pos                      _UINT32_(11)                                         /* (PIO_OWER) Output Write Enable Position */
#define PIO_OWER_P11_Msk                      (_UINT32_(0x1) << PIO_OWER_P11_Pos)                  /* (PIO_OWER) Output Write Enable Mask */
#define PIO_OWER_P11(value)                   (PIO_OWER_P11_Msk & (_UINT32_(value) << PIO_OWER_P11_Pos)) /* Assignment of value for P11 in the PIO_OWER register */
#define PIO_OWER_P12_Pos                      _UINT32_(12)                                         /* (PIO_OWER) Output Write Enable Position */
#define PIO_OWER_P12_Msk                      (_UINT32_(0x1) << PIO_OWER_P12_Pos)                  /* (PIO_OWER) Output Write Enable Mask */
#define PIO_OWER_P12(value)                   (PIO_OWER_P12_Msk & (_UINT32_(value) << PIO_OWER_P12_Pos)) /* Assignment of value for P12 in the PIO_OWER register */
#define PIO_OWER_P13_Pos                      _UINT32_(13)                                         /* (PIO_OWER) Output Write Enable Position */
#define PIO_OWER_P13_Msk                      (_UINT32_(0x1) << PIO_OWER_P13_Pos)                  /* (PIO_OWER) Output Write Enable Mask */
#define PIO_OWER_P13(value)                   (PIO_OWER_P13_Msk & (_UINT32_(value) << PIO_OWER_P13_Pos)) /* Assignment of value for P13 in the PIO_OWER register */
#define PIO_OWER_P14_Pos                      _UINT32_(14)                                         /* (PIO_OWER) Output Write Enable Position */
#define PIO_OWER_P14_Msk                      (_UINT32_(0x1) << PIO_OWER_P14_Pos)                  /* (PIO_OWER) Output Write Enable Mask */
#define PIO_OWER_P14(value)                   (PIO_OWER_P14_Msk & (_UINT32_(value) << PIO_OWER_P14_Pos)) /* Assignment of value for P14 in the PIO_OWER register */
#define PIO_OWER_P15_Pos                      _UINT32_(15)                                         /* (PIO_OWER) Output Write Enable Position */
#define PIO_OWER_P15_Msk                      (_UINT32_(0x1) << PIO_OWER_P15_Pos)                  /* (PIO_OWER) Output Write Enable Mask */
#define PIO_OWER_P15(value)                   (PIO_OWER_P15_Msk & (_UINT32_(value) << PIO_OWER_P15_Pos)) /* Assignment of value for P15 in the PIO_OWER register */
#define PIO_OWER_P16_Pos                      _UINT32_(16)                                         /* (PIO_OWER) Output Write Enable Position */
#define PIO_OWER_P16_Msk                      (_UINT32_(0x1) << PIO_OWER_P16_Pos)                  /* (PIO_OWER) Output Write Enable Mask */
#define PIO_OWER_P16(value)                   (PIO_OWER_P16_Msk & (_UINT32_(value) << PIO_OWER_P16_Pos)) /* Assignment of value for P16 in the PIO_OWER register */
#define PIO_OWER_P17_Pos                      _UINT32_(17)                                         /* (PIO_OWER) Output Write Enable Position */
#define PIO_OWER_P17_Msk                      (_UINT32_(0x1) << PIO_OWER_P17_Pos)                  /* (PIO_OWER) Output Write Enable Mask */
#define PIO_OWER_P17(value)                   (PIO_OWER_P17_Msk & (_UINT32_(value) << PIO_OWER_P17_Pos)) /* Assignment of value for P17 in the PIO_OWER register */
#define PIO_OWER_P18_Pos                      _UINT32_(18)                                         /* (PIO_OWER) Output Write Enable Position */
#define PIO_OWER_P18_Msk                      (_UINT32_(0x1) << PIO_OWER_P18_Pos)                  /* (PIO_OWER) Output Write Enable Mask */
#define PIO_OWER_P18(value)                   (PIO_OWER_P18_Msk & (_UINT32_(value) << PIO_OWER_P18_Pos)) /* Assignment of value for P18 in the PIO_OWER register */
#define PIO_OWER_P19_Pos                      _UINT32_(19)                                         /* (PIO_OWER) Output Write Enable Position */
#define PIO_OWER_P19_Msk                      (_UINT32_(0x1) << PIO_OWER_P19_Pos)                  /* (PIO_OWER) Output Write Enable Mask */
#define PIO_OWER_P19(value)                   (PIO_OWER_P19_Msk & (_UINT32_(value) << PIO_OWER_P19_Pos)) /* Assignment of value for P19 in the PIO_OWER register */
#define PIO_OWER_P20_Pos                      _UINT32_(20)                                         /* (PIO_OWER) Output Write Enable Position */
#define PIO_OWER_P20_Msk                      (_UINT32_(0x1) << PIO_OWER_P20_Pos)                  /* (PIO_OWER) Output Write Enable Mask */
#define PIO_OWER_P20(value)                   (PIO_OWER_P20_Msk & (_UINT32_(value) << PIO_OWER_P20_Pos)) /* Assignment of value for P20 in the PIO_OWER register */
#define PIO_OWER_P21_Pos                      _UINT32_(21)                                         /* (PIO_OWER) Output Write Enable Position */
#define PIO_OWER_P21_Msk                      (_UINT32_(0x1) << PIO_OWER_P21_Pos)                  /* (PIO_OWER) Output Write Enable Mask */
#define PIO_OWER_P21(value)                   (PIO_OWER_P21_Msk & (_UINT32_(value) << PIO_OWER_P21_Pos)) /* Assignment of value for P21 in the PIO_OWER register */
#define PIO_OWER_P22_Pos                      _UINT32_(22)                                         /* (PIO_OWER) Output Write Enable Position */
#define PIO_OWER_P22_Msk                      (_UINT32_(0x1) << PIO_OWER_P22_Pos)                  /* (PIO_OWER) Output Write Enable Mask */
#define PIO_OWER_P22(value)                   (PIO_OWER_P22_Msk & (_UINT32_(value) << PIO_OWER_P22_Pos)) /* Assignment of value for P22 in the PIO_OWER register */
#define PIO_OWER_P23_Pos                      _UINT32_(23)                                         /* (PIO_OWER) Output Write Enable Position */
#define PIO_OWER_P23_Msk                      (_UINT32_(0x1) << PIO_OWER_P23_Pos)                  /* (PIO_OWER) Output Write Enable Mask */
#define PIO_OWER_P23(value)                   (PIO_OWER_P23_Msk & (_UINT32_(value) << PIO_OWER_P23_Pos)) /* Assignment of value for P23 in the PIO_OWER register */
#define PIO_OWER_P24_Pos                      _UINT32_(24)                                         /* (PIO_OWER) Output Write Enable Position */
#define PIO_OWER_P24_Msk                      (_UINT32_(0x1) << PIO_OWER_P24_Pos)                  /* (PIO_OWER) Output Write Enable Mask */
#define PIO_OWER_P24(value)                   (PIO_OWER_P24_Msk & (_UINT32_(value) << PIO_OWER_P24_Pos)) /* Assignment of value for P24 in the PIO_OWER register */
#define PIO_OWER_P25_Pos                      _UINT32_(25)                                         /* (PIO_OWER) Output Write Enable Position */
#define PIO_OWER_P25_Msk                      (_UINT32_(0x1) << PIO_OWER_P25_Pos)                  /* (PIO_OWER) Output Write Enable Mask */
#define PIO_OWER_P25(value)                   (PIO_OWER_P25_Msk & (_UINT32_(value) << PIO_OWER_P25_Pos)) /* Assignment of value for P25 in the PIO_OWER register */
#define PIO_OWER_P26_Pos                      _UINT32_(26)                                         /* (PIO_OWER) Output Write Enable Position */
#define PIO_OWER_P26_Msk                      (_UINT32_(0x1) << PIO_OWER_P26_Pos)                  /* (PIO_OWER) Output Write Enable Mask */
#define PIO_OWER_P26(value)                   (PIO_OWER_P26_Msk & (_UINT32_(value) << PIO_OWER_P26_Pos)) /* Assignment of value for P26 in the PIO_OWER register */
#define PIO_OWER_P27_Pos                      _UINT32_(27)                                         /* (PIO_OWER) Output Write Enable Position */
#define PIO_OWER_P27_Msk                      (_UINT32_(0x1) << PIO_OWER_P27_Pos)                  /* (PIO_OWER) Output Write Enable Mask */
#define PIO_OWER_P27(value)                   (PIO_OWER_P27_Msk & (_UINT32_(value) << PIO_OWER_P27_Pos)) /* Assignment of value for P27 in the PIO_OWER register */
#define PIO_OWER_P28_Pos                      _UINT32_(28)                                         /* (PIO_OWER) Output Write Enable Position */
#define PIO_OWER_P28_Msk                      (_UINT32_(0x1) << PIO_OWER_P28_Pos)                  /* (PIO_OWER) Output Write Enable Mask */
#define PIO_OWER_P28(value)                   (PIO_OWER_P28_Msk & (_UINT32_(value) << PIO_OWER_P28_Pos)) /* Assignment of value for P28 in the PIO_OWER register */
#define PIO_OWER_P29_Pos                      _UINT32_(29)                                         /* (PIO_OWER) Output Write Enable Position */
#define PIO_OWER_P29_Msk                      (_UINT32_(0x1) << PIO_OWER_P29_Pos)                  /* (PIO_OWER) Output Write Enable Mask */
#define PIO_OWER_P29(value)                   (PIO_OWER_P29_Msk & (_UINT32_(value) << PIO_OWER_P29_Pos)) /* Assignment of value for P29 in the PIO_OWER register */
#define PIO_OWER_P30_Pos                      _UINT32_(30)                                         /* (PIO_OWER) Output Write Enable Position */
#define PIO_OWER_P30_Msk                      (_UINT32_(0x1) << PIO_OWER_P30_Pos)                  /* (PIO_OWER) Output Write Enable Mask */
#define PIO_OWER_P30(value)                   (PIO_OWER_P30_Msk & (_UINT32_(value) << PIO_OWER_P30_Pos)) /* Assignment of value for P30 in the PIO_OWER register */
#define PIO_OWER_P31_Pos                      _UINT32_(31)                                         /* (PIO_OWER) Output Write Enable Position */
#define PIO_OWER_P31_Msk                      (_UINT32_(0x1) << PIO_OWER_P31_Pos)                  /* (PIO_OWER) Output Write Enable Mask */
#define PIO_OWER_P31(value)                   (PIO_OWER_P31_Msk & (_UINT32_(value) << PIO_OWER_P31_Pos)) /* Assignment of value for P31 in the PIO_OWER register */
#define PIO_OWER_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (PIO_OWER) Register Mask  */

#define PIO_OWER_P_Pos                        _UINT32_(0)                                          /* (PIO_OWER Position) Output Write Enable */
#define PIO_OWER_P_Msk                        (_UINT32_(0xFFFFFFFF) << PIO_OWER_P_Pos)             /* (PIO_OWER Mask) P */
#define PIO_OWER_P(value)                     (PIO_OWER_P_Msk & (_UINT32_(value) << PIO_OWER_P_Pos)) 

/* -------- PIO_OWDR : (PIO Offset: 0xA4) ( /W 32) Output Write Disable -------- */
#define PIO_OWDR_P0_Pos                       _UINT32_(0)                                          /* (PIO_OWDR) Output Write Disable Position */
#define PIO_OWDR_P0_Msk                       (_UINT32_(0x1) << PIO_OWDR_P0_Pos)                   /* (PIO_OWDR) Output Write Disable Mask */
#define PIO_OWDR_P0(value)                    (PIO_OWDR_P0_Msk & (_UINT32_(value) << PIO_OWDR_P0_Pos)) /* Assignment of value for P0 in the PIO_OWDR register */
#define PIO_OWDR_P1_Pos                       _UINT32_(1)                                          /* (PIO_OWDR) Output Write Disable Position */
#define PIO_OWDR_P1_Msk                       (_UINT32_(0x1) << PIO_OWDR_P1_Pos)                   /* (PIO_OWDR) Output Write Disable Mask */
#define PIO_OWDR_P1(value)                    (PIO_OWDR_P1_Msk & (_UINT32_(value) << PIO_OWDR_P1_Pos)) /* Assignment of value for P1 in the PIO_OWDR register */
#define PIO_OWDR_P2_Pos                       _UINT32_(2)                                          /* (PIO_OWDR) Output Write Disable Position */
#define PIO_OWDR_P2_Msk                       (_UINT32_(0x1) << PIO_OWDR_P2_Pos)                   /* (PIO_OWDR) Output Write Disable Mask */
#define PIO_OWDR_P2(value)                    (PIO_OWDR_P2_Msk & (_UINT32_(value) << PIO_OWDR_P2_Pos)) /* Assignment of value for P2 in the PIO_OWDR register */
#define PIO_OWDR_P3_Pos                       _UINT32_(3)                                          /* (PIO_OWDR) Output Write Disable Position */
#define PIO_OWDR_P3_Msk                       (_UINT32_(0x1) << PIO_OWDR_P3_Pos)                   /* (PIO_OWDR) Output Write Disable Mask */
#define PIO_OWDR_P3(value)                    (PIO_OWDR_P3_Msk & (_UINT32_(value) << PIO_OWDR_P3_Pos)) /* Assignment of value for P3 in the PIO_OWDR register */
#define PIO_OWDR_P4_Pos                       _UINT32_(4)                                          /* (PIO_OWDR) Output Write Disable Position */
#define PIO_OWDR_P4_Msk                       (_UINT32_(0x1) << PIO_OWDR_P4_Pos)                   /* (PIO_OWDR) Output Write Disable Mask */
#define PIO_OWDR_P4(value)                    (PIO_OWDR_P4_Msk & (_UINT32_(value) << PIO_OWDR_P4_Pos)) /* Assignment of value for P4 in the PIO_OWDR register */
#define PIO_OWDR_P5_Pos                       _UINT32_(5)                                          /* (PIO_OWDR) Output Write Disable Position */
#define PIO_OWDR_P5_Msk                       (_UINT32_(0x1) << PIO_OWDR_P5_Pos)                   /* (PIO_OWDR) Output Write Disable Mask */
#define PIO_OWDR_P5(value)                    (PIO_OWDR_P5_Msk & (_UINT32_(value) << PIO_OWDR_P5_Pos)) /* Assignment of value for P5 in the PIO_OWDR register */
#define PIO_OWDR_P6_Pos                       _UINT32_(6)                                          /* (PIO_OWDR) Output Write Disable Position */
#define PIO_OWDR_P6_Msk                       (_UINT32_(0x1) << PIO_OWDR_P6_Pos)                   /* (PIO_OWDR) Output Write Disable Mask */
#define PIO_OWDR_P6(value)                    (PIO_OWDR_P6_Msk & (_UINT32_(value) << PIO_OWDR_P6_Pos)) /* Assignment of value for P6 in the PIO_OWDR register */
#define PIO_OWDR_P7_Pos                       _UINT32_(7)                                          /* (PIO_OWDR) Output Write Disable Position */
#define PIO_OWDR_P7_Msk                       (_UINT32_(0x1) << PIO_OWDR_P7_Pos)                   /* (PIO_OWDR) Output Write Disable Mask */
#define PIO_OWDR_P7(value)                    (PIO_OWDR_P7_Msk & (_UINT32_(value) << PIO_OWDR_P7_Pos)) /* Assignment of value for P7 in the PIO_OWDR register */
#define PIO_OWDR_P8_Pos                       _UINT32_(8)                                          /* (PIO_OWDR) Output Write Disable Position */
#define PIO_OWDR_P8_Msk                       (_UINT32_(0x1) << PIO_OWDR_P8_Pos)                   /* (PIO_OWDR) Output Write Disable Mask */
#define PIO_OWDR_P8(value)                    (PIO_OWDR_P8_Msk & (_UINT32_(value) << PIO_OWDR_P8_Pos)) /* Assignment of value for P8 in the PIO_OWDR register */
#define PIO_OWDR_P9_Pos                       _UINT32_(9)                                          /* (PIO_OWDR) Output Write Disable Position */
#define PIO_OWDR_P9_Msk                       (_UINT32_(0x1) << PIO_OWDR_P9_Pos)                   /* (PIO_OWDR) Output Write Disable Mask */
#define PIO_OWDR_P9(value)                    (PIO_OWDR_P9_Msk & (_UINT32_(value) << PIO_OWDR_P9_Pos)) /* Assignment of value for P9 in the PIO_OWDR register */
#define PIO_OWDR_P10_Pos                      _UINT32_(10)                                         /* (PIO_OWDR) Output Write Disable Position */
#define PIO_OWDR_P10_Msk                      (_UINT32_(0x1) << PIO_OWDR_P10_Pos)                  /* (PIO_OWDR) Output Write Disable Mask */
#define PIO_OWDR_P10(value)                   (PIO_OWDR_P10_Msk & (_UINT32_(value) << PIO_OWDR_P10_Pos)) /* Assignment of value for P10 in the PIO_OWDR register */
#define PIO_OWDR_P11_Pos                      _UINT32_(11)                                         /* (PIO_OWDR) Output Write Disable Position */
#define PIO_OWDR_P11_Msk                      (_UINT32_(0x1) << PIO_OWDR_P11_Pos)                  /* (PIO_OWDR) Output Write Disable Mask */
#define PIO_OWDR_P11(value)                   (PIO_OWDR_P11_Msk & (_UINT32_(value) << PIO_OWDR_P11_Pos)) /* Assignment of value for P11 in the PIO_OWDR register */
#define PIO_OWDR_P12_Pos                      _UINT32_(12)                                         /* (PIO_OWDR) Output Write Disable Position */
#define PIO_OWDR_P12_Msk                      (_UINT32_(0x1) << PIO_OWDR_P12_Pos)                  /* (PIO_OWDR) Output Write Disable Mask */
#define PIO_OWDR_P12(value)                   (PIO_OWDR_P12_Msk & (_UINT32_(value) << PIO_OWDR_P12_Pos)) /* Assignment of value for P12 in the PIO_OWDR register */
#define PIO_OWDR_P13_Pos                      _UINT32_(13)                                         /* (PIO_OWDR) Output Write Disable Position */
#define PIO_OWDR_P13_Msk                      (_UINT32_(0x1) << PIO_OWDR_P13_Pos)                  /* (PIO_OWDR) Output Write Disable Mask */
#define PIO_OWDR_P13(value)                   (PIO_OWDR_P13_Msk & (_UINT32_(value) << PIO_OWDR_P13_Pos)) /* Assignment of value for P13 in the PIO_OWDR register */
#define PIO_OWDR_P14_Pos                      _UINT32_(14)                                         /* (PIO_OWDR) Output Write Disable Position */
#define PIO_OWDR_P14_Msk                      (_UINT32_(0x1) << PIO_OWDR_P14_Pos)                  /* (PIO_OWDR) Output Write Disable Mask */
#define PIO_OWDR_P14(value)                   (PIO_OWDR_P14_Msk & (_UINT32_(value) << PIO_OWDR_P14_Pos)) /* Assignment of value for P14 in the PIO_OWDR register */
#define PIO_OWDR_P15_Pos                      _UINT32_(15)                                         /* (PIO_OWDR) Output Write Disable Position */
#define PIO_OWDR_P15_Msk                      (_UINT32_(0x1) << PIO_OWDR_P15_Pos)                  /* (PIO_OWDR) Output Write Disable Mask */
#define PIO_OWDR_P15(value)                   (PIO_OWDR_P15_Msk & (_UINT32_(value) << PIO_OWDR_P15_Pos)) /* Assignment of value for P15 in the PIO_OWDR register */
#define PIO_OWDR_P16_Pos                      _UINT32_(16)                                         /* (PIO_OWDR) Output Write Disable Position */
#define PIO_OWDR_P16_Msk                      (_UINT32_(0x1) << PIO_OWDR_P16_Pos)                  /* (PIO_OWDR) Output Write Disable Mask */
#define PIO_OWDR_P16(value)                   (PIO_OWDR_P16_Msk & (_UINT32_(value) << PIO_OWDR_P16_Pos)) /* Assignment of value for P16 in the PIO_OWDR register */
#define PIO_OWDR_P17_Pos                      _UINT32_(17)                                         /* (PIO_OWDR) Output Write Disable Position */
#define PIO_OWDR_P17_Msk                      (_UINT32_(0x1) << PIO_OWDR_P17_Pos)                  /* (PIO_OWDR) Output Write Disable Mask */
#define PIO_OWDR_P17(value)                   (PIO_OWDR_P17_Msk & (_UINT32_(value) << PIO_OWDR_P17_Pos)) /* Assignment of value for P17 in the PIO_OWDR register */
#define PIO_OWDR_P18_Pos                      _UINT32_(18)                                         /* (PIO_OWDR) Output Write Disable Position */
#define PIO_OWDR_P18_Msk                      (_UINT32_(0x1) << PIO_OWDR_P18_Pos)                  /* (PIO_OWDR) Output Write Disable Mask */
#define PIO_OWDR_P18(value)                   (PIO_OWDR_P18_Msk & (_UINT32_(value) << PIO_OWDR_P18_Pos)) /* Assignment of value for P18 in the PIO_OWDR register */
#define PIO_OWDR_P19_Pos                      _UINT32_(19)                                         /* (PIO_OWDR) Output Write Disable Position */
#define PIO_OWDR_P19_Msk                      (_UINT32_(0x1) << PIO_OWDR_P19_Pos)                  /* (PIO_OWDR) Output Write Disable Mask */
#define PIO_OWDR_P19(value)                   (PIO_OWDR_P19_Msk & (_UINT32_(value) << PIO_OWDR_P19_Pos)) /* Assignment of value for P19 in the PIO_OWDR register */
#define PIO_OWDR_P20_Pos                      _UINT32_(20)                                         /* (PIO_OWDR) Output Write Disable Position */
#define PIO_OWDR_P20_Msk                      (_UINT32_(0x1) << PIO_OWDR_P20_Pos)                  /* (PIO_OWDR) Output Write Disable Mask */
#define PIO_OWDR_P20(value)                   (PIO_OWDR_P20_Msk & (_UINT32_(value) << PIO_OWDR_P20_Pos)) /* Assignment of value for P20 in the PIO_OWDR register */
#define PIO_OWDR_P21_Pos                      _UINT32_(21)                                         /* (PIO_OWDR) Output Write Disable Position */
#define PIO_OWDR_P21_Msk                      (_UINT32_(0x1) << PIO_OWDR_P21_Pos)                  /* (PIO_OWDR) Output Write Disable Mask */
#define PIO_OWDR_P21(value)                   (PIO_OWDR_P21_Msk & (_UINT32_(value) << PIO_OWDR_P21_Pos)) /* Assignment of value for P21 in the PIO_OWDR register */
#define PIO_OWDR_P22_Pos                      _UINT32_(22)                                         /* (PIO_OWDR) Output Write Disable Position */
#define PIO_OWDR_P22_Msk                      (_UINT32_(0x1) << PIO_OWDR_P22_Pos)                  /* (PIO_OWDR) Output Write Disable Mask */
#define PIO_OWDR_P22(value)                   (PIO_OWDR_P22_Msk & (_UINT32_(value) << PIO_OWDR_P22_Pos)) /* Assignment of value for P22 in the PIO_OWDR register */
#define PIO_OWDR_P23_Pos                      _UINT32_(23)                                         /* (PIO_OWDR) Output Write Disable Position */
#define PIO_OWDR_P23_Msk                      (_UINT32_(0x1) << PIO_OWDR_P23_Pos)                  /* (PIO_OWDR) Output Write Disable Mask */
#define PIO_OWDR_P23(value)                   (PIO_OWDR_P23_Msk & (_UINT32_(value) << PIO_OWDR_P23_Pos)) /* Assignment of value for P23 in the PIO_OWDR register */
#define PIO_OWDR_P24_Pos                      _UINT32_(24)                                         /* (PIO_OWDR) Output Write Disable Position */
#define PIO_OWDR_P24_Msk                      (_UINT32_(0x1) << PIO_OWDR_P24_Pos)                  /* (PIO_OWDR) Output Write Disable Mask */
#define PIO_OWDR_P24(value)                   (PIO_OWDR_P24_Msk & (_UINT32_(value) << PIO_OWDR_P24_Pos)) /* Assignment of value for P24 in the PIO_OWDR register */
#define PIO_OWDR_P25_Pos                      _UINT32_(25)                                         /* (PIO_OWDR) Output Write Disable Position */
#define PIO_OWDR_P25_Msk                      (_UINT32_(0x1) << PIO_OWDR_P25_Pos)                  /* (PIO_OWDR) Output Write Disable Mask */
#define PIO_OWDR_P25(value)                   (PIO_OWDR_P25_Msk & (_UINT32_(value) << PIO_OWDR_P25_Pos)) /* Assignment of value for P25 in the PIO_OWDR register */
#define PIO_OWDR_P26_Pos                      _UINT32_(26)                                         /* (PIO_OWDR) Output Write Disable Position */
#define PIO_OWDR_P26_Msk                      (_UINT32_(0x1) << PIO_OWDR_P26_Pos)                  /* (PIO_OWDR) Output Write Disable Mask */
#define PIO_OWDR_P26(value)                   (PIO_OWDR_P26_Msk & (_UINT32_(value) << PIO_OWDR_P26_Pos)) /* Assignment of value for P26 in the PIO_OWDR register */
#define PIO_OWDR_P27_Pos                      _UINT32_(27)                                         /* (PIO_OWDR) Output Write Disable Position */
#define PIO_OWDR_P27_Msk                      (_UINT32_(0x1) << PIO_OWDR_P27_Pos)                  /* (PIO_OWDR) Output Write Disable Mask */
#define PIO_OWDR_P27(value)                   (PIO_OWDR_P27_Msk & (_UINT32_(value) << PIO_OWDR_P27_Pos)) /* Assignment of value for P27 in the PIO_OWDR register */
#define PIO_OWDR_P28_Pos                      _UINT32_(28)                                         /* (PIO_OWDR) Output Write Disable Position */
#define PIO_OWDR_P28_Msk                      (_UINT32_(0x1) << PIO_OWDR_P28_Pos)                  /* (PIO_OWDR) Output Write Disable Mask */
#define PIO_OWDR_P28(value)                   (PIO_OWDR_P28_Msk & (_UINT32_(value) << PIO_OWDR_P28_Pos)) /* Assignment of value for P28 in the PIO_OWDR register */
#define PIO_OWDR_P29_Pos                      _UINT32_(29)                                         /* (PIO_OWDR) Output Write Disable Position */
#define PIO_OWDR_P29_Msk                      (_UINT32_(0x1) << PIO_OWDR_P29_Pos)                  /* (PIO_OWDR) Output Write Disable Mask */
#define PIO_OWDR_P29(value)                   (PIO_OWDR_P29_Msk & (_UINT32_(value) << PIO_OWDR_P29_Pos)) /* Assignment of value for P29 in the PIO_OWDR register */
#define PIO_OWDR_P30_Pos                      _UINT32_(30)                                         /* (PIO_OWDR) Output Write Disable Position */
#define PIO_OWDR_P30_Msk                      (_UINT32_(0x1) << PIO_OWDR_P30_Pos)                  /* (PIO_OWDR) Output Write Disable Mask */
#define PIO_OWDR_P30(value)                   (PIO_OWDR_P30_Msk & (_UINT32_(value) << PIO_OWDR_P30_Pos)) /* Assignment of value for P30 in the PIO_OWDR register */
#define PIO_OWDR_P31_Pos                      _UINT32_(31)                                         /* (PIO_OWDR) Output Write Disable Position */
#define PIO_OWDR_P31_Msk                      (_UINT32_(0x1) << PIO_OWDR_P31_Pos)                  /* (PIO_OWDR) Output Write Disable Mask */
#define PIO_OWDR_P31(value)                   (PIO_OWDR_P31_Msk & (_UINT32_(value) << PIO_OWDR_P31_Pos)) /* Assignment of value for P31 in the PIO_OWDR register */
#define PIO_OWDR_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (PIO_OWDR) Register Mask  */

#define PIO_OWDR_P_Pos                        _UINT32_(0)                                          /* (PIO_OWDR Position) Output Write Disable */
#define PIO_OWDR_P_Msk                        (_UINT32_(0xFFFFFFFF) << PIO_OWDR_P_Pos)             /* (PIO_OWDR Mask) P */
#define PIO_OWDR_P(value)                     (PIO_OWDR_P_Msk & (_UINT32_(value) << PIO_OWDR_P_Pos)) 

/* -------- PIO_OWSR : (PIO Offset: 0xA8) ( R/ 32) Output Write Status Register -------- */
#define PIO_OWSR_P0_Pos                       _UINT32_(0)                                          /* (PIO_OWSR) Output Write Status Position */
#define PIO_OWSR_P0_Msk                       (_UINT32_(0x1) << PIO_OWSR_P0_Pos)                   /* (PIO_OWSR) Output Write Status Mask */
#define PIO_OWSR_P0(value)                    (PIO_OWSR_P0_Msk & (_UINT32_(value) << PIO_OWSR_P0_Pos)) /* Assignment of value for P0 in the PIO_OWSR register */
#define PIO_OWSR_P1_Pos                       _UINT32_(1)                                          /* (PIO_OWSR) Output Write Status Position */
#define PIO_OWSR_P1_Msk                       (_UINT32_(0x1) << PIO_OWSR_P1_Pos)                   /* (PIO_OWSR) Output Write Status Mask */
#define PIO_OWSR_P1(value)                    (PIO_OWSR_P1_Msk & (_UINT32_(value) << PIO_OWSR_P1_Pos)) /* Assignment of value for P1 in the PIO_OWSR register */
#define PIO_OWSR_P2_Pos                       _UINT32_(2)                                          /* (PIO_OWSR) Output Write Status Position */
#define PIO_OWSR_P2_Msk                       (_UINT32_(0x1) << PIO_OWSR_P2_Pos)                   /* (PIO_OWSR) Output Write Status Mask */
#define PIO_OWSR_P2(value)                    (PIO_OWSR_P2_Msk & (_UINT32_(value) << PIO_OWSR_P2_Pos)) /* Assignment of value for P2 in the PIO_OWSR register */
#define PIO_OWSR_P3_Pos                       _UINT32_(3)                                          /* (PIO_OWSR) Output Write Status Position */
#define PIO_OWSR_P3_Msk                       (_UINT32_(0x1) << PIO_OWSR_P3_Pos)                   /* (PIO_OWSR) Output Write Status Mask */
#define PIO_OWSR_P3(value)                    (PIO_OWSR_P3_Msk & (_UINT32_(value) << PIO_OWSR_P3_Pos)) /* Assignment of value for P3 in the PIO_OWSR register */
#define PIO_OWSR_P4_Pos                       _UINT32_(4)                                          /* (PIO_OWSR) Output Write Status Position */
#define PIO_OWSR_P4_Msk                       (_UINT32_(0x1) << PIO_OWSR_P4_Pos)                   /* (PIO_OWSR) Output Write Status Mask */
#define PIO_OWSR_P4(value)                    (PIO_OWSR_P4_Msk & (_UINT32_(value) << PIO_OWSR_P4_Pos)) /* Assignment of value for P4 in the PIO_OWSR register */
#define PIO_OWSR_P5_Pos                       _UINT32_(5)                                          /* (PIO_OWSR) Output Write Status Position */
#define PIO_OWSR_P5_Msk                       (_UINT32_(0x1) << PIO_OWSR_P5_Pos)                   /* (PIO_OWSR) Output Write Status Mask */
#define PIO_OWSR_P5(value)                    (PIO_OWSR_P5_Msk & (_UINT32_(value) << PIO_OWSR_P5_Pos)) /* Assignment of value for P5 in the PIO_OWSR register */
#define PIO_OWSR_P6_Pos                       _UINT32_(6)                                          /* (PIO_OWSR) Output Write Status Position */
#define PIO_OWSR_P6_Msk                       (_UINT32_(0x1) << PIO_OWSR_P6_Pos)                   /* (PIO_OWSR) Output Write Status Mask */
#define PIO_OWSR_P6(value)                    (PIO_OWSR_P6_Msk & (_UINT32_(value) << PIO_OWSR_P6_Pos)) /* Assignment of value for P6 in the PIO_OWSR register */
#define PIO_OWSR_P7_Pos                       _UINT32_(7)                                          /* (PIO_OWSR) Output Write Status Position */
#define PIO_OWSR_P7_Msk                       (_UINT32_(0x1) << PIO_OWSR_P7_Pos)                   /* (PIO_OWSR) Output Write Status Mask */
#define PIO_OWSR_P7(value)                    (PIO_OWSR_P7_Msk & (_UINT32_(value) << PIO_OWSR_P7_Pos)) /* Assignment of value for P7 in the PIO_OWSR register */
#define PIO_OWSR_P8_Pos                       _UINT32_(8)                                          /* (PIO_OWSR) Output Write Status Position */
#define PIO_OWSR_P8_Msk                       (_UINT32_(0x1) << PIO_OWSR_P8_Pos)                   /* (PIO_OWSR) Output Write Status Mask */
#define PIO_OWSR_P8(value)                    (PIO_OWSR_P8_Msk & (_UINT32_(value) << PIO_OWSR_P8_Pos)) /* Assignment of value for P8 in the PIO_OWSR register */
#define PIO_OWSR_P9_Pos                       _UINT32_(9)                                          /* (PIO_OWSR) Output Write Status Position */
#define PIO_OWSR_P9_Msk                       (_UINT32_(0x1) << PIO_OWSR_P9_Pos)                   /* (PIO_OWSR) Output Write Status Mask */
#define PIO_OWSR_P9(value)                    (PIO_OWSR_P9_Msk & (_UINT32_(value) << PIO_OWSR_P9_Pos)) /* Assignment of value for P9 in the PIO_OWSR register */
#define PIO_OWSR_P10_Pos                      _UINT32_(10)                                         /* (PIO_OWSR) Output Write Status Position */
#define PIO_OWSR_P10_Msk                      (_UINT32_(0x1) << PIO_OWSR_P10_Pos)                  /* (PIO_OWSR) Output Write Status Mask */
#define PIO_OWSR_P10(value)                   (PIO_OWSR_P10_Msk & (_UINT32_(value) << PIO_OWSR_P10_Pos)) /* Assignment of value for P10 in the PIO_OWSR register */
#define PIO_OWSR_P11_Pos                      _UINT32_(11)                                         /* (PIO_OWSR) Output Write Status Position */
#define PIO_OWSR_P11_Msk                      (_UINT32_(0x1) << PIO_OWSR_P11_Pos)                  /* (PIO_OWSR) Output Write Status Mask */
#define PIO_OWSR_P11(value)                   (PIO_OWSR_P11_Msk & (_UINT32_(value) << PIO_OWSR_P11_Pos)) /* Assignment of value for P11 in the PIO_OWSR register */
#define PIO_OWSR_P12_Pos                      _UINT32_(12)                                         /* (PIO_OWSR) Output Write Status Position */
#define PIO_OWSR_P12_Msk                      (_UINT32_(0x1) << PIO_OWSR_P12_Pos)                  /* (PIO_OWSR) Output Write Status Mask */
#define PIO_OWSR_P12(value)                   (PIO_OWSR_P12_Msk & (_UINT32_(value) << PIO_OWSR_P12_Pos)) /* Assignment of value for P12 in the PIO_OWSR register */
#define PIO_OWSR_P13_Pos                      _UINT32_(13)                                         /* (PIO_OWSR) Output Write Status Position */
#define PIO_OWSR_P13_Msk                      (_UINT32_(0x1) << PIO_OWSR_P13_Pos)                  /* (PIO_OWSR) Output Write Status Mask */
#define PIO_OWSR_P13(value)                   (PIO_OWSR_P13_Msk & (_UINT32_(value) << PIO_OWSR_P13_Pos)) /* Assignment of value for P13 in the PIO_OWSR register */
#define PIO_OWSR_P14_Pos                      _UINT32_(14)                                         /* (PIO_OWSR) Output Write Status Position */
#define PIO_OWSR_P14_Msk                      (_UINT32_(0x1) << PIO_OWSR_P14_Pos)                  /* (PIO_OWSR) Output Write Status Mask */
#define PIO_OWSR_P14(value)                   (PIO_OWSR_P14_Msk & (_UINT32_(value) << PIO_OWSR_P14_Pos)) /* Assignment of value for P14 in the PIO_OWSR register */
#define PIO_OWSR_P15_Pos                      _UINT32_(15)                                         /* (PIO_OWSR) Output Write Status Position */
#define PIO_OWSR_P15_Msk                      (_UINT32_(0x1) << PIO_OWSR_P15_Pos)                  /* (PIO_OWSR) Output Write Status Mask */
#define PIO_OWSR_P15(value)                   (PIO_OWSR_P15_Msk & (_UINT32_(value) << PIO_OWSR_P15_Pos)) /* Assignment of value for P15 in the PIO_OWSR register */
#define PIO_OWSR_P16_Pos                      _UINT32_(16)                                         /* (PIO_OWSR) Output Write Status Position */
#define PIO_OWSR_P16_Msk                      (_UINT32_(0x1) << PIO_OWSR_P16_Pos)                  /* (PIO_OWSR) Output Write Status Mask */
#define PIO_OWSR_P16(value)                   (PIO_OWSR_P16_Msk & (_UINT32_(value) << PIO_OWSR_P16_Pos)) /* Assignment of value for P16 in the PIO_OWSR register */
#define PIO_OWSR_P17_Pos                      _UINT32_(17)                                         /* (PIO_OWSR) Output Write Status Position */
#define PIO_OWSR_P17_Msk                      (_UINT32_(0x1) << PIO_OWSR_P17_Pos)                  /* (PIO_OWSR) Output Write Status Mask */
#define PIO_OWSR_P17(value)                   (PIO_OWSR_P17_Msk & (_UINT32_(value) << PIO_OWSR_P17_Pos)) /* Assignment of value for P17 in the PIO_OWSR register */
#define PIO_OWSR_P18_Pos                      _UINT32_(18)                                         /* (PIO_OWSR) Output Write Status Position */
#define PIO_OWSR_P18_Msk                      (_UINT32_(0x1) << PIO_OWSR_P18_Pos)                  /* (PIO_OWSR) Output Write Status Mask */
#define PIO_OWSR_P18(value)                   (PIO_OWSR_P18_Msk & (_UINT32_(value) << PIO_OWSR_P18_Pos)) /* Assignment of value for P18 in the PIO_OWSR register */
#define PIO_OWSR_P19_Pos                      _UINT32_(19)                                         /* (PIO_OWSR) Output Write Status Position */
#define PIO_OWSR_P19_Msk                      (_UINT32_(0x1) << PIO_OWSR_P19_Pos)                  /* (PIO_OWSR) Output Write Status Mask */
#define PIO_OWSR_P19(value)                   (PIO_OWSR_P19_Msk & (_UINT32_(value) << PIO_OWSR_P19_Pos)) /* Assignment of value for P19 in the PIO_OWSR register */
#define PIO_OWSR_P20_Pos                      _UINT32_(20)                                         /* (PIO_OWSR) Output Write Status Position */
#define PIO_OWSR_P20_Msk                      (_UINT32_(0x1) << PIO_OWSR_P20_Pos)                  /* (PIO_OWSR) Output Write Status Mask */
#define PIO_OWSR_P20(value)                   (PIO_OWSR_P20_Msk & (_UINT32_(value) << PIO_OWSR_P20_Pos)) /* Assignment of value for P20 in the PIO_OWSR register */
#define PIO_OWSR_P21_Pos                      _UINT32_(21)                                         /* (PIO_OWSR) Output Write Status Position */
#define PIO_OWSR_P21_Msk                      (_UINT32_(0x1) << PIO_OWSR_P21_Pos)                  /* (PIO_OWSR) Output Write Status Mask */
#define PIO_OWSR_P21(value)                   (PIO_OWSR_P21_Msk & (_UINT32_(value) << PIO_OWSR_P21_Pos)) /* Assignment of value for P21 in the PIO_OWSR register */
#define PIO_OWSR_P22_Pos                      _UINT32_(22)                                         /* (PIO_OWSR) Output Write Status Position */
#define PIO_OWSR_P22_Msk                      (_UINT32_(0x1) << PIO_OWSR_P22_Pos)                  /* (PIO_OWSR) Output Write Status Mask */
#define PIO_OWSR_P22(value)                   (PIO_OWSR_P22_Msk & (_UINT32_(value) << PIO_OWSR_P22_Pos)) /* Assignment of value for P22 in the PIO_OWSR register */
#define PIO_OWSR_P23_Pos                      _UINT32_(23)                                         /* (PIO_OWSR) Output Write Status Position */
#define PIO_OWSR_P23_Msk                      (_UINT32_(0x1) << PIO_OWSR_P23_Pos)                  /* (PIO_OWSR) Output Write Status Mask */
#define PIO_OWSR_P23(value)                   (PIO_OWSR_P23_Msk & (_UINT32_(value) << PIO_OWSR_P23_Pos)) /* Assignment of value for P23 in the PIO_OWSR register */
#define PIO_OWSR_P24_Pos                      _UINT32_(24)                                         /* (PIO_OWSR) Output Write Status Position */
#define PIO_OWSR_P24_Msk                      (_UINT32_(0x1) << PIO_OWSR_P24_Pos)                  /* (PIO_OWSR) Output Write Status Mask */
#define PIO_OWSR_P24(value)                   (PIO_OWSR_P24_Msk & (_UINT32_(value) << PIO_OWSR_P24_Pos)) /* Assignment of value for P24 in the PIO_OWSR register */
#define PIO_OWSR_P25_Pos                      _UINT32_(25)                                         /* (PIO_OWSR) Output Write Status Position */
#define PIO_OWSR_P25_Msk                      (_UINT32_(0x1) << PIO_OWSR_P25_Pos)                  /* (PIO_OWSR) Output Write Status Mask */
#define PIO_OWSR_P25(value)                   (PIO_OWSR_P25_Msk & (_UINT32_(value) << PIO_OWSR_P25_Pos)) /* Assignment of value for P25 in the PIO_OWSR register */
#define PIO_OWSR_P26_Pos                      _UINT32_(26)                                         /* (PIO_OWSR) Output Write Status Position */
#define PIO_OWSR_P26_Msk                      (_UINT32_(0x1) << PIO_OWSR_P26_Pos)                  /* (PIO_OWSR) Output Write Status Mask */
#define PIO_OWSR_P26(value)                   (PIO_OWSR_P26_Msk & (_UINT32_(value) << PIO_OWSR_P26_Pos)) /* Assignment of value for P26 in the PIO_OWSR register */
#define PIO_OWSR_P27_Pos                      _UINT32_(27)                                         /* (PIO_OWSR) Output Write Status Position */
#define PIO_OWSR_P27_Msk                      (_UINT32_(0x1) << PIO_OWSR_P27_Pos)                  /* (PIO_OWSR) Output Write Status Mask */
#define PIO_OWSR_P27(value)                   (PIO_OWSR_P27_Msk & (_UINT32_(value) << PIO_OWSR_P27_Pos)) /* Assignment of value for P27 in the PIO_OWSR register */
#define PIO_OWSR_P28_Pos                      _UINT32_(28)                                         /* (PIO_OWSR) Output Write Status Position */
#define PIO_OWSR_P28_Msk                      (_UINT32_(0x1) << PIO_OWSR_P28_Pos)                  /* (PIO_OWSR) Output Write Status Mask */
#define PIO_OWSR_P28(value)                   (PIO_OWSR_P28_Msk & (_UINT32_(value) << PIO_OWSR_P28_Pos)) /* Assignment of value for P28 in the PIO_OWSR register */
#define PIO_OWSR_P29_Pos                      _UINT32_(29)                                         /* (PIO_OWSR) Output Write Status Position */
#define PIO_OWSR_P29_Msk                      (_UINT32_(0x1) << PIO_OWSR_P29_Pos)                  /* (PIO_OWSR) Output Write Status Mask */
#define PIO_OWSR_P29(value)                   (PIO_OWSR_P29_Msk & (_UINT32_(value) << PIO_OWSR_P29_Pos)) /* Assignment of value for P29 in the PIO_OWSR register */
#define PIO_OWSR_P30_Pos                      _UINT32_(30)                                         /* (PIO_OWSR) Output Write Status Position */
#define PIO_OWSR_P30_Msk                      (_UINT32_(0x1) << PIO_OWSR_P30_Pos)                  /* (PIO_OWSR) Output Write Status Mask */
#define PIO_OWSR_P30(value)                   (PIO_OWSR_P30_Msk & (_UINT32_(value) << PIO_OWSR_P30_Pos)) /* Assignment of value for P30 in the PIO_OWSR register */
#define PIO_OWSR_P31_Pos                      _UINT32_(31)                                         /* (PIO_OWSR) Output Write Status Position */
#define PIO_OWSR_P31_Msk                      (_UINT32_(0x1) << PIO_OWSR_P31_Pos)                  /* (PIO_OWSR) Output Write Status Mask */
#define PIO_OWSR_P31(value)                   (PIO_OWSR_P31_Msk & (_UINT32_(value) << PIO_OWSR_P31_Pos)) /* Assignment of value for P31 in the PIO_OWSR register */
#define PIO_OWSR_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (PIO_OWSR) Register Mask  */

#define PIO_OWSR_P_Pos                        _UINT32_(0)                                          /* (PIO_OWSR Position) Output Write Status */
#define PIO_OWSR_P_Msk                        (_UINT32_(0xFFFFFFFF) << PIO_OWSR_P_Pos)             /* (PIO_OWSR Mask) P */
#define PIO_OWSR_P(value)                     (PIO_OWSR_P_Msk & (_UINT32_(value) << PIO_OWSR_P_Pos)) 

/* -------- PIO_AIMER : (PIO Offset: 0xB0) ( /W 32) Additional Interrupt Modes Enable Register -------- */
#define PIO_AIMER_P0_Pos                      _UINT32_(0)                                          /* (PIO_AIMER) Additional Interrupt Modes Enable Position */
#define PIO_AIMER_P0_Msk                      (_UINT32_(0x1) << PIO_AIMER_P0_Pos)                  /* (PIO_AIMER) Additional Interrupt Modes Enable Mask */
#define PIO_AIMER_P0(value)                   (PIO_AIMER_P0_Msk & (_UINT32_(value) << PIO_AIMER_P0_Pos)) /* Assignment of value for P0 in the PIO_AIMER register */
#define PIO_AIMER_P1_Pos                      _UINT32_(1)                                          /* (PIO_AIMER) Additional Interrupt Modes Enable Position */
#define PIO_AIMER_P1_Msk                      (_UINT32_(0x1) << PIO_AIMER_P1_Pos)                  /* (PIO_AIMER) Additional Interrupt Modes Enable Mask */
#define PIO_AIMER_P1(value)                   (PIO_AIMER_P1_Msk & (_UINT32_(value) << PIO_AIMER_P1_Pos)) /* Assignment of value for P1 in the PIO_AIMER register */
#define PIO_AIMER_P2_Pos                      _UINT32_(2)                                          /* (PIO_AIMER) Additional Interrupt Modes Enable Position */
#define PIO_AIMER_P2_Msk                      (_UINT32_(0x1) << PIO_AIMER_P2_Pos)                  /* (PIO_AIMER) Additional Interrupt Modes Enable Mask */
#define PIO_AIMER_P2(value)                   (PIO_AIMER_P2_Msk & (_UINT32_(value) << PIO_AIMER_P2_Pos)) /* Assignment of value for P2 in the PIO_AIMER register */
#define PIO_AIMER_P3_Pos                      _UINT32_(3)                                          /* (PIO_AIMER) Additional Interrupt Modes Enable Position */
#define PIO_AIMER_P3_Msk                      (_UINT32_(0x1) << PIO_AIMER_P3_Pos)                  /* (PIO_AIMER) Additional Interrupt Modes Enable Mask */
#define PIO_AIMER_P3(value)                   (PIO_AIMER_P3_Msk & (_UINT32_(value) << PIO_AIMER_P3_Pos)) /* Assignment of value for P3 in the PIO_AIMER register */
#define PIO_AIMER_P4_Pos                      _UINT32_(4)                                          /* (PIO_AIMER) Additional Interrupt Modes Enable Position */
#define PIO_AIMER_P4_Msk                      (_UINT32_(0x1) << PIO_AIMER_P4_Pos)                  /* (PIO_AIMER) Additional Interrupt Modes Enable Mask */
#define PIO_AIMER_P4(value)                   (PIO_AIMER_P4_Msk & (_UINT32_(value) << PIO_AIMER_P4_Pos)) /* Assignment of value for P4 in the PIO_AIMER register */
#define PIO_AIMER_P5_Pos                      _UINT32_(5)                                          /* (PIO_AIMER) Additional Interrupt Modes Enable Position */
#define PIO_AIMER_P5_Msk                      (_UINT32_(0x1) << PIO_AIMER_P5_Pos)                  /* (PIO_AIMER) Additional Interrupt Modes Enable Mask */
#define PIO_AIMER_P5(value)                   (PIO_AIMER_P5_Msk & (_UINT32_(value) << PIO_AIMER_P5_Pos)) /* Assignment of value for P5 in the PIO_AIMER register */
#define PIO_AIMER_P6_Pos                      _UINT32_(6)                                          /* (PIO_AIMER) Additional Interrupt Modes Enable Position */
#define PIO_AIMER_P6_Msk                      (_UINT32_(0x1) << PIO_AIMER_P6_Pos)                  /* (PIO_AIMER) Additional Interrupt Modes Enable Mask */
#define PIO_AIMER_P6(value)                   (PIO_AIMER_P6_Msk & (_UINT32_(value) << PIO_AIMER_P6_Pos)) /* Assignment of value for P6 in the PIO_AIMER register */
#define PIO_AIMER_P7_Pos                      _UINT32_(7)                                          /* (PIO_AIMER) Additional Interrupt Modes Enable Position */
#define PIO_AIMER_P7_Msk                      (_UINT32_(0x1) << PIO_AIMER_P7_Pos)                  /* (PIO_AIMER) Additional Interrupt Modes Enable Mask */
#define PIO_AIMER_P7(value)                   (PIO_AIMER_P7_Msk & (_UINT32_(value) << PIO_AIMER_P7_Pos)) /* Assignment of value for P7 in the PIO_AIMER register */
#define PIO_AIMER_P8_Pos                      _UINT32_(8)                                          /* (PIO_AIMER) Additional Interrupt Modes Enable Position */
#define PIO_AIMER_P8_Msk                      (_UINT32_(0x1) << PIO_AIMER_P8_Pos)                  /* (PIO_AIMER) Additional Interrupt Modes Enable Mask */
#define PIO_AIMER_P8(value)                   (PIO_AIMER_P8_Msk & (_UINT32_(value) << PIO_AIMER_P8_Pos)) /* Assignment of value for P8 in the PIO_AIMER register */
#define PIO_AIMER_P9_Pos                      _UINT32_(9)                                          /* (PIO_AIMER) Additional Interrupt Modes Enable Position */
#define PIO_AIMER_P9_Msk                      (_UINT32_(0x1) << PIO_AIMER_P9_Pos)                  /* (PIO_AIMER) Additional Interrupt Modes Enable Mask */
#define PIO_AIMER_P9(value)                   (PIO_AIMER_P9_Msk & (_UINT32_(value) << PIO_AIMER_P9_Pos)) /* Assignment of value for P9 in the PIO_AIMER register */
#define PIO_AIMER_P10_Pos                     _UINT32_(10)                                         /* (PIO_AIMER) Additional Interrupt Modes Enable Position */
#define PIO_AIMER_P10_Msk                     (_UINT32_(0x1) << PIO_AIMER_P10_Pos)                 /* (PIO_AIMER) Additional Interrupt Modes Enable Mask */
#define PIO_AIMER_P10(value)                  (PIO_AIMER_P10_Msk & (_UINT32_(value) << PIO_AIMER_P10_Pos)) /* Assignment of value for P10 in the PIO_AIMER register */
#define PIO_AIMER_P11_Pos                     _UINT32_(11)                                         /* (PIO_AIMER) Additional Interrupt Modes Enable Position */
#define PIO_AIMER_P11_Msk                     (_UINT32_(0x1) << PIO_AIMER_P11_Pos)                 /* (PIO_AIMER) Additional Interrupt Modes Enable Mask */
#define PIO_AIMER_P11(value)                  (PIO_AIMER_P11_Msk & (_UINT32_(value) << PIO_AIMER_P11_Pos)) /* Assignment of value for P11 in the PIO_AIMER register */
#define PIO_AIMER_P12_Pos                     _UINT32_(12)                                         /* (PIO_AIMER) Additional Interrupt Modes Enable Position */
#define PIO_AIMER_P12_Msk                     (_UINT32_(0x1) << PIO_AIMER_P12_Pos)                 /* (PIO_AIMER) Additional Interrupt Modes Enable Mask */
#define PIO_AIMER_P12(value)                  (PIO_AIMER_P12_Msk & (_UINT32_(value) << PIO_AIMER_P12_Pos)) /* Assignment of value for P12 in the PIO_AIMER register */
#define PIO_AIMER_P13_Pos                     _UINT32_(13)                                         /* (PIO_AIMER) Additional Interrupt Modes Enable Position */
#define PIO_AIMER_P13_Msk                     (_UINT32_(0x1) << PIO_AIMER_P13_Pos)                 /* (PIO_AIMER) Additional Interrupt Modes Enable Mask */
#define PIO_AIMER_P13(value)                  (PIO_AIMER_P13_Msk & (_UINT32_(value) << PIO_AIMER_P13_Pos)) /* Assignment of value for P13 in the PIO_AIMER register */
#define PIO_AIMER_P14_Pos                     _UINT32_(14)                                         /* (PIO_AIMER) Additional Interrupt Modes Enable Position */
#define PIO_AIMER_P14_Msk                     (_UINT32_(0x1) << PIO_AIMER_P14_Pos)                 /* (PIO_AIMER) Additional Interrupt Modes Enable Mask */
#define PIO_AIMER_P14(value)                  (PIO_AIMER_P14_Msk & (_UINT32_(value) << PIO_AIMER_P14_Pos)) /* Assignment of value for P14 in the PIO_AIMER register */
#define PIO_AIMER_P15_Pos                     _UINT32_(15)                                         /* (PIO_AIMER) Additional Interrupt Modes Enable Position */
#define PIO_AIMER_P15_Msk                     (_UINT32_(0x1) << PIO_AIMER_P15_Pos)                 /* (PIO_AIMER) Additional Interrupt Modes Enable Mask */
#define PIO_AIMER_P15(value)                  (PIO_AIMER_P15_Msk & (_UINT32_(value) << PIO_AIMER_P15_Pos)) /* Assignment of value for P15 in the PIO_AIMER register */
#define PIO_AIMER_P16_Pos                     _UINT32_(16)                                         /* (PIO_AIMER) Additional Interrupt Modes Enable Position */
#define PIO_AIMER_P16_Msk                     (_UINT32_(0x1) << PIO_AIMER_P16_Pos)                 /* (PIO_AIMER) Additional Interrupt Modes Enable Mask */
#define PIO_AIMER_P16(value)                  (PIO_AIMER_P16_Msk & (_UINT32_(value) << PIO_AIMER_P16_Pos)) /* Assignment of value for P16 in the PIO_AIMER register */
#define PIO_AIMER_P17_Pos                     _UINT32_(17)                                         /* (PIO_AIMER) Additional Interrupt Modes Enable Position */
#define PIO_AIMER_P17_Msk                     (_UINT32_(0x1) << PIO_AIMER_P17_Pos)                 /* (PIO_AIMER) Additional Interrupt Modes Enable Mask */
#define PIO_AIMER_P17(value)                  (PIO_AIMER_P17_Msk & (_UINT32_(value) << PIO_AIMER_P17_Pos)) /* Assignment of value for P17 in the PIO_AIMER register */
#define PIO_AIMER_P18_Pos                     _UINT32_(18)                                         /* (PIO_AIMER) Additional Interrupt Modes Enable Position */
#define PIO_AIMER_P18_Msk                     (_UINT32_(0x1) << PIO_AIMER_P18_Pos)                 /* (PIO_AIMER) Additional Interrupt Modes Enable Mask */
#define PIO_AIMER_P18(value)                  (PIO_AIMER_P18_Msk & (_UINT32_(value) << PIO_AIMER_P18_Pos)) /* Assignment of value for P18 in the PIO_AIMER register */
#define PIO_AIMER_P19_Pos                     _UINT32_(19)                                         /* (PIO_AIMER) Additional Interrupt Modes Enable Position */
#define PIO_AIMER_P19_Msk                     (_UINT32_(0x1) << PIO_AIMER_P19_Pos)                 /* (PIO_AIMER) Additional Interrupt Modes Enable Mask */
#define PIO_AIMER_P19(value)                  (PIO_AIMER_P19_Msk & (_UINT32_(value) << PIO_AIMER_P19_Pos)) /* Assignment of value for P19 in the PIO_AIMER register */
#define PIO_AIMER_P20_Pos                     _UINT32_(20)                                         /* (PIO_AIMER) Additional Interrupt Modes Enable Position */
#define PIO_AIMER_P20_Msk                     (_UINT32_(0x1) << PIO_AIMER_P20_Pos)                 /* (PIO_AIMER) Additional Interrupt Modes Enable Mask */
#define PIO_AIMER_P20(value)                  (PIO_AIMER_P20_Msk & (_UINT32_(value) << PIO_AIMER_P20_Pos)) /* Assignment of value for P20 in the PIO_AIMER register */
#define PIO_AIMER_P21_Pos                     _UINT32_(21)                                         /* (PIO_AIMER) Additional Interrupt Modes Enable Position */
#define PIO_AIMER_P21_Msk                     (_UINT32_(0x1) << PIO_AIMER_P21_Pos)                 /* (PIO_AIMER) Additional Interrupt Modes Enable Mask */
#define PIO_AIMER_P21(value)                  (PIO_AIMER_P21_Msk & (_UINT32_(value) << PIO_AIMER_P21_Pos)) /* Assignment of value for P21 in the PIO_AIMER register */
#define PIO_AIMER_P22_Pos                     _UINT32_(22)                                         /* (PIO_AIMER) Additional Interrupt Modes Enable Position */
#define PIO_AIMER_P22_Msk                     (_UINT32_(0x1) << PIO_AIMER_P22_Pos)                 /* (PIO_AIMER) Additional Interrupt Modes Enable Mask */
#define PIO_AIMER_P22(value)                  (PIO_AIMER_P22_Msk & (_UINT32_(value) << PIO_AIMER_P22_Pos)) /* Assignment of value for P22 in the PIO_AIMER register */
#define PIO_AIMER_P23_Pos                     _UINT32_(23)                                         /* (PIO_AIMER) Additional Interrupt Modes Enable Position */
#define PIO_AIMER_P23_Msk                     (_UINT32_(0x1) << PIO_AIMER_P23_Pos)                 /* (PIO_AIMER) Additional Interrupt Modes Enable Mask */
#define PIO_AIMER_P23(value)                  (PIO_AIMER_P23_Msk & (_UINT32_(value) << PIO_AIMER_P23_Pos)) /* Assignment of value for P23 in the PIO_AIMER register */
#define PIO_AIMER_P24_Pos                     _UINT32_(24)                                         /* (PIO_AIMER) Additional Interrupt Modes Enable Position */
#define PIO_AIMER_P24_Msk                     (_UINT32_(0x1) << PIO_AIMER_P24_Pos)                 /* (PIO_AIMER) Additional Interrupt Modes Enable Mask */
#define PIO_AIMER_P24(value)                  (PIO_AIMER_P24_Msk & (_UINT32_(value) << PIO_AIMER_P24_Pos)) /* Assignment of value for P24 in the PIO_AIMER register */
#define PIO_AIMER_P25_Pos                     _UINT32_(25)                                         /* (PIO_AIMER) Additional Interrupt Modes Enable Position */
#define PIO_AIMER_P25_Msk                     (_UINT32_(0x1) << PIO_AIMER_P25_Pos)                 /* (PIO_AIMER) Additional Interrupt Modes Enable Mask */
#define PIO_AIMER_P25(value)                  (PIO_AIMER_P25_Msk & (_UINT32_(value) << PIO_AIMER_P25_Pos)) /* Assignment of value for P25 in the PIO_AIMER register */
#define PIO_AIMER_P26_Pos                     _UINT32_(26)                                         /* (PIO_AIMER) Additional Interrupt Modes Enable Position */
#define PIO_AIMER_P26_Msk                     (_UINT32_(0x1) << PIO_AIMER_P26_Pos)                 /* (PIO_AIMER) Additional Interrupt Modes Enable Mask */
#define PIO_AIMER_P26(value)                  (PIO_AIMER_P26_Msk & (_UINT32_(value) << PIO_AIMER_P26_Pos)) /* Assignment of value for P26 in the PIO_AIMER register */
#define PIO_AIMER_P27_Pos                     _UINT32_(27)                                         /* (PIO_AIMER) Additional Interrupt Modes Enable Position */
#define PIO_AIMER_P27_Msk                     (_UINT32_(0x1) << PIO_AIMER_P27_Pos)                 /* (PIO_AIMER) Additional Interrupt Modes Enable Mask */
#define PIO_AIMER_P27(value)                  (PIO_AIMER_P27_Msk & (_UINT32_(value) << PIO_AIMER_P27_Pos)) /* Assignment of value for P27 in the PIO_AIMER register */
#define PIO_AIMER_P28_Pos                     _UINT32_(28)                                         /* (PIO_AIMER) Additional Interrupt Modes Enable Position */
#define PIO_AIMER_P28_Msk                     (_UINT32_(0x1) << PIO_AIMER_P28_Pos)                 /* (PIO_AIMER) Additional Interrupt Modes Enable Mask */
#define PIO_AIMER_P28(value)                  (PIO_AIMER_P28_Msk & (_UINT32_(value) << PIO_AIMER_P28_Pos)) /* Assignment of value for P28 in the PIO_AIMER register */
#define PIO_AIMER_P29_Pos                     _UINT32_(29)                                         /* (PIO_AIMER) Additional Interrupt Modes Enable Position */
#define PIO_AIMER_P29_Msk                     (_UINT32_(0x1) << PIO_AIMER_P29_Pos)                 /* (PIO_AIMER) Additional Interrupt Modes Enable Mask */
#define PIO_AIMER_P29(value)                  (PIO_AIMER_P29_Msk & (_UINT32_(value) << PIO_AIMER_P29_Pos)) /* Assignment of value for P29 in the PIO_AIMER register */
#define PIO_AIMER_P30_Pos                     _UINT32_(30)                                         /* (PIO_AIMER) Additional Interrupt Modes Enable Position */
#define PIO_AIMER_P30_Msk                     (_UINT32_(0x1) << PIO_AIMER_P30_Pos)                 /* (PIO_AIMER) Additional Interrupt Modes Enable Mask */
#define PIO_AIMER_P30(value)                  (PIO_AIMER_P30_Msk & (_UINT32_(value) << PIO_AIMER_P30_Pos)) /* Assignment of value for P30 in the PIO_AIMER register */
#define PIO_AIMER_P31_Pos                     _UINT32_(31)                                         /* (PIO_AIMER) Additional Interrupt Modes Enable Position */
#define PIO_AIMER_P31_Msk                     (_UINT32_(0x1) << PIO_AIMER_P31_Pos)                 /* (PIO_AIMER) Additional Interrupt Modes Enable Mask */
#define PIO_AIMER_P31(value)                  (PIO_AIMER_P31_Msk & (_UINT32_(value) << PIO_AIMER_P31_Pos)) /* Assignment of value for P31 in the PIO_AIMER register */
#define PIO_AIMER_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (PIO_AIMER) Register Mask  */

#define PIO_AIMER_P_Pos                       _UINT32_(0)                                          /* (PIO_AIMER Position) Additional Interrupt Modes Enable */
#define PIO_AIMER_P_Msk                       (_UINT32_(0xFFFFFFFF) << PIO_AIMER_P_Pos)            /* (PIO_AIMER Mask) P */
#define PIO_AIMER_P(value)                    (PIO_AIMER_P_Msk & (_UINT32_(value) << PIO_AIMER_P_Pos)) 

/* -------- PIO_AIMDR : (PIO Offset: 0xB4) ( /W 32) Additional Interrupt Modes Disable Register -------- */
#define PIO_AIMDR_P0_Pos                      _UINT32_(0)                                          /* (PIO_AIMDR) Additional Interrupt Modes Disable Position */
#define PIO_AIMDR_P0_Msk                      (_UINT32_(0x1) << PIO_AIMDR_P0_Pos)                  /* (PIO_AIMDR) Additional Interrupt Modes Disable Mask */
#define PIO_AIMDR_P0(value)                   (PIO_AIMDR_P0_Msk & (_UINT32_(value) << PIO_AIMDR_P0_Pos)) /* Assignment of value for P0 in the PIO_AIMDR register */
#define PIO_AIMDR_P1_Pos                      _UINT32_(1)                                          /* (PIO_AIMDR) Additional Interrupt Modes Disable Position */
#define PIO_AIMDR_P1_Msk                      (_UINT32_(0x1) << PIO_AIMDR_P1_Pos)                  /* (PIO_AIMDR) Additional Interrupt Modes Disable Mask */
#define PIO_AIMDR_P1(value)                   (PIO_AIMDR_P1_Msk & (_UINT32_(value) << PIO_AIMDR_P1_Pos)) /* Assignment of value for P1 in the PIO_AIMDR register */
#define PIO_AIMDR_P2_Pos                      _UINT32_(2)                                          /* (PIO_AIMDR) Additional Interrupt Modes Disable Position */
#define PIO_AIMDR_P2_Msk                      (_UINT32_(0x1) << PIO_AIMDR_P2_Pos)                  /* (PIO_AIMDR) Additional Interrupt Modes Disable Mask */
#define PIO_AIMDR_P2(value)                   (PIO_AIMDR_P2_Msk & (_UINT32_(value) << PIO_AIMDR_P2_Pos)) /* Assignment of value for P2 in the PIO_AIMDR register */
#define PIO_AIMDR_P3_Pos                      _UINT32_(3)                                          /* (PIO_AIMDR) Additional Interrupt Modes Disable Position */
#define PIO_AIMDR_P3_Msk                      (_UINT32_(0x1) << PIO_AIMDR_P3_Pos)                  /* (PIO_AIMDR) Additional Interrupt Modes Disable Mask */
#define PIO_AIMDR_P3(value)                   (PIO_AIMDR_P3_Msk & (_UINT32_(value) << PIO_AIMDR_P3_Pos)) /* Assignment of value for P3 in the PIO_AIMDR register */
#define PIO_AIMDR_P4_Pos                      _UINT32_(4)                                          /* (PIO_AIMDR) Additional Interrupt Modes Disable Position */
#define PIO_AIMDR_P4_Msk                      (_UINT32_(0x1) << PIO_AIMDR_P4_Pos)                  /* (PIO_AIMDR) Additional Interrupt Modes Disable Mask */
#define PIO_AIMDR_P4(value)                   (PIO_AIMDR_P4_Msk & (_UINT32_(value) << PIO_AIMDR_P4_Pos)) /* Assignment of value for P4 in the PIO_AIMDR register */
#define PIO_AIMDR_P5_Pos                      _UINT32_(5)                                          /* (PIO_AIMDR) Additional Interrupt Modes Disable Position */
#define PIO_AIMDR_P5_Msk                      (_UINT32_(0x1) << PIO_AIMDR_P5_Pos)                  /* (PIO_AIMDR) Additional Interrupt Modes Disable Mask */
#define PIO_AIMDR_P5(value)                   (PIO_AIMDR_P5_Msk & (_UINT32_(value) << PIO_AIMDR_P5_Pos)) /* Assignment of value for P5 in the PIO_AIMDR register */
#define PIO_AIMDR_P6_Pos                      _UINT32_(6)                                          /* (PIO_AIMDR) Additional Interrupt Modes Disable Position */
#define PIO_AIMDR_P6_Msk                      (_UINT32_(0x1) << PIO_AIMDR_P6_Pos)                  /* (PIO_AIMDR) Additional Interrupt Modes Disable Mask */
#define PIO_AIMDR_P6(value)                   (PIO_AIMDR_P6_Msk & (_UINT32_(value) << PIO_AIMDR_P6_Pos)) /* Assignment of value for P6 in the PIO_AIMDR register */
#define PIO_AIMDR_P7_Pos                      _UINT32_(7)                                          /* (PIO_AIMDR) Additional Interrupt Modes Disable Position */
#define PIO_AIMDR_P7_Msk                      (_UINT32_(0x1) << PIO_AIMDR_P7_Pos)                  /* (PIO_AIMDR) Additional Interrupt Modes Disable Mask */
#define PIO_AIMDR_P7(value)                   (PIO_AIMDR_P7_Msk & (_UINT32_(value) << PIO_AIMDR_P7_Pos)) /* Assignment of value for P7 in the PIO_AIMDR register */
#define PIO_AIMDR_P8_Pos                      _UINT32_(8)                                          /* (PIO_AIMDR) Additional Interrupt Modes Disable Position */
#define PIO_AIMDR_P8_Msk                      (_UINT32_(0x1) << PIO_AIMDR_P8_Pos)                  /* (PIO_AIMDR) Additional Interrupt Modes Disable Mask */
#define PIO_AIMDR_P8(value)                   (PIO_AIMDR_P8_Msk & (_UINT32_(value) << PIO_AIMDR_P8_Pos)) /* Assignment of value for P8 in the PIO_AIMDR register */
#define PIO_AIMDR_P9_Pos                      _UINT32_(9)                                          /* (PIO_AIMDR) Additional Interrupt Modes Disable Position */
#define PIO_AIMDR_P9_Msk                      (_UINT32_(0x1) << PIO_AIMDR_P9_Pos)                  /* (PIO_AIMDR) Additional Interrupt Modes Disable Mask */
#define PIO_AIMDR_P9(value)                   (PIO_AIMDR_P9_Msk & (_UINT32_(value) << PIO_AIMDR_P9_Pos)) /* Assignment of value for P9 in the PIO_AIMDR register */
#define PIO_AIMDR_P10_Pos                     _UINT32_(10)                                         /* (PIO_AIMDR) Additional Interrupt Modes Disable Position */
#define PIO_AIMDR_P10_Msk                     (_UINT32_(0x1) << PIO_AIMDR_P10_Pos)                 /* (PIO_AIMDR) Additional Interrupt Modes Disable Mask */
#define PIO_AIMDR_P10(value)                  (PIO_AIMDR_P10_Msk & (_UINT32_(value) << PIO_AIMDR_P10_Pos)) /* Assignment of value for P10 in the PIO_AIMDR register */
#define PIO_AIMDR_P11_Pos                     _UINT32_(11)                                         /* (PIO_AIMDR) Additional Interrupt Modes Disable Position */
#define PIO_AIMDR_P11_Msk                     (_UINT32_(0x1) << PIO_AIMDR_P11_Pos)                 /* (PIO_AIMDR) Additional Interrupt Modes Disable Mask */
#define PIO_AIMDR_P11(value)                  (PIO_AIMDR_P11_Msk & (_UINT32_(value) << PIO_AIMDR_P11_Pos)) /* Assignment of value for P11 in the PIO_AIMDR register */
#define PIO_AIMDR_P12_Pos                     _UINT32_(12)                                         /* (PIO_AIMDR) Additional Interrupt Modes Disable Position */
#define PIO_AIMDR_P12_Msk                     (_UINT32_(0x1) << PIO_AIMDR_P12_Pos)                 /* (PIO_AIMDR) Additional Interrupt Modes Disable Mask */
#define PIO_AIMDR_P12(value)                  (PIO_AIMDR_P12_Msk & (_UINT32_(value) << PIO_AIMDR_P12_Pos)) /* Assignment of value for P12 in the PIO_AIMDR register */
#define PIO_AIMDR_P13_Pos                     _UINT32_(13)                                         /* (PIO_AIMDR) Additional Interrupt Modes Disable Position */
#define PIO_AIMDR_P13_Msk                     (_UINT32_(0x1) << PIO_AIMDR_P13_Pos)                 /* (PIO_AIMDR) Additional Interrupt Modes Disable Mask */
#define PIO_AIMDR_P13(value)                  (PIO_AIMDR_P13_Msk & (_UINT32_(value) << PIO_AIMDR_P13_Pos)) /* Assignment of value for P13 in the PIO_AIMDR register */
#define PIO_AIMDR_P14_Pos                     _UINT32_(14)                                         /* (PIO_AIMDR) Additional Interrupt Modes Disable Position */
#define PIO_AIMDR_P14_Msk                     (_UINT32_(0x1) << PIO_AIMDR_P14_Pos)                 /* (PIO_AIMDR) Additional Interrupt Modes Disable Mask */
#define PIO_AIMDR_P14(value)                  (PIO_AIMDR_P14_Msk & (_UINT32_(value) << PIO_AIMDR_P14_Pos)) /* Assignment of value for P14 in the PIO_AIMDR register */
#define PIO_AIMDR_P15_Pos                     _UINT32_(15)                                         /* (PIO_AIMDR) Additional Interrupt Modes Disable Position */
#define PIO_AIMDR_P15_Msk                     (_UINT32_(0x1) << PIO_AIMDR_P15_Pos)                 /* (PIO_AIMDR) Additional Interrupt Modes Disable Mask */
#define PIO_AIMDR_P15(value)                  (PIO_AIMDR_P15_Msk & (_UINT32_(value) << PIO_AIMDR_P15_Pos)) /* Assignment of value for P15 in the PIO_AIMDR register */
#define PIO_AIMDR_P16_Pos                     _UINT32_(16)                                         /* (PIO_AIMDR) Additional Interrupt Modes Disable Position */
#define PIO_AIMDR_P16_Msk                     (_UINT32_(0x1) << PIO_AIMDR_P16_Pos)                 /* (PIO_AIMDR) Additional Interrupt Modes Disable Mask */
#define PIO_AIMDR_P16(value)                  (PIO_AIMDR_P16_Msk & (_UINT32_(value) << PIO_AIMDR_P16_Pos)) /* Assignment of value for P16 in the PIO_AIMDR register */
#define PIO_AIMDR_P17_Pos                     _UINT32_(17)                                         /* (PIO_AIMDR) Additional Interrupt Modes Disable Position */
#define PIO_AIMDR_P17_Msk                     (_UINT32_(0x1) << PIO_AIMDR_P17_Pos)                 /* (PIO_AIMDR) Additional Interrupt Modes Disable Mask */
#define PIO_AIMDR_P17(value)                  (PIO_AIMDR_P17_Msk & (_UINT32_(value) << PIO_AIMDR_P17_Pos)) /* Assignment of value for P17 in the PIO_AIMDR register */
#define PIO_AIMDR_P18_Pos                     _UINT32_(18)                                         /* (PIO_AIMDR) Additional Interrupt Modes Disable Position */
#define PIO_AIMDR_P18_Msk                     (_UINT32_(0x1) << PIO_AIMDR_P18_Pos)                 /* (PIO_AIMDR) Additional Interrupt Modes Disable Mask */
#define PIO_AIMDR_P18(value)                  (PIO_AIMDR_P18_Msk & (_UINT32_(value) << PIO_AIMDR_P18_Pos)) /* Assignment of value for P18 in the PIO_AIMDR register */
#define PIO_AIMDR_P19_Pos                     _UINT32_(19)                                         /* (PIO_AIMDR) Additional Interrupt Modes Disable Position */
#define PIO_AIMDR_P19_Msk                     (_UINT32_(0x1) << PIO_AIMDR_P19_Pos)                 /* (PIO_AIMDR) Additional Interrupt Modes Disable Mask */
#define PIO_AIMDR_P19(value)                  (PIO_AIMDR_P19_Msk & (_UINT32_(value) << PIO_AIMDR_P19_Pos)) /* Assignment of value for P19 in the PIO_AIMDR register */
#define PIO_AIMDR_P20_Pos                     _UINT32_(20)                                         /* (PIO_AIMDR) Additional Interrupt Modes Disable Position */
#define PIO_AIMDR_P20_Msk                     (_UINT32_(0x1) << PIO_AIMDR_P20_Pos)                 /* (PIO_AIMDR) Additional Interrupt Modes Disable Mask */
#define PIO_AIMDR_P20(value)                  (PIO_AIMDR_P20_Msk & (_UINT32_(value) << PIO_AIMDR_P20_Pos)) /* Assignment of value for P20 in the PIO_AIMDR register */
#define PIO_AIMDR_P21_Pos                     _UINT32_(21)                                         /* (PIO_AIMDR) Additional Interrupt Modes Disable Position */
#define PIO_AIMDR_P21_Msk                     (_UINT32_(0x1) << PIO_AIMDR_P21_Pos)                 /* (PIO_AIMDR) Additional Interrupt Modes Disable Mask */
#define PIO_AIMDR_P21(value)                  (PIO_AIMDR_P21_Msk & (_UINT32_(value) << PIO_AIMDR_P21_Pos)) /* Assignment of value for P21 in the PIO_AIMDR register */
#define PIO_AIMDR_P22_Pos                     _UINT32_(22)                                         /* (PIO_AIMDR) Additional Interrupt Modes Disable Position */
#define PIO_AIMDR_P22_Msk                     (_UINT32_(0x1) << PIO_AIMDR_P22_Pos)                 /* (PIO_AIMDR) Additional Interrupt Modes Disable Mask */
#define PIO_AIMDR_P22(value)                  (PIO_AIMDR_P22_Msk & (_UINT32_(value) << PIO_AIMDR_P22_Pos)) /* Assignment of value for P22 in the PIO_AIMDR register */
#define PIO_AIMDR_P23_Pos                     _UINT32_(23)                                         /* (PIO_AIMDR) Additional Interrupt Modes Disable Position */
#define PIO_AIMDR_P23_Msk                     (_UINT32_(0x1) << PIO_AIMDR_P23_Pos)                 /* (PIO_AIMDR) Additional Interrupt Modes Disable Mask */
#define PIO_AIMDR_P23(value)                  (PIO_AIMDR_P23_Msk & (_UINT32_(value) << PIO_AIMDR_P23_Pos)) /* Assignment of value for P23 in the PIO_AIMDR register */
#define PIO_AIMDR_P24_Pos                     _UINT32_(24)                                         /* (PIO_AIMDR) Additional Interrupt Modes Disable Position */
#define PIO_AIMDR_P24_Msk                     (_UINT32_(0x1) << PIO_AIMDR_P24_Pos)                 /* (PIO_AIMDR) Additional Interrupt Modes Disable Mask */
#define PIO_AIMDR_P24(value)                  (PIO_AIMDR_P24_Msk & (_UINT32_(value) << PIO_AIMDR_P24_Pos)) /* Assignment of value for P24 in the PIO_AIMDR register */
#define PIO_AIMDR_P25_Pos                     _UINT32_(25)                                         /* (PIO_AIMDR) Additional Interrupt Modes Disable Position */
#define PIO_AIMDR_P25_Msk                     (_UINT32_(0x1) << PIO_AIMDR_P25_Pos)                 /* (PIO_AIMDR) Additional Interrupt Modes Disable Mask */
#define PIO_AIMDR_P25(value)                  (PIO_AIMDR_P25_Msk & (_UINT32_(value) << PIO_AIMDR_P25_Pos)) /* Assignment of value for P25 in the PIO_AIMDR register */
#define PIO_AIMDR_P26_Pos                     _UINT32_(26)                                         /* (PIO_AIMDR) Additional Interrupt Modes Disable Position */
#define PIO_AIMDR_P26_Msk                     (_UINT32_(0x1) << PIO_AIMDR_P26_Pos)                 /* (PIO_AIMDR) Additional Interrupt Modes Disable Mask */
#define PIO_AIMDR_P26(value)                  (PIO_AIMDR_P26_Msk & (_UINT32_(value) << PIO_AIMDR_P26_Pos)) /* Assignment of value for P26 in the PIO_AIMDR register */
#define PIO_AIMDR_P27_Pos                     _UINT32_(27)                                         /* (PIO_AIMDR) Additional Interrupt Modes Disable Position */
#define PIO_AIMDR_P27_Msk                     (_UINT32_(0x1) << PIO_AIMDR_P27_Pos)                 /* (PIO_AIMDR) Additional Interrupt Modes Disable Mask */
#define PIO_AIMDR_P27(value)                  (PIO_AIMDR_P27_Msk & (_UINT32_(value) << PIO_AIMDR_P27_Pos)) /* Assignment of value for P27 in the PIO_AIMDR register */
#define PIO_AIMDR_P28_Pos                     _UINT32_(28)                                         /* (PIO_AIMDR) Additional Interrupt Modes Disable Position */
#define PIO_AIMDR_P28_Msk                     (_UINT32_(0x1) << PIO_AIMDR_P28_Pos)                 /* (PIO_AIMDR) Additional Interrupt Modes Disable Mask */
#define PIO_AIMDR_P28(value)                  (PIO_AIMDR_P28_Msk & (_UINT32_(value) << PIO_AIMDR_P28_Pos)) /* Assignment of value for P28 in the PIO_AIMDR register */
#define PIO_AIMDR_P29_Pos                     _UINT32_(29)                                         /* (PIO_AIMDR) Additional Interrupt Modes Disable Position */
#define PIO_AIMDR_P29_Msk                     (_UINT32_(0x1) << PIO_AIMDR_P29_Pos)                 /* (PIO_AIMDR) Additional Interrupt Modes Disable Mask */
#define PIO_AIMDR_P29(value)                  (PIO_AIMDR_P29_Msk & (_UINT32_(value) << PIO_AIMDR_P29_Pos)) /* Assignment of value for P29 in the PIO_AIMDR register */
#define PIO_AIMDR_P30_Pos                     _UINT32_(30)                                         /* (PIO_AIMDR) Additional Interrupt Modes Disable Position */
#define PIO_AIMDR_P30_Msk                     (_UINT32_(0x1) << PIO_AIMDR_P30_Pos)                 /* (PIO_AIMDR) Additional Interrupt Modes Disable Mask */
#define PIO_AIMDR_P30(value)                  (PIO_AIMDR_P30_Msk & (_UINT32_(value) << PIO_AIMDR_P30_Pos)) /* Assignment of value for P30 in the PIO_AIMDR register */
#define PIO_AIMDR_P31_Pos                     _UINT32_(31)                                         /* (PIO_AIMDR) Additional Interrupt Modes Disable Position */
#define PIO_AIMDR_P31_Msk                     (_UINT32_(0x1) << PIO_AIMDR_P31_Pos)                 /* (PIO_AIMDR) Additional Interrupt Modes Disable Mask */
#define PIO_AIMDR_P31(value)                  (PIO_AIMDR_P31_Msk & (_UINT32_(value) << PIO_AIMDR_P31_Pos)) /* Assignment of value for P31 in the PIO_AIMDR register */
#define PIO_AIMDR_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (PIO_AIMDR) Register Mask  */

#define PIO_AIMDR_P_Pos                       _UINT32_(0)                                          /* (PIO_AIMDR Position) Additional Interrupt Modes Disable */
#define PIO_AIMDR_P_Msk                       (_UINT32_(0xFFFFFFFF) << PIO_AIMDR_P_Pos)            /* (PIO_AIMDR Mask) P */
#define PIO_AIMDR_P(value)                    (PIO_AIMDR_P_Msk & (_UINT32_(value) << PIO_AIMDR_P_Pos)) 

/* -------- PIO_AIMMR : (PIO Offset: 0xB8) ( R/ 32) Additional Interrupt Modes Mask Register -------- */
#define PIO_AIMMR_P0_Pos                      _UINT32_(0)                                          /* (PIO_AIMMR) IO Line Index Position */
#define PIO_AIMMR_P0_Msk                      (_UINT32_(0x1) << PIO_AIMMR_P0_Pos)                  /* (PIO_AIMMR) IO Line Index Mask */
#define PIO_AIMMR_P0(value)                   (PIO_AIMMR_P0_Msk & (_UINT32_(value) << PIO_AIMMR_P0_Pos)) /* Assignment of value for P0 in the PIO_AIMMR register */
#define PIO_AIMMR_P1_Pos                      _UINT32_(1)                                          /* (PIO_AIMMR) IO Line Index Position */
#define PIO_AIMMR_P1_Msk                      (_UINT32_(0x1) << PIO_AIMMR_P1_Pos)                  /* (PIO_AIMMR) IO Line Index Mask */
#define PIO_AIMMR_P1(value)                   (PIO_AIMMR_P1_Msk & (_UINT32_(value) << PIO_AIMMR_P1_Pos)) /* Assignment of value for P1 in the PIO_AIMMR register */
#define PIO_AIMMR_P2_Pos                      _UINT32_(2)                                          /* (PIO_AIMMR) IO Line Index Position */
#define PIO_AIMMR_P2_Msk                      (_UINT32_(0x1) << PIO_AIMMR_P2_Pos)                  /* (PIO_AIMMR) IO Line Index Mask */
#define PIO_AIMMR_P2(value)                   (PIO_AIMMR_P2_Msk & (_UINT32_(value) << PIO_AIMMR_P2_Pos)) /* Assignment of value for P2 in the PIO_AIMMR register */
#define PIO_AIMMR_P3_Pos                      _UINT32_(3)                                          /* (PIO_AIMMR) IO Line Index Position */
#define PIO_AIMMR_P3_Msk                      (_UINT32_(0x1) << PIO_AIMMR_P3_Pos)                  /* (PIO_AIMMR) IO Line Index Mask */
#define PIO_AIMMR_P3(value)                   (PIO_AIMMR_P3_Msk & (_UINT32_(value) << PIO_AIMMR_P3_Pos)) /* Assignment of value for P3 in the PIO_AIMMR register */
#define PIO_AIMMR_P4_Pos                      _UINT32_(4)                                          /* (PIO_AIMMR) IO Line Index Position */
#define PIO_AIMMR_P4_Msk                      (_UINT32_(0x1) << PIO_AIMMR_P4_Pos)                  /* (PIO_AIMMR) IO Line Index Mask */
#define PIO_AIMMR_P4(value)                   (PIO_AIMMR_P4_Msk & (_UINT32_(value) << PIO_AIMMR_P4_Pos)) /* Assignment of value for P4 in the PIO_AIMMR register */
#define PIO_AIMMR_P5_Pos                      _UINT32_(5)                                          /* (PIO_AIMMR) IO Line Index Position */
#define PIO_AIMMR_P5_Msk                      (_UINT32_(0x1) << PIO_AIMMR_P5_Pos)                  /* (PIO_AIMMR) IO Line Index Mask */
#define PIO_AIMMR_P5(value)                   (PIO_AIMMR_P5_Msk & (_UINT32_(value) << PIO_AIMMR_P5_Pos)) /* Assignment of value for P5 in the PIO_AIMMR register */
#define PIO_AIMMR_P6_Pos                      _UINT32_(6)                                          /* (PIO_AIMMR) IO Line Index Position */
#define PIO_AIMMR_P6_Msk                      (_UINT32_(0x1) << PIO_AIMMR_P6_Pos)                  /* (PIO_AIMMR) IO Line Index Mask */
#define PIO_AIMMR_P6(value)                   (PIO_AIMMR_P6_Msk & (_UINT32_(value) << PIO_AIMMR_P6_Pos)) /* Assignment of value for P6 in the PIO_AIMMR register */
#define PIO_AIMMR_P7_Pos                      _UINT32_(7)                                          /* (PIO_AIMMR) IO Line Index Position */
#define PIO_AIMMR_P7_Msk                      (_UINT32_(0x1) << PIO_AIMMR_P7_Pos)                  /* (PIO_AIMMR) IO Line Index Mask */
#define PIO_AIMMR_P7(value)                   (PIO_AIMMR_P7_Msk & (_UINT32_(value) << PIO_AIMMR_P7_Pos)) /* Assignment of value for P7 in the PIO_AIMMR register */
#define PIO_AIMMR_P8_Pos                      _UINT32_(8)                                          /* (PIO_AIMMR) IO Line Index Position */
#define PIO_AIMMR_P8_Msk                      (_UINT32_(0x1) << PIO_AIMMR_P8_Pos)                  /* (PIO_AIMMR) IO Line Index Mask */
#define PIO_AIMMR_P8(value)                   (PIO_AIMMR_P8_Msk & (_UINT32_(value) << PIO_AIMMR_P8_Pos)) /* Assignment of value for P8 in the PIO_AIMMR register */
#define PIO_AIMMR_P9_Pos                      _UINT32_(9)                                          /* (PIO_AIMMR) IO Line Index Position */
#define PIO_AIMMR_P9_Msk                      (_UINT32_(0x1) << PIO_AIMMR_P9_Pos)                  /* (PIO_AIMMR) IO Line Index Mask */
#define PIO_AIMMR_P9(value)                   (PIO_AIMMR_P9_Msk & (_UINT32_(value) << PIO_AIMMR_P9_Pos)) /* Assignment of value for P9 in the PIO_AIMMR register */
#define PIO_AIMMR_P10_Pos                     _UINT32_(10)                                         /* (PIO_AIMMR) IO Line Index Position */
#define PIO_AIMMR_P10_Msk                     (_UINT32_(0x1) << PIO_AIMMR_P10_Pos)                 /* (PIO_AIMMR) IO Line Index Mask */
#define PIO_AIMMR_P10(value)                  (PIO_AIMMR_P10_Msk & (_UINT32_(value) << PIO_AIMMR_P10_Pos)) /* Assignment of value for P10 in the PIO_AIMMR register */
#define PIO_AIMMR_P11_Pos                     _UINT32_(11)                                         /* (PIO_AIMMR) IO Line Index Position */
#define PIO_AIMMR_P11_Msk                     (_UINT32_(0x1) << PIO_AIMMR_P11_Pos)                 /* (PIO_AIMMR) IO Line Index Mask */
#define PIO_AIMMR_P11(value)                  (PIO_AIMMR_P11_Msk & (_UINT32_(value) << PIO_AIMMR_P11_Pos)) /* Assignment of value for P11 in the PIO_AIMMR register */
#define PIO_AIMMR_P12_Pos                     _UINT32_(12)                                         /* (PIO_AIMMR) IO Line Index Position */
#define PIO_AIMMR_P12_Msk                     (_UINT32_(0x1) << PIO_AIMMR_P12_Pos)                 /* (PIO_AIMMR) IO Line Index Mask */
#define PIO_AIMMR_P12(value)                  (PIO_AIMMR_P12_Msk & (_UINT32_(value) << PIO_AIMMR_P12_Pos)) /* Assignment of value for P12 in the PIO_AIMMR register */
#define PIO_AIMMR_P13_Pos                     _UINT32_(13)                                         /* (PIO_AIMMR) IO Line Index Position */
#define PIO_AIMMR_P13_Msk                     (_UINT32_(0x1) << PIO_AIMMR_P13_Pos)                 /* (PIO_AIMMR) IO Line Index Mask */
#define PIO_AIMMR_P13(value)                  (PIO_AIMMR_P13_Msk & (_UINT32_(value) << PIO_AIMMR_P13_Pos)) /* Assignment of value for P13 in the PIO_AIMMR register */
#define PIO_AIMMR_P14_Pos                     _UINT32_(14)                                         /* (PIO_AIMMR) IO Line Index Position */
#define PIO_AIMMR_P14_Msk                     (_UINT32_(0x1) << PIO_AIMMR_P14_Pos)                 /* (PIO_AIMMR) IO Line Index Mask */
#define PIO_AIMMR_P14(value)                  (PIO_AIMMR_P14_Msk & (_UINT32_(value) << PIO_AIMMR_P14_Pos)) /* Assignment of value for P14 in the PIO_AIMMR register */
#define PIO_AIMMR_P15_Pos                     _UINT32_(15)                                         /* (PIO_AIMMR) IO Line Index Position */
#define PIO_AIMMR_P15_Msk                     (_UINT32_(0x1) << PIO_AIMMR_P15_Pos)                 /* (PIO_AIMMR) IO Line Index Mask */
#define PIO_AIMMR_P15(value)                  (PIO_AIMMR_P15_Msk & (_UINT32_(value) << PIO_AIMMR_P15_Pos)) /* Assignment of value for P15 in the PIO_AIMMR register */
#define PIO_AIMMR_P16_Pos                     _UINT32_(16)                                         /* (PIO_AIMMR) IO Line Index Position */
#define PIO_AIMMR_P16_Msk                     (_UINT32_(0x1) << PIO_AIMMR_P16_Pos)                 /* (PIO_AIMMR) IO Line Index Mask */
#define PIO_AIMMR_P16(value)                  (PIO_AIMMR_P16_Msk & (_UINT32_(value) << PIO_AIMMR_P16_Pos)) /* Assignment of value for P16 in the PIO_AIMMR register */
#define PIO_AIMMR_P17_Pos                     _UINT32_(17)                                         /* (PIO_AIMMR) IO Line Index Position */
#define PIO_AIMMR_P17_Msk                     (_UINT32_(0x1) << PIO_AIMMR_P17_Pos)                 /* (PIO_AIMMR) IO Line Index Mask */
#define PIO_AIMMR_P17(value)                  (PIO_AIMMR_P17_Msk & (_UINT32_(value) << PIO_AIMMR_P17_Pos)) /* Assignment of value for P17 in the PIO_AIMMR register */
#define PIO_AIMMR_P18_Pos                     _UINT32_(18)                                         /* (PIO_AIMMR) IO Line Index Position */
#define PIO_AIMMR_P18_Msk                     (_UINT32_(0x1) << PIO_AIMMR_P18_Pos)                 /* (PIO_AIMMR) IO Line Index Mask */
#define PIO_AIMMR_P18(value)                  (PIO_AIMMR_P18_Msk & (_UINT32_(value) << PIO_AIMMR_P18_Pos)) /* Assignment of value for P18 in the PIO_AIMMR register */
#define PIO_AIMMR_P19_Pos                     _UINT32_(19)                                         /* (PIO_AIMMR) IO Line Index Position */
#define PIO_AIMMR_P19_Msk                     (_UINT32_(0x1) << PIO_AIMMR_P19_Pos)                 /* (PIO_AIMMR) IO Line Index Mask */
#define PIO_AIMMR_P19(value)                  (PIO_AIMMR_P19_Msk & (_UINT32_(value) << PIO_AIMMR_P19_Pos)) /* Assignment of value for P19 in the PIO_AIMMR register */
#define PIO_AIMMR_P20_Pos                     _UINT32_(20)                                         /* (PIO_AIMMR) IO Line Index Position */
#define PIO_AIMMR_P20_Msk                     (_UINT32_(0x1) << PIO_AIMMR_P20_Pos)                 /* (PIO_AIMMR) IO Line Index Mask */
#define PIO_AIMMR_P20(value)                  (PIO_AIMMR_P20_Msk & (_UINT32_(value) << PIO_AIMMR_P20_Pos)) /* Assignment of value for P20 in the PIO_AIMMR register */
#define PIO_AIMMR_P21_Pos                     _UINT32_(21)                                         /* (PIO_AIMMR) IO Line Index Position */
#define PIO_AIMMR_P21_Msk                     (_UINT32_(0x1) << PIO_AIMMR_P21_Pos)                 /* (PIO_AIMMR) IO Line Index Mask */
#define PIO_AIMMR_P21(value)                  (PIO_AIMMR_P21_Msk & (_UINT32_(value) << PIO_AIMMR_P21_Pos)) /* Assignment of value for P21 in the PIO_AIMMR register */
#define PIO_AIMMR_P22_Pos                     _UINT32_(22)                                         /* (PIO_AIMMR) IO Line Index Position */
#define PIO_AIMMR_P22_Msk                     (_UINT32_(0x1) << PIO_AIMMR_P22_Pos)                 /* (PIO_AIMMR) IO Line Index Mask */
#define PIO_AIMMR_P22(value)                  (PIO_AIMMR_P22_Msk & (_UINT32_(value) << PIO_AIMMR_P22_Pos)) /* Assignment of value for P22 in the PIO_AIMMR register */
#define PIO_AIMMR_P23_Pos                     _UINT32_(23)                                         /* (PIO_AIMMR) IO Line Index Position */
#define PIO_AIMMR_P23_Msk                     (_UINT32_(0x1) << PIO_AIMMR_P23_Pos)                 /* (PIO_AIMMR) IO Line Index Mask */
#define PIO_AIMMR_P23(value)                  (PIO_AIMMR_P23_Msk & (_UINT32_(value) << PIO_AIMMR_P23_Pos)) /* Assignment of value for P23 in the PIO_AIMMR register */
#define PIO_AIMMR_P24_Pos                     _UINT32_(24)                                         /* (PIO_AIMMR) IO Line Index Position */
#define PIO_AIMMR_P24_Msk                     (_UINT32_(0x1) << PIO_AIMMR_P24_Pos)                 /* (PIO_AIMMR) IO Line Index Mask */
#define PIO_AIMMR_P24(value)                  (PIO_AIMMR_P24_Msk & (_UINT32_(value) << PIO_AIMMR_P24_Pos)) /* Assignment of value for P24 in the PIO_AIMMR register */
#define PIO_AIMMR_P25_Pos                     _UINT32_(25)                                         /* (PIO_AIMMR) IO Line Index Position */
#define PIO_AIMMR_P25_Msk                     (_UINT32_(0x1) << PIO_AIMMR_P25_Pos)                 /* (PIO_AIMMR) IO Line Index Mask */
#define PIO_AIMMR_P25(value)                  (PIO_AIMMR_P25_Msk & (_UINT32_(value) << PIO_AIMMR_P25_Pos)) /* Assignment of value for P25 in the PIO_AIMMR register */
#define PIO_AIMMR_P26_Pos                     _UINT32_(26)                                         /* (PIO_AIMMR) IO Line Index Position */
#define PIO_AIMMR_P26_Msk                     (_UINT32_(0x1) << PIO_AIMMR_P26_Pos)                 /* (PIO_AIMMR) IO Line Index Mask */
#define PIO_AIMMR_P26(value)                  (PIO_AIMMR_P26_Msk & (_UINT32_(value) << PIO_AIMMR_P26_Pos)) /* Assignment of value for P26 in the PIO_AIMMR register */
#define PIO_AIMMR_P27_Pos                     _UINT32_(27)                                         /* (PIO_AIMMR) IO Line Index Position */
#define PIO_AIMMR_P27_Msk                     (_UINT32_(0x1) << PIO_AIMMR_P27_Pos)                 /* (PIO_AIMMR) IO Line Index Mask */
#define PIO_AIMMR_P27(value)                  (PIO_AIMMR_P27_Msk & (_UINT32_(value) << PIO_AIMMR_P27_Pos)) /* Assignment of value for P27 in the PIO_AIMMR register */
#define PIO_AIMMR_P28_Pos                     _UINT32_(28)                                         /* (PIO_AIMMR) IO Line Index Position */
#define PIO_AIMMR_P28_Msk                     (_UINT32_(0x1) << PIO_AIMMR_P28_Pos)                 /* (PIO_AIMMR) IO Line Index Mask */
#define PIO_AIMMR_P28(value)                  (PIO_AIMMR_P28_Msk & (_UINT32_(value) << PIO_AIMMR_P28_Pos)) /* Assignment of value for P28 in the PIO_AIMMR register */
#define PIO_AIMMR_P29_Pos                     _UINT32_(29)                                         /* (PIO_AIMMR) IO Line Index Position */
#define PIO_AIMMR_P29_Msk                     (_UINT32_(0x1) << PIO_AIMMR_P29_Pos)                 /* (PIO_AIMMR) IO Line Index Mask */
#define PIO_AIMMR_P29(value)                  (PIO_AIMMR_P29_Msk & (_UINT32_(value) << PIO_AIMMR_P29_Pos)) /* Assignment of value for P29 in the PIO_AIMMR register */
#define PIO_AIMMR_P30_Pos                     _UINT32_(30)                                         /* (PIO_AIMMR) IO Line Index Position */
#define PIO_AIMMR_P30_Msk                     (_UINT32_(0x1) << PIO_AIMMR_P30_Pos)                 /* (PIO_AIMMR) IO Line Index Mask */
#define PIO_AIMMR_P30(value)                  (PIO_AIMMR_P30_Msk & (_UINT32_(value) << PIO_AIMMR_P30_Pos)) /* Assignment of value for P30 in the PIO_AIMMR register */
#define PIO_AIMMR_P31_Pos                     _UINT32_(31)                                         /* (PIO_AIMMR) IO Line Index Position */
#define PIO_AIMMR_P31_Msk                     (_UINT32_(0x1) << PIO_AIMMR_P31_Pos)                 /* (PIO_AIMMR) IO Line Index Mask */
#define PIO_AIMMR_P31(value)                  (PIO_AIMMR_P31_Msk & (_UINT32_(value) << PIO_AIMMR_P31_Pos)) /* Assignment of value for P31 in the PIO_AIMMR register */
#define PIO_AIMMR_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (PIO_AIMMR) Register Mask  */

#define PIO_AIMMR_P_Pos                       _UINT32_(0)                                          /* (PIO_AIMMR Position) IO Line Index */
#define PIO_AIMMR_P_Msk                       (_UINT32_(0xFFFFFFFF) << PIO_AIMMR_P_Pos)            /* (PIO_AIMMR Mask) P */
#define PIO_AIMMR_P(value)                    (PIO_AIMMR_P_Msk & (_UINT32_(value) << PIO_AIMMR_P_Pos)) 

/* -------- PIO_ESR : (PIO Offset: 0xC0) ( /W 32) Edge Select Register -------- */
#define PIO_ESR_P0_Pos                        _UINT32_(0)                                          /* (PIO_ESR) Edge Interrupt Selection Position */
#define PIO_ESR_P0_Msk                        (_UINT32_(0x1) << PIO_ESR_P0_Pos)                    /* (PIO_ESR) Edge Interrupt Selection Mask */
#define PIO_ESR_P0(value)                     (PIO_ESR_P0_Msk & (_UINT32_(value) << PIO_ESR_P0_Pos)) /* Assignment of value for P0 in the PIO_ESR register */
#define PIO_ESR_P1_Pos                        _UINT32_(1)                                          /* (PIO_ESR) Edge Interrupt Selection Position */
#define PIO_ESR_P1_Msk                        (_UINT32_(0x1) << PIO_ESR_P1_Pos)                    /* (PIO_ESR) Edge Interrupt Selection Mask */
#define PIO_ESR_P1(value)                     (PIO_ESR_P1_Msk & (_UINT32_(value) << PIO_ESR_P1_Pos)) /* Assignment of value for P1 in the PIO_ESR register */
#define PIO_ESR_P2_Pos                        _UINT32_(2)                                          /* (PIO_ESR) Edge Interrupt Selection Position */
#define PIO_ESR_P2_Msk                        (_UINT32_(0x1) << PIO_ESR_P2_Pos)                    /* (PIO_ESR) Edge Interrupt Selection Mask */
#define PIO_ESR_P2(value)                     (PIO_ESR_P2_Msk & (_UINT32_(value) << PIO_ESR_P2_Pos)) /* Assignment of value for P2 in the PIO_ESR register */
#define PIO_ESR_P3_Pos                        _UINT32_(3)                                          /* (PIO_ESR) Edge Interrupt Selection Position */
#define PIO_ESR_P3_Msk                        (_UINT32_(0x1) << PIO_ESR_P3_Pos)                    /* (PIO_ESR) Edge Interrupt Selection Mask */
#define PIO_ESR_P3(value)                     (PIO_ESR_P3_Msk & (_UINT32_(value) << PIO_ESR_P3_Pos)) /* Assignment of value for P3 in the PIO_ESR register */
#define PIO_ESR_P4_Pos                        _UINT32_(4)                                          /* (PIO_ESR) Edge Interrupt Selection Position */
#define PIO_ESR_P4_Msk                        (_UINT32_(0x1) << PIO_ESR_P4_Pos)                    /* (PIO_ESR) Edge Interrupt Selection Mask */
#define PIO_ESR_P4(value)                     (PIO_ESR_P4_Msk & (_UINT32_(value) << PIO_ESR_P4_Pos)) /* Assignment of value for P4 in the PIO_ESR register */
#define PIO_ESR_P5_Pos                        _UINT32_(5)                                          /* (PIO_ESR) Edge Interrupt Selection Position */
#define PIO_ESR_P5_Msk                        (_UINT32_(0x1) << PIO_ESR_P5_Pos)                    /* (PIO_ESR) Edge Interrupt Selection Mask */
#define PIO_ESR_P5(value)                     (PIO_ESR_P5_Msk & (_UINT32_(value) << PIO_ESR_P5_Pos)) /* Assignment of value for P5 in the PIO_ESR register */
#define PIO_ESR_P6_Pos                        _UINT32_(6)                                          /* (PIO_ESR) Edge Interrupt Selection Position */
#define PIO_ESR_P6_Msk                        (_UINT32_(0x1) << PIO_ESR_P6_Pos)                    /* (PIO_ESR) Edge Interrupt Selection Mask */
#define PIO_ESR_P6(value)                     (PIO_ESR_P6_Msk & (_UINT32_(value) << PIO_ESR_P6_Pos)) /* Assignment of value for P6 in the PIO_ESR register */
#define PIO_ESR_P7_Pos                        _UINT32_(7)                                          /* (PIO_ESR) Edge Interrupt Selection Position */
#define PIO_ESR_P7_Msk                        (_UINT32_(0x1) << PIO_ESR_P7_Pos)                    /* (PIO_ESR) Edge Interrupt Selection Mask */
#define PIO_ESR_P7(value)                     (PIO_ESR_P7_Msk & (_UINT32_(value) << PIO_ESR_P7_Pos)) /* Assignment of value for P7 in the PIO_ESR register */
#define PIO_ESR_P8_Pos                        _UINT32_(8)                                          /* (PIO_ESR) Edge Interrupt Selection Position */
#define PIO_ESR_P8_Msk                        (_UINT32_(0x1) << PIO_ESR_P8_Pos)                    /* (PIO_ESR) Edge Interrupt Selection Mask */
#define PIO_ESR_P8(value)                     (PIO_ESR_P8_Msk & (_UINT32_(value) << PIO_ESR_P8_Pos)) /* Assignment of value for P8 in the PIO_ESR register */
#define PIO_ESR_P9_Pos                        _UINT32_(9)                                          /* (PIO_ESR) Edge Interrupt Selection Position */
#define PIO_ESR_P9_Msk                        (_UINT32_(0x1) << PIO_ESR_P9_Pos)                    /* (PIO_ESR) Edge Interrupt Selection Mask */
#define PIO_ESR_P9(value)                     (PIO_ESR_P9_Msk & (_UINT32_(value) << PIO_ESR_P9_Pos)) /* Assignment of value for P9 in the PIO_ESR register */
#define PIO_ESR_P10_Pos                       _UINT32_(10)                                         /* (PIO_ESR) Edge Interrupt Selection Position */
#define PIO_ESR_P10_Msk                       (_UINT32_(0x1) << PIO_ESR_P10_Pos)                   /* (PIO_ESR) Edge Interrupt Selection Mask */
#define PIO_ESR_P10(value)                    (PIO_ESR_P10_Msk & (_UINT32_(value) << PIO_ESR_P10_Pos)) /* Assignment of value for P10 in the PIO_ESR register */
#define PIO_ESR_P11_Pos                       _UINT32_(11)                                         /* (PIO_ESR) Edge Interrupt Selection Position */
#define PIO_ESR_P11_Msk                       (_UINT32_(0x1) << PIO_ESR_P11_Pos)                   /* (PIO_ESR) Edge Interrupt Selection Mask */
#define PIO_ESR_P11(value)                    (PIO_ESR_P11_Msk & (_UINT32_(value) << PIO_ESR_P11_Pos)) /* Assignment of value for P11 in the PIO_ESR register */
#define PIO_ESR_P12_Pos                       _UINT32_(12)                                         /* (PIO_ESR) Edge Interrupt Selection Position */
#define PIO_ESR_P12_Msk                       (_UINT32_(0x1) << PIO_ESR_P12_Pos)                   /* (PIO_ESR) Edge Interrupt Selection Mask */
#define PIO_ESR_P12(value)                    (PIO_ESR_P12_Msk & (_UINT32_(value) << PIO_ESR_P12_Pos)) /* Assignment of value for P12 in the PIO_ESR register */
#define PIO_ESR_P13_Pos                       _UINT32_(13)                                         /* (PIO_ESR) Edge Interrupt Selection Position */
#define PIO_ESR_P13_Msk                       (_UINT32_(0x1) << PIO_ESR_P13_Pos)                   /* (PIO_ESR) Edge Interrupt Selection Mask */
#define PIO_ESR_P13(value)                    (PIO_ESR_P13_Msk & (_UINT32_(value) << PIO_ESR_P13_Pos)) /* Assignment of value for P13 in the PIO_ESR register */
#define PIO_ESR_P14_Pos                       _UINT32_(14)                                         /* (PIO_ESR) Edge Interrupt Selection Position */
#define PIO_ESR_P14_Msk                       (_UINT32_(0x1) << PIO_ESR_P14_Pos)                   /* (PIO_ESR) Edge Interrupt Selection Mask */
#define PIO_ESR_P14(value)                    (PIO_ESR_P14_Msk & (_UINT32_(value) << PIO_ESR_P14_Pos)) /* Assignment of value for P14 in the PIO_ESR register */
#define PIO_ESR_P15_Pos                       _UINT32_(15)                                         /* (PIO_ESR) Edge Interrupt Selection Position */
#define PIO_ESR_P15_Msk                       (_UINT32_(0x1) << PIO_ESR_P15_Pos)                   /* (PIO_ESR) Edge Interrupt Selection Mask */
#define PIO_ESR_P15(value)                    (PIO_ESR_P15_Msk & (_UINT32_(value) << PIO_ESR_P15_Pos)) /* Assignment of value for P15 in the PIO_ESR register */
#define PIO_ESR_P16_Pos                       _UINT32_(16)                                         /* (PIO_ESR) Edge Interrupt Selection Position */
#define PIO_ESR_P16_Msk                       (_UINT32_(0x1) << PIO_ESR_P16_Pos)                   /* (PIO_ESR) Edge Interrupt Selection Mask */
#define PIO_ESR_P16(value)                    (PIO_ESR_P16_Msk & (_UINT32_(value) << PIO_ESR_P16_Pos)) /* Assignment of value for P16 in the PIO_ESR register */
#define PIO_ESR_P17_Pos                       _UINT32_(17)                                         /* (PIO_ESR) Edge Interrupt Selection Position */
#define PIO_ESR_P17_Msk                       (_UINT32_(0x1) << PIO_ESR_P17_Pos)                   /* (PIO_ESR) Edge Interrupt Selection Mask */
#define PIO_ESR_P17(value)                    (PIO_ESR_P17_Msk & (_UINT32_(value) << PIO_ESR_P17_Pos)) /* Assignment of value for P17 in the PIO_ESR register */
#define PIO_ESR_P18_Pos                       _UINT32_(18)                                         /* (PIO_ESR) Edge Interrupt Selection Position */
#define PIO_ESR_P18_Msk                       (_UINT32_(0x1) << PIO_ESR_P18_Pos)                   /* (PIO_ESR) Edge Interrupt Selection Mask */
#define PIO_ESR_P18(value)                    (PIO_ESR_P18_Msk & (_UINT32_(value) << PIO_ESR_P18_Pos)) /* Assignment of value for P18 in the PIO_ESR register */
#define PIO_ESR_P19_Pos                       _UINT32_(19)                                         /* (PIO_ESR) Edge Interrupt Selection Position */
#define PIO_ESR_P19_Msk                       (_UINT32_(0x1) << PIO_ESR_P19_Pos)                   /* (PIO_ESR) Edge Interrupt Selection Mask */
#define PIO_ESR_P19(value)                    (PIO_ESR_P19_Msk & (_UINT32_(value) << PIO_ESR_P19_Pos)) /* Assignment of value for P19 in the PIO_ESR register */
#define PIO_ESR_P20_Pos                       _UINT32_(20)                                         /* (PIO_ESR) Edge Interrupt Selection Position */
#define PIO_ESR_P20_Msk                       (_UINT32_(0x1) << PIO_ESR_P20_Pos)                   /* (PIO_ESR) Edge Interrupt Selection Mask */
#define PIO_ESR_P20(value)                    (PIO_ESR_P20_Msk & (_UINT32_(value) << PIO_ESR_P20_Pos)) /* Assignment of value for P20 in the PIO_ESR register */
#define PIO_ESR_P21_Pos                       _UINT32_(21)                                         /* (PIO_ESR) Edge Interrupt Selection Position */
#define PIO_ESR_P21_Msk                       (_UINT32_(0x1) << PIO_ESR_P21_Pos)                   /* (PIO_ESR) Edge Interrupt Selection Mask */
#define PIO_ESR_P21(value)                    (PIO_ESR_P21_Msk & (_UINT32_(value) << PIO_ESR_P21_Pos)) /* Assignment of value for P21 in the PIO_ESR register */
#define PIO_ESR_P22_Pos                       _UINT32_(22)                                         /* (PIO_ESR) Edge Interrupt Selection Position */
#define PIO_ESR_P22_Msk                       (_UINT32_(0x1) << PIO_ESR_P22_Pos)                   /* (PIO_ESR) Edge Interrupt Selection Mask */
#define PIO_ESR_P22(value)                    (PIO_ESR_P22_Msk & (_UINT32_(value) << PIO_ESR_P22_Pos)) /* Assignment of value for P22 in the PIO_ESR register */
#define PIO_ESR_P23_Pos                       _UINT32_(23)                                         /* (PIO_ESR) Edge Interrupt Selection Position */
#define PIO_ESR_P23_Msk                       (_UINT32_(0x1) << PIO_ESR_P23_Pos)                   /* (PIO_ESR) Edge Interrupt Selection Mask */
#define PIO_ESR_P23(value)                    (PIO_ESR_P23_Msk & (_UINT32_(value) << PIO_ESR_P23_Pos)) /* Assignment of value for P23 in the PIO_ESR register */
#define PIO_ESR_P24_Pos                       _UINT32_(24)                                         /* (PIO_ESR) Edge Interrupt Selection Position */
#define PIO_ESR_P24_Msk                       (_UINT32_(0x1) << PIO_ESR_P24_Pos)                   /* (PIO_ESR) Edge Interrupt Selection Mask */
#define PIO_ESR_P24(value)                    (PIO_ESR_P24_Msk & (_UINT32_(value) << PIO_ESR_P24_Pos)) /* Assignment of value for P24 in the PIO_ESR register */
#define PIO_ESR_P25_Pos                       _UINT32_(25)                                         /* (PIO_ESR) Edge Interrupt Selection Position */
#define PIO_ESR_P25_Msk                       (_UINT32_(0x1) << PIO_ESR_P25_Pos)                   /* (PIO_ESR) Edge Interrupt Selection Mask */
#define PIO_ESR_P25(value)                    (PIO_ESR_P25_Msk & (_UINT32_(value) << PIO_ESR_P25_Pos)) /* Assignment of value for P25 in the PIO_ESR register */
#define PIO_ESR_P26_Pos                       _UINT32_(26)                                         /* (PIO_ESR) Edge Interrupt Selection Position */
#define PIO_ESR_P26_Msk                       (_UINT32_(0x1) << PIO_ESR_P26_Pos)                   /* (PIO_ESR) Edge Interrupt Selection Mask */
#define PIO_ESR_P26(value)                    (PIO_ESR_P26_Msk & (_UINT32_(value) << PIO_ESR_P26_Pos)) /* Assignment of value for P26 in the PIO_ESR register */
#define PIO_ESR_P27_Pos                       _UINT32_(27)                                         /* (PIO_ESR) Edge Interrupt Selection Position */
#define PIO_ESR_P27_Msk                       (_UINT32_(0x1) << PIO_ESR_P27_Pos)                   /* (PIO_ESR) Edge Interrupt Selection Mask */
#define PIO_ESR_P27(value)                    (PIO_ESR_P27_Msk & (_UINT32_(value) << PIO_ESR_P27_Pos)) /* Assignment of value for P27 in the PIO_ESR register */
#define PIO_ESR_P28_Pos                       _UINT32_(28)                                         /* (PIO_ESR) Edge Interrupt Selection Position */
#define PIO_ESR_P28_Msk                       (_UINT32_(0x1) << PIO_ESR_P28_Pos)                   /* (PIO_ESR) Edge Interrupt Selection Mask */
#define PIO_ESR_P28(value)                    (PIO_ESR_P28_Msk & (_UINT32_(value) << PIO_ESR_P28_Pos)) /* Assignment of value for P28 in the PIO_ESR register */
#define PIO_ESR_P29_Pos                       _UINT32_(29)                                         /* (PIO_ESR) Edge Interrupt Selection Position */
#define PIO_ESR_P29_Msk                       (_UINT32_(0x1) << PIO_ESR_P29_Pos)                   /* (PIO_ESR) Edge Interrupt Selection Mask */
#define PIO_ESR_P29(value)                    (PIO_ESR_P29_Msk & (_UINT32_(value) << PIO_ESR_P29_Pos)) /* Assignment of value for P29 in the PIO_ESR register */
#define PIO_ESR_P30_Pos                       _UINT32_(30)                                         /* (PIO_ESR) Edge Interrupt Selection Position */
#define PIO_ESR_P30_Msk                       (_UINT32_(0x1) << PIO_ESR_P30_Pos)                   /* (PIO_ESR) Edge Interrupt Selection Mask */
#define PIO_ESR_P30(value)                    (PIO_ESR_P30_Msk & (_UINT32_(value) << PIO_ESR_P30_Pos)) /* Assignment of value for P30 in the PIO_ESR register */
#define PIO_ESR_P31_Pos                       _UINT32_(31)                                         /* (PIO_ESR) Edge Interrupt Selection Position */
#define PIO_ESR_P31_Msk                       (_UINT32_(0x1) << PIO_ESR_P31_Pos)                   /* (PIO_ESR) Edge Interrupt Selection Mask */
#define PIO_ESR_P31(value)                    (PIO_ESR_P31_Msk & (_UINT32_(value) << PIO_ESR_P31_Pos)) /* Assignment of value for P31 in the PIO_ESR register */
#define PIO_ESR_Msk                           _UINT32_(0xFFFFFFFF)                                 /* (PIO_ESR) Register Mask  */

#define PIO_ESR_P_Pos                         _UINT32_(0)                                          /* (PIO_ESR Position) Edge Interrupt Selection */
#define PIO_ESR_P_Msk                         (_UINT32_(0xFFFFFFFF) << PIO_ESR_P_Pos)              /* (PIO_ESR Mask) P */
#define PIO_ESR_P(value)                      (PIO_ESR_P_Msk & (_UINT32_(value) << PIO_ESR_P_Pos)) 

/* -------- PIO_LSR : (PIO Offset: 0xC4) ( /W 32) Level Select Register -------- */
#define PIO_LSR_P0_Pos                        _UINT32_(0)                                          /* (PIO_LSR) Level Interrupt Selection Position */
#define PIO_LSR_P0_Msk                        (_UINT32_(0x1) << PIO_LSR_P0_Pos)                    /* (PIO_LSR) Level Interrupt Selection Mask */
#define PIO_LSR_P0(value)                     (PIO_LSR_P0_Msk & (_UINT32_(value) << PIO_LSR_P0_Pos)) /* Assignment of value for P0 in the PIO_LSR register */
#define PIO_LSR_P1_Pos                        _UINT32_(1)                                          /* (PIO_LSR) Level Interrupt Selection Position */
#define PIO_LSR_P1_Msk                        (_UINT32_(0x1) << PIO_LSR_P1_Pos)                    /* (PIO_LSR) Level Interrupt Selection Mask */
#define PIO_LSR_P1(value)                     (PIO_LSR_P1_Msk & (_UINT32_(value) << PIO_LSR_P1_Pos)) /* Assignment of value for P1 in the PIO_LSR register */
#define PIO_LSR_P2_Pos                        _UINT32_(2)                                          /* (PIO_LSR) Level Interrupt Selection Position */
#define PIO_LSR_P2_Msk                        (_UINT32_(0x1) << PIO_LSR_P2_Pos)                    /* (PIO_LSR) Level Interrupt Selection Mask */
#define PIO_LSR_P2(value)                     (PIO_LSR_P2_Msk & (_UINT32_(value) << PIO_LSR_P2_Pos)) /* Assignment of value for P2 in the PIO_LSR register */
#define PIO_LSR_P3_Pos                        _UINT32_(3)                                          /* (PIO_LSR) Level Interrupt Selection Position */
#define PIO_LSR_P3_Msk                        (_UINT32_(0x1) << PIO_LSR_P3_Pos)                    /* (PIO_LSR) Level Interrupt Selection Mask */
#define PIO_LSR_P3(value)                     (PIO_LSR_P3_Msk & (_UINT32_(value) << PIO_LSR_P3_Pos)) /* Assignment of value for P3 in the PIO_LSR register */
#define PIO_LSR_P4_Pos                        _UINT32_(4)                                          /* (PIO_LSR) Level Interrupt Selection Position */
#define PIO_LSR_P4_Msk                        (_UINT32_(0x1) << PIO_LSR_P4_Pos)                    /* (PIO_LSR) Level Interrupt Selection Mask */
#define PIO_LSR_P4(value)                     (PIO_LSR_P4_Msk & (_UINT32_(value) << PIO_LSR_P4_Pos)) /* Assignment of value for P4 in the PIO_LSR register */
#define PIO_LSR_P5_Pos                        _UINT32_(5)                                          /* (PIO_LSR) Level Interrupt Selection Position */
#define PIO_LSR_P5_Msk                        (_UINT32_(0x1) << PIO_LSR_P5_Pos)                    /* (PIO_LSR) Level Interrupt Selection Mask */
#define PIO_LSR_P5(value)                     (PIO_LSR_P5_Msk & (_UINT32_(value) << PIO_LSR_P5_Pos)) /* Assignment of value for P5 in the PIO_LSR register */
#define PIO_LSR_P6_Pos                        _UINT32_(6)                                          /* (PIO_LSR) Level Interrupt Selection Position */
#define PIO_LSR_P6_Msk                        (_UINT32_(0x1) << PIO_LSR_P6_Pos)                    /* (PIO_LSR) Level Interrupt Selection Mask */
#define PIO_LSR_P6(value)                     (PIO_LSR_P6_Msk & (_UINT32_(value) << PIO_LSR_P6_Pos)) /* Assignment of value for P6 in the PIO_LSR register */
#define PIO_LSR_P7_Pos                        _UINT32_(7)                                          /* (PIO_LSR) Level Interrupt Selection Position */
#define PIO_LSR_P7_Msk                        (_UINT32_(0x1) << PIO_LSR_P7_Pos)                    /* (PIO_LSR) Level Interrupt Selection Mask */
#define PIO_LSR_P7(value)                     (PIO_LSR_P7_Msk & (_UINT32_(value) << PIO_LSR_P7_Pos)) /* Assignment of value for P7 in the PIO_LSR register */
#define PIO_LSR_P8_Pos                        _UINT32_(8)                                          /* (PIO_LSR) Level Interrupt Selection Position */
#define PIO_LSR_P8_Msk                        (_UINT32_(0x1) << PIO_LSR_P8_Pos)                    /* (PIO_LSR) Level Interrupt Selection Mask */
#define PIO_LSR_P8(value)                     (PIO_LSR_P8_Msk & (_UINT32_(value) << PIO_LSR_P8_Pos)) /* Assignment of value for P8 in the PIO_LSR register */
#define PIO_LSR_P9_Pos                        _UINT32_(9)                                          /* (PIO_LSR) Level Interrupt Selection Position */
#define PIO_LSR_P9_Msk                        (_UINT32_(0x1) << PIO_LSR_P9_Pos)                    /* (PIO_LSR) Level Interrupt Selection Mask */
#define PIO_LSR_P9(value)                     (PIO_LSR_P9_Msk & (_UINT32_(value) << PIO_LSR_P9_Pos)) /* Assignment of value for P9 in the PIO_LSR register */
#define PIO_LSR_P10_Pos                       _UINT32_(10)                                         /* (PIO_LSR) Level Interrupt Selection Position */
#define PIO_LSR_P10_Msk                       (_UINT32_(0x1) << PIO_LSR_P10_Pos)                   /* (PIO_LSR) Level Interrupt Selection Mask */
#define PIO_LSR_P10(value)                    (PIO_LSR_P10_Msk & (_UINT32_(value) << PIO_LSR_P10_Pos)) /* Assignment of value for P10 in the PIO_LSR register */
#define PIO_LSR_P11_Pos                       _UINT32_(11)                                         /* (PIO_LSR) Level Interrupt Selection Position */
#define PIO_LSR_P11_Msk                       (_UINT32_(0x1) << PIO_LSR_P11_Pos)                   /* (PIO_LSR) Level Interrupt Selection Mask */
#define PIO_LSR_P11(value)                    (PIO_LSR_P11_Msk & (_UINT32_(value) << PIO_LSR_P11_Pos)) /* Assignment of value for P11 in the PIO_LSR register */
#define PIO_LSR_P12_Pos                       _UINT32_(12)                                         /* (PIO_LSR) Level Interrupt Selection Position */
#define PIO_LSR_P12_Msk                       (_UINT32_(0x1) << PIO_LSR_P12_Pos)                   /* (PIO_LSR) Level Interrupt Selection Mask */
#define PIO_LSR_P12(value)                    (PIO_LSR_P12_Msk & (_UINT32_(value) << PIO_LSR_P12_Pos)) /* Assignment of value for P12 in the PIO_LSR register */
#define PIO_LSR_P13_Pos                       _UINT32_(13)                                         /* (PIO_LSR) Level Interrupt Selection Position */
#define PIO_LSR_P13_Msk                       (_UINT32_(0x1) << PIO_LSR_P13_Pos)                   /* (PIO_LSR) Level Interrupt Selection Mask */
#define PIO_LSR_P13(value)                    (PIO_LSR_P13_Msk & (_UINT32_(value) << PIO_LSR_P13_Pos)) /* Assignment of value for P13 in the PIO_LSR register */
#define PIO_LSR_P14_Pos                       _UINT32_(14)                                         /* (PIO_LSR) Level Interrupt Selection Position */
#define PIO_LSR_P14_Msk                       (_UINT32_(0x1) << PIO_LSR_P14_Pos)                   /* (PIO_LSR) Level Interrupt Selection Mask */
#define PIO_LSR_P14(value)                    (PIO_LSR_P14_Msk & (_UINT32_(value) << PIO_LSR_P14_Pos)) /* Assignment of value for P14 in the PIO_LSR register */
#define PIO_LSR_P15_Pos                       _UINT32_(15)                                         /* (PIO_LSR) Level Interrupt Selection Position */
#define PIO_LSR_P15_Msk                       (_UINT32_(0x1) << PIO_LSR_P15_Pos)                   /* (PIO_LSR) Level Interrupt Selection Mask */
#define PIO_LSR_P15(value)                    (PIO_LSR_P15_Msk & (_UINT32_(value) << PIO_LSR_P15_Pos)) /* Assignment of value for P15 in the PIO_LSR register */
#define PIO_LSR_P16_Pos                       _UINT32_(16)                                         /* (PIO_LSR) Level Interrupt Selection Position */
#define PIO_LSR_P16_Msk                       (_UINT32_(0x1) << PIO_LSR_P16_Pos)                   /* (PIO_LSR) Level Interrupt Selection Mask */
#define PIO_LSR_P16(value)                    (PIO_LSR_P16_Msk & (_UINT32_(value) << PIO_LSR_P16_Pos)) /* Assignment of value for P16 in the PIO_LSR register */
#define PIO_LSR_P17_Pos                       _UINT32_(17)                                         /* (PIO_LSR) Level Interrupt Selection Position */
#define PIO_LSR_P17_Msk                       (_UINT32_(0x1) << PIO_LSR_P17_Pos)                   /* (PIO_LSR) Level Interrupt Selection Mask */
#define PIO_LSR_P17(value)                    (PIO_LSR_P17_Msk & (_UINT32_(value) << PIO_LSR_P17_Pos)) /* Assignment of value for P17 in the PIO_LSR register */
#define PIO_LSR_P18_Pos                       _UINT32_(18)                                         /* (PIO_LSR) Level Interrupt Selection Position */
#define PIO_LSR_P18_Msk                       (_UINT32_(0x1) << PIO_LSR_P18_Pos)                   /* (PIO_LSR) Level Interrupt Selection Mask */
#define PIO_LSR_P18(value)                    (PIO_LSR_P18_Msk & (_UINT32_(value) << PIO_LSR_P18_Pos)) /* Assignment of value for P18 in the PIO_LSR register */
#define PIO_LSR_P19_Pos                       _UINT32_(19)                                         /* (PIO_LSR) Level Interrupt Selection Position */
#define PIO_LSR_P19_Msk                       (_UINT32_(0x1) << PIO_LSR_P19_Pos)                   /* (PIO_LSR) Level Interrupt Selection Mask */
#define PIO_LSR_P19(value)                    (PIO_LSR_P19_Msk & (_UINT32_(value) << PIO_LSR_P19_Pos)) /* Assignment of value for P19 in the PIO_LSR register */
#define PIO_LSR_P20_Pos                       _UINT32_(20)                                         /* (PIO_LSR) Level Interrupt Selection Position */
#define PIO_LSR_P20_Msk                       (_UINT32_(0x1) << PIO_LSR_P20_Pos)                   /* (PIO_LSR) Level Interrupt Selection Mask */
#define PIO_LSR_P20(value)                    (PIO_LSR_P20_Msk & (_UINT32_(value) << PIO_LSR_P20_Pos)) /* Assignment of value for P20 in the PIO_LSR register */
#define PIO_LSR_P21_Pos                       _UINT32_(21)                                         /* (PIO_LSR) Level Interrupt Selection Position */
#define PIO_LSR_P21_Msk                       (_UINT32_(0x1) << PIO_LSR_P21_Pos)                   /* (PIO_LSR) Level Interrupt Selection Mask */
#define PIO_LSR_P21(value)                    (PIO_LSR_P21_Msk & (_UINT32_(value) << PIO_LSR_P21_Pos)) /* Assignment of value for P21 in the PIO_LSR register */
#define PIO_LSR_P22_Pos                       _UINT32_(22)                                         /* (PIO_LSR) Level Interrupt Selection Position */
#define PIO_LSR_P22_Msk                       (_UINT32_(0x1) << PIO_LSR_P22_Pos)                   /* (PIO_LSR) Level Interrupt Selection Mask */
#define PIO_LSR_P22(value)                    (PIO_LSR_P22_Msk & (_UINT32_(value) << PIO_LSR_P22_Pos)) /* Assignment of value for P22 in the PIO_LSR register */
#define PIO_LSR_P23_Pos                       _UINT32_(23)                                         /* (PIO_LSR) Level Interrupt Selection Position */
#define PIO_LSR_P23_Msk                       (_UINT32_(0x1) << PIO_LSR_P23_Pos)                   /* (PIO_LSR) Level Interrupt Selection Mask */
#define PIO_LSR_P23(value)                    (PIO_LSR_P23_Msk & (_UINT32_(value) << PIO_LSR_P23_Pos)) /* Assignment of value for P23 in the PIO_LSR register */
#define PIO_LSR_P24_Pos                       _UINT32_(24)                                         /* (PIO_LSR) Level Interrupt Selection Position */
#define PIO_LSR_P24_Msk                       (_UINT32_(0x1) << PIO_LSR_P24_Pos)                   /* (PIO_LSR) Level Interrupt Selection Mask */
#define PIO_LSR_P24(value)                    (PIO_LSR_P24_Msk & (_UINT32_(value) << PIO_LSR_P24_Pos)) /* Assignment of value for P24 in the PIO_LSR register */
#define PIO_LSR_P25_Pos                       _UINT32_(25)                                         /* (PIO_LSR) Level Interrupt Selection Position */
#define PIO_LSR_P25_Msk                       (_UINT32_(0x1) << PIO_LSR_P25_Pos)                   /* (PIO_LSR) Level Interrupt Selection Mask */
#define PIO_LSR_P25(value)                    (PIO_LSR_P25_Msk & (_UINT32_(value) << PIO_LSR_P25_Pos)) /* Assignment of value for P25 in the PIO_LSR register */
#define PIO_LSR_P26_Pos                       _UINT32_(26)                                         /* (PIO_LSR) Level Interrupt Selection Position */
#define PIO_LSR_P26_Msk                       (_UINT32_(0x1) << PIO_LSR_P26_Pos)                   /* (PIO_LSR) Level Interrupt Selection Mask */
#define PIO_LSR_P26(value)                    (PIO_LSR_P26_Msk & (_UINT32_(value) << PIO_LSR_P26_Pos)) /* Assignment of value for P26 in the PIO_LSR register */
#define PIO_LSR_P27_Pos                       _UINT32_(27)                                         /* (PIO_LSR) Level Interrupt Selection Position */
#define PIO_LSR_P27_Msk                       (_UINT32_(0x1) << PIO_LSR_P27_Pos)                   /* (PIO_LSR) Level Interrupt Selection Mask */
#define PIO_LSR_P27(value)                    (PIO_LSR_P27_Msk & (_UINT32_(value) << PIO_LSR_P27_Pos)) /* Assignment of value for P27 in the PIO_LSR register */
#define PIO_LSR_P28_Pos                       _UINT32_(28)                                         /* (PIO_LSR) Level Interrupt Selection Position */
#define PIO_LSR_P28_Msk                       (_UINT32_(0x1) << PIO_LSR_P28_Pos)                   /* (PIO_LSR) Level Interrupt Selection Mask */
#define PIO_LSR_P28(value)                    (PIO_LSR_P28_Msk & (_UINT32_(value) << PIO_LSR_P28_Pos)) /* Assignment of value for P28 in the PIO_LSR register */
#define PIO_LSR_P29_Pos                       _UINT32_(29)                                         /* (PIO_LSR) Level Interrupt Selection Position */
#define PIO_LSR_P29_Msk                       (_UINT32_(0x1) << PIO_LSR_P29_Pos)                   /* (PIO_LSR) Level Interrupt Selection Mask */
#define PIO_LSR_P29(value)                    (PIO_LSR_P29_Msk & (_UINT32_(value) << PIO_LSR_P29_Pos)) /* Assignment of value for P29 in the PIO_LSR register */
#define PIO_LSR_P30_Pos                       _UINT32_(30)                                         /* (PIO_LSR) Level Interrupt Selection Position */
#define PIO_LSR_P30_Msk                       (_UINT32_(0x1) << PIO_LSR_P30_Pos)                   /* (PIO_LSR) Level Interrupt Selection Mask */
#define PIO_LSR_P30(value)                    (PIO_LSR_P30_Msk & (_UINT32_(value) << PIO_LSR_P30_Pos)) /* Assignment of value for P30 in the PIO_LSR register */
#define PIO_LSR_P31_Pos                       _UINT32_(31)                                         /* (PIO_LSR) Level Interrupt Selection Position */
#define PIO_LSR_P31_Msk                       (_UINT32_(0x1) << PIO_LSR_P31_Pos)                   /* (PIO_LSR) Level Interrupt Selection Mask */
#define PIO_LSR_P31(value)                    (PIO_LSR_P31_Msk & (_UINT32_(value) << PIO_LSR_P31_Pos)) /* Assignment of value for P31 in the PIO_LSR register */
#define PIO_LSR_Msk                           _UINT32_(0xFFFFFFFF)                                 /* (PIO_LSR) Register Mask  */

#define PIO_LSR_P_Pos                         _UINT32_(0)                                          /* (PIO_LSR Position) Level Interrupt Selection */
#define PIO_LSR_P_Msk                         (_UINT32_(0xFFFFFFFF) << PIO_LSR_P_Pos)              /* (PIO_LSR Mask) P */
#define PIO_LSR_P(value)                      (PIO_LSR_P_Msk & (_UINT32_(value) << PIO_LSR_P_Pos)) 

/* -------- PIO_ELSR : (PIO Offset: 0xC8) ( R/ 32) Edge/Level Status Register -------- */
#define PIO_ELSR_P0_Pos                       _UINT32_(0)                                          /* (PIO_ELSR) Edge/Level Interrupt Source Selection Position */
#define PIO_ELSR_P0_Msk                       (_UINT32_(0x1) << PIO_ELSR_P0_Pos)                   /* (PIO_ELSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_ELSR_P0(value)                    (PIO_ELSR_P0_Msk & (_UINT32_(value) << PIO_ELSR_P0_Pos)) /* Assignment of value for P0 in the PIO_ELSR register */
#define PIO_ELSR_P1_Pos                       _UINT32_(1)                                          /* (PIO_ELSR) Edge/Level Interrupt Source Selection Position */
#define PIO_ELSR_P1_Msk                       (_UINT32_(0x1) << PIO_ELSR_P1_Pos)                   /* (PIO_ELSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_ELSR_P1(value)                    (PIO_ELSR_P1_Msk & (_UINT32_(value) << PIO_ELSR_P1_Pos)) /* Assignment of value for P1 in the PIO_ELSR register */
#define PIO_ELSR_P2_Pos                       _UINT32_(2)                                          /* (PIO_ELSR) Edge/Level Interrupt Source Selection Position */
#define PIO_ELSR_P2_Msk                       (_UINT32_(0x1) << PIO_ELSR_P2_Pos)                   /* (PIO_ELSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_ELSR_P2(value)                    (PIO_ELSR_P2_Msk & (_UINT32_(value) << PIO_ELSR_P2_Pos)) /* Assignment of value for P2 in the PIO_ELSR register */
#define PIO_ELSR_P3_Pos                       _UINT32_(3)                                          /* (PIO_ELSR) Edge/Level Interrupt Source Selection Position */
#define PIO_ELSR_P3_Msk                       (_UINT32_(0x1) << PIO_ELSR_P3_Pos)                   /* (PIO_ELSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_ELSR_P3(value)                    (PIO_ELSR_P3_Msk & (_UINT32_(value) << PIO_ELSR_P3_Pos)) /* Assignment of value for P3 in the PIO_ELSR register */
#define PIO_ELSR_P4_Pos                       _UINT32_(4)                                          /* (PIO_ELSR) Edge/Level Interrupt Source Selection Position */
#define PIO_ELSR_P4_Msk                       (_UINT32_(0x1) << PIO_ELSR_P4_Pos)                   /* (PIO_ELSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_ELSR_P4(value)                    (PIO_ELSR_P4_Msk & (_UINT32_(value) << PIO_ELSR_P4_Pos)) /* Assignment of value for P4 in the PIO_ELSR register */
#define PIO_ELSR_P5_Pos                       _UINT32_(5)                                          /* (PIO_ELSR) Edge/Level Interrupt Source Selection Position */
#define PIO_ELSR_P5_Msk                       (_UINT32_(0x1) << PIO_ELSR_P5_Pos)                   /* (PIO_ELSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_ELSR_P5(value)                    (PIO_ELSR_P5_Msk & (_UINT32_(value) << PIO_ELSR_P5_Pos)) /* Assignment of value for P5 in the PIO_ELSR register */
#define PIO_ELSR_P6_Pos                       _UINT32_(6)                                          /* (PIO_ELSR) Edge/Level Interrupt Source Selection Position */
#define PIO_ELSR_P6_Msk                       (_UINT32_(0x1) << PIO_ELSR_P6_Pos)                   /* (PIO_ELSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_ELSR_P6(value)                    (PIO_ELSR_P6_Msk & (_UINT32_(value) << PIO_ELSR_P6_Pos)) /* Assignment of value for P6 in the PIO_ELSR register */
#define PIO_ELSR_P7_Pos                       _UINT32_(7)                                          /* (PIO_ELSR) Edge/Level Interrupt Source Selection Position */
#define PIO_ELSR_P7_Msk                       (_UINT32_(0x1) << PIO_ELSR_P7_Pos)                   /* (PIO_ELSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_ELSR_P7(value)                    (PIO_ELSR_P7_Msk & (_UINT32_(value) << PIO_ELSR_P7_Pos)) /* Assignment of value for P7 in the PIO_ELSR register */
#define PIO_ELSR_P8_Pos                       _UINT32_(8)                                          /* (PIO_ELSR) Edge/Level Interrupt Source Selection Position */
#define PIO_ELSR_P8_Msk                       (_UINT32_(0x1) << PIO_ELSR_P8_Pos)                   /* (PIO_ELSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_ELSR_P8(value)                    (PIO_ELSR_P8_Msk & (_UINT32_(value) << PIO_ELSR_P8_Pos)) /* Assignment of value for P8 in the PIO_ELSR register */
#define PIO_ELSR_P9_Pos                       _UINT32_(9)                                          /* (PIO_ELSR) Edge/Level Interrupt Source Selection Position */
#define PIO_ELSR_P9_Msk                       (_UINT32_(0x1) << PIO_ELSR_P9_Pos)                   /* (PIO_ELSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_ELSR_P9(value)                    (PIO_ELSR_P9_Msk & (_UINT32_(value) << PIO_ELSR_P9_Pos)) /* Assignment of value for P9 in the PIO_ELSR register */
#define PIO_ELSR_P10_Pos                      _UINT32_(10)                                         /* (PIO_ELSR) Edge/Level Interrupt Source Selection Position */
#define PIO_ELSR_P10_Msk                      (_UINT32_(0x1) << PIO_ELSR_P10_Pos)                  /* (PIO_ELSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_ELSR_P10(value)                   (PIO_ELSR_P10_Msk & (_UINT32_(value) << PIO_ELSR_P10_Pos)) /* Assignment of value for P10 in the PIO_ELSR register */
#define PIO_ELSR_P11_Pos                      _UINT32_(11)                                         /* (PIO_ELSR) Edge/Level Interrupt Source Selection Position */
#define PIO_ELSR_P11_Msk                      (_UINT32_(0x1) << PIO_ELSR_P11_Pos)                  /* (PIO_ELSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_ELSR_P11(value)                   (PIO_ELSR_P11_Msk & (_UINT32_(value) << PIO_ELSR_P11_Pos)) /* Assignment of value for P11 in the PIO_ELSR register */
#define PIO_ELSR_P12_Pos                      _UINT32_(12)                                         /* (PIO_ELSR) Edge/Level Interrupt Source Selection Position */
#define PIO_ELSR_P12_Msk                      (_UINT32_(0x1) << PIO_ELSR_P12_Pos)                  /* (PIO_ELSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_ELSR_P12(value)                   (PIO_ELSR_P12_Msk & (_UINT32_(value) << PIO_ELSR_P12_Pos)) /* Assignment of value for P12 in the PIO_ELSR register */
#define PIO_ELSR_P13_Pos                      _UINT32_(13)                                         /* (PIO_ELSR) Edge/Level Interrupt Source Selection Position */
#define PIO_ELSR_P13_Msk                      (_UINT32_(0x1) << PIO_ELSR_P13_Pos)                  /* (PIO_ELSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_ELSR_P13(value)                   (PIO_ELSR_P13_Msk & (_UINT32_(value) << PIO_ELSR_P13_Pos)) /* Assignment of value for P13 in the PIO_ELSR register */
#define PIO_ELSR_P14_Pos                      _UINT32_(14)                                         /* (PIO_ELSR) Edge/Level Interrupt Source Selection Position */
#define PIO_ELSR_P14_Msk                      (_UINT32_(0x1) << PIO_ELSR_P14_Pos)                  /* (PIO_ELSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_ELSR_P14(value)                   (PIO_ELSR_P14_Msk & (_UINT32_(value) << PIO_ELSR_P14_Pos)) /* Assignment of value for P14 in the PIO_ELSR register */
#define PIO_ELSR_P15_Pos                      _UINT32_(15)                                         /* (PIO_ELSR) Edge/Level Interrupt Source Selection Position */
#define PIO_ELSR_P15_Msk                      (_UINT32_(0x1) << PIO_ELSR_P15_Pos)                  /* (PIO_ELSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_ELSR_P15(value)                   (PIO_ELSR_P15_Msk & (_UINT32_(value) << PIO_ELSR_P15_Pos)) /* Assignment of value for P15 in the PIO_ELSR register */
#define PIO_ELSR_P16_Pos                      _UINT32_(16)                                         /* (PIO_ELSR) Edge/Level Interrupt Source Selection Position */
#define PIO_ELSR_P16_Msk                      (_UINT32_(0x1) << PIO_ELSR_P16_Pos)                  /* (PIO_ELSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_ELSR_P16(value)                   (PIO_ELSR_P16_Msk & (_UINT32_(value) << PIO_ELSR_P16_Pos)) /* Assignment of value for P16 in the PIO_ELSR register */
#define PIO_ELSR_P17_Pos                      _UINT32_(17)                                         /* (PIO_ELSR) Edge/Level Interrupt Source Selection Position */
#define PIO_ELSR_P17_Msk                      (_UINT32_(0x1) << PIO_ELSR_P17_Pos)                  /* (PIO_ELSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_ELSR_P17(value)                   (PIO_ELSR_P17_Msk & (_UINT32_(value) << PIO_ELSR_P17_Pos)) /* Assignment of value for P17 in the PIO_ELSR register */
#define PIO_ELSR_P18_Pos                      _UINT32_(18)                                         /* (PIO_ELSR) Edge/Level Interrupt Source Selection Position */
#define PIO_ELSR_P18_Msk                      (_UINT32_(0x1) << PIO_ELSR_P18_Pos)                  /* (PIO_ELSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_ELSR_P18(value)                   (PIO_ELSR_P18_Msk & (_UINT32_(value) << PIO_ELSR_P18_Pos)) /* Assignment of value for P18 in the PIO_ELSR register */
#define PIO_ELSR_P19_Pos                      _UINT32_(19)                                         /* (PIO_ELSR) Edge/Level Interrupt Source Selection Position */
#define PIO_ELSR_P19_Msk                      (_UINT32_(0x1) << PIO_ELSR_P19_Pos)                  /* (PIO_ELSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_ELSR_P19(value)                   (PIO_ELSR_P19_Msk & (_UINT32_(value) << PIO_ELSR_P19_Pos)) /* Assignment of value for P19 in the PIO_ELSR register */
#define PIO_ELSR_P20_Pos                      _UINT32_(20)                                         /* (PIO_ELSR) Edge/Level Interrupt Source Selection Position */
#define PIO_ELSR_P20_Msk                      (_UINT32_(0x1) << PIO_ELSR_P20_Pos)                  /* (PIO_ELSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_ELSR_P20(value)                   (PIO_ELSR_P20_Msk & (_UINT32_(value) << PIO_ELSR_P20_Pos)) /* Assignment of value for P20 in the PIO_ELSR register */
#define PIO_ELSR_P21_Pos                      _UINT32_(21)                                         /* (PIO_ELSR) Edge/Level Interrupt Source Selection Position */
#define PIO_ELSR_P21_Msk                      (_UINT32_(0x1) << PIO_ELSR_P21_Pos)                  /* (PIO_ELSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_ELSR_P21(value)                   (PIO_ELSR_P21_Msk & (_UINT32_(value) << PIO_ELSR_P21_Pos)) /* Assignment of value for P21 in the PIO_ELSR register */
#define PIO_ELSR_P22_Pos                      _UINT32_(22)                                         /* (PIO_ELSR) Edge/Level Interrupt Source Selection Position */
#define PIO_ELSR_P22_Msk                      (_UINT32_(0x1) << PIO_ELSR_P22_Pos)                  /* (PIO_ELSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_ELSR_P22(value)                   (PIO_ELSR_P22_Msk & (_UINT32_(value) << PIO_ELSR_P22_Pos)) /* Assignment of value for P22 in the PIO_ELSR register */
#define PIO_ELSR_P23_Pos                      _UINT32_(23)                                         /* (PIO_ELSR) Edge/Level Interrupt Source Selection Position */
#define PIO_ELSR_P23_Msk                      (_UINT32_(0x1) << PIO_ELSR_P23_Pos)                  /* (PIO_ELSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_ELSR_P23(value)                   (PIO_ELSR_P23_Msk & (_UINT32_(value) << PIO_ELSR_P23_Pos)) /* Assignment of value for P23 in the PIO_ELSR register */
#define PIO_ELSR_P24_Pos                      _UINT32_(24)                                         /* (PIO_ELSR) Edge/Level Interrupt Source Selection Position */
#define PIO_ELSR_P24_Msk                      (_UINT32_(0x1) << PIO_ELSR_P24_Pos)                  /* (PIO_ELSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_ELSR_P24(value)                   (PIO_ELSR_P24_Msk & (_UINT32_(value) << PIO_ELSR_P24_Pos)) /* Assignment of value for P24 in the PIO_ELSR register */
#define PIO_ELSR_P25_Pos                      _UINT32_(25)                                         /* (PIO_ELSR) Edge/Level Interrupt Source Selection Position */
#define PIO_ELSR_P25_Msk                      (_UINT32_(0x1) << PIO_ELSR_P25_Pos)                  /* (PIO_ELSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_ELSR_P25(value)                   (PIO_ELSR_P25_Msk & (_UINT32_(value) << PIO_ELSR_P25_Pos)) /* Assignment of value for P25 in the PIO_ELSR register */
#define PIO_ELSR_P26_Pos                      _UINT32_(26)                                         /* (PIO_ELSR) Edge/Level Interrupt Source Selection Position */
#define PIO_ELSR_P26_Msk                      (_UINT32_(0x1) << PIO_ELSR_P26_Pos)                  /* (PIO_ELSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_ELSR_P26(value)                   (PIO_ELSR_P26_Msk & (_UINT32_(value) << PIO_ELSR_P26_Pos)) /* Assignment of value for P26 in the PIO_ELSR register */
#define PIO_ELSR_P27_Pos                      _UINT32_(27)                                         /* (PIO_ELSR) Edge/Level Interrupt Source Selection Position */
#define PIO_ELSR_P27_Msk                      (_UINT32_(0x1) << PIO_ELSR_P27_Pos)                  /* (PIO_ELSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_ELSR_P27(value)                   (PIO_ELSR_P27_Msk & (_UINT32_(value) << PIO_ELSR_P27_Pos)) /* Assignment of value for P27 in the PIO_ELSR register */
#define PIO_ELSR_P28_Pos                      _UINT32_(28)                                         /* (PIO_ELSR) Edge/Level Interrupt Source Selection Position */
#define PIO_ELSR_P28_Msk                      (_UINT32_(0x1) << PIO_ELSR_P28_Pos)                  /* (PIO_ELSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_ELSR_P28(value)                   (PIO_ELSR_P28_Msk & (_UINT32_(value) << PIO_ELSR_P28_Pos)) /* Assignment of value for P28 in the PIO_ELSR register */
#define PIO_ELSR_P29_Pos                      _UINT32_(29)                                         /* (PIO_ELSR) Edge/Level Interrupt Source Selection Position */
#define PIO_ELSR_P29_Msk                      (_UINT32_(0x1) << PIO_ELSR_P29_Pos)                  /* (PIO_ELSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_ELSR_P29(value)                   (PIO_ELSR_P29_Msk & (_UINT32_(value) << PIO_ELSR_P29_Pos)) /* Assignment of value for P29 in the PIO_ELSR register */
#define PIO_ELSR_P30_Pos                      _UINT32_(30)                                         /* (PIO_ELSR) Edge/Level Interrupt Source Selection Position */
#define PIO_ELSR_P30_Msk                      (_UINT32_(0x1) << PIO_ELSR_P30_Pos)                  /* (PIO_ELSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_ELSR_P30(value)                   (PIO_ELSR_P30_Msk & (_UINT32_(value) << PIO_ELSR_P30_Pos)) /* Assignment of value for P30 in the PIO_ELSR register */
#define PIO_ELSR_P31_Pos                      _UINT32_(31)                                         /* (PIO_ELSR) Edge/Level Interrupt Source Selection Position */
#define PIO_ELSR_P31_Msk                      (_UINT32_(0x1) << PIO_ELSR_P31_Pos)                  /* (PIO_ELSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_ELSR_P31(value)                   (PIO_ELSR_P31_Msk & (_UINT32_(value) << PIO_ELSR_P31_Pos)) /* Assignment of value for P31 in the PIO_ELSR register */
#define PIO_ELSR_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (PIO_ELSR) Register Mask  */

#define PIO_ELSR_P_Pos                        _UINT32_(0)                                          /* (PIO_ELSR Position) Edge/Level Interrupt Source Selection */
#define PIO_ELSR_P_Msk                        (_UINT32_(0xFFFFFFFF) << PIO_ELSR_P_Pos)             /* (PIO_ELSR Mask) P */
#define PIO_ELSR_P(value)                     (PIO_ELSR_P_Msk & (_UINT32_(value) << PIO_ELSR_P_Pos)) 

/* -------- PIO_FELLSR : (PIO Offset: 0xD0) ( /W 32) Falling Edge/Low-Level Select Register -------- */
#define PIO_FELLSR_P0_Pos                     _UINT32_(0)                                          /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Position */
#define PIO_FELLSR_P0_Msk                     (_UINT32_(0x1) << PIO_FELLSR_P0_Pos)                 /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Mask */
#define PIO_FELLSR_P0(value)                  (PIO_FELLSR_P0_Msk & (_UINT32_(value) << PIO_FELLSR_P0_Pos)) /* Assignment of value for P0 in the PIO_FELLSR register */
#define PIO_FELLSR_P1_Pos                     _UINT32_(1)                                          /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Position */
#define PIO_FELLSR_P1_Msk                     (_UINT32_(0x1) << PIO_FELLSR_P1_Pos)                 /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Mask */
#define PIO_FELLSR_P1(value)                  (PIO_FELLSR_P1_Msk & (_UINT32_(value) << PIO_FELLSR_P1_Pos)) /* Assignment of value for P1 in the PIO_FELLSR register */
#define PIO_FELLSR_P2_Pos                     _UINT32_(2)                                          /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Position */
#define PIO_FELLSR_P2_Msk                     (_UINT32_(0x1) << PIO_FELLSR_P2_Pos)                 /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Mask */
#define PIO_FELLSR_P2(value)                  (PIO_FELLSR_P2_Msk & (_UINT32_(value) << PIO_FELLSR_P2_Pos)) /* Assignment of value for P2 in the PIO_FELLSR register */
#define PIO_FELLSR_P3_Pos                     _UINT32_(3)                                          /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Position */
#define PIO_FELLSR_P3_Msk                     (_UINT32_(0x1) << PIO_FELLSR_P3_Pos)                 /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Mask */
#define PIO_FELLSR_P3(value)                  (PIO_FELLSR_P3_Msk & (_UINT32_(value) << PIO_FELLSR_P3_Pos)) /* Assignment of value for P3 in the PIO_FELLSR register */
#define PIO_FELLSR_P4_Pos                     _UINT32_(4)                                          /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Position */
#define PIO_FELLSR_P4_Msk                     (_UINT32_(0x1) << PIO_FELLSR_P4_Pos)                 /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Mask */
#define PIO_FELLSR_P4(value)                  (PIO_FELLSR_P4_Msk & (_UINT32_(value) << PIO_FELLSR_P4_Pos)) /* Assignment of value for P4 in the PIO_FELLSR register */
#define PIO_FELLSR_P5_Pos                     _UINT32_(5)                                          /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Position */
#define PIO_FELLSR_P5_Msk                     (_UINT32_(0x1) << PIO_FELLSR_P5_Pos)                 /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Mask */
#define PIO_FELLSR_P5(value)                  (PIO_FELLSR_P5_Msk & (_UINT32_(value) << PIO_FELLSR_P5_Pos)) /* Assignment of value for P5 in the PIO_FELLSR register */
#define PIO_FELLSR_P6_Pos                     _UINT32_(6)                                          /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Position */
#define PIO_FELLSR_P6_Msk                     (_UINT32_(0x1) << PIO_FELLSR_P6_Pos)                 /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Mask */
#define PIO_FELLSR_P6(value)                  (PIO_FELLSR_P6_Msk & (_UINT32_(value) << PIO_FELLSR_P6_Pos)) /* Assignment of value for P6 in the PIO_FELLSR register */
#define PIO_FELLSR_P7_Pos                     _UINT32_(7)                                          /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Position */
#define PIO_FELLSR_P7_Msk                     (_UINT32_(0x1) << PIO_FELLSR_P7_Pos)                 /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Mask */
#define PIO_FELLSR_P7(value)                  (PIO_FELLSR_P7_Msk & (_UINT32_(value) << PIO_FELLSR_P7_Pos)) /* Assignment of value for P7 in the PIO_FELLSR register */
#define PIO_FELLSR_P8_Pos                     _UINT32_(8)                                          /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Position */
#define PIO_FELLSR_P8_Msk                     (_UINT32_(0x1) << PIO_FELLSR_P8_Pos)                 /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Mask */
#define PIO_FELLSR_P8(value)                  (PIO_FELLSR_P8_Msk & (_UINT32_(value) << PIO_FELLSR_P8_Pos)) /* Assignment of value for P8 in the PIO_FELLSR register */
#define PIO_FELLSR_P9_Pos                     _UINT32_(9)                                          /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Position */
#define PIO_FELLSR_P9_Msk                     (_UINT32_(0x1) << PIO_FELLSR_P9_Pos)                 /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Mask */
#define PIO_FELLSR_P9(value)                  (PIO_FELLSR_P9_Msk & (_UINT32_(value) << PIO_FELLSR_P9_Pos)) /* Assignment of value for P9 in the PIO_FELLSR register */
#define PIO_FELLSR_P10_Pos                    _UINT32_(10)                                         /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Position */
#define PIO_FELLSR_P10_Msk                    (_UINT32_(0x1) << PIO_FELLSR_P10_Pos)                /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Mask */
#define PIO_FELLSR_P10(value)                 (PIO_FELLSR_P10_Msk & (_UINT32_(value) << PIO_FELLSR_P10_Pos)) /* Assignment of value for P10 in the PIO_FELLSR register */
#define PIO_FELLSR_P11_Pos                    _UINT32_(11)                                         /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Position */
#define PIO_FELLSR_P11_Msk                    (_UINT32_(0x1) << PIO_FELLSR_P11_Pos)                /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Mask */
#define PIO_FELLSR_P11(value)                 (PIO_FELLSR_P11_Msk & (_UINT32_(value) << PIO_FELLSR_P11_Pos)) /* Assignment of value for P11 in the PIO_FELLSR register */
#define PIO_FELLSR_P12_Pos                    _UINT32_(12)                                         /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Position */
#define PIO_FELLSR_P12_Msk                    (_UINT32_(0x1) << PIO_FELLSR_P12_Pos)                /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Mask */
#define PIO_FELLSR_P12(value)                 (PIO_FELLSR_P12_Msk & (_UINT32_(value) << PIO_FELLSR_P12_Pos)) /* Assignment of value for P12 in the PIO_FELLSR register */
#define PIO_FELLSR_P13_Pos                    _UINT32_(13)                                         /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Position */
#define PIO_FELLSR_P13_Msk                    (_UINT32_(0x1) << PIO_FELLSR_P13_Pos)                /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Mask */
#define PIO_FELLSR_P13(value)                 (PIO_FELLSR_P13_Msk & (_UINT32_(value) << PIO_FELLSR_P13_Pos)) /* Assignment of value for P13 in the PIO_FELLSR register */
#define PIO_FELLSR_P14_Pos                    _UINT32_(14)                                         /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Position */
#define PIO_FELLSR_P14_Msk                    (_UINT32_(0x1) << PIO_FELLSR_P14_Pos)                /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Mask */
#define PIO_FELLSR_P14(value)                 (PIO_FELLSR_P14_Msk & (_UINT32_(value) << PIO_FELLSR_P14_Pos)) /* Assignment of value for P14 in the PIO_FELLSR register */
#define PIO_FELLSR_P15_Pos                    _UINT32_(15)                                         /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Position */
#define PIO_FELLSR_P15_Msk                    (_UINT32_(0x1) << PIO_FELLSR_P15_Pos)                /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Mask */
#define PIO_FELLSR_P15(value)                 (PIO_FELLSR_P15_Msk & (_UINT32_(value) << PIO_FELLSR_P15_Pos)) /* Assignment of value for P15 in the PIO_FELLSR register */
#define PIO_FELLSR_P16_Pos                    _UINT32_(16)                                         /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Position */
#define PIO_FELLSR_P16_Msk                    (_UINT32_(0x1) << PIO_FELLSR_P16_Pos)                /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Mask */
#define PIO_FELLSR_P16(value)                 (PIO_FELLSR_P16_Msk & (_UINT32_(value) << PIO_FELLSR_P16_Pos)) /* Assignment of value for P16 in the PIO_FELLSR register */
#define PIO_FELLSR_P17_Pos                    _UINT32_(17)                                         /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Position */
#define PIO_FELLSR_P17_Msk                    (_UINT32_(0x1) << PIO_FELLSR_P17_Pos)                /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Mask */
#define PIO_FELLSR_P17(value)                 (PIO_FELLSR_P17_Msk & (_UINT32_(value) << PIO_FELLSR_P17_Pos)) /* Assignment of value for P17 in the PIO_FELLSR register */
#define PIO_FELLSR_P18_Pos                    _UINT32_(18)                                         /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Position */
#define PIO_FELLSR_P18_Msk                    (_UINT32_(0x1) << PIO_FELLSR_P18_Pos)                /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Mask */
#define PIO_FELLSR_P18(value)                 (PIO_FELLSR_P18_Msk & (_UINT32_(value) << PIO_FELLSR_P18_Pos)) /* Assignment of value for P18 in the PIO_FELLSR register */
#define PIO_FELLSR_P19_Pos                    _UINT32_(19)                                         /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Position */
#define PIO_FELLSR_P19_Msk                    (_UINT32_(0x1) << PIO_FELLSR_P19_Pos)                /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Mask */
#define PIO_FELLSR_P19(value)                 (PIO_FELLSR_P19_Msk & (_UINT32_(value) << PIO_FELLSR_P19_Pos)) /* Assignment of value for P19 in the PIO_FELLSR register */
#define PIO_FELLSR_P20_Pos                    _UINT32_(20)                                         /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Position */
#define PIO_FELLSR_P20_Msk                    (_UINT32_(0x1) << PIO_FELLSR_P20_Pos)                /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Mask */
#define PIO_FELLSR_P20(value)                 (PIO_FELLSR_P20_Msk & (_UINT32_(value) << PIO_FELLSR_P20_Pos)) /* Assignment of value for P20 in the PIO_FELLSR register */
#define PIO_FELLSR_P21_Pos                    _UINT32_(21)                                         /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Position */
#define PIO_FELLSR_P21_Msk                    (_UINT32_(0x1) << PIO_FELLSR_P21_Pos)                /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Mask */
#define PIO_FELLSR_P21(value)                 (PIO_FELLSR_P21_Msk & (_UINT32_(value) << PIO_FELLSR_P21_Pos)) /* Assignment of value for P21 in the PIO_FELLSR register */
#define PIO_FELLSR_P22_Pos                    _UINT32_(22)                                         /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Position */
#define PIO_FELLSR_P22_Msk                    (_UINT32_(0x1) << PIO_FELLSR_P22_Pos)                /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Mask */
#define PIO_FELLSR_P22(value)                 (PIO_FELLSR_P22_Msk & (_UINT32_(value) << PIO_FELLSR_P22_Pos)) /* Assignment of value for P22 in the PIO_FELLSR register */
#define PIO_FELLSR_P23_Pos                    _UINT32_(23)                                         /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Position */
#define PIO_FELLSR_P23_Msk                    (_UINT32_(0x1) << PIO_FELLSR_P23_Pos)                /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Mask */
#define PIO_FELLSR_P23(value)                 (PIO_FELLSR_P23_Msk & (_UINT32_(value) << PIO_FELLSR_P23_Pos)) /* Assignment of value for P23 in the PIO_FELLSR register */
#define PIO_FELLSR_P24_Pos                    _UINT32_(24)                                         /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Position */
#define PIO_FELLSR_P24_Msk                    (_UINT32_(0x1) << PIO_FELLSR_P24_Pos)                /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Mask */
#define PIO_FELLSR_P24(value)                 (PIO_FELLSR_P24_Msk & (_UINT32_(value) << PIO_FELLSR_P24_Pos)) /* Assignment of value for P24 in the PIO_FELLSR register */
#define PIO_FELLSR_P25_Pos                    _UINT32_(25)                                         /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Position */
#define PIO_FELLSR_P25_Msk                    (_UINT32_(0x1) << PIO_FELLSR_P25_Pos)                /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Mask */
#define PIO_FELLSR_P25(value)                 (PIO_FELLSR_P25_Msk & (_UINT32_(value) << PIO_FELLSR_P25_Pos)) /* Assignment of value for P25 in the PIO_FELLSR register */
#define PIO_FELLSR_P26_Pos                    _UINT32_(26)                                         /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Position */
#define PIO_FELLSR_P26_Msk                    (_UINT32_(0x1) << PIO_FELLSR_P26_Pos)                /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Mask */
#define PIO_FELLSR_P26(value)                 (PIO_FELLSR_P26_Msk & (_UINT32_(value) << PIO_FELLSR_P26_Pos)) /* Assignment of value for P26 in the PIO_FELLSR register */
#define PIO_FELLSR_P27_Pos                    _UINT32_(27)                                         /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Position */
#define PIO_FELLSR_P27_Msk                    (_UINT32_(0x1) << PIO_FELLSR_P27_Pos)                /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Mask */
#define PIO_FELLSR_P27(value)                 (PIO_FELLSR_P27_Msk & (_UINT32_(value) << PIO_FELLSR_P27_Pos)) /* Assignment of value for P27 in the PIO_FELLSR register */
#define PIO_FELLSR_P28_Pos                    _UINT32_(28)                                         /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Position */
#define PIO_FELLSR_P28_Msk                    (_UINT32_(0x1) << PIO_FELLSR_P28_Pos)                /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Mask */
#define PIO_FELLSR_P28(value)                 (PIO_FELLSR_P28_Msk & (_UINT32_(value) << PIO_FELLSR_P28_Pos)) /* Assignment of value for P28 in the PIO_FELLSR register */
#define PIO_FELLSR_P29_Pos                    _UINT32_(29)                                         /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Position */
#define PIO_FELLSR_P29_Msk                    (_UINT32_(0x1) << PIO_FELLSR_P29_Pos)                /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Mask */
#define PIO_FELLSR_P29(value)                 (PIO_FELLSR_P29_Msk & (_UINT32_(value) << PIO_FELLSR_P29_Pos)) /* Assignment of value for P29 in the PIO_FELLSR register */
#define PIO_FELLSR_P30_Pos                    _UINT32_(30)                                         /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Position */
#define PIO_FELLSR_P30_Msk                    (_UINT32_(0x1) << PIO_FELLSR_P30_Pos)                /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Mask */
#define PIO_FELLSR_P30(value)                 (PIO_FELLSR_P30_Msk & (_UINT32_(value) << PIO_FELLSR_P30_Pos)) /* Assignment of value for P30 in the PIO_FELLSR register */
#define PIO_FELLSR_P31_Pos                    _UINT32_(31)                                         /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Position */
#define PIO_FELLSR_P31_Msk                    (_UINT32_(0x1) << PIO_FELLSR_P31_Pos)                /* (PIO_FELLSR) Falling Edge/Low-Level Interrupt Selection Mask */
#define PIO_FELLSR_P31(value)                 (PIO_FELLSR_P31_Msk & (_UINT32_(value) << PIO_FELLSR_P31_Pos)) /* Assignment of value for P31 in the PIO_FELLSR register */
#define PIO_FELLSR_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (PIO_FELLSR) Register Mask  */

#define PIO_FELLSR_P_Pos                      _UINT32_(0)                                          /* (PIO_FELLSR Position) Falling Edge/Low-Level Interrupt Selection */
#define PIO_FELLSR_P_Msk                      (_UINT32_(0xFFFFFFFF) << PIO_FELLSR_P_Pos)           /* (PIO_FELLSR Mask) P */
#define PIO_FELLSR_P(value)                   (PIO_FELLSR_P_Msk & (_UINT32_(value) << PIO_FELLSR_P_Pos)) 

/* -------- PIO_REHLSR : (PIO Offset: 0xD4) ( /W 32) Rising Edge/High-Level Select Register -------- */
#define PIO_REHLSR_P0_Pos                     _UINT32_(0)                                          /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Position */
#define PIO_REHLSR_P0_Msk                     (_UINT32_(0x1) << PIO_REHLSR_P0_Pos)                 /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Mask */
#define PIO_REHLSR_P0(value)                  (PIO_REHLSR_P0_Msk & (_UINT32_(value) << PIO_REHLSR_P0_Pos)) /* Assignment of value for P0 in the PIO_REHLSR register */
#define PIO_REHLSR_P1_Pos                     _UINT32_(1)                                          /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Position */
#define PIO_REHLSR_P1_Msk                     (_UINT32_(0x1) << PIO_REHLSR_P1_Pos)                 /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Mask */
#define PIO_REHLSR_P1(value)                  (PIO_REHLSR_P1_Msk & (_UINT32_(value) << PIO_REHLSR_P1_Pos)) /* Assignment of value for P1 in the PIO_REHLSR register */
#define PIO_REHLSR_P2_Pos                     _UINT32_(2)                                          /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Position */
#define PIO_REHLSR_P2_Msk                     (_UINT32_(0x1) << PIO_REHLSR_P2_Pos)                 /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Mask */
#define PIO_REHLSR_P2(value)                  (PIO_REHLSR_P2_Msk & (_UINT32_(value) << PIO_REHLSR_P2_Pos)) /* Assignment of value for P2 in the PIO_REHLSR register */
#define PIO_REHLSR_P3_Pos                     _UINT32_(3)                                          /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Position */
#define PIO_REHLSR_P3_Msk                     (_UINT32_(0x1) << PIO_REHLSR_P3_Pos)                 /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Mask */
#define PIO_REHLSR_P3(value)                  (PIO_REHLSR_P3_Msk & (_UINT32_(value) << PIO_REHLSR_P3_Pos)) /* Assignment of value for P3 in the PIO_REHLSR register */
#define PIO_REHLSR_P4_Pos                     _UINT32_(4)                                          /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Position */
#define PIO_REHLSR_P4_Msk                     (_UINT32_(0x1) << PIO_REHLSR_P4_Pos)                 /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Mask */
#define PIO_REHLSR_P4(value)                  (PIO_REHLSR_P4_Msk & (_UINT32_(value) << PIO_REHLSR_P4_Pos)) /* Assignment of value for P4 in the PIO_REHLSR register */
#define PIO_REHLSR_P5_Pos                     _UINT32_(5)                                          /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Position */
#define PIO_REHLSR_P5_Msk                     (_UINT32_(0x1) << PIO_REHLSR_P5_Pos)                 /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Mask */
#define PIO_REHLSR_P5(value)                  (PIO_REHLSR_P5_Msk & (_UINT32_(value) << PIO_REHLSR_P5_Pos)) /* Assignment of value for P5 in the PIO_REHLSR register */
#define PIO_REHLSR_P6_Pos                     _UINT32_(6)                                          /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Position */
#define PIO_REHLSR_P6_Msk                     (_UINT32_(0x1) << PIO_REHLSR_P6_Pos)                 /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Mask */
#define PIO_REHLSR_P6(value)                  (PIO_REHLSR_P6_Msk & (_UINT32_(value) << PIO_REHLSR_P6_Pos)) /* Assignment of value for P6 in the PIO_REHLSR register */
#define PIO_REHLSR_P7_Pos                     _UINT32_(7)                                          /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Position */
#define PIO_REHLSR_P7_Msk                     (_UINT32_(0x1) << PIO_REHLSR_P7_Pos)                 /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Mask */
#define PIO_REHLSR_P7(value)                  (PIO_REHLSR_P7_Msk & (_UINT32_(value) << PIO_REHLSR_P7_Pos)) /* Assignment of value for P7 in the PIO_REHLSR register */
#define PIO_REHLSR_P8_Pos                     _UINT32_(8)                                          /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Position */
#define PIO_REHLSR_P8_Msk                     (_UINT32_(0x1) << PIO_REHLSR_P8_Pos)                 /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Mask */
#define PIO_REHLSR_P8(value)                  (PIO_REHLSR_P8_Msk & (_UINT32_(value) << PIO_REHLSR_P8_Pos)) /* Assignment of value for P8 in the PIO_REHLSR register */
#define PIO_REHLSR_P9_Pos                     _UINT32_(9)                                          /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Position */
#define PIO_REHLSR_P9_Msk                     (_UINT32_(0x1) << PIO_REHLSR_P9_Pos)                 /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Mask */
#define PIO_REHLSR_P9(value)                  (PIO_REHLSR_P9_Msk & (_UINT32_(value) << PIO_REHLSR_P9_Pos)) /* Assignment of value for P9 in the PIO_REHLSR register */
#define PIO_REHLSR_P10_Pos                    _UINT32_(10)                                         /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Position */
#define PIO_REHLSR_P10_Msk                    (_UINT32_(0x1) << PIO_REHLSR_P10_Pos)                /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Mask */
#define PIO_REHLSR_P10(value)                 (PIO_REHLSR_P10_Msk & (_UINT32_(value) << PIO_REHLSR_P10_Pos)) /* Assignment of value for P10 in the PIO_REHLSR register */
#define PIO_REHLSR_P11_Pos                    _UINT32_(11)                                         /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Position */
#define PIO_REHLSR_P11_Msk                    (_UINT32_(0x1) << PIO_REHLSR_P11_Pos)                /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Mask */
#define PIO_REHLSR_P11(value)                 (PIO_REHLSR_P11_Msk & (_UINT32_(value) << PIO_REHLSR_P11_Pos)) /* Assignment of value for P11 in the PIO_REHLSR register */
#define PIO_REHLSR_P12_Pos                    _UINT32_(12)                                         /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Position */
#define PIO_REHLSR_P12_Msk                    (_UINT32_(0x1) << PIO_REHLSR_P12_Pos)                /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Mask */
#define PIO_REHLSR_P12(value)                 (PIO_REHLSR_P12_Msk & (_UINT32_(value) << PIO_REHLSR_P12_Pos)) /* Assignment of value for P12 in the PIO_REHLSR register */
#define PIO_REHLSR_P13_Pos                    _UINT32_(13)                                         /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Position */
#define PIO_REHLSR_P13_Msk                    (_UINT32_(0x1) << PIO_REHLSR_P13_Pos)                /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Mask */
#define PIO_REHLSR_P13(value)                 (PIO_REHLSR_P13_Msk & (_UINT32_(value) << PIO_REHLSR_P13_Pos)) /* Assignment of value for P13 in the PIO_REHLSR register */
#define PIO_REHLSR_P14_Pos                    _UINT32_(14)                                         /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Position */
#define PIO_REHLSR_P14_Msk                    (_UINT32_(0x1) << PIO_REHLSR_P14_Pos)                /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Mask */
#define PIO_REHLSR_P14(value)                 (PIO_REHLSR_P14_Msk & (_UINT32_(value) << PIO_REHLSR_P14_Pos)) /* Assignment of value for P14 in the PIO_REHLSR register */
#define PIO_REHLSR_P15_Pos                    _UINT32_(15)                                         /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Position */
#define PIO_REHLSR_P15_Msk                    (_UINT32_(0x1) << PIO_REHLSR_P15_Pos)                /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Mask */
#define PIO_REHLSR_P15(value)                 (PIO_REHLSR_P15_Msk & (_UINT32_(value) << PIO_REHLSR_P15_Pos)) /* Assignment of value for P15 in the PIO_REHLSR register */
#define PIO_REHLSR_P16_Pos                    _UINT32_(16)                                         /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Position */
#define PIO_REHLSR_P16_Msk                    (_UINT32_(0x1) << PIO_REHLSR_P16_Pos)                /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Mask */
#define PIO_REHLSR_P16(value)                 (PIO_REHLSR_P16_Msk & (_UINT32_(value) << PIO_REHLSR_P16_Pos)) /* Assignment of value for P16 in the PIO_REHLSR register */
#define PIO_REHLSR_P17_Pos                    _UINT32_(17)                                         /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Position */
#define PIO_REHLSR_P17_Msk                    (_UINT32_(0x1) << PIO_REHLSR_P17_Pos)                /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Mask */
#define PIO_REHLSR_P17(value)                 (PIO_REHLSR_P17_Msk & (_UINT32_(value) << PIO_REHLSR_P17_Pos)) /* Assignment of value for P17 in the PIO_REHLSR register */
#define PIO_REHLSR_P18_Pos                    _UINT32_(18)                                         /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Position */
#define PIO_REHLSR_P18_Msk                    (_UINT32_(0x1) << PIO_REHLSR_P18_Pos)                /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Mask */
#define PIO_REHLSR_P18(value)                 (PIO_REHLSR_P18_Msk & (_UINT32_(value) << PIO_REHLSR_P18_Pos)) /* Assignment of value for P18 in the PIO_REHLSR register */
#define PIO_REHLSR_P19_Pos                    _UINT32_(19)                                         /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Position */
#define PIO_REHLSR_P19_Msk                    (_UINT32_(0x1) << PIO_REHLSR_P19_Pos)                /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Mask */
#define PIO_REHLSR_P19(value)                 (PIO_REHLSR_P19_Msk & (_UINT32_(value) << PIO_REHLSR_P19_Pos)) /* Assignment of value for P19 in the PIO_REHLSR register */
#define PIO_REHLSR_P20_Pos                    _UINT32_(20)                                         /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Position */
#define PIO_REHLSR_P20_Msk                    (_UINT32_(0x1) << PIO_REHLSR_P20_Pos)                /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Mask */
#define PIO_REHLSR_P20(value)                 (PIO_REHLSR_P20_Msk & (_UINT32_(value) << PIO_REHLSR_P20_Pos)) /* Assignment of value for P20 in the PIO_REHLSR register */
#define PIO_REHLSR_P21_Pos                    _UINT32_(21)                                         /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Position */
#define PIO_REHLSR_P21_Msk                    (_UINT32_(0x1) << PIO_REHLSR_P21_Pos)                /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Mask */
#define PIO_REHLSR_P21(value)                 (PIO_REHLSR_P21_Msk & (_UINT32_(value) << PIO_REHLSR_P21_Pos)) /* Assignment of value for P21 in the PIO_REHLSR register */
#define PIO_REHLSR_P22_Pos                    _UINT32_(22)                                         /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Position */
#define PIO_REHLSR_P22_Msk                    (_UINT32_(0x1) << PIO_REHLSR_P22_Pos)                /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Mask */
#define PIO_REHLSR_P22(value)                 (PIO_REHLSR_P22_Msk & (_UINT32_(value) << PIO_REHLSR_P22_Pos)) /* Assignment of value for P22 in the PIO_REHLSR register */
#define PIO_REHLSR_P23_Pos                    _UINT32_(23)                                         /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Position */
#define PIO_REHLSR_P23_Msk                    (_UINT32_(0x1) << PIO_REHLSR_P23_Pos)                /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Mask */
#define PIO_REHLSR_P23(value)                 (PIO_REHLSR_P23_Msk & (_UINT32_(value) << PIO_REHLSR_P23_Pos)) /* Assignment of value for P23 in the PIO_REHLSR register */
#define PIO_REHLSR_P24_Pos                    _UINT32_(24)                                         /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Position */
#define PIO_REHLSR_P24_Msk                    (_UINT32_(0x1) << PIO_REHLSR_P24_Pos)                /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Mask */
#define PIO_REHLSR_P24(value)                 (PIO_REHLSR_P24_Msk & (_UINT32_(value) << PIO_REHLSR_P24_Pos)) /* Assignment of value for P24 in the PIO_REHLSR register */
#define PIO_REHLSR_P25_Pos                    _UINT32_(25)                                         /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Position */
#define PIO_REHLSR_P25_Msk                    (_UINT32_(0x1) << PIO_REHLSR_P25_Pos)                /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Mask */
#define PIO_REHLSR_P25(value)                 (PIO_REHLSR_P25_Msk & (_UINT32_(value) << PIO_REHLSR_P25_Pos)) /* Assignment of value for P25 in the PIO_REHLSR register */
#define PIO_REHLSR_P26_Pos                    _UINT32_(26)                                         /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Position */
#define PIO_REHLSR_P26_Msk                    (_UINT32_(0x1) << PIO_REHLSR_P26_Pos)                /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Mask */
#define PIO_REHLSR_P26(value)                 (PIO_REHLSR_P26_Msk & (_UINT32_(value) << PIO_REHLSR_P26_Pos)) /* Assignment of value for P26 in the PIO_REHLSR register */
#define PIO_REHLSR_P27_Pos                    _UINT32_(27)                                         /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Position */
#define PIO_REHLSR_P27_Msk                    (_UINT32_(0x1) << PIO_REHLSR_P27_Pos)                /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Mask */
#define PIO_REHLSR_P27(value)                 (PIO_REHLSR_P27_Msk & (_UINT32_(value) << PIO_REHLSR_P27_Pos)) /* Assignment of value for P27 in the PIO_REHLSR register */
#define PIO_REHLSR_P28_Pos                    _UINT32_(28)                                         /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Position */
#define PIO_REHLSR_P28_Msk                    (_UINT32_(0x1) << PIO_REHLSR_P28_Pos)                /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Mask */
#define PIO_REHLSR_P28(value)                 (PIO_REHLSR_P28_Msk & (_UINT32_(value) << PIO_REHLSR_P28_Pos)) /* Assignment of value for P28 in the PIO_REHLSR register */
#define PIO_REHLSR_P29_Pos                    _UINT32_(29)                                         /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Position */
#define PIO_REHLSR_P29_Msk                    (_UINT32_(0x1) << PIO_REHLSR_P29_Pos)                /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Mask */
#define PIO_REHLSR_P29(value)                 (PIO_REHLSR_P29_Msk & (_UINT32_(value) << PIO_REHLSR_P29_Pos)) /* Assignment of value for P29 in the PIO_REHLSR register */
#define PIO_REHLSR_P30_Pos                    _UINT32_(30)                                         /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Position */
#define PIO_REHLSR_P30_Msk                    (_UINT32_(0x1) << PIO_REHLSR_P30_Pos)                /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Mask */
#define PIO_REHLSR_P30(value)                 (PIO_REHLSR_P30_Msk & (_UINT32_(value) << PIO_REHLSR_P30_Pos)) /* Assignment of value for P30 in the PIO_REHLSR register */
#define PIO_REHLSR_P31_Pos                    _UINT32_(31)                                         /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Position */
#define PIO_REHLSR_P31_Msk                    (_UINT32_(0x1) << PIO_REHLSR_P31_Pos)                /* (PIO_REHLSR) Rising Edge/High-Level Interrupt Selection Mask */
#define PIO_REHLSR_P31(value)                 (PIO_REHLSR_P31_Msk & (_UINT32_(value) << PIO_REHLSR_P31_Pos)) /* Assignment of value for P31 in the PIO_REHLSR register */
#define PIO_REHLSR_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (PIO_REHLSR) Register Mask  */

#define PIO_REHLSR_P_Pos                      _UINT32_(0)                                          /* (PIO_REHLSR Position) Rising Edge/High-Level Interrupt Selection */
#define PIO_REHLSR_P_Msk                      (_UINT32_(0xFFFFFFFF) << PIO_REHLSR_P_Pos)           /* (PIO_REHLSR Mask) P */
#define PIO_REHLSR_P(value)                   (PIO_REHLSR_P_Msk & (_UINT32_(value) << PIO_REHLSR_P_Pos)) 

/* -------- PIO_FRLHSR : (PIO Offset: 0xD8) ( R/ 32) Fall/Rise - Low/High Status Register -------- */
#define PIO_FRLHSR_P0_Pos                     _UINT32_(0)                                          /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Position */
#define PIO_FRLHSR_P0_Msk                     (_UINT32_(0x1) << PIO_FRLHSR_P0_Pos)                 /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_FRLHSR_P0(value)                  (PIO_FRLHSR_P0_Msk & (_UINT32_(value) << PIO_FRLHSR_P0_Pos)) /* Assignment of value for P0 in the PIO_FRLHSR register */
#define PIO_FRLHSR_P1_Pos                     _UINT32_(1)                                          /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Position */
#define PIO_FRLHSR_P1_Msk                     (_UINT32_(0x1) << PIO_FRLHSR_P1_Pos)                 /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_FRLHSR_P1(value)                  (PIO_FRLHSR_P1_Msk & (_UINT32_(value) << PIO_FRLHSR_P1_Pos)) /* Assignment of value for P1 in the PIO_FRLHSR register */
#define PIO_FRLHSR_P2_Pos                     _UINT32_(2)                                          /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Position */
#define PIO_FRLHSR_P2_Msk                     (_UINT32_(0x1) << PIO_FRLHSR_P2_Pos)                 /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_FRLHSR_P2(value)                  (PIO_FRLHSR_P2_Msk & (_UINT32_(value) << PIO_FRLHSR_P2_Pos)) /* Assignment of value for P2 in the PIO_FRLHSR register */
#define PIO_FRLHSR_P3_Pos                     _UINT32_(3)                                          /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Position */
#define PIO_FRLHSR_P3_Msk                     (_UINT32_(0x1) << PIO_FRLHSR_P3_Pos)                 /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_FRLHSR_P3(value)                  (PIO_FRLHSR_P3_Msk & (_UINT32_(value) << PIO_FRLHSR_P3_Pos)) /* Assignment of value for P3 in the PIO_FRLHSR register */
#define PIO_FRLHSR_P4_Pos                     _UINT32_(4)                                          /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Position */
#define PIO_FRLHSR_P4_Msk                     (_UINT32_(0x1) << PIO_FRLHSR_P4_Pos)                 /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_FRLHSR_P4(value)                  (PIO_FRLHSR_P4_Msk & (_UINT32_(value) << PIO_FRLHSR_P4_Pos)) /* Assignment of value for P4 in the PIO_FRLHSR register */
#define PIO_FRLHSR_P5_Pos                     _UINT32_(5)                                          /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Position */
#define PIO_FRLHSR_P5_Msk                     (_UINT32_(0x1) << PIO_FRLHSR_P5_Pos)                 /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_FRLHSR_P5(value)                  (PIO_FRLHSR_P5_Msk & (_UINT32_(value) << PIO_FRLHSR_P5_Pos)) /* Assignment of value for P5 in the PIO_FRLHSR register */
#define PIO_FRLHSR_P6_Pos                     _UINT32_(6)                                          /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Position */
#define PIO_FRLHSR_P6_Msk                     (_UINT32_(0x1) << PIO_FRLHSR_P6_Pos)                 /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_FRLHSR_P6(value)                  (PIO_FRLHSR_P6_Msk & (_UINT32_(value) << PIO_FRLHSR_P6_Pos)) /* Assignment of value for P6 in the PIO_FRLHSR register */
#define PIO_FRLHSR_P7_Pos                     _UINT32_(7)                                          /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Position */
#define PIO_FRLHSR_P7_Msk                     (_UINT32_(0x1) << PIO_FRLHSR_P7_Pos)                 /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_FRLHSR_P7(value)                  (PIO_FRLHSR_P7_Msk & (_UINT32_(value) << PIO_FRLHSR_P7_Pos)) /* Assignment of value for P7 in the PIO_FRLHSR register */
#define PIO_FRLHSR_P8_Pos                     _UINT32_(8)                                          /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Position */
#define PIO_FRLHSR_P8_Msk                     (_UINT32_(0x1) << PIO_FRLHSR_P8_Pos)                 /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_FRLHSR_P8(value)                  (PIO_FRLHSR_P8_Msk & (_UINT32_(value) << PIO_FRLHSR_P8_Pos)) /* Assignment of value for P8 in the PIO_FRLHSR register */
#define PIO_FRLHSR_P9_Pos                     _UINT32_(9)                                          /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Position */
#define PIO_FRLHSR_P9_Msk                     (_UINT32_(0x1) << PIO_FRLHSR_P9_Pos)                 /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_FRLHSR_P9(value)                  (PIO_FRLHSR_P9_Msk & (_UINT32_(value) << PIO_FRLHSR_P9_Pos)) /* Assignment of value for P9 in the PIO_FRLHSR register */
#define PIO_FRLHSR_P10_Pos                    _UINT32_(10)                                         /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Position */
#define PIO_FRLHSR_P10_Msk                    (_UINT32_(0x1) << PIO_FRLHSR_P10_Pos)                /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_FRLHSR_P10(value)                 (PIO_FRLHSR_P10_Msk & (_UINT32_(value) << PIO_FRLHSR_P10_Pos)) /* Assignment of value for P10 in the PIO_FRLHSR register */
#define PIO_FRLHSR_P11_Pos                    _UINT32_(11)                                         /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Position */
#define PIO_FRLHSR_P11_Msk                    (_UINT32_(0x1) << PIO_FRLHSR_P11_Pos)                /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_FRLHSR_P11(value)                 (PIO_FRLHSR_P11_Msk & (_UINT32_(value) << PIO_FRLHSR_P11_Pos)) /* Assignment of value for P11 in the PIO_FRLHSR register */
#define PIO_FRLHSR_P12_Pos                    _UINT32_(12)                                         /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Position */
#define PIO_FRLHSR_P12_Msk                    (_UINT32_(0x1) << PIO_FRLHSR_P12_Pos)                /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_FRLHSR_P12(value)                 (PIO_FRLHSR_P12_Msk & (_UINT32_(value) << PIO_FRLHSR_P12_Pos)) /* Assignment of value for P12 in the PIO_FRLHSR register */
#define PIO_FRLHSR_P13_Pos                    _UINT32_(13)                                         /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Position */
#define PIO_FRLHSR_P13_Msk                    (_UINT32_(0x1) << PIO_FRLHSR_P13_Pos)                /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_FRLHSR_P13(value)                 (PIO_FRLHSR_P13_Msk & (_UINT32_(value) << PIO_FRLHSR_P13_Pos)) /* Assignment of value for P13 in the PIO_FRLHSR register */
#define PIO_FRLHSR_P14_Pos                    _UINT32_(14)                                         /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Position */
#define PIO_FRLHSR_P14_Msk                    (_UINT32_(0x1) << PIO_FRLHSR_P14_Pos)                /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_FRLHSR_P14(value)                 (PIO_FRLHSR_P14_Msk & (_UINT32_(value) << PIO_FRLHSR_P14_Pos)) /* Assignment of value for P14 in the PIO_FRLHSR register */
#define PIO_FRLHSR_P15_Pos                    _UINT32_(15)                                         /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Position */
#define PIO_FRLHSR_P15_Msk                    (_UINT32_(0x1) << PIO_FRLHSR_P15_Pos)                /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_FRLHSR_P15(value)                 (PIO_FRLHSR_P15_Msk & (_UINT32_(value) << PIO_FRLHSR_P15_Pos)) /* Assignment of value for P15 in the PIO_FRLHSR register */
#define PIO_FRLHSR_P16_Pos                    _UINT32_(16)                                         /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Position */
#define PIO_FRLHSR_P16_Msk                    (_UINT32_(0x1) << PIO_FRLHSR_P16_Pos)                /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_FRLHSR_P16(value)                 (PIO_FRLHSR_P16_Msk & (_UINT32_(value) << PIO_FRLHSR_P16_Pos)) /* Assignment of value for P16 in the PIO_FRLHSR register */
#define PIO_FRLHSR_P17_Pos                    _UINT32_(17)                                         /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Position */
#define PIO_FRLHSR_P17_Msk                    (_UINT32_(0x1) << PIO_FRLHSR_P17_Pos)                /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_FRLHSR_P17(value)                 (PIO_FRLHSR_P17_Msk & (_UINT32_(value) << PIO_FRLHSR_P17_Pos)) /* Assignment of value for P17 in the PIO_FRLHSR register */
#define PIO_FRLHSR_P18_Pos                    _UINT32_(18)                                         /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Position */
#define PIO_FRLHSR_P18_Msk                    (_UINT32_(0x1) << PIO_FRLHSR_P18_Pos)                /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_FRLHSR_P18(value)                 (PIO_FRLHSR_P18_Msk & (_UINT32_(value) << PIO_FRLHSR_P18_Pos)) /* Assignment of value for P18 in the PIO_FRLHSR register */
#define PIO_FRLHSR_P19_Pos                    _UINT32_(19)                                         /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Position */
#define PIO_FRLHSR_P19_Msk                    (_UINT32_(0x1) << PIO_FRLHSR_P19_Pos)                /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_FRLHSR_P19(value)                 (PIO_FRLHSR_P19_Msk & (_UINT32_(value) << PIO_FRLHSR_P19_Pos)) /* Assignment of value for P19 in the PIO_FRLHSR register */
#define PIO_FRLHSR_P20_Pos                    _UINT32_(20)                                         /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Position */
#define PIO_FRLHSR_P20_Msk                    (_UINT32_(0x1) << PIO_FRLHSR_P20_Pos)                /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_FRLHSR_P20(value)                 (PIO_FRLHSR_P20_Msk & (_UINT32_(value) << PIO_FRLHSR_P20_Pos)) /* Assignment of value for P20 in the PIO_FRLHSR register */
#define PIO_FRLHSR_P21_Pos                    _UINT32_(21)                                         /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Position */
#define PIO_FRLHSR_P21_Msk                    (_UINT32_(0x1) << PIO_FRLHSR_P21_Pos)                /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_FRLHSR_P21(value)                 (PIO_FRLHSR_P21_Msk & (_UINT32_(value) << PIO_FRLHSR_P21_Pos)) /* Assignment of value for P21 in the PIO_FRLHSR register */
#define PIO_FRLHSR_P22_Pos                    _UINT32_(22)                                         /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Position */
#define PIO_FRLHSR_P22_Msk                    (_UINT32_(0x1) << PIO_FRLHSR_P22_Pos)                /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_FRLHSR_P22(value)                 (PIO_FRLHSR_P22_Msk & (_UINT32_(value) << PIO_FRLHSR_P22_Pos)) /* Assignment of value for P22 in the PIO_FRLHSR register */
#define PIO_FRLHSR_P23_Pos                    _UINT32_(23)                                         /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Position */
#define PIO_FRLHSR_P23_Msk                    (_UINT32_(0x1) << PIO_FRLHSR_P23_Pos)                /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_FRLHSR_P23(value)                 (PIO_FRLHSR_P23_Msk & (_UINT32_(value) << PIO_FRLHSR_P23_Pos)) /* Assignment of value for P23 in the PIO_FRLHSR register */
#define PIO_FRLHSR_P24_Pos                    _UINT32_(24)                                         /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Position */
#define PIO_FRLHSR_P24_Msk                    (_UINT32_(0x1) << PIO_FRLHSR_P24_Pos)                /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_FRLHSR_P24(value)                 (PIO_FRLHSR_P24_Msk & (_UINT32_(value) << PIO_FRLHSR_P24_Pos)) /* Assignment of value for P24 in the PIO_FRLHSR register */
#define PIO_FRLHSR_P25_Pos                    _UINT32_(25)                                         /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Position */
#define PIO_FRLHSR_P25_Msk                    (_UINT32_(0x1) << PIO_FRLHSR_P25_Pos)                /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_FRLHSR_P25(value)                 (PIO_FRLHSR_P25_Msk & (_UINT32_(value) << PIO_FRLHSR_P25_Pos)) /* Assignment of value for P25 in the PIO_FRLHSR register */
#define PIO_FRLHSR_P26_Pos                    _UINT32_(26)                                         /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Position */
#define PIO_FRLHSR_P26_Msk                    (_UINT32_(0x1) << PIO_FRLHSR_P26_Pos)                /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_FRLHSR_P26(value)                 (PIO_FRLHSR_P26_Msk & (_UINT32_(value) << PIO_FRLHSR_P26_Pos)) /* Assignment of value for P26 in the PIO_FRLHSR register */
#define PIO_FRLHSR_P27_Pos                    _UINT32_(27)                                         /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Position */
#define PIO_FRLHSR_P27_Msk                    (_UINT32_(0x1) << PIO_FRLHSR_P27_Pos)                /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_FRLHSR_P27(value)                 (PIO_FRLHSR_P27_Msk & (_UINT32_(value) << PIO_FRLHSR_P27_Pos)) /* Assignment of value for P27 in the PIO_FRLHSR register */
#define PIO_FRLHSR_P28_Pos                    _UINT32_(28)                                         /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Position */
#define PIO_FRLHSR_P28_Msk                    (_UINT32_(0x1) << PIO_FRLHSR_P28_Pos)                /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_FRLHSR_P28(value)                 (PIO_FRLHSR_P28_Msk & (_UINT32_(value) << PIO_FRLHSR_P28_Pos)) /* Assignment of value for P28 in the PIO_FRLHSR register */
#define PIO_FRLHSR_P29_Pos                    _UINT32_(29)                                         /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Position */
#define PIO_FRLHSR_P29_Msk                    (_UINT32_(0x1) << PIO_FRLHSR_P29_Pos)                /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_FRLHSR_P29(value)                 (PIO_FRLHSR_P29_Msk & (_UINT32_(value) << PIO_FRLHSR_P29_Pos)) /* Assignment of value for P29 in the PIO_FRLHSR register */
#define PIO_FRLHSR_P30_Pos                    _UINT32_(30)                                         /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Position */
#define PIO_FRLHSR_P30_Msk                    (_UINT32_(0x1) << PIO_FRLHSR_P30_Pos)                /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_FRLHSR_P30(value)                 (PIO_FRLHSR_P30_Msk & (_UINT32_(value) << PIO_FRLHSR_P30_Pos)) /* Assignment of value for P30 in the PIO_FRLHSR register */
#define PIO_FRLHSR_P31_Pos                    _UINT32_(31)                                         /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Position */
#define PIO_FRLHSR_P31_Msk                    (_UINT32_(0x1) << PIO_FRLHSR_P31_Pos)                /* (PIO_FRLHSR) Edge/Level Interrupt Source Selection Mask */
#define PIO_FRLHSR_P31(value)                 (PIO_FRLHSR_P31_Msk & (_UINT32_(value) << PIO_FRLHSR_P31_Pos)) /* Assignment of value for P31 in the PIO_FRLHSR register */
#define PIO_FRLHSR_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (PIO_FRLHSR) Register Mask  */

#define PIO_FRLHSR_P_Pos                      _UINT32_(0)                                          /* (PIO_FRLHSR Position) Edge/Level Interrupt Source Selection */
#define PIO_FRLHSR_P_Msk                      (_UINT32_(0xFFFFFFFF) << PIO_FRLHSR_P_Pos)           /* (PIO_FRLHSR Mask) P */
#define PIO_FRLHSR_P(value)                   (PIO_FRLHSR_P_Msk & (_UINT32_(value) << PIO_FRLHSR_P_Pos)) 

/* -------- PIO_LOCKSR : (PIO Offset: 0xE0) ( R/ 32) Lock Status -------- */
#define PIO_LOCKSR_P0_Pos                     _UINT32_(0)                                          /* (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P0_Msk                     (_UINT32_(0x1) << PIO_LOCKSR_P0_Pos)                 /* (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P0(value)                  (PIO_LOCKSR_P0_Msk & (_UINT32_(value) << PIO_LOCKSR_P0_Pos)) /* Assignment of value for P0 in the PIO_LOCKSR register */
#define PIO_LOCKSR_P1_Pos                     _UINT32_(1)                                          /* (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P1_Msk                     (_UINT32_(0x1) << PIO_LOCKSR_P1_Pos)                 /* (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P1(value)                  (PIO_LOCKSR_P1_Msk & (_UINT32_(value) << PIO_LOCKSR_P1_Pos)) /* Assignment of value for P1 in the PIO_LOCKSR register */
#define PIO_LOCKSR_P2_Pos                     _UINT32_(2)                                          /* (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P2_Msk                     (_UINT32_(0x1) << PIO_LOCKSR_P2_Pos)                 /* (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P2(value)                  (PIO_LOCKSR_P2_Msk & (_UINT32_(value) << PIO_LOCKSR_P2_Pos)) /* Assignment of value for P2 in the PIO_LOCKSR register */
#define PIO_LOCKSR_P3_Pos                     _UINT32_(3)                                          /* (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P3_Msk                     (_UINT32_(0x1) << PIO_LOCKSR_P3_Pos)                 /* (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P3(value)                  (PIO_LOCKSR_P3_Msk & (_UINT32_(value) << PIO_LOCKSR_P3_Pos)) /* Assignment of value for P3 in the PIO_LOCKSR register */
#define PIO_LOCKSR_P4_Pos                     _UINT32_(4)                                          /* (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P4_Msk                     (_UINT32_(0x1) << PIO_LOCKSR_P4_Pos)                 /* (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P4(value)                  (PIO_LOCKSR_P4_Msk & (_UINT32_(value) << PIO_LOCKSR_P4_Pos)) /* Assignment of value for P4 in the PIO_LOCKSR register */
#define PIO_LOCKSR_P5_Pos                     _UINT32_(5)                                          /* (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P5_Msk                     (_UINT32_(0x1) << PIO_LOCKSR_P5_Pos)                 /* (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P5(value)                  (PIO_LOCKSR_P5_Msk & (_UINT32_(value) << PIO_LOCKSR_P5_Pos)) /* Assignment of value for P5 in the PIO_LOCKSR register */
#define PIO_LOCKSR_P6_Pos                     _UINT32_(6)                                          /* (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P6_Msk                     (_UINT32_(0x1) << PIO_LOCKSR_P6_Pos)                 /* (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P6(value)                  (PIO_LOCKSR_P6_Msk & (_UINT32_(value) << PIO_LOCKSR_P6_Pos)) /* Assignment of value for P6 in the PIO_LOCKSR register */
#define PIO_LOCKSR_P7_Pos                     _UINT32_(7)                                          /* (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P7_Msk                     (_UINT32_(0x1) << PIO_LOCKSR_P7_Pos)                 /* (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P7(value)                  (PIO_LOCKSR_P7_Msk & (_UINT32_(value) << PIO_LOCKSR_P7_Pos)) /* Assignment of value for P7 in the PIO_LOCKSR register */
#define PIO_LOCKSR_P8_Pos                     _UINT32_(8)                                          /* (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P8_Msk                     (_UINT32_(0x1) << PIO_LOCKSR_P8_Pos)                 /* (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P8(value)                  (PIO_LOCKSR_P8_Msk & (_UINT32_(value) << PIO_LOCKSR_P8_Pos)) /* Assignment of value for P8 in the PIO_LOCKSR register */
#define PIO_LOCKSR_P9_Pos                     _UINT32_(9)                                          /* (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P9_Msk                     (_UINT32_(0x1) << PIO_LOCKSR_P9_Pos)                 /* (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P9(value)                  (PIO_LOCKSR_P9_Msk & (_UINT32_(value) << PIO_LOCKSR_P9_Pos)) /* Assignment of value for P9 in the PIO_LOCKSR register */
#define PIO_LOCKSR_P10_Pos                    _UINT32_(10)                                         /* (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P10_Msk                    (_UINT32_(0x1) << PIO_LOCKSR_P10_Pos)                /* (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P10(value)                 (PIO_LOCKSR_P10_Msk & (_UINT32_(value) << PIO_LOCKSR_P10_Pos)) /* Assignment of value for P10 in the PIO_LOCKSR register */
#define PIO_LOCKSR_P11_Pos                    _UINT32_(11)                                         /* (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P11_Msk                    (_UINT32_(0x1) << PIO_LOCKSR_P11_Pos)                /* (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P11(value)                 (PIO_LOCKSR_P11_Msk & (_UINT32_(value) << PIO_LOCKSR_P11_Pos)) /* Assignment of value for P11 in the PIO_LOCKSR register */
#define PIO_LOCKSR_P12_Pos                    _UINT32_(12)                                         /* (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P12_Msk                    (_UINT32_(0x1) << PIO_LOCKSR_P12_Pos)                /* (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P12(value)                 (PIO_LOCKSR_P12_Msk & (_UINT32_(value) << PIO_LOCKSR_P12_Pos)) /* Assignment of value for P12 in the PIO_LOCKSR register */
#define PIO_LOCKSR_P13_Pos                    _UINT32_(13)                                         /* (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P13_Msk                    (_UINT32_(0x1) << PIO_LOCKSR_P13_Pos)                /* (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P13(value)                 (PIO_LOCKSR_P13_Msk & (_UINT32_(value) << PIO_LOCKSR_P13_Pos)) /* Assignment of value for P13 in the PIO_LOCKSR register */
#define PIO_LOCKSR_P14_Pos                    _UINT32_(14)                                         /* (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P14_Msk                    (_UINT32_(0x1) << PIO_LOCKSR_P14_Pos)                /* (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P14(value)                 (PIO_LOCKSR_P14_Msk & (_UINT32_(value) << PIO_LOCKSR_P14_Pos)) /* Assignment of value for P14 in the PIO_LOCKSR register */
#define PIO_LOCKSR_P15_Pos                    _UINT32_(15)                                         /* (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P15_Msk                    (_UINT32_(0x1) << PIO_LOCKSR_P15_Pos)                /* (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P15(value)                 (PIO_LOCKSR_P15_Msk & (_UINT32_(value) << PIO_LOCKSR_P15_Pos)) /* Assignment of value for P15 in the PIO_LOCKSR register */
#define PIO_LOCKSR_P16_Pos                    _UINT32_(16)                                         /* (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P16_Msk                    (_UINT32_(0x1) << PIO_LOCKSR_P16_Pos)                /* (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P16(value)                 (PIO_LOCKSR_P16_Msk & (_UINT32_(value) << PIO_LOCKSR_P16_Pos)) /* Assignment of value for P16 in the PIO_LOCKSR register */
#define PIO_LOCKSR_P17_Pos                    _UINT32_(17)                                         /* (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P17_Msk                    (_UINT32_(0x1) << PIO_LOCKSR_P17_Pos)                /* (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P17(value)                 (PIO_LOCKSR_P17_Msk & (_UINT32_(value) << PIO_LOCKSR_P17_Pos)) /* Assignment of value for P17 in the PIO_LOCKSR register */
#define PIO_LOCKSR_P18_Pos                    _UINT32_(18)                                         /* (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P18_Msk                    (_UINT32_(0x1) << PIO_LOCKSR_P18_Pos)                /* (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P18(value)                 (PIO_LOCKSR_P18_Msk & (_UINT32_(value) << PIO_LOCKSR_P18_Pos)) /* Assignment of value for P18 in the PIO_LOCKSR register */
#define PIO_LOCKSR_P19_Pos                    _UINT32_(19)                                         /* (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P19_Msk                    (_UINT32_(0x1) << PIO_LOCKSR_P19_Pos)                /* (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P19(value)                 (PIO_LOCKSR_P19_Msk & (_UINT32_(value) << PIO_LOCKSR_P19_Pos)) /* Assignment of value for P19 in the PIO_LOCKSR register */
#define PIO_LOCKSR_P20_Pos                    _UINT32_(20)                                         /* (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P20_Msk                    (_UINT32_(0x1) << PIO_LOCKSR_P20_Pos)                /* (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P20(value)                 (PIO_LOCKSR_P20_Msk & (_UINT32_(value) << PIO_LOCKSR_P20_Pos)) /* Assignment of value for P20 in the PIO_LOCKSR register */
#define PIO_LOCKSR_P21_Pos                    _UINT32_(21)                                         /* (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P21_Msk                    (_UINT32_(0x1) << PIO_LOCKSR_P21_Pos)                /* (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P21(value)                 (PIO_LOCKSR_P21_Msk & (_UINT32_(value) << PIO_LOCKSR_P21_Pos)) /* Assignment of value for P21 in the PIO_LOCKSR register */
#define PIO_LOCKSR_P22_Pos                    _UINT32_(22)                                         /* (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P22_Msk                    (_UINT32_(0x1) << PIO_LOCKSR_P22_Pos)                /* (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P22(value)                 (PIO_LOCKSR_P22_Msk & (_UINT32_(value) << PIO_LOCKSR_P22_Pos)) /* Assignment of value for P22 in the PIO_LOCKSR register */
#define PIO_LOCKSR_P23_Pos                    _UINT32_(23)                                         /* (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P23_Msk                    (_UINT32_(0x1) << PIO_LOCKSR_P23_Pos)                /* (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P23(value)                 (PIO_LOCKSR_P23_Msk & (_UINT32_(value) << PIO_LOCKSR_P23_Pos)) /* Assignment of value for P23 in the PIO_LOCKSR register */
#define PIO_LOCKSR_P24_Pos                    _UINT32_(24)                                         /* (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P24_Msk                    (_UINT32_(0x1) << PIO_LOCKSR_P24_Pos)                /* (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P24(value)                 (PIO_LOCKSR_P24_Msk & (_UINT32_(value) << PIO_LOCKSR_P24_Pos)) /* Assignment of value for P24 in the PIO_LOCKSR register */
#define PIO_LOCKSR_P25_Pos                    _UINT32_(25)                                         /* (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P25_Msk                    (_UINT32_(0x1) << PIO_LOCKSR_P25_Pos)                /* (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P25(value)                 (PIO_LOCKSR_P25_Msk & (_UINT32_(value) << PIO_LOCKSR_P25_Pos)) /* Assignment of value for P25 in the PIO_LOCKSR register */
#define PIO_LOCKSR_P26_Pos                    _UINT32_(26)                                         /* (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P26_Msk                    (_UINT32_(0x1) << PIO_LOCKSR_P26_Pos)                /* (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P26(value)                 (PIO_LOCKSR_P26_Msk & (_UINT32_(value) << PIO_LOCKSR_P26_Pos)) /* Assignment of value for P26 in the PIO_LOCKSR register */
#define PIO_LOCKSR_P27_Pos                    _UINT32_(27)                                         /* (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P27_Msk                    (_UINT32_(0x1) << PIO_LOCKSR_P27_Pos)                /* (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P27(value)                 (PIO_LOCKSR_P27_Msk & (_UINT32_(value) << PIO_LOCKSR_P27_Pos)) /* Assignment of value for P27 in the PIO_LOCKSR register */
#define PIO_LOCKSR_P28_Pos                    _UINT32_(28)                                         /* (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P28_Msk                    (_UINT32_(0x1) << PIO_LOCKSR_P28_Pos)                /* (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P28(value)                 (PIO_LOCKSR_P28_Msk & (_UINT32_(value) << PIO_LOCKSR_P28_Pos)) /* Assignment of value for P28 in the PIO_LOCKSR register */
#define PIO_LOCKSR_P29_Pos                    _UINT32_(29)                                         /* (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P29_Msk                    (_UINT32_(0x1) << PIO_LOCKSR_P29_Pos)                /* (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P29(value)                 (PIO_LOCKSR_P29_Msk & (_UINT32_(value) << PIO_LOCKSR_P29_Pos)) /* Assignment of value for P29 in the PIO_LOCKSR register */
#define PIO_LOCKSR_P30_Pos                    _UINT32_(30)                                         /* (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P30_Msk                    (_UINT32_(0x1) << PIO_LOCKSR_P30_Pos)                /* (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P30(value)                 (PIO_LOCKSR_P30_Msk & (_UINT32_(value) << PIO_LOCKSR_P30_Pos)) /* Assignment of value for P30 in the PIO_LOCKSR register */
#define PIO_LOCKSR_P31_Pos                    _UINT32_(31)                                         /* (PIO_LOCKSR) Lock Status Position */
#define PIO_LOCKSR_P31_Msk                    (_UINT32_(0x1) << PIO_LOCKSR_P31_Pos)                /* (PIO_LOCKSR) Lock Status Mask */
#define PIO_LOCKSR_P31(value)                 (PIO_LOCKSR_P31_Msk & (_UINT32_(value) << PIO_LOCKSR_P31_Pos)) /* Assignment of value for P31 in the PIO_LOCKSR register */
#define PIO_LOCKSR_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (PIO_LOCKSR) Register Mask  */

#define PIO_LOCKSR_P_Pos                      _UINT32_(0)                                          /* (PIO_LOCKSR Position) Lock Status */
#define PIO_LOCKSR_P_Msk                      (_UINT32_(0xFFFFFFFF) << PIO_LOCKSR_P_Pos)           /* (PIO_LOCKSR Mask) P */
#define PIO_LOCKSR_P(value)                   (PIO_LOCKSR_P_Msk & (_UINT32_(value) << PIO_LOCKSR_P_Pos)) 

/* -------- PIO_WPMR : (PIO Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define PIO_WPMR_WPEN_Pos                     _UINT32_(0)                                          /* (PIO_WPMR) Write Protection Enable Position */
#define PIO_WPMR_WPEN_Msk                     (_UINT32_(0x1) << PIO_WPMR_WPEN_Pos)                 /* (PIO_WPMR) Write Protection Enable Mask */
#define PIO_WPMR_WPEN(value)                  (PIO_WPMR_WPEN_Msk & (_UINT32_(value) << PIO_WPMR_WPEN_Pos)) /* Assignment of value for WPEN in the PIO_WPMR register */
#define PIO_WPMR_WPKEY_Pos                    _UINT32_(8)                                          /* (PIO_WPMR) Write Protection Key Position */
#define PIO_WPMR_WPKEY_Msk                    (_UINT32_(0xFFFFFF) << PIO_WPMR_WPKEY_Pos)           /* (PIO_WPMR) Write Protection Key Mask */
#define PIO_WPMR_WPKEY(value)                 (PIO_WPMR_WPKEY_Msk & (_UINT32_(value) << PIO_WPMR_WPKEY_Pos)) /* Assignment of value for WPKEY in the PIO_WPMR register */
#define   PIO_WPMR_WPKEY_PASSWD_Val           _UINT32_(0x50494F)                                   /* (PIO_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0.  */
#define PIO_WPMR_WPKEY_PASSWD                 (PIO_WPMR_WPKEY_PASSWD_Val << PIO_WPMR_WPKEY_Pos)    /* (PIO_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0. Position */
#define PIO_WPMR_Msk                          _UINT32_(0xFFFFFF01)                                 /* (PIO_WPMR) Register Mask  */


/* -------- PIO_WPSR : (PIO Offset: 0xE8) ( R/ 32) Write Protection Status Register -------- */
#define PIO_WPSR_WPVS_Pos                     _UINT32_(0)                                          /* (PIO_WPSR) Write Protection Violation Status Position */
#define PIO_WPSR_WPVS_Msk                     (_UINT32_(0x1) << PIO_WPSR_WPVS_Pos)                 /* (PIO_WPSR) Write Protection Violation Status Mask */
#define PIO_WPSR_WPVS(value)                  (PIO_WPSR_WPVS_Msk & (_UINT32_(value) << PIO_WPSR_WPVS_Pos)) /* Assignment of value for WPVS in the PIO_WPSR register */
#define PIO_WPSR_WPVSRC_Pos                   _UINT32_(8)                                          /* (PIO_WPSR) Write Protection Violation Source Position */
#define PIO_WPSR_WPVSRC_Msk                   (_UINT32_(0xFFFF) << PIO_WPSR_WPVSRC_Pos)            /* (PIO_WPSR) Write Protection Violation Source Mask */
#define PIO_WPSR_WPVSRC(value)                (PIO_WPSR_WPVSRC_Msk & (_UINT32_(value) << PIO_WPSR_WPVSRC_Pos)) /* Assignment of value for WPVSRC in the PIO_WPSR register */
#define PIO_WPSR_Msk                          _UINT32_(0x00FFFF01)                                 /* (PIO_WPSR) Register Mask  */


/* -------- PIO_SCHMITT : (PIO Offset: 0x100) (R/W 32) Schmitt Trigger Register -------- */
#define PIO_SCHMITT_SCHMITT0_Pos              _UINT32_(0)                                          /* (PIO_SCHMITT) Schmitt Trigger Control Position */
#define PIO_SCHMITT_SCHMITT0_Msk              (_UINT32_(0x1) << PIO_SCHMITT_SCHMITT0_Pos)          /* (PIO_SCHMITT) Schmitt Trigger Control Mask */
#define PIO_SCHMITT_SCHMITT0(value)           (PIO_SCHMITT_SCHMITT0_Msk & (_UINT32_(value) << PIO_SCHMITT_SCHMITT0_Pos)) /* Assignment of value for SCHMITT0 in the PIO_SCHMITT register */
#define PIO_SCHMITT_SCHMITT1_Pos              _UINT32_(1)                                          /* (PIO_SCHMITT) Schmitt Trigger Control Position */
#define PIO_SCHMITT_SCHMITT1_Msk              (_UINT32_(0x1) << PIO_SCHMITT_SCHMITT1_Pos)          /* (PIO_SCHMITT) Schmitt Trigger Control Mask */
#define PIO_SCHMITT_SCHMITT1(value)           (PIO_SCHMITT_SCHMITT1_Msk & (_UINT32_(value) << PIO_SCHMITT_SCHMITT1_Pos)) /* Assignment of value for SCHMITT1 in the PIO_SCHMITT register */
#define PIO_SCHMITT_SCHMITT2_Pos              _UINT32_(2)                                          /* (PIO_SCHMITT) Schmitt Trigger Control Position */
#define PIO_SCHMITT_SCHMITT2_Msk              (_UINT32_(0x1) << PIO_SCHMITT_SCHMITT2_Pos)          /* (PIO_SCHMITT) Schmitt Trigger Control Mask */
#define PIO_SCHMITT_SCHMITT2(value)           (PIO_SCHMITT_SCHMITT2_Msk & (_UINT32_(value) << PIO_SCHMITT_SCHMITT2_Pos)) /* Assignment of value for SCHMITT2 in the PIO_SCHMITT register */
#define PIO_SCHMITT_SCHMITT3_Pos              _UINT32_(3)                                          /* (PIO_SCHMITT) Schmitt Trigger Control Position */
#define PIO_SCHMITT_SCHMITT3_Msk              (_UINT32_(0x1) << PIO_SCHMITT_SCHMITT3_Pos)          /* (PIO_SCHMITT) Schmitt Trigger Control Mask */
#define PIO_SCHMITT_SCHMITT3(value)           (PIO_SCHMITT_SCHMITT3_Msk & (_UINT32_(value) << PIO_SCHMITT_SCHMITT3_Pos)) /* Assignment of value for SCHMITT3 in the PIO_SCHMITT register */
#define PIO_SCHMITT_SCHMITT4_Pos              _UINT32_(4)                                          /* (PIO_SCHMITT) Schmitt Trigger Control Position */
#define PIO_SCHMITT_SCHMITT4_Msk              (_UINT32_(0x1) << PIO_SCHMITT_SCHMITT4_Pos)          /* (PIO_SCHMITT) Schmitt Trigger Control Mask */
#define PIO_SCHMITT_SCHMITT4(value)           (PIO_SCHMITT_SCHMITT4_Msk & (_UINT32_(value) << PIO_SCHMITT_SCHMITT4_Pos)) /* Assignment of value for SCHMITT4 in the PIO_SCHMITT register */
#define PIO_SCHMITT_SCHMITT5_Pos              _UINT32_(5)                                          /* (PIO_SCHMITT) Schmitt Trigger Control Position */
#define PIO_SCHMITT_SCHMITT5_Msk              (_UINT32_(0x1) << PIO_SCHMITT_SCHMITT5_Pos)          /* (PIO_SCHMITT) Schmitt Trigger Control Mask */
#define PIO_SCHMITT_SCHMITT5(value)           (PIO_SCHMITT_SCHMITT5_Msk & (_UINT32_(value) << PIO_SCHMITT_SCHMITT5_Pos)) /* Assignment of value for SCHMITT5 in the PIO_SCHMITT register */
#define PIO_SCHMITT_SCHMITT6_Pos              _UINT32_(6)                                          /* (PIO_SCHMITT) Schmitt Trigger Control Position */
#define PIO_SCHMITT_SCHMITT6_Msk              (_UINT32_(0x1) << PIO_SCHMITT_SCHMITT6_Pos)          /* (PIO_SCHMITT) Schmitt Trigger Control Mask */
#define PIO_SCHMITT_SCHMITT6(value)           (PIO_SCHMITT_SCHMITT6_Msk & (_UINT32_(value) << PIO_SCHMITT_SCHMITT6_Pos)) /* Assignment of value for SCHMITT6 in the PIO_SCHMITT register */
#define PIO_SCHMITT_SCHMITT7_Pos              _UINT32_(7)                                          /* (PIO_SCHMITT) Schmitt Trigger Control Position */
#define PIO_SCHMITT_SCHMITT7_Msk              (_UINT32_(0x1) << PIO_SCHMITT_SCHMITT7_Pos)          /* (PIO_SCHMITT) Schmitt Trigger Control Mask */
#define PIO_SCHMITT_SCHMITT7(value)           (PIO_SCHMITT_SCHMITT7_Msk & (_UINT32_(value) << PIO_SCHMITT_SCHMITT7_Pos)) /* Assignment of value for SCHMITT7 in the PIO_SCHMITT register */
#define PIO_SCHMITT_SCHMITT8_Pos              _UINT32_(8)                                          /* (PIO_SCHMITT) Schmitt Trigger Control Position */
#define PIO_SCHMITT_SCHMITT8_Msk              (_UINT32_(0x1) << PIO_SCHMITT_SCHMITT8_Pos)          /* (PIO_SCHMITT) Schmitt Trigger Control Mask */
#define PIO_SCHMITT_SCHMITT8(value)           (PIO_SCHMITT_SCHMITT8_Msk & (_UINT32_(value) << PIO_SCHMITT_SCHMITT8_Pos)) /* Assignment of value for SCHMITT8 in the PIO_SCHMITT register */
#define PIO_SCHMITT_SCHMITT9_Pos              _UINT32_(9)                                          /* (PIO_SCHMITT) Schmitt Trigger Control Position */
#define PIO_SCHMITT_SCHMITT9_Msk              (_UINT32_(0x1) << PIO_SCHMITT_SCHMITT9_Pos)          /* (PIO_SCHMITT) Schmitt Trigger Control Mask */
#define PIO_SCHMITT_SCHMITT9(value)           (PIO_SCHMITT_SCHMITT9_Msk & (_UINT32_(value) << PIO_SCHMITT_SCHMITT9_Pos)) /* Assignment of value for SCHMITT9 in the PIO_SCHMITT register */
#define PIO_SCHMITT_SCHMITT10_Pos             _UINT32_(10)                                         /* (PIO_SCHMITT) Schmitt Trigger Control Position */
#define PIO_SCHMITT_SCHMITT10_Msk             (_UINT32_(0x1) << PIO_SCHMITT_SCHMITT10_Pos)         /* (PIO_SCHMITT) Schmitt Trigger Control Mask */
#define PIO_SCHMITT_SCHMITT10(value)          (PIO_SCHMITT_SCHMITT10_Msk & (_UINT32_(value) << PIO_SCHMITT_SCHMITT10_Pos)) /* Assignment of value for SCHMITT10 in the PIO_SCHMITT register */
#define PIO_SCHMITT_SCHMITT11_Pos             _UINT32_(11)                                         /* (PIO_SCHMITT) Schmitt Trigger Control Position */
#define PIO_SCHMITT_SCHMITT11_Msk             (_UINT32_(0x1) << PIO_SCHMITT_SCHMITT11_Pos)         /* (PIO_SCHMITT) Schmitt Trigger Control Mask */
#define PIO_SCHMITT_SCHMITT11(value)          (PIO_SCHMITT_SCHMITT11_Msk & (_UINT32_(value) << PIO_SCHMITT_SCHMITT11_Pos)) /* Assignment of value for SCHMITT11 in the PIO_SCHMITT register */
#define PIO_SCHMITT_SCHMITT12_Pos             _UINT32_(12)                                         /* (PIO_SCHMITT) Schmitt Trigger Control Position */
#define PIO_SCHMITT_SCHMITT12_Msk             (_UINT32_(0x1) << PIO_SCHMITT_SCHMITT12_Pos)         /* (PIO_SCHMITT) Schmitt Trigger Control Mask */
#define PIO_SCHMITT_SCHMITT12(value)          (PIO_SCHMITT_SCHMITT12_Msk & (_UINT32_(value) << PIO_SCHMITT_SCHMITT12_Pos)) /* Assignment of value for SCHMITT12 in the PIO_SCHMITT register */
#define PIO_SCHMITT_SCHMITT13_Pos             _UINT32_(13)                                         /* (PIO_SCHMITT) Schmitt Trigger Control Position */
#define PIO_SCHMITT_SCHMITT13_Msk             (_UINT32_(0x1) << PIO_SCHMITT_SCHMITT13_Pos)         /* (PIO_SCHMITT) Schmitt Trigger Control Mask */
#define PIO_SCHMITT_SCHMITT13(value)          (PIO_SCHMITT_SCHMITT13_Msk & (_UINT32_(value) << PIO_SCHMITT_SCHMITT13_Pos)) /* Assignment of value for SCHMITT13 in the PIO_SCHMITT register */
#define PIO_SCHMITT_SCHMITT14_Pos             _UINT32_(14)                                         /* (PIO_SCHMITT) Schmitt Trigger Control Position */
#define PIO_SCHMITT_SCHMITT14_Msk             (_UINT32_(0x1) << PIO_SCHMITT_SCHMITT14_Pos)         /* (PIO_SCHMITT) Schmitt Trigger Control Mask */
#define PIO_SCHMITT_SCHMITT14(value)          (PIO_SCHMITT_SCHMITT14_Msk & (_UINT32_(value) << PIO_SCHMITT_SCHMITT14_Pos)) /* Assignment of value for SCHMITT14 in the PIO_SCHMITT register */
#define PIO_SCHMITT_SCHMITT15_Pos             _UINT32_(15)                                         /* (PIO_SCHMITT) Schmitt Trigger Control Position */
#define PIO_SCHMITT_SCHMITT15_Msk             (_UINT32_(0x1) << PIO_SCHMITT_SCHMITT15_Pos)         /* (PIO_SCHMITT) Schmitt Trigger Control Mask */
#define PIO_SCHMITT_SCHMITT15(value)          (PIO_SCHMITT_SCHMITT15_Msk & (_UINT32_(value) << PIO_SCHMITT_SCHMITT15_Pos)) /* Assignment of value for SCHMITT15 in the PIO_SCHMITT register */
#define PIO_SCHMITT_SCHMITT16_Pos             _UINT32_(16)                                         /* (PIO_SCHMITT) Schmitt Trigger Control Position */
#define PIO_SCHMITT_SCHMITT16_Msk             (_UINT32_(0x1) << PIO_SCHMITT_SCHMITT16_Pos)         /* (PIO_SCHMITT) Schmitt Trigger Control Mask */
#define PIO_SCHMITT_SCHMITT16(value)          (PIO_SCHMITT_SCHMITT16_Msk & (_UINT32_(value) << PIO_SCHMITT_SCHMITT16_Pos)) /* Assignment of value for SCHMITT16 in the PIO_SCHMITT register */
#define PIO_SCHMITT_SCHMITT17_Pos             _UINT32_(17)                                         /* (PIO_SCHMITT) Schmitt Trigger Control Position */
#define PIO_SCHMITT_SCHMITT17_Msk             (_UINT32_(0x1) << PIO_SCHMITT_SCHMITT17_Pos)         /* (PIO_SCHMITT) Schmitt Trigger Control Mask */
#define PIO_SCHMITT_SCHMITT17(value)          (PIO_SCHMITT_SCHMITT17_Msk & (_UINT32_(value) << PIO_SCHMITT_SCHMITT17_Pos)) /* Assignment of value for SCHMITT17 in the PIO_SCHMITT register */
#define PIO_SCHMITT_SCHMITT18_Pos             _UINT32_(18)                                         /* (PIO_SCHMITT) Schmitt Trigger Control Position */
#define PIO_SCHMITT_SCHMITT18_Msk             (_UINT32_(0x1) << PIO_SCHMITT_SCHMITT18_Pos)         /* (PIO_SCHMITT) Schmitt Trigger Control Mask */
#define PIO_SCHMITT_SCHMITT18(value)          (PIO_SCHMITT_SCHMITT18_Msk & (_UINT32_(value) << PIO_SCHMITT_SCHMITT18_Pos)) /* Assignment of value for SCHMITT18 in the PIO_SCHMITT register */
#define PIO_SCHMITT_SCHMITT19_Pos             _UINT32_(19)                                         /* (PIO_SCHMITT) Schmitt Trigger Control Position */
#define PIO_SCHMITT_SCHMITT19_Msk             (_UINT32_(0x1) << PIO_SCHMITT_SCHMITT19_Pos)         /* (PIO_SCHMITT) Schmitt Trigger Control Mask */
#define PIO_SCHMITT_SCHMITT19(value)          (PIO_SCHMITT_SCHMITT19_Msk & (_UINT32_(value) << PIO_SCHMITT_SCHMITT19_Pos)) /* Assignment of value for SCHMITT19 in the PIO_SCHMITT register */
#define PIO_SCHMITT_SCHMITT20_Pos             _UINT32_(20)                                         /* (PIO_SCHMITT) Schmitt Trigger Control Position */
#define PIO_SCHMITT_SCHMITT20_Msk             (_UINT32_(0x1) << PIO_SCHMITT_SCHMITT20_Pos)         /* (PIO_SCHMITT) Schmitt Trigger Control Mask */
#define PIO_SCHMITT_SCHMITT20(value)          (PIO_SCHMITT_SCHMITT20_Msk & (_UINT32_(value) << PIO_SCHMITT_SCHMITT20_Pos)) /* Assignment of value for SCHMITT20 in the PIO_SCHMITT register */
#define PIO_SCHMITT_SCHMITT21_Pos             _UINT32_(21)                                         /* (PIO_SCHMITT) Schmitt Trigger Control Position */
#define PIO_SCHMITT_SCHMITT21_Msk             (_UINT32_(0x1) << PIO_SCHMITT_SCHMITT21_Pos)         /* (PIO_SCHMITT) Schmitt Trigger Control Mask */
#define PIO_SCHMITT_SCHMITT21(value)          (PIO_SCHMITT_SCHMITT21_Msk & (_UINT32_(value) << PIO_SCHMITT_SCHMITT21_Pos)) /* Assignment of value for SCHMITT21 in the PIO_SCHMITT register */
#define PIO_SCHMITT_SCHMITT22_Pos             _UINT32_(22)                                         /* (PIO_SCHMITT) Schmitt Trigger Control Position */
#define PIO_SCHMITT_SCHMITT22_Msk             (_UINT32_(0x1) << PIO_SCHMITT_SCHMITT22_Pos)         /* (PIO_SCHMITT) Schmitt Trigger Control Mask */
#define PIO_SCHMITT_SCHMITT22(value)          (PIO_SCHMITT_SCHMITT22_Msk & (_UINT32_(value) << PIO_SCHMITT_SCHMITT22_Pos)) /* Assignment of value for SCHMITT22 in the PIO_SCHMITT register */
#define PIO_SCHMITT_SCHMITT23_Pos             _UINT32_(23)                                         /* (PIO_SCHMITT) Schmitt Trigger Control Position */
#define PIO_SCHMITT_SCHMITT23_Msk             (_UINT32_(0x1) << PIO_SCHMITT_SCHMITT23_Pos)         /* (PIO_SCHMITT) Schmitt Trigger Control Mask */
#define PIO_SCHMITT_SCHMITT23(value)          (PIO_SCHMITT_SCHMITT23_Msk & (_UINT32_(value) << PIO_SCHMITT_SCHMITT23_Pos)) /* Assignment of value for SCHMITT23 in the PIO_SCHMITT register */
#define PIO_SCHMITT_SCHMITT24_Pos             _UINT32_(24)                                         /* (PIO_SCHMITT) Schmitt Trigger Control Position */
#define PIO_SCHMITT_SCHMITT24_Msk             (_UINT32_(0x1) << PIO_SCHMITT_SCHMITT24_Pos)         /* (PIO_SCHMITT) Schmitt Trigger Control Mask */
#define PIO_SCHMITT_SCHMITT24(value)          (PIO_SCHMITT_SCHMITT24_Msk & (_UINT32_(value) << PIO_SCHMITT_SCHMITT24_Pos)) /* Assignment of value for SCHMITT24 in the PIO_SCHMITT register */
#define PIO_SCHMITT_SCHMITT25_Pos             _UINT32_(25)                                         /* (PIO_SCHMITT) Schmitt Trigger Control Position */
#define PIO_SCHMITT_SCHMITT25_Msk             (_UINT32_(0x1) << PIO_SCHMITT_SCHMITT25_Pos)         /* (PIO_SCHMITT) Schmitt Trigger Control Mask */
#define PIO_SCHMITT_SCHMITT25(value)          (PIO_SCHMITT_SCHMITT25_Msk & (_UINT32_(value) << PIO_SCHMITT_SCHMITT25_Pos)) /* Assignment of value for SCHMITT25 in the PIO_SCHMITT register */
#define PIO_SCHMITT_SCHMITT26_Pos             _UINT32_(26)                                         /* (PIO_SCHMITT) Schmitt Trigger Control Position */
#define PIO_SCHMITT_SCHMITT26_Msk             (_UINT32_(0x1) << PIO_SCHMITT_SCHMITT26_Pos)         /* (PIO_SCHMITT) Schmitt Trigger Control Mask */
#define PIO_SCHMITT_SCHMITT26(value)          (PIO_SCHMITT_SCHMITT26_Msk & (_UINT32_(value) << PIO_SCHMITT_SCHMITT26_Pos)) /* Assignment of value for SCHMITT26 in the PIO_SCHMITT register */
#define PIO_SCHMITT_SCHMITT27_Pos             _UINT32_(27)                                         /* (PIO_SCHMITT) Schmitt Trigger Control Position */
#define PIO_SCHMITT_SCHMITT27_Msk             (_UINT32_(0x1) << PIO_SCHMITT_SCHMITT27_Pos)         /* (PIO_SCHMITT) Schmitt Trigger Control Mask */
#define PIO_SCHMITT_SCHMITT27(value)          (PIO_SCHMITT_SCHMITT27_Msk & (_UINT32_(value) << PIO_SCHMITT_SCHMITT27_Pos)) /* Assignment of value for SCHMITT27 in the PIO_SCHMITT register */
#define PIO_SCHMITT_SCHMITT28_Pos             _UINT32_(28)                                         /* (PIO_SCHMITT) Schmitt Trigger Control Position */
#define PIO_SCHMITT_SCHMITT28_Msk             (_UINT32_(0x1) << PIO_SCHMITT_SCHMITT28_Pos)         /* (PIO_SCHMITT) Schmitt Trigger Control Mask */
#define PIO_SCHMITT_SCHMITT28(value)          (PIO_SCHMITT_SCHMITT28_Msk & (_UINT32_(value) << PIO_SCHMITT_SCHMITT28_Pos)) /* Assignment of value for SCHMITT28 in the PIO_SCHMITT register */
#define PIO_SCHMITT_SCHMITT29_Pos             _UINT32_(29)                                         /* (PIO_SCHMITT) Schmitt Trigger Control Position */
#define PIO_SCHMITT_SCHMITT29_Msk             (_UINT32_(0x1) << PIO_SCHMITT_SCHMITT29_Pos)         /* (PIO_SCHMITT) Schmitt Trigger Control Mask */
#define PIO_SCHMITT_SCHMITT29(value)          (PIO_SCHMITT_SCHMITT29_Msk & (_UINT32_(value) << PIO_SCHMITT_SCHMITT29_Pos)) /* Assignment of value for SCHMITT29 in the PIO_SCHMITT register */
#define PIO_SCHMITT_SCHMITT30_Pos             _UINT32_(30)                                         /* (PIO_SCHMITT) Schmitt Trigger Control Position */
#define PIO_SCHMITT_SCHMITT30_Msk             (_UINT32_(0x1) << PIO_SCHMITT_SCHMITT30_Pos)         /* (PIO_SCHMITT) Schmitt Trigger Control Mask */
#define PIO_SCHMITT_SCHMITT30(value)          (PIO_SCHMITT_SCHMITT30_Msk & (_UINT32_(value) << PIO_SCHMITT_SCHMITT30_Pos)) /* Assignment of value for SCHMITT30 in the PIO_SCHMITT register */
#define PIO_SCHMITT_SCHMITT31_Pos             _UINT32_(31)                                         /* (PIO_SCHMITT) Schmitt Trigger Control Position */
#define PIO_SCHMITT_SCHMITT31_Msk             (_UINT32_(0x1) << PIO_SCHMITT_SCHMITT31_Pos)         /* (PIO_SCHMITT) Schmitt Trigger Control Mask */
#define PIO_SCHMITT_SCHMITT31(value)          (PIO_SCHMITT_SCHMITT31_Msk & (_UINT32_(value) << PIO_SCHMITT_SCHMITT31_Pos)) /* Assignment of value for SCHMITT31 in the PIO_SCHMITT register */
#define PIO_SCHMITT_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (PIO_SCHMITT) Register Mask  */

#define PIO_SCHMITT_SCHMITT_Pos               _UINT32_(0)                                          /* (PIO_SCHMITT Position) Schmitt Trigger Control */
#define PIO_SCHMITT_SCHMITT_Msk               (_UINT32_(0xFFFFFFFF) << PIO_SCHMITT_SCHMITT_Pos)    /* (PIO_SCHMITT Mask) SCHMITT */
#define PIO_SCHMITT_SCHMITT(value)            (PIO_SCHMITT_SCHMITT_Msk & (_UINT32_(value) << PIO_SCHMITT_SCHMITT_Pos)) 

/* -------- PIO_DRIVER : (PIO Offset: 0x118) (R/W 32) I/O Drive Register -------- */
#define PIO_DRIVER_LINE0_Pos                  _UINT32_(0)                                          /* (PIO_DRIVER) Drive of PIO Line 0 Position */
#define PIO_DRIVER_LINE0_Msk                  (_UINT32_(0x1) << PIO_DRIVER_LINE0_Pos)              /* (PIO_DRIVER) Drive of PIO Line 0 Mask */
#define PIO_DRIVER_LINE0(value)               (PIO_DRIVER_LINE0_Msk & (_UINT32_(value) << PIO_DRIVER_LINE0_Pos)) /* Assignment of value for LINE0 in the PIO_DRIVER register */
#define   PIO_DRIVER_LINE0_LOW_DRIVE_Val      _UINT32_(0x0)                                        /* (PIO_DRIVER) Lowest drive  */
#define   PIO_DRIVER_LINE0_HIGH_DRIVE_Val     _UINT32_(0x1)                                        /* (PIO_DRIVER) Highest drive  */
#define PIO_DRIVER_LINE0_LOW_DRIVE            (PIO_DRIVER_LINE0_LOW_DRIVE_Val << PIO_DRIVER_LINE0_Pos) /* (PIO_DRIVER) Lowest drive Position */
#define PIO_DRIVER_LINE0_HIGH_DRIVE           (PIO_DRIVER_LINE0_HIGH_DRIVE_Val << PIO_DRIVER_LINE0_Pos) /* (PIO_DRIVER) Highest drive Position */
#define PIO_DRIVER_LINE1_Pos                  _UINT32_(1)                                          /* (PIO_DRIVER) Drive of PIO Line 1 Position */
#define PIO_DRIVER_LINE1_Msk                  (_UINT32_(0x1) << PIO_DRIVER_LINE1_Pos)              /* (PIO_DRIVER) Drive of PIO Line 1 Mask */
#define PIO_DRIVER_LINE1(value)               (PIO_DRIVER_LINE1_Msk & (_UINT32_(value) << PIO_DRIVER_LINE1_Pos)) /* Assignment of value for LINE1 in the PIO_DRIVER register */
#define   PIO_DRIVER_LINE1_LOW_DRIVE_Val      _UINT32_(0x0)                                        /* (PIO_DRIVER) Lowest drive  */
#define   PIO_DRIVER_LINE1_HIGH_DRIVE_Val     _UINT32_(0x1)                                        /* (PIO_DRIVER) Highest drive  */
#define PIO_DRIVER_LINE1_LOW_DRIVE            (PIO_DRIVER_LINE1_LOW_DRIVE_Val << PIO_DRIVER_LINE1_Pos) /* (PIO_DRIVER) Lowest drive Position */
#define PIO_DRIVER_LINE1_HIGH_DRIVE           (PIO_DRIVER_LINE1_HIGH_DRIVE_Val << PIO_DRIVER_LINE1_Pos) /* (PIO_DRIVER) Highest drive Position */
#define PIO_DRIVER_LINE2_Pos                  _UINT32_(2)                                          /* (PIO_DRIVER) Drive of PIO Line 2 Position */
#define PIO_DRIVER_LINE2_Msk                  (_UINT32_(0x1) << PIO_DRIVER_LINE2_Pos)              /* (PIO_DRIVER) Drive of PIO Line 2 Mask */
#define PIO_DRIVER_LINE2(value)               (PIO_DRIVER_LINE2_Msk & (_UINT32_(value) << PIO_DRIVER_LINE2_Pos)) /* Assignment of value for LINE2 in the PIO_DRIVER register */
#define   PIO_DRIVER_LINE2_LOW_DRIVE_Val      _UINT32_(0x0)                                        /* (PIO_DRIVER) Lowest drive  */
#define   PIO_DRIVER_LINE2_HIGH_DRIVE_Val     _UINT32_(0x1)                                        /* (PIO_DRIVER) Highest drive  */
#define PIO_DRIVER_LINE2_LOW_DRIVE            (PIO_DRIVER_LINE2_LOW_DRIVE_Val << PIO_DRIVER_LINE2_Pos) /* (PIO_DRIVER) Lowest drive Position */
#define PIO_DRIVER_LINE2_HIGH_DRIVE           (PIO_DRIVER_LINE2_HIGH_DRIVE_Val << PIO_DRIVER_LINE2_Pos) /* (PIO_DRIVER) Highest drive Position */
#define PIO_DRIVER_LINE3_Pos                  _UINT32_(3)                                          /* (PIO_DRIVER) Drive of PIO Line 3 Position */
#define PIO_DRIVER_LINE3_Msk                  (_UINT32_(0x1) << PIO_DRIVER_LINE3_Pos)              /* (PIO_DRIVER) Drive of PIO Line 3 Mask */
#define PIO_DRIVER_LINE3(value)               (PIO_DRIVER_LINE3_Msk & (_UINT32_(value) << PIO_DRIVER_LINE3_Pos)) /* Assignment of value for LINE3 in the PIO_DRIVER register */
#define   PIO_DRIVER_LINE3_LOW_DRIVE_Val      _UINT32_(0x0)                                        /* (PIO_DRIVER) Lowest drive  */
#define   PIO_DRIVER_LINE3_HIGH_DRIVE_Val     _UINT32_(0x1)                                        /* (PIO_DRIVER) Highest drive  */
#define PIO_DRIVER_LINE3_LOW_DRIVE            (PIO_DRIVER_LINE3_LOW_DRIVE_Val << PIO_DRIVER_LINE3_Pos) /* (PIO_DRIVER) Lowest drive Position */
#define PIO_DRIVER_LINE3_HIGH_DRIVE           (PIO_DRIVER_LINE3_HIGH_DRIVE_Val << PIO_DRIVER_LINE3_Pos) /* (PIO_DRIVER) Highest drive Position */
#define PIO_DRIVER_LINE4_Pos                  _UINT32_(4)                                          /* (PIO_DRIVER) Drive of PIO Line 4 Position */
#define PIO_DRIVER_LINE4_Msk                  (_UINT32_(0x1) << PIO_DRIVER_LINE4_Pos)              /* (PIO_DRIVER) Drive of PIO Line 4 Mask */
#define PIO_DRIVER_LINE4(value)               (PIO_DRIVER_LINE4_Msk & (_UINT32_(value) << PIO_DRIVER_LINE4_Pos)) /* Assignment of value for LINE4 in the PIO_DRIVER register */
#define   PIO_DRIVER_LINE4_LOW_DRIVE_Val      _UINT32_(0x0)                                        /* (PIO_DRIVER) Lowest drive  */
#define   PIO_DRIVER_LINE4_HIGH_DRIVE_Val     _UINT32_(0x1)                                        /* (PIO_DRIVER) Highest drive  */
#define PIO_DRIVER_LINE4_LOW_DRIVE            (PIO_DRIVER_LINE4_LOW_DRIVE_Val << PIO_DRIVER_LINE4_Pos) /* (PIO_DRIVER) Lowest drive Position */
#define PIO_DRIVER_LINE4_HIGH_DRIVE           (PIO_DRIVER_LINE4_HIGH_DRIVE_Val << PIO_DRIVER_LINE4_Pos) /* (PIO_DRIVER) Highest drive Position */
#define PIO_DRIVER_LINE5_Pos                  _UINT32_(5)                                          /* (PIO_DRIVER) Drive of PIO Line 5 Position */
#define PIO_DRIVER_LINE5_Msk                  (_UINT32_(0x1) << PIO_DRIVER_LINE5_Pos)              /* (PIO_DRIVER) Drive of PIO Line 5 Mask */
#define PIO_DRIVER_LINE5(value)               (PIO_DRIVER_LINE5_Msk & (_UINT32_(value) << PIO_DRIVER_LINE5_Pos)) /* Assignment of value for LINE5 in the PIO_DRIVER register */
#define   PIO_DRIVER_LINE5_LOW_DRIVE_Val      _UINT32_(0x0)                                        /* (PIO_DRIVER) Lowest drive  */
#define   PIO_DRIVER_LINE5_HIGH_DRIVE_Val     _UINT32_(0x1)                                        /* (PIO_DRIVER) Highest drive  */
#define PIO_DRIVER_LINE5_LOW_DRIVE            (PIO_DRIVER_LINE5_LOW_DRIVE_Val << PIO_DRIVER_LINE5_Pos) /* (PIO_DRIVER) Lowest drive Position */
#define PIO_DRIVER_LINE5_HIGH_DRIVE           (PIO_DRIVER_LINE5_HIGH_DRIVE_Val << PIO_DRIVER_LINE5_Pos) /* (PIO_DRIVER) Highest drive Position */
#define PIO_DRIVER_LINE6_Pos                  _UINT32_(6)                                          /* (PIO_DRIVER) Drive of PIO Line 6 Position */
#define PIO_DRIVER_LINE6_Msk                  (_UINT32_(0x1) << PIO_DRIVER_LINE6_Pos)              /* (PIO_DRIVER) Drive of PIO Line 6 Mask */
#define PIO_DRIVER_LINE6(value)               (PIO_DRIVER_LINE6_Msk & (_UINT32_(value) << PIO_DRIVER_LINE6_Pos)) /* Assignment of value for LINE6 in the PIO_DRIVER register */
#define   PIO_DRIVER_LINE6_LOW_DRIVE_Val      _UINT32_(0x0)                                        /* (PIO_DRIVER) Lowest drive  */
#define   PIO_DRIVER_LINE6_HIGH_DRIVE_Val     _UINT32_(0x1)                                        /* (PIO_DRIVER) Highest drive  */
#define PIO_DRIVER_LINE6_LOW_DRIVE            (PIO_DRIVER_LINE6_LOW_DRIVE_Val << PIO_DRIVER_LINE6_Pos) /* (PIO_DRIVER) Lowest drive Position */
#define PIO_DRIVER_LINE6_HIGH_DRIVE           (PIO_DRIVER_LINE6_HIGH_DRIVE_Val << PIO_DRIVER_LINE6_Pos) /* (PIO_DRIVER) Highest drive Position */
#define PIO_DRIVER_LINE7_Pos                  _UINT32_(7)                                          /* (PIO_DRIVER) Drive of PIO Line 7 Position */
#define PIO_DRIVER_LINE7_Msk                  (_UINT32_(0x1) << PIO_DRIVER_LINE7_Pos)              /* (PIO_DRIVER) Drive of PIO Line 7 Mask */
#define PIO_DRIVER_LINE7(value)               (PIO_DRIVER_LINE7_Msk & (_UINT32_(value) << PIO_DRIVER_LINE7_Pos)) /* Assignment of value for LINE7 in the PIO_DRIVER register */
#define   PIO_DRIVER_LINE7_LOW_DRIVE_Val      _UINT32_(0x0)                                        /* (PIO_DRIVER) Lowest drive  */
#define   PIO_DRIVER_LINE7_HIGH_DRIVE_Val     _UINT32_(0x1)                                        /* (PIO_DRIVER) Highest drive  */
#define PIO_DRIVER_LINE7_LOW_DRIVE            (PIO_DRIVER_LINE7_LOW_DRIVE_Val << PIO_DRIVER_LINE7_Pos) /* (PIO_DRIVER) Lowest drive Position */
#define PIO_DRIVER_LINE7_HIGH_DRIVE           (PIO_DRIVER_LINE7_HIGH_DRIVE_Val << PIO_DRIVER_LINE7_Pos) /* (PIO_DRIVER) Highest drive Position */
#define PIO_DRIVER_LINE8_Pos                  _UINT32_(8)                                          /* (PIO_DRIVER) Drive of PIO Line 8 Position */
#define PIO_DRIVER_LINE8_Msk                  (_UINT32_(0x1) << PIO_DRIVER_LINE8_Pos)              /* (PIO_DRIVER) Drive of PIO Line 8 Mask */
#define PIO_DRIVER_LINE8(value)               (PIO_DRIVER_LINE8_Msk & (_UINT32_(value) << PIO_DRIVER_LINE8_Pos)) /* Assignment of value for LINE8 in the PIO_DRIVER register */
#define   PIO_DRIVER_LINE8_LOW_DRIVE_Val      _UINT32_(0x0)                                        /* (PIO_DRIVER) Lowest drive  */
#define   PIO_DRIVER_LINE8_HIGH_DRIVE_Val     _UINT32_(0x1)                                        /* (PIO_DRIVER) Highest drive  */
#define PIO_DRIVER_LINE8_LOW_DRIVE            (PIO_DRIVER_LINE8_LOW_DRIVE_Val << PIO_DRIVER_LINE8_Pos) /* (PIO_DRIVER) Lowest drive Position */
#define PIO_DRIVER_LINE8_HIGH_DRIVE           (PIO_DRIVER_LINE8_HIGH_DRIVE_Val << PIO_DRIVER_LINE8_Pos) /* (PIO_DRIVER) Highest drive Position */
#define PIO_DRIVER_LINE9_Pos                  _UINT32_(9)                                          /* (PIO_DRIVER) Drive of PIO Line 9 Position */
#define PIO_DRIVER_LINE9_Msk                  (_UINT32_(0x1) << PIO_DRIVER_LINE9_Pos)              /* (PIO_DRIVER) Drive of PIO Line 9 Mask */
#define PIO_DRIVER_LINE9(value)               (PIO_DRIVER_LINE9_Msk & (_UINT32_(value) << PIO_DRIVER_LINE9_Pos)) /* Assignment of value for LINE9 in the PIO_DRIVER register */
#define   PIO_DRIVER_LINE9_LOW_DRIVE_Val      _UINT32_(0x0)                                        /* (PIO_DRIVER) Lowest drive  */
#define   PIO_DRIVER_LINE9_HIGH_DRIVE_Val     _UINT32_(0x1)                                        /* (PIO_DRIVER) Highest drive  */
#define PIO_DRIVER_LINE9_LOW_DRIVE            (PIO_DRIVER_LINE9_LOW_DRIVE_Val << PIO_DRIVER_LINE9_Pos) /* (PIO_DRIVER) Lowest drive Position */
#define PIO_DRIVER_LINE9_HIGH_DRIVE           (PIO_DRIVER_LINE9_HIGH_DRIVE_Val << PIO_DRIVER_LINE9_Pos) /* (PIO_DRIVER) Highest drive Position */
#define PIO_DRIVER_LINE10_Pos                 _UINT32_(10)                                         /* (PIO_DRIVER) Drive of PIO Line 10 Position */
#define PIO_DRIVER_LINE10_Msk                 (_UINT32_(0x1) << PIO_DRIVER_LINE10_Pos)             /* (PIO_DRIVER) Drive of PIO Line 10 Mask */
#define PIO_DRIVER_LINE10(value)              (PIO_DRIVER_LINE10_Msk & (_UINT32_(value) << PIO_DRIVER_LINE10_Pos)) /* Assignment of value for LINE10 in the PIO_DRIVER register */
#define   PIO_DRIVER_LINE10_LOW_DRIVE_Val     _UINT32_(0x0)                                        /* (PIO_DRIVER) Lowest drive  */
#define   PIO_DRIVER_LINE10_HIGH_DRIVE_Val    _UINT32_(0x1)                                        /* (PIO_DRIVER) Highest drive  */
#define PIO_DRIVER_LINE10_LOW_DRIVE           (PIO_DRIVER_LINE10_LOW_DRIVE_Val << PIO_DRIVER_LINE10_Pos) /* (PIO_DRIVER) Lowest drive Position */
#define PIO_DRIVER_LINE10_HIGH_DRIVE          (PIO_DRIVER_LINE10_HIGH_DRIVE_Val << PIO_DRIVER_LINE10_Pos) /* (PIO_DRIVER) Highest drive Position */
#define PIO_DRIVER_LINE11_Pos                 _UINT32_(11)                                         /* (PIO_DRIVER) Drive of PIO Line 11 Position */
#define PIO_DRIVER_LINE11_Msk                 (_UINT32_(0x1) << PIO_DRIVER_LINE11_Pos)             /* (PIO_DRIVER) Drive of PIO Line 11 Mask */
#define PIO_DRIVER_LINE11(value)              (PIO_DRIVER_LINE11_Msk & (_UINT32_(value) << PIO_DRIVER_LINE11_Pos)) /* Assignment of value for LINE11 in the PIO_DRIVER register */
#define   PIO_DRIVER_LINE11_LOW_DRIVE_Val     _UINT32_(0x0)                                        /* (PIO_DRIVER) Lowest drive  */
#define   PIO_DRIVER_LINE11_HIGH_DRIVE_Val    _UINT32_(0x1)                                        /* (PIO_DRIVER) Highest drive  */
#define PIO_DRIVER_LINE11_LOW_DRIVE           (PIO_DRIVER_LINE11_LOW_DRIVE_Val << PIO_DRIVER_LINE11_Pos) /* (PIO_DRIVER) Lowest drive Position */
#define PIO_DRIVER_LINE11_HIGH_DRIVE          (PIO_DRIVER_LINE11_HIGH_DRIVE_Val << PIO_DRIVER_LINE11_Pos) /* (PIO_DRIVER) Highest drive Position */
#define PIO_DRIVER_LINE12_Pos                 _UINT32_(12)                                         /* (PIO_DRIVER) Drive of PIO Line 12 Position */
#define PIO_DRIVER_LINE12_Msk                 (_UINT32_(0x1) << PIO_DRIVER_LINE12_Pos)             /* (PIO_DRIVER) Drive of PIO Line 12 Mask */
#define PIO_DRIVER_LINE12(value)              (PIO_DRIVER_LINE12_Msk & (_UINT32_(value) << PIO_DRIVER_LINE12_Pos)) /* Assignment of value for LINE12 in the PIO_DRIVER register */
#define   PIO_DRIVER_LINE12_LOW_DRIVE_Val     _UINT32_(0x0)                                        /* (PIO_DRIVER) Lowest drive  */
#define   PIO_DRIVER_LINE12_HIGH_DRIVE_Val    _UINT32_(0x1)                                        /* (PIO_DRIVER) Highest drive  */
#define PIO_DRIVER_LINE12_LOW_DRIVE           (PIO_DRIVER_LINE12_LOW_DRIVE_Val << PIO_DRIVER_LINE12_Pos) /* (PIO_DRIVER) Lowest drive Position */
#define PIO_DRIVER_LINE12_HIGH_DRIVE          (PIO_DRIVER_LINE12_HIGH_DRIVE_Val << PIO_DRIVER_LINE12_Pos) /* (PIO_DRIVER) Highest drive Position */
#define PIO_DRIVER_LINE13_Pos                 _UINT32_(13)                                         /* (PIO_DRIVER) Drive of PIO Line 13 Position */
#define PIO_DRIVER_LINE13_Msk                 (_UINT32_(0x1) << PIO_DRIVER_LINE13_Pos)             /* (PIO_DRIVER) Drive of PIO Line 13 Mask */
#define PIO_DRIVER_LINE13(value)              (PIO_DRIVER_LINE13_Msk & (_UINT32_(value) << PIO_DRIVER_LINE13_Pos)) /* Assignment of value for LINE13 in the PIO_DRIVER register */
#define   PIO_DRIVER_LINE13_LOW_DRIVE_Val     _UINT32_(0x0)                                        /* (PIO_DRIVER) Lowest drive  */
#define   PIO_DRIVER_LINE13_HIGH_DRIVE_Val    _UINT32_(0x1)                                        /* (PIO_DRIVER) Highest drive  */
#define PIO_DRIVER_LINE13_LOW_DRIVE           (PIO_DRIVER_LINE13_LOW_DRIVE_Val << PIO_DRIVER_LINE13_Pos) /* (PIO_DRIVER) Lowest drive Position */
#define PIO_DRIVER_LINE13_HIGH_DRIVE          (PIO_DRIVER_LINE13_HIGH_DRIVE_Val << PIO_DRIVER_LINE13_Pos) /* (PIO_DRIVER) Highest drive Position */
#define PIO_DRIVER_LINE14_Pos                 _UINT32_(14)                                         /* (PIO_DRIVER) Drive of PIO Line 14 Position */
#define PIO_DRIVER_LINE14_Msk                 (_UINT32_(0x1) << PIO_DRIVER_LINE14_Pos)             /* (PIO_DRIVER) Drive of PIO Line 14 Mask */
#define PIO_DRIVER_LINE14(value)              (PIO_DRIVER_LINE14_Msk & (_UINT32_(value) << PIO_DRIVER_LINE14_Pos)) /* Assignment of value for LINE14 in the PIO_DRIVER register */
#define   PIO_DRIVER_LINE14_LOW_DRIVE_Val     _UINT32_(0x0)                                        /* (PIO_DRIVER) Lowest drive  */
#define   PIO_DRIVER_LINE14_HIGH_DRIVE_Val    _UINT32_(0x1)                                        /* (PIO_DRIVER) Highest drive  */
#define PIO_DRIVER_LINE14_LOW_DRIVE           (PIO_DRIVER_LINE14_LOW_DRIVE_Val << PIO_DRIVER_LINE14_Pos) /* (PIO_DRIVER) Lowest drive Position */
#define PIO_DRIVER_LINE14_HIGH_DRIVE          (PIO_DRIVER_LINE14_HIGH_DRIVE_Val << PIO_DRIVER_LINE14_Pos) /* (PIO_DRIVER) Highest drive Position */
#define PIO_DRIVER_LINE15_Pos                 _UINT32_(15)                                         /* (PIO_DRIVER) Drive of PIO Line 15 Position */
#define PIO_DRIVER_LINE15_Msk                 (_UINT32_(0x1) << PIO_DRIVER_LINE15_Pos)             /* (PIO_DRIVER) Drive of PIO Line 15 Mask */
#define PIO_DRIVER_LINE15(value)              (PIO_DRIVER_LINE15_Msk & (_UINT32_(value) << PIO_DRIVER_LINE15_Pos)) /* Assignment of value for LINE15 in the PIO_DRIVER register */
#define   PIO_DRIVER_LINE15_LOW_DRIVE_Val     _UINT32_(0x0)                                        /* (PIO_DRIVER) Lowest drive  */
#define   PIO_DRIVER_LINE15_HIGH_DRIVE_Val    _UINT32_(0x1)                                        /* (PIO_DRIVER) Highest drive  */
#define PIO_DRIVER_LINE15_LOW_DRIVE           (PIO_DRIVER_LINE15_LOW_DRIVE_Val << PIO_DRIVER_LINE15_Pos) /* (PIO_DRIVER) Lowest drive Position */
#define PIO_DRIVER_LINE15_HIGH_DRIVE          (PIO_DRIVER_LINE15_HIGH_DRIVE_Val << PIO_DRIVER_LINE15_Pos) /* (PIO_DRIVER) Highest drive Position */
#define PIO_DRIVER_LINE16_Pos                 _UINT32_(16)                                         /* (PIO_DRIVER) Drive of PIO Line 16 Position */
#define PIO_DRIVER_LINE16_Msk                 (_UINT32_(0x1) << PIO_DRIVER_LINE16_Pos)             /* (PIO_DRIVER) Drive of PIO Line 16 Mask */
#define PIO_DRIVER_LINE16(value)              (PIO_DRIVER_LINE16_Msk & (_UINT32_(value) << PIO_DRIVER_LINE16_Pos)) /* Assignment of value for LINE16 in the PIO_DRIVER register */
#define   PIO_DRIVER_LINE16_LOW_DRIVE_Val     _UINT32_(0x0)                                        /* (PIO_DRIVER) Lowest drive  */
#define   PIO_DRIVER_LINE16_HIGH_DRIVE_Val    _UINT32_(0x1)                                        /* (PIO_DRIVER) Highest drive  */
#define PIO_DRIVER_LINE16_LOW_DRIVE           (PIO_DRIVER_LINE16_LOW_DRIVE_Val << PIO_DRIVER_LINE16_Pos) /* (PIO_DRIVER) Lowest drive Position */
#define PIO_DRIVER_LINE16_HIGH_DRIVE          (PIO_DRIVER_LINE16_HIGH_DRIVE_Val << PIO_DRIVER_LINE16_Pos) /* (PIO_DRIVER) Highest drive Position */
#define PIO_DRIVER_LINE17_Pos                 _UINT32_(17)                                         /* (PIO_DRIVER) Drive of PIO Line 17 Position */
#define PIO_DRIVER_LINE17_Msk                 (_UINT32_(0x1) << PIO_DRIVER_LINE17_Pos)             /* (PIO_DRIVER) Drive of PIO Line 17 Mask */
#define PIO_DRIVER_LINE17(value)              (PIO_DRIVER_LINE17_Msk & (_UINT32_(value) << PIO_DRIVER_LINE17_Pos)) /* Assignment of value for LINE17 in the PIO_DRIVER register */
#define   PIO_DRIVER_LINE17_LOW_DRIVE_Val     _UINT32_(0x0)                                        /* (PIO_DRIVER) Lowest drive  */
#define   PIO_DRIVER_LINE17_HIGH_DRIVE_Val    _UINT32_(0x1)                                        /* (PIO_DRIVER) Highest drive  */
#define PIO_DRIVER_LINE17_LOW_DRIVE           (PIO_DRIVER_LINE17_LOW_DRIVE_Val << PIO_DRIVER_LINE17_Pos) /* (PIO_DRIVER) Lowest drive Position */
#define PIO_DRIVER_LINE17_HIGH_DRIVE          (PIO_DRIVER_LINE17_HIGH_DRIVE_Val << PIO_DRIVER_LINE17_Pos) /* (PIO_DRIVER) Highest drive Position */
#define PIO_DRIVER_LINE18_Pos                 _UINT32_(18)                                         /* (PIO_DRIVER) Drive of PIO Line 18 Position */
#define PIO_DRIVER_LINE18_Msk                 (_UINT32_(0x1) << PIO_DRIVER_LINE18_Pos)             /* (PIO_DRIVER) Drive of PIO Line 18 Mask */
#define PIO_DRIVER_LINE18(value)              (PIO_DRIVER_LINE18_Msk & (_UINT32_(value) << PIO_DRIVER_LINE18_Pos)) /* Assignment of value for LINE18 in the PIO_DRIVER register */
#define   PIO_DRIVER_LINE18_LOW_DRIVE_Val     _UINT32_(0x0)                                        /* (PIO_DRIVER) Lowest drive  */
#define   PIO_DRIVER_LINE18_HIGH_DRIVE_Val    _UINT32_(0x1)                                        /* (PIO_DRIVER) Highest drive  */
#define PIO_DRIVER_LINE18_LOW_DRIVE           (PIO_DRIVER_LINE18_LOW_DRIVE_Val << PIO_DRIVER_LINE18_Pos) /* (PIO_DRIVER) Lowest drive Position */
#define PIO_DRIVER_LINE18_HIGH_DRIVE          (PIO_DRIVER_LINE18_HIGH_DRIVE_Val << PIO_DRIVER_LINE18_Pos) /* (PIO_DRIVER) Highest drive Position */
#define PIO_DRIVER_LINE19_Pos                 _UINT32_(19)                                         /* (PIO_DRIVER) Drive of PIO Line 19 Position */
#define PIO_DRIVER_LINE19_Msk                 (_UINT32_(0x1) << PIO_DRIVER_LINE19_Pos)             /* (PIO_DRIVER) Drive of PIO Line 19 Mask */
#define PIO_DRIVER_LINE19(value)              (PIO_DRIVER_LINE19_Msk & (_UINT32_(value) << PIO_DRIVER_LINE19_Pos)) /* Assignment of value for LINE19 in the PIO_DRIVER register */
#define   PIO_DRIVER_LINE19_LOW_DRIVE_Val     _UINT32_(0x0)                                        /* (PIO_DRIVER) Lowest drive  */
#define   PIO_DRIVER_LINE19_HIGH_DRIVE_Val    _UINT32_(0x1)                                        /* (PIO_DRIVER) Highest drive  */
#define PIO_DRIVER_LINE19_LOW_DRIVE           (PIO_DRIVER_LINE19_LOW_DRIVE_Val << PIO_DRIVER_LINE19_Pos) /* (PIO_DRIVER) Lowest drive Position */
#define PIO_DRIVER_LINE19_HIGH_DRIVE          (PIO_DRIVER_LINE19_HIGH_DRIVE_Val << PIO_DRIVER_LINE19_Pos) /* (PIO_DRIVER) Highest drive Position */
#define PIO_DRIVER_LINE20_Pos                 _UINT32_(20)                                         /* (PIO_DRIVER) Drive of PIO Line 20 Position */
#define PIO_DRIVER_LINE20_Msk                 (_UINT32_(0x1) << PIO_DRIVER_LINE20_Pos)             /* (PIO_DRIVER) Drive of PIO Line 20 Mask */
#define PIO_DRIVER_LINE20(value)              (PIO_DRIVER_LINE20_Msk & (_UINT32_(value) << PIO_DRIVER_LINE20_Pos)) /* Assignment of value for LINE20 in the PIO_DRIVER register */
#define   PIO_DRIVER_LINE20_LOW_DRIVE_Val     _UINT32_(0x0)                                        /* (PIO_DRIVER) Lowest drive  */
#define   PIO_DRIVER_LINE20_HIGH_DRIVE_Val    _UINT32_(0x1)                                        /* (PIO_DRIVER) Highest drive  */
#define PIO_DRIVER_LINE20_LOW_DRIVE           (PIO_DRIVER_LINE20_LOW_DRIVE_Val << PIO_DRIVER_LINE20_Pos) /* (PIO_DRIVER) Lowest drive Position */
#define PIO_DRIVER_LINE20_HIGH_DRIVE          (PIO_DRIVER_LINE20_HIGH_DRIVE_Val << PIO_DRIVER_LINE20_Pos) /* (PIO_DRIVER) Highest drive Position */
#define PIO_DRIVER_LINE21_Pos                 _UINT32_(21)                                         /* (PIO_DRIVER) Drive of PIO Line 21 Position */
#define PIO_DRIVER_LINE21_Msk                 (_UINT32_(0x1) << PIO_DRIVER_LINE21_Pos)             /* (PIO_DRIVER) Drive of PIO Line 21 Mask */
#define PIO_DRIVER_LINE21(value)              (PIO_DRIVER_LINE21_Msk & (_UINT32_(value) << PIO_DRIVER_LINE21_Pos)) /* Assignment of value for LINE21 in the PIO_DRIVER register */
#define   PIO_DRIVER_LINE21_LOW_DRIVE_Val     _UINT32_(0x0)                                        /* (PIO_DRIVER) Lowest drive  */
#define   PIO_DRIVER_LINE21_HIGH_DRIVE_Val    _UINT32_(0x1)                                        /* (PIO_DRIVER) Highest drive  */
#define PIO_DRIVER_LINE21_LOW_DRIVE           (PIO_DRIVER_LINE21_LOW_DRIVE_Val << PIO_DRIVER_LINE21_Pos) /* (PIO_DRIVER) Lowest drive Position */
#define PIO_DRIVER_LINE21_HIGH_DRIVE          (PIO_DRIVER_LINE21_HIGH_DRIVE_Val << PIO_DRIVER_LINE21_Pos) /* (PIO_DRIVER) Highest drive Position */
#define PIO_DRIVER_LINE22_Pos                 _UINT32_(22)                                         /* (PIO_DRIVER) Drive of PIO Line 22 Position */
#define PIO_DRIVER_LINE22_Msk                 (_UINT32_(0x1) << PIO_DRIVER_LINE22_Pos)             /* (PIO_DRIVER) Drive of PIO Line 22 Mask */
#define PIO_DRIVER_LINE22(value)              (PIO_DRIVER_LINE22_Msk & (_UINT32_(value) << PIO_DRIVER_LINE22_Pos)) /* Assignment of value for LINE22 in the PIO_DRIVER register */
#define   PIO_DRIVER_LINE22_LOW_DRIVE_Val     _UINT32_(0x0)                                        /* (PIO_DRIVER) Lowest drive  */
#define   PIO_DRIVER_LINE22_HIGH_DRIVE_Val    _UINT32_(0x1)                                        /* (PIO_DRIVER) Highest drive  */
#define PIO_DRIVER_LINE22_LOW_DRIVE           (PIO_DRIVER_LINE22_LOW_DRIVE_Val << PIO_DRIVER_LINE22_Pos) /* (PIO_DRIVER) Lowest drive Position */
#define PIO_DRIVER_LINE22_HIGH_DRIVE          (PIO_DRIVER_LINE22_HIGH_DRIVE_Val << PIO_DRIVER_LINE22_Pos) /* (PIO_DRIVER) Highest drive Position */
#define PIO_DRIVER_LINE23_Pos                 _UINT32_(23)                                         /* (PIO_DRIVER) Drive of PIO Line 23 Position */
#define PIO_DRIVER_LINE23_Msk                 (_UINT32_(0x1) << PIO_DRIVER_LINE23_Pos)             /* (PIO_DRIVER) Drive of PIO Line 23 Mask */
#define PIO_DRIVER_LINE23(value)              (PIO_DRIVER_LINE23_Msk & (_UINT32_(value) << PIO_DRIVER_LINE23_Pos)) /* Assignment of value for LINE23 in the PIO_DRIVER register */
#define   PIO_DRIVER_LINE23_LOW_DRIVE_Val     _UINT32_(0x0)                                        /* (PIO_DRIVER) Lowest drive  */
#define   PIO_DRIVER_LINE23_HIGH_DRIVE_Val    _UINT32_(0x1)                                        /* (PIO_DRIVER) Highest drive  */
#define PIO_DRIVER_LINE23_LOW_DRIVE           (PIO_DRIVER_LINE23_LOW_DRIVE_Val << PIO_DRIVER_LINE23_Pos) /* (PIO_DRIVER) Lowest drive Position */
#define PIO_DRIVER_LINE23_HIGH_DRIVE          (PIO_DRIVER_LINE23_HIGH_DRIVE_Val << PIO_DRIVER_LINE23_Pos) /* (PIO_DRIVER) Highest drive Position */
#define PIO_DRIVER_LINE24_Pos                 _UINT32_(24)                                         /* (PIO_DRIVER) Drive of PIO Line 24 Position */
#define PIO_DRIVER_LINE24_Msk                 (_UINT32_(0x1) << PIO_DRIVER_LINE24_Pos)             /* (PIO_DRIVER) Drive of PIO Line 24 Mask */
#define PIO_DRIVER_LINE24(value)              (PIO_DRIVER_LINE24_Msk & (_UINT32_(value) << PIO_DRIVER_LINE24_Pos)) /* Assignment of value for LINE24 in the PIO_DRIVER register */
#define   PIO_DRIVER_LINE24_LOW_DRIVE_Val     _UINT32_(0x0)                                        /* (PIO_DRIVER) Lowest drive  */
#define   PIO_DRIVER_LINE24_HIGH_DRIVE_Val    _UINT32_(0x1)                                        /* (PIO_DRIVER) Highest drive  */
#define PIO_DRIVER_LINE24_LOW_DRIVE           (PIO_DRIVER_LINE24_LOW_DRIVE_Val << PIO_DRIVER_LINE24_Pos) /* (PIO_DRIVER) Lowest drive Position */
#define PIO_DRIVER_LINE24_HIGH_DRIVE          (PIO_DRIVER_LINE24_HIGH_DRIVE_Val << PIO_DRIVER_LINE24_Pos) /* (PIO_DRIVER) Highest drive Position */
#define PIO_DRIVER_LINE25_Pos                 _UINT32_(25)                                         /* (PIO_DRIVER) Drive of PIO Line 25 Position */
#define PIO_DRIVER_LINE25_Msk                 (_UINT32_(0x1) << PIO_DRIVER_LINE25_Pos)             /* (PIO_DRIVER) Drive of PIO Line 25 Mask */
#define PIO_DRIVER_LINE25(value)              (PIO_DRIVER_LINE25_Msk & (_UINT32_(value) << PIO_DRIVER_LINE25_Pos)) /* Assignment of value for LINE25 in the PIO_DRIVER register */
#define   PIO_DRIVER_LINE25_LOW_DRIVE_Val     _UINT32_(0x0)                                        /* (PIO_DRIVER) Lowest drive  */
#define   PIO_DRIVER_LINE25_HIGH_DRIVE_Val    _UINT32_(0x1)                                        /* (PIO_DRIVER) Highest drive  */
#define PIO_DRIVER_LINE25_LOW_DRIVE           (PIO_DRIVER_LINE25_LOW_DRIVE_Val << PIO_DRIVER_LINE25_Pos) /* (PIO_DRIVER) Lowest drive Position */
#define PIO_DRIVER_LINE25_HIGH_DRIVE          (PIO_DRIVER_LINE25_HIGH_DRIVE_Val << PIO_DRIVER_LINE25_Pos) /* (PIO_DRIVER) Highest drive Position */
#define PIO_DRIVER_LINE26_Pos                 _UINT32_(26)                                         /* (PIO_DRIVER) Drive of PIO Line 26 Position */
#define PIO_DRIVER_LINE26_Msk                 (_UINT32_(0x1) << PIO_DRIVER_LINE26_Pos)             /* (PIO_DRIVER) Drive of PIO Line 26 Mask */
#define PIO_DRIVER_LINE26(value)              (PIO_DRIVER_LINE26_Msk & (_UINT32_(value) << PIO_DRIVER_LINE26_Pos)) /* Assignment of value for LINE26 in the PIO_DRIVER register */
#define   PIO_DRIVER_LINE26_LOW_DRIVE_Val     _UINT32_(0x0)                                        /* (PIO_DRIVER) Lowest drive  */
#define   PIO_DRIVER_LINE26_HIGH_DRIVE_Val    _UINT32_(0x1)                                        /* (PIO_DRIVER) Highest drive  */
#define PIO_DRIVER_LINE26_LOW_DRIVE           (PIO_DRIVER_LINE26_LOW_DRIVE_Val << PIO_DRIVER_LINE26_Pos) /* (PIO_DRIVER) Lowest drive Position */
#define PIO_DRIVER_LINE26_HIGH_DRIVE          (PIO_DRIVER_LINE26_HIGH_DRIVE_Val << PIO_DRIVER_LINE26_Pos) /* (PIO_DRIVER) Highest drive Position */
#define PIO_DRIVER_LINE27_Pos                 _UINT32_(27)                                         /* (PIO_DRIVER) Drive of PIO Line 27 Position */
#define PIO_DRIVER_LINE27_Msk                 (_UINT32_(0x1) << PIO_DRIVER_LINE27_Pos)             /* (PIO_DRIVER) Drive of PIO Line 27 Mask */
#define PIO_DRIVER_LINE27(value)              (PIO_DRIVER_LINE27_Msk & (_UINT32_(value) << PIO_DRIVER_LINE27_Pos)) /* Assignment of value for LINE27 in the PIO_DRIVER register */
#define   PIO_DRIVER_LINE27_LOW_DRIVE_Val     _UINT32_(0x0)                                        /* (PIO_DRIVER) Lowest drive  */
#define   PIO_DRIVER_LINE27_HIGH_DRIVE_Val    _UINT32_(0x1)                                        /* (PIO_DRIVER) Highest drive  */
#define PIO_DRIVER_LINE27_LOW_DRIVE           (PIO_DRIVER_LINE27_LOW_DRIVE_Val << PIO_DRIVER_LINE27_Pos) /* (PIO_DRIVER) Lowest drive Position */
#define PIO_DRIVER_LINE27_HIGH_DRIVE          (PIO_DRIVER_LINE27_HIGH_DRIVE_Val << PIO_DRIVER_LINE27_Pos) /* (PIO_DRIVER) Highest drive Position */
#define PIO_DRIVER_LINE28_Pos                 _UINT32_(28)                                         /* (PIO_DRIVER) Drive of PIO Line 28 Position */
#define PIO_DRIVER_LINE28_Msk                 (_UINT32_(0x1) << PIO_DRIVER_LINE28_Pos)             /* (PIO_DRIVER) Drive of PIO Line 28 Mask */
#define PIO_DRIVER_LINE28(value)              (PIO_DRIVER_LINE28_Msk & (_UINT32_(value) << PIO_DRIVER_LINE28_Pos)) /* Assignment of value for LINE28 in the PIO_DRIVER register */
#define   PIO_DRIVER_LINE28_LOW_DRIVE_Val     _UINT32_(0x0)                                        /* (PIO_DRIVER) Lowest drive  */
#define   PIO_DRIVER_LINE28_HIGH_DRIVE_Val    _UINT32_(0x1)                                        /* (PIO_DRIVER) Highest drive  */
#define PIO_DRIVER_LINE28_LOW_DRIVE           (PIO_DRIVER_LINE28_LOW_DRIVE_Val << PIO_DRIVER_LINE28_Pos) /* (PIO_DRIVER) Lowest drive Position */
#define PIO_DRIVER_LINE28_HIGH_DRIVE          (PIO_DRIVER_LINE28_HIGH_DRIVE_Val << PIO_DRIVER_LINE28_Pos) /* (PIO_DRIVER) Highest drive Position */
#define PIO_DRIVER_LINE29_Pos                 _UINT32_(29)                                         /* (PIO_DRIVER) Drive of PIO Line 29 Position */
#define PIO_DRIVER_LINE29_Msk                 (_UINT32_(0x1) << PIO_DRIVER_LINE29_Pos)             /* (PIO_DRIVER) Drive of PIO Line 29 Mask */
#define PIO_DRIVER_LINE29(value)              (PIO_DRIVER_LINE29_Msk & (_UINT32_(value) << PIO_DRIVER_LINE29_Pos)) /* Assignment of value for LINE29 in the PIO_DRIVER register */
#define   PIO_DRIVER_LINE29_LOW_DRIVE_Val     _UINT32_(0x0)                                        /* (PIO_DRIVER) Lowest drive  */
#define   PIO_DRIVER_LINE29_HIGH_DRIVE_Val    _UINT32_(0x1)                                        /* (PIO_DRIVER) Highest drive  */
#define PIO_DRIVER_LINE29_LOW_DRIVE           (PIO_DRIVER_LINE29_LOW_DRIVE_Val << PIO_DRIVER_LINE29_Pos) /* (PIO_DRIVER) Lowest drive Position */
#define PIO_DRIVER_LINE29_HIGH_DRIVE          (PIO_DRIVER_LINE29_HIGH_DRIVE_Val << PIO_DRIVER_LINE29_Pos) /* (PIO_DRIVER) Highest drive Position */
#define PIO_DRIVER_LINE30_Pos                 _UINT32_(30)                                         /* (PIO_DRIVER) Drive of PIO Line 30 Position */
#define PIO_DRIVER_LINE30_Msk                 (_UINT32_(0x1) << PIO_DRIVER_LINE30_Pos)             /* (PIO_DRIVER) Drive of PIO Line 30 Mask */
#define PIO_DRIVER_LINE30(value)              (PIO_DRIVER_LINE30_Msk & (_UINT32_(value) << PIO_DRIVER_LINE30_Pos)) /* Assignment of value for LINE30 in the PIO_DRIVER register */
#define   PIO_DRIVER_LINE30_LOW_DRIVE_Val     _UINT32_(0x0)                                        /* (PIO_DRIVER) Lowest drive  */
#define   PIO_DRIVER_LINE30_HIGH_DRIVE_Val    _UINT32_(0x1)                                        /* (PIO_DRIVER) Highest drive  */
#define PIO_DRIVER_LINE30_LOW_DRIVE           (PIO_DRIVER_LINE30_LOW_DRIVE_Val << PIO_DRIVER_LINE30_Pos) /* (PIO_DRIVER) Lowest drive Position */
#define PIO_DRIVER_LINE30_HIGH_DRIVE          (PIO_DRIVER_LINE30_HIGH_DRIVE_Val << PIO_DRIVER_LINE30_Pos) /* (PIO_DRIVER) Highest drive Position */
#define PIO_DRIVER_LINE31_Pos                 _UINT32_(31)                                         /* (PIO_DRIVER) Drive of PIO Line 31 Position */
#define PIO_DRIVER_LINE31_Msk                 (_UINT32_(0x1) << PIO_DRIVER_LINE31_Pos)             /* (PIO_DRIVER) Drive of PIO Line 31 Mask */
#define PIO_DRIVER_LINE31(value)              (PIO_DRIVER_LINE31_Msk & (_UINT32_(value) << PIO_DRIVER_LINE31_Pos)) /* Assignment of value for LINE31 in the PIO_DRIVER register */
#define   PIO_DRIVER_LINE31_LOW_DRIVE_Val     _UINT32_(0x0)                                        /* (PIO_DRIVER) Lowest drive  */
#define   PIO_DRIVER_LINE31_HIGH_DRIVE_Val    _UINT32_(0x1)                                        /* (PIO_DRIVER) Highest drive  */
#define PIO_DRIVER_LINE31_LOW_DRIVE           (PIO_DRIVER_LINE31_LOW_DRIVE_Val << PIO_DRIVER_LINE31_Pos) /* (PIO_DRIVER) Lowest drive Position */
#define PIO_DRIVER_LINE31_HIGH_DRIVE          (PIO_DRIVER_LINE31_HIGH_DRIVE_Val << PIO_DRIVER_LINE31_Pos) /* (PIO_DRIVER) Highest drive Position */
#define PIO_DRIVER_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (PIO_DRIVER) Register Mask  */

#define PIO_DRIVER_LINE_Pos                   _UINT32_(0)                                          /* (PIO_DRIVER Position) Drive of PIO Line 3x */
#define PIO_DRIVER_LINE_Msk                   (_UINT32_(0xFFFFFFFF) << PIO_DRIVER_LINE_Pos)        /* (PIO_DRIVER Mask) LINE */
#define PIO_DRIVER_LINE(value)                (PIO_DRIVER_LINE_Msk & (_UINT32_(value) << PIO_DRIVER_LINE_Pos)) 

/* -------- PIO_PCMR : (PIO Offset: 0x150) (R/W 32) Parallel Capture Mode Register -------- */
#define PIO_PCMR_PCEN_Pos                     _UINT32_(0)                                          /* (PIO_PCMR) Parallel Capture Mode Enable Position */
#define PIO_PCMR_PCEN_Msk                     (_UINT32_(0x1) << PIO_PCMR_PCEN_Pos)                 /* (PIO_PCMR) Parallel Capture Mode Enable Mask */
#define PIO_PCMR_PCEN(value)                  (PIO_PCMR_PCEN_Msk & (_UINT32_(value) << PIO_PCMR_PCEN_Pos)) /* Assignment of value for PCEN in the PIO_PCMR register */
#define PIO_PCMR_DSIZE_Pos                    _UINT32_(4)                                          /* (PIO_PCMR) Parallel Capture Mode Data Size Position */
#define PIO_PCMR_DSIZE_Msk                    (_UINT32_(0x3) << PIO_PCMR_DSIZE_Pos)                /* (PIO_PCMR) Parallel Capture Mode Data Size Mask */
#define PIO_PCMR_DSIZE(value)                 (PIO_PCMR_DSIZE_Msk & (_UINT32_(value) << PIO_PCMR_DSIZE_Pos)) /* Assignment of value for DSIZE in the PIO_PCMR register */
#define   PIO_PCMR_DSIZE_BYTE_Val             _UINT32_(0x0)                                        /* (PIO_PCMR) The reception data in the PIO_PCRHR is a byte (8-bit)  */
#define   PIO_PCMR_DSIZE_HALFWORD_Val         _UINT32_(0x1)                                        /* (PIO_PCMR) The reception data in the PIO_PCRHR is a half-word (16-bit)  */
#define   PIO_PCMR_DSIZE_WORD_Val             _UINT32_(0x2)                                        /* (PIO_PCMR) The reception data in the PIO_PCRHR is a word (32-bit)  */
#define PIO_PCMR_DSIZE_BYTE                   (PIO_PCMR_DSIZE_BYTE_Val << PIO_PCMR_DSIZE_Pos)      /* (PIO_PCMR) The reception data in the PIO_PCRHR is a byte (8-bit) Position */
#define PIO_PCMR_DSIZE_HALFWORD               (PIO_PCMR_DSIZE_HALFWORD_Val << PIO_PCMR_DSIZE_Pos)  /* (PIO_PCMR) The reception data in the PIO_PCRHR is a half-word (16-bit) Position */
#define PIO_PCMR_DSIZE_WORD                   (PIO_PCMR_DSIZE_WORD_Val << PIO_PCMR_DSIZE_Pos)      /* (PIO_PCMR) The reception data in the PIO_PCRHR is a word (32-bit) Position */
#define PIO_PCMR_ALWYS_Pos                    _UINT32_(9)                                          /* (PIO_PCMR) Parallel Capture Mode Always Sampling Position */
#define PIO_PCMR_ALWYS_Msk                    (_UINT32_(0x1) << PIO_PCMR_ALWYS_Pos)                /* (PIO_PCMR) Parallel Capture Mode Always Sampling Mask */
#define PIO_PCMR_ALWYS(value)                 (PIO_PCMR_ALWYS_Msk & (_UINT32_(value) << PIO_PCMR_ALWYS_Pos)) /* Assignment of value for ALWYS in the PIO_PCMR register */
#define PIO_PCMR_HALFS_Pos                    _UINT32_(10)                                         /* (PIO_PCMR) Parallel Capture Mode Half Sampling Position */
#define PIO_PCMR_HALFS_Msk                    (_UINT32_(0x1) << PIO_PCMR_HALFS_Pos)                /* (PIO_PCMR) Parallel Capture Mode Half Sampling Mask */
#define PIO_PCMR_HALFS(value)                 (PIO_PCMR_HALFS_Msk & (_UINT32_(value) << PIO_PCMR_HALFS_Pos)) /* Assignment of value for HALFS in the PIO_PCMR register */
#define PIO_PCMR_FRSTS_Pos                    _UINT32_(11)                                         /* (PIO_PCMR) Parallel Capture Mode First Sample Position */
#define PIO_PCMR_FRSTS_Msk                    (_UINT32_(0x1) << PIO_PCMR_FRSTS_Pos)                /* (PIO_PCMR) Parallel Capture Mode First Sample Mask */
#define PIO_PCMR_FRSTS(value)                 (PIO_PCMR_FRSTS_Msk & (_UINT32_(value) << PIO_PCMR_FRSTS_Pos)) /* Assignment of value for FRSTS in the PIO_PCMR register */
#define PIO_PCMR_Msk                          _UINT32_(0x00000E31)                                 /* (PIO_PCMR) Register Mask  */


/* -------- PIO_PCIER : (PIO Offset: 0x154) ( /W 32) Parallel Capture Interrupt Enable Register -------- */
#define PIO_PCIER_DRDY_Pos                    _UINT32_(0)                                          /* (PIO_PCIER) Parallel Capture Mode Data Ready Interrupt Enable Position */
#define PIO_PCIER_DRDY_Msk                    (_UINT32_(0x1) << PIO_PCIER_DRDY_Pos)                /* (PIO_PCIER) Parallel Capture Mode Data Ready Interrupt Enable Mask */
#define PIO_PCIER_DRDY(value)                 (PIO_PCIER_DRDY_Msk & (_UINT32_(value) << PIO_PCIER_DRDY_Pos)) /* Assignment of value for DRDY in the PIO_PCIER register */
#define PIO_PCIER_OVRE_Pos                    _UINT32_(1)                                          /* (PIO_PCIER) Parallel Capture Mode Overrun Error Interrupt Enable Position */
#define PIO_PCIER_OVRE_Msk                    (_UINT32_(0x1) << PIO_PCIER_OVRE_Pos)                /* (PIO_PCIER) Parallel Capture Mode Overrun Error Interrupt Enable Mask */
#define PIO_PCIER_OVRE(value)                 (PIO_PCIER_OVRE_Msk & (_UINT32_(value) << PIO_PCIER_OVRE_Pos)) /* Assignment of value for OVRE in the PIO_PCIER register */
#define PIO_PCIER_ENDRX_Pos                   _UINT32_(2)                                          /* (PIO_PCIER) End of Reception Transfer Interrupt Enable Position */
#define PIO_PCIER_ENDRX_Msk                   (_UINT32_(0x1) << PIO_PCIER_ENDRX_Pos)               /* (PIO_PCIER) End of Reception Transfer Interrupt Enable Mask */
#define PIO_PCIER_ENDRX(value)                (PIO_PCIER_ENDRX_Msk & (_UINT32_(value) << PIO_PCIER_ENDRX_Pos)) /* Assignment of value for ENDRX in the PIO_PCIER register */
#define PIO_PCIER_RXBUFF_Pos                  _UINT32_(3)                                          /* (PIO_PCIER) Reception Buffer Full Interrupt Enable Position */
#define PIO_PCIER_RXBUFF_Msk                  (_UINT32_(0x1) << PIO_PCIER_RXBUFF_Pos)              /* (PIO_PCIER) Reception Buffer Full Interrupt Enable Mask */
#define PIO_PCIER_RXBUFF(value)               (PIO_PCIER_RXBUFF_Msk & (_UINT32_(value) << PIO_PCIER_RXBUFF_Pos)) /* Assignment of value for RXBUFF in the PIO_PCIER register */
#define PIO_PCIER_Msk                         _UINT32_(0x0000000F)                                 /* (PIO_PCIER) Register Mask  */


/* -------- PIO_PCIDR : (PIO Offset: 0x158) ( /W 32) Parallel Capture Interrupt Disable Register -------- */
#define PIO_PCIDR_DRDY_Pos                    _UINT32_(0)                                          /* (PIO_PCIDR) Parallel Capture Mode Data Ready Interrupt Disable Position */
#define PIO_PCIDR_DRDY_Msk                    (_UINT32_(0x1) << PIO_PCIDR_DRDY_Pos)                /* (PIO_PCIDR) Parallel Capture Mode Data Ready Interrupt Disable Mask */
#define PIO_PCIDR_DRDY(value)                 (PIO_PCIDR_DRDY_Msk & (_UINT32_(value) << PIO_PCIDR_DRDY_Pos)) /* Assignment of value for DRDY in the PIO_PCIDR register */
#define PIO_PCIDR_OVRE_Pos                    _UINT32_(1)                                          /* (PIO_PCIDR) Parallel Capture Mode Overrun Error Interrupt Disable Position */
#define PIO_PCIDR_OVRE_Msk                    (_UINT32_(0x1) << PIO_PCIDR_OVRE_Pos)                /* (PIO_PCIDR) Parallel Capture Mode Overrun Error Interrupt Disable Mask */
#define PIO_PCIDR_OVRE(value)                 (PIO_PCIDR_OVRE_Msk & (_UINT32_(value) << PIO_PCIDR_OVRE_Pos)) /* Assignment of value for OVRE in the PIO_PCIDR register */
#define PIO_PCIDR_ENDRX_Pos                   _UINT32_(2)                                          /* (PIO_PCIDR) End of Reception Transfer Interrupt Disable Position */
#define PIO_PCIDR_ENDRX_Msk                   (_UINT32_(0x1) << PIO_PCIDR_ENDRX_Pos)               /* (PIO_PCIDR) End of Reception Transfer Interrupt Disable Mask */
#define PIO_PCIDR_ENDRX(value)                (PIO_PCIDR_ENDRX_Msk & (_UINT32_(value) << PIO_PCIDR_ENDRX_Pos)) /* Assignment of value for ENDRX in the PIO_PCIDR register */
#define PIO_PCIDR_RXBUFF_Pos                  _UINT32_(3)                                          /* (PIO_PCIDR) Reception Buffer Full Interrupt Disable Position */
#define PIO_PCIDR_RXBUFF_Msk                  (_UINT32_(0x1) << PIO_PCIDR_RXBUFF_Pos)              /* (PIO_PCIDR) Reception Buffer Full Interrupt Disable Mask */
#define PIO_PCIDR_RXBUFF(value)               (PIO_PCIDR_RXBUFF_Msk & (_UINT32_(value) << PIO_PCIDR_RXBUFF_Pos)) /* Assignment of value for RXBUFF in the PIO_PCIDR register */
#define PIO_PCIDR_Msk                         _UINT32_(0x0000000F)                                 /* (PIO_PCIDR) Register Mask  */


/* -------- PIO_PCIMR : (PIO Offset: 0x15C) ( R/ 32) Parallel Capture Interrupt Mask Register -------- */
#define PIO_PCIMR_DRDY_Pos                    _UINT32_(0)                                          /* (PIO_PCIMR) Parallel Capture Mode Data Ready Interrupt Mask Position */
#define PIO_PCIMR_DRDY_Msk                    (_UINT32_(0x1) << PIO_PCIMR_DRDY_Pos)                /* (PIO_PCIMR) Parallel Capture Mode Data Ready Interrupt Mask Mask */
#define PIO_PCIMR_DRDY(value)                 (PIO_PCIMR_DRDY_Msk & (_UINT32_(value) << PIO_PCIMR_DRDY_Pos)) /* Assignment of value for DRDY in the PIO_PCIMR register */
#define PIO_PCIMR_OVRE_Pos                    _UINT32_(1)                                          /* (PIO_PCIMR) Parallel Capture Mode Overrun Error Interrupt Mask Position */
#define PIO_PCIMR_OVRE_Msk                    (_UINT32_(0x1) << PIO_PCIMR_OVRE_Pos)                /* (PIO_PCIMR) Parallel Capture Mode Overrun Error Interrupt Mask Mask */
#define PIO_PCIMR_OVRE(value)                 (PIO_PCIMR_OVRE_Msk & (_UINT32_(value) << PIO_PCIMR_OVRE_Pos)) /* Assignment of value for OVRE in the PIO_PCIMR register */
#define PIO_PCIMR_ENDRX_Pos                   _UINT32_(2)                                          /* (PIO_PCIMR) End of Reception Transfer Interrupt Mask Position */
#define PIO_PCIMR_ENDRX_Msk                   (_UINT32_(0x1) << PIO_PCIMR_ENDRX_Pos)               /* (PIO_PCIMR) End of Reception Transfer Interrupt Mask Mask */
#define PIO_PCIMR_ENDRX(value)                (PIO_PCIMR_ENDRX_Msk & (_UINT32_(value) << PIO_PCIMR_ENDRX_Pos)) /* Assignment of value for ENDRX in the PIO_PCIMR register */
#define PIO_PCIMR_RXBUFF_Pos                  _UINT32_(3)                                          /* (PIO_PCIMR) Reception Buffer Full Interrupt Mask Position */
#define PIO_PCIMR_RXBUFF_Msk                  (_UINT32_(0x1) << PIO_PCIMR_RXBUFF_Pos)              /* (PIO_PCIMR) Reception Buffer Full Interrupt Mask Mask */
#define PIO_PCIMR_RXBUFF(value)               (PIO_PCIMR_RXBUFF_Msk & (_UINT32_(value) << PIO_PCIMR_RXBUFF_Pos)) /* Assignment of value for RXBUFF in the PIO_PCIMR register */
#define PIO_PCIMR_Msk                         _UINT32_(0x0000000F)                                 /* (PIO_PCIMR) Register Mask  */


/* -------- PIO_PCISR : (PIO Offset: 0x160) ( R/ 32) Parallel Capture Interrupt Status Register -------- */
#define PIO_PCISR_DRDY_Pos                    _UINT32_(0)                                          /* (PIO_PCISR) Parallel Capture Mode Data Ready Position */
#define PIO_PCISR_DRDY_Msk                    (_UINT32_(0x1) << PIO_PCISR_DRDY_Pos)                /* (PIO_PCISR) Parallel Capture Mode Data Ready Mask */
#define PIO_PCISR_DRDY(value)                 (PIO_PCISR_DRDY_Msk & (_UINT32_(value) << PIO_PCISR_DRDY_Pos)) /* Assignment of value for DRDY in the PIO_PCISR register */
#define PIO_PCISR_OVRE_Pos                    _UINT32_(1)                                          /* (PIO_PCISR) Parallel Capture Mode Overrun Error Position */
#define PIO_PCISR_OVRE_Msk                    (_UINT32_(0x1) << PIO_PCISR_OVRE_Pos)                /* (PIO_PCISR) Parallel Capture Mode Overrun Error Mask */
#define PIO_PCISR_OVRE(value)                 (PIO_PCISR_OVRE_Msk & (_UINT32_(value) << PIO_PCISR_OVRE_Pos)) /* Assignment of value for OVRE in the PIO_PCISR register */
#define PIO_PCISR_Msk                         _UINT32_(0x00000003)                                 /* (PIO_PCISR) Register Mask  */


/* -------- PIO_PCRHR : (PIO Offset: 0x164) ( R/ 32) Parallel Capture Reception Holding Register -------- */
#define PIO_PCRHR_RDATA_Pos                   _UINT32_(0)                                          /* (PIO_PCRHR) Parallel Capture Mode Reception Data Position */
#define PIO_PCRHR_RDATA_Msk                   (_UINT32_(0xFFFFFFFF) << PIO_PCRHR_RDATA_Pos)        /* (PIO_PCRHR) Parallel Capture Mode Reception Data Mask */
#define PIO_PCRHR_RDATA(value)                (PIO_PCRHR_RDATA_Msk & (_UINT32_(value) << PIO_PCRHR_RDATA_Pos)) /* Assignment of value for RDATA in the PIO_PCRHR register */
#define PIO_PCRHR_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (PIO_PCRHR) Register Mask  */


/* PIO register offsets definitions */
#define PIO_PER_REG_OFST               _UINT32_(0x00)      /* (PIO_PER) PIO Enable Register Offset */
#define PIO_PDR_REG_OFST               _UINT32_(0x04)      /* (PIO_PDR) PIO Disable Register Offset */
#define PIO_PSR_REG_OFST               _UINT32_(0x08)      /* (PIO_PSR) PIO Status Register Offset */
#define PIO_OER_REG_OFST               _UINT32_(0x10)      /* (PIO_OER) Output Enable Register Offset */
#define PIO_ODR_REG_OFST               _UINT32_(0x14)      /* (PIO_ODR) Output Disable Register Offset */
#define PIO_OSR_REG_OFST               _UINT32_(0x18)      /* (PIO_OSR) Output Status Register Offset */
#define PIO_IFER_REG_OFST              _UINT32_(0x20)      /* (PIO_IFER) Glitch Input Filter Enable Register Offset */
#define PIO_IFDR_REG_OFST              _UINT32_(0x24)      /* (PIO_IFDR) Glitch Input Filter Disable Register Offset */
#define PIO_IFSR_REG_OFST              _UINT32_(0x28)      /* (PIO_IFSR) Glitch Input Filter Status Register Offset */
#define PIO_SODR_REG_OFST              _UINT32_(0x30)      /* (PIO_SODR) Set Output Data Register Offset */
#define PIO_CODR_REG_OFST              _UINT32_(0x34)      /* (PIO_CODR) Clear Output Data Register Offset */
#define PIO_ODSR_REG_OFST              _UINT32_(0x38)      /* (PIO_ODSR) Output Data Status Register Offset */
#define PIO_PDSR_REG_OFST              _UINT32_(0x3C)      /* (PIO_PDSR) Pin Data Status Register Offset */
#define PIO_IER_REG_OFST               _UINT32_(0x40)      /* (PIO_IER) Interrupt Enable Register Offset */
#define PIO_IDR_REG_OFST               _UINT32_(0x44)      /* (PIO_IDR) Interrupt Disable Register Offset */
#define PIO_IMR_REG_OFST               _UINT32_(0x48)      /* (PIO_IMR) Interrupt Mask Register Offset */
#define PIO_ISR_REG_OFST               _UINT32_(0x4C)      /* (PIO_ISR) Interrupt Status Register Offset */
#define PIO_MDER_REG_OFST              _UINT32_(0x50)      /* (PIO_MDER) Multi-driver Enable Register Offset */
#define PIO_MDDR_REG_OFST              _UINT32_(0x54)      /* (PIO_MDDR) Multi-driver Disable Register Offset */
#define PIO_MDSR_REG_OFST              _UINT32_(0x58)      /* (PIO_MDSR) Multi-driver Status Register Offset */
#define PIO_PUDR_REG_OFST              _UINT32_(0x60)      /* (PIO_PUDR) Pull-up Disable Register Offset */
#define PIO_PUER_REG_OFST              _UINT32_(0x64)      /* (PIO_PUER) Pull-up Enable Register Offset */
#define PIO_PUSR_REG_OFST              _UINT32_(0x68)      /* (PIO_PUSR) Pad Pull-up Status Register Offset */
#define PIO_ABCDSR_REG_OFST            _UINT32_(0x70)      /* (PIO_ABCDSR) Peripheral ABCD Select Register 0 Offset */
#define PIO_ABCDSR0_REG_OFST           _UINT32_(0x70)      /* (PIO_ABCDSR0) Peripheral ABCD Select Register 0 Offset */
#define PIO_ABCDSR1_REG_OFST           _UINT32_(0x74)      /* (PIO_ABCDSR1) Peripheral ABCD Select Register 0 Offset */
#define PIO_IFSCDR_REG_OFST            _UINT32_(0x80)      /* (PIO_IFSCDR) Input Filter Slow Clock Disable Register Offset */
#define PIO_IFSCER_REG_OFST            _UINT32_(0x84)      /* (PIO_IFSCER) Input Filter Slow Clock Enable Register Offset */
#define PIO_IFSCSR_REG_OFST            _UINT32_(0x88)      /* (PIO_IFSCSR) Input Filter Slow Clock Status Register Offset */
#define PIO_SCDR_REG_OFST              _UINT32_(0x8C)      /* (PIO_SCDR) Slow Clock Divider Debouncing Register Offset */
#define PIO_PPDDR_REG_OFST             _UINT32_(0x90)      /* (PIO_PPDDR) Pad Pull-down Disable Register Offset */
#define PIO_PPDER_REG_OFST             _UINT32_(0x94)      /* (PIO_PPDER) Pad Pull-down Enable Register Offset */
#define PIO_PPDSR_REG_OFST             _UINT32_(0x98)      /* (PIO_PPDSR) Pad Pull-down Status Register Offset */
#define PIO_OWER_REG_OFST              _UINT32_(0xA0)      /* (PIO_OWER) Output Write Enable Offset */
#define PIO_OWDR_REG_OFST              _UINT32_(0xA4)      /* (PIO_OWDR) Output Write Disable Offset */
#define PIO_OWSR_REG_OFST              _UINT32_(0xA8)      /* (PIO_OWSR) Output Write Status Register Offset */
#define PIO_AIMER_REG_OFST             _UINT32_(0xB0)      /* (PIO_AIMER) Additional Interrupt Modes Enable Register Offset */
#define PIO_AIMDR_REG_OFST             _UINT32_(0xB4)      /* (PIO_AIMDR) Additional Interrupt Modes Disable Register Offset */
#define PIO_AIMMR_REG_OFST             _UINT32_(0xB8)      /* (PIO_AIMMR) Additional Interrupt Modes Mask Register Offset */
#define PIO_ESR_REG_OFST               _UINT32_(0xC0)      /* (PIO_ESR) Edge Select Register Offset */
#define PIO_LSR_REG_OFST               _UINT32_(0xC4)      /* (PIO_LSR) Level Select Register Offset */
#define PIO_ELSR_REG_OFST              _UINT32_(0xC8)      /* (PIO_ELSR) Edge/Level Status Register Offset */
#define PIO_FELLSR_REG_OFST            _UINT32_(0xD0)      /* (PIO_FELLSR) Falling Edge/Low-Level Select Register Offset */
#define PIO_REHLSR_REG_OFST            _UINT32_(0xD4)      /* (PIO_REHLSR) Rising Edge/High-Level Select Register Offset */
#define PIO_FRLHSR_REG_OFST            _UINT32_(0xD8)      /* (PIO_FRLHSR) Fall/Rise - Low/High Status Register Offset */
#define PIO_LOCKSR_REG_OFST            _UINT32_(0xE0)      /* (PIO_LOCKSR) Lock Status Offset */
#define PIO_WPMR_REG_OFST              _UINT32_(0xE4)      /* (PIO_WPMR) Write Protection Mode Register Offset */
#define PIO_WPSR_REG_OFST              _UINT32_(0xE8)      /* (PIO_WPSR) Write Protection Status Register Offset */
#define PIO_SCHMITT_REG_OFST           _UINT32_(0x100)     /* (PIO_SCHMITT) Schmitt Trigger Register Offset */
#define PIO_DRIVER_REG_OFST            _UINT32_(0x118)     /* (PIO_DRIVER) I/O Drive Register Offset */
#define PIO_PCMR_REG_OFST              _UINT32_(0x150)     /* (PIO_PCMR) Parallel Capture Mode Register Offset */
#define PIO_PCIER_REG_OFST             _UINT32_(0x154)     /* (PIO_PCIER) Parallel Capture Interrupt Enable Register Offset */
#define PIO_PCIDR_REG_OFST             _UINT32_(0x158)     /* (PIO_PCIDR) Parallel Capture Interrupt Disable Register Offset */
#define PIO_PCIMR_REG_OFST             _UINT32_(0x15C)     /* (PIO_PCIMR) Parallel Capture Interrupt Mask Register Offset */
#define PIO_PCISR_REG_OFST             _UINT32_(0x160)     /* (PIO_PCISR) Parallel Capture Interrupt Status Register Offset */
#define PIO_PCRHR_REG_OFST             _UINT32_(0x164)     /* (PIO_PCRHR) Parallel Capture Reception Holding Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* PIO register API structure */
typedef struct
{
  __O   uint32_t                       PIO_PER;            /* Offset: 0x00 ( /W  32) PIO Enable Register */
  __O   uint32_t                       PIO_PDR;            /* Offset: 0x04 ( /W  32) PIO Disable Register */
  __I   uint32_t                       PIO_PSR;            /* Offset: 0x08 (R/   32) PIO Status Register */
  __I   uint8_t                        Reserved1[0x04];
  __O   uint32_t                       PIO_OER;            /* Offset: 0x10 ( /W  32) Output Enable Register */
  __O   uint32_t                       PIO_ODR;            /* Offset: 0x14 ( /W  32) Output Disable Register */
  __I   uint32_t                       PIO_OSR;            /* Offset: 0x18 (R/   32) Output Status Register */
  __I   uint8_t                        Reserved2[0x04];
  __O   uint32_t                       PIO_IFER;           /* Offset: 0x20 ( /W  32) Glitch Input Filter Enable Register */
  __O   uint32_t                       PIO_IFDR;           /* Offset: 0x24 ( /W  32) Glitch Input Filter Disable Register */
  __I   uint32_t                       PIO_IFSR;           /* Offset: 0x28 (R/   32) Glitch Input Filter Status Register */
  __I   uint8_t                        Reserved3[0x04];
  __O   uint32_t                       PIO_SODR;           /* Offset: 0x30 ( /W  32) Set Output Data Register */
  __O   uint32_t                       PIO_CODR;           /* Offset: 0x34 ( /W  32) Clear Output Data Register */
  __IO  uint32_t                       PIO_ODSR;           /* Offset: 0x38 (R/W  32) Output Data Status Register */
  __I   uint32_t                       PIO_PDSR;           /* Offset: 0x3C (R/   32) Pin Data Status Register */
  __O   uint32_t                       PIO_IER;            /* Offset: 0x40 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       PIO_IDR;            /* Offset: 0x44 ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       PIO_IMR;            /* Offset: 0x48 (R/   32) Interrupt Mask Register */
  __I   uint32_t                       PIO_ISR;            /* Offset: 0x4C (R/   32) Interrupt Status Register */
  __O   uint32_t                       PIO_MDER;           /* Offset: 0x50 ( /W  32) Multi-driver Enable Register */
  __O   uint32_t                       PIO_MDDR;           /* Offset: 0x54 ( /W  32) Multi-driver Disable Register */
  __I   uint32_t                       PIO_MDSR;           /* Offset: 0x58 (R/   32) Multi-driver Status Register */
  __I   uint8_t                        Reserved4[0x04];
  __O   uint32_t                       PIO_PUDR;           /* Offset: 0x60 ( /W  32) Pull-up Disable Register */
  __O   uint32_t                       PIO_PUER;           /* Offset: 0x64 ( /W  32) Pull-up Enable Register */
  __I   uint32_t                       PIO_PUSR;           /* Offset: 0x68 (R/   32) Pad Pull-up Status Register */
  __I   uint8_t                        Reserved5[0x04];
  __IO  uint32_t                       PIO_ABCDSR[2];      /* Offset: 0x70 (R/W  32) Peripheral ABCD Select Register 0 */
  __I   uint8_t                        Reserved6[0x08];
  __O   uint32_t                       PIO_IFSCDR;         /* Offset: 0x80 ( /W  32) Input Filter Slow Clock Disable Register */
  __O   uint32_t                       PIO_IFSCER;         /* Offset: 0x84 ( /W  32) Input Filter Slow Clock Enable Register */
  __I   uint32_t                       PIO_IFSCSR;         /* Offset: 0x88 (R/   32) Input Filter Slow Clock Status Register */
  __IO  uint32_t                       PIO_SCDR;           /* Offset: 0x8C (R/W  32) Slow Clock Divider Debouncing Register */
  __O   uint32_t                       PIO_PPDDR;          /* Offset: 0x90 ( /W  32) Pad Pull-down Disable Register */
  __O   uint32_t                       PIO_PPDER;          /* Offset: 0x94 ( /W  32) Pad Pull-down Enable Register */
  __I   uint32_t                       PIO_PPDSR;          /* Offset: 0x98 (R/   32) Pad Pull-down Status Register */
  __I   uint8_t                        Reserved7[0x04];
  __O   uint32_t                       PIO_OWER;           /* Offset: 0xA0 ( /W  32) Output Write Enable */
  __O   uint32_t                       PIO_OWDR;           /* Offset: 0xA4 ( /W  32) Output Write Disable */
  __I   uint32_t                       PIO_OWSR;           /* Offset: 0xA8 (R/   32) Output Write Status Register */
  __I   uint8_t                        Reserved8[0x04];
  __O   uint32_t                       PIO_AIMER;          /* Offset: 0xB0 ( /W  32) Additional Interrupt Modes Enable Register */
  __O   uint32_t                       PIO_AIMDR;          /* Offset: 0xB4 ( /W  32) Additional Interrupt Modes Disable Register */
  __I   uint32_t                       PIO_AIMMR;          /* Offset: 0xB8 (R/   32) Additional Interrupt Modes Mask Register */
  __I   uint8_t                        Reserved9[0x04];
  __O   uint32_t                       PIO_ESR;            /* Offset: 0xC0 ( /W  32) Edge Select Register */
  __O   uint32_t                       PIO_LSR;            /* Offset: 0xC4 ( /W  32) Level Select Register */
  __I   uint32_t                       PIO_ELSR;           /* Offset: 0xC8 (R/   32) Edge/Level Status Register */
  __I   uint8_t                        Reserved10[0x04];
  __O   uint32_t                       PIO_FELLSR;         /* Offset: 0xD0 ( /W  32) Falling Edge/Low-Level Select Register */
  __O   uint32_t                       PIO_REHLSR;         /* Offset: 0xD4 ( /W  32) Rising Edge/High-Level Select Register */
  __I   uint32_t                       PIO_FRLHSR;         /* Offset: 0xD8 (R/   32) Fall/Rise - Low/High Status Register */
  __I   uint8_t                        Reserved11[0x04];
  __I   uint32_t                       PIO_LOCKSR;         /* Offset: 0xE0 (R/   32) Lock Status */
  __IO  uint32_t                       PIO_WPMR;           /* Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I   uint32_t                       PIO_WPSR;           /* Offset: 0xE8 (R/   32) Write Protection Status Register */
  __I   uint8_t                        Reserved12[0x14];
  __IO  uint32_t                       PIO_SCHMITT;        /* Offset: 0x100 (R/W  32) Schmitt Trigger Register */
  __I   uint8_t                        Reserved13[0x14];
  __IO  uint32_t                       PIO_DRIVER;         /* Offset: 0x118 (R/W  32) I/O Drive Register */
  __I   uint8_t                        Reserved14[0x34];
  __IO  uint32_t                       PIO_PCMR;           /* Offset: 0x150 (R/W  32) Parallel Capture Mode Register */
  __O   uint32_t                       PIO_PCIER;          /* Offset: 0x154 ( /W  32) Parallel Capture Interrupt Enable Register */
  __O   uint32_t                       PIO_PCIDR;          /* Offset: 0x158 ( /W  32) Parallel Capture Interrupt Disable Register */
  __I   uint32_t                       PIO_PCIMR;          /* Offset: 0x15C (R/   32) Parallel Capture Interrupt Mask Register */
  __I   uint32_t                       PIO_PCISR;          /* Offset: 0x160 (R/   32) Parallel Capture Interrupt Status Register */
  __I   uint32_t                       PIO_PCRHR;          /* Offset: 0x164 (R/   32) Parallel Capture Reception Holding Register */
} pio_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CZCA70_PIO_COMPONENT_H_ */
