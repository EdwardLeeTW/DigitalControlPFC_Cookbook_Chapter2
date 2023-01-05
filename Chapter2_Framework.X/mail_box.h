//=======================================================================================================
// Copyright(c) 2018 Microchip Technology Inc. and its subsidiaries.
// Subject to your compliance with these terms, you may use Microchip software and any derivatives
// exclusively with Microchip products. It is your responsibility to comply with third party license
// terms applicable to your use of third-party software (including open source software) that may
// accompany Microchip software.
// THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY,
// APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND
// FITNESS FOR A PARTICULAR PURPOSE.
// IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
// LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF
// MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE FULLEST EXTENT
// ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT
// EXCEED THE AMOUNT OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
//=======================================================================================================

//=======================================================================================================
// @file mail_box.h
//
// @brief contains the parameters for exchanging data in between each module
//
// @note    
//
//
// @version v1.0
// @date 2023-01-05
// @author A13908
//
//=======================================================================================================

#ifndef _MAIL_BOX_H_
#define	_MAIL_BOX_H_

typedef struct flag16bits
{
        union //u16bits
        {
                struct       //
                {
                        //Low Byte
                        unsigned bit0 :1;
                        unsigned bit1 :1;
                        unsigned bit2 :1;
                        unsigned bit3 :1;
                        unsigned bit4 :1;
                        unsigned bit5 :1;
                        unsigned bit6 :1;
                        unsigned bit7 :1;
                        //High Byte
                        unsigned bit8 :1;
                        unsigned bit9 :1;
                        unsigned bit10 :1;
                        unsigned bit11 :1;
                        unsigned bit12 :1;
                        unsigned bit13 :1;
                        unsigned bit14 :1;
                        unsigned bit15 :1;
                };
                struct       //
                {
                        uint8_t LB : 8;
                        uint8_t HB : 8;
                };
                uint16_t Val;
        };
} flag16bits_t;

// Reserved ram for MailBox for exchanging data or information
#define MAILBOX_LENGTH  20  // unit: word
extern flag16bits_t mailbox[MAILBOX_LENGTH];

// MailBox Data Definitions
// eg. #define variable     mailbox[0]  // Updated ONLY by Which Module? (By Who?)
//     variable.Val = 0;
//     variable.HB  = 0;
//     variable.bit0 = 1;
//
//     #define mb_Vout      mailbox[0]  // Updated ONLY by Sync-Buck PS-DCLD (By Edward)
//     mb_Vout.Val = 0;
//     mb_Vout.HB  = 0;
//     mb_Vout.bit0 = 1;
//
#define MAILBOX_DATA0       mailbox[0]
#define MAILBOX_DATA1       mailbox[1]
#define MAILBOX_DATA2       mailbox[2]
#define MAILBOX_DATA3       mailbox[3]
#define MAILBOX_DATA4       mailbox[4]
#define MAILBOX_DATA5       mailbox[5]
#define MAILBOX_DATA6       mailbox[6]
#define MAILBOX_DATA7       mailbox[7]
#define MAILBOX_DATA8       mailbox[8]
#define MAILBOX_DATA9       mailbox[9]
#define MAILBOX_DATA10      mailbox[10]
#define MAILBOX_DATA11      mailbox[11]
#define MAILBOX_DATA12      mailbox[12]
#define MAILBOX_DATA13      mailbox[13]
#define MAILBOX_DATA14      mailbox[14]
#define MAILBOX_DATA15      mailbox[15]
#define MAILBOX_DATA16      mailbox[16]
#define MAILBOX_DATA17      mailbox[17]
#define MAILBOX_DATA18      mailbox[18]
#define MAILBOX_DATA19      mailbox[19]

#endif  // _MAIL_BOX_H_

