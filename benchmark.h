//-----------------------------------------------------------------------------
// The confidential and proprietary information contained in this file may
// only be used by a person authorised under and to the extent permitted
// by a subsisting licensing agreement from ARM Limited.
//
//            (C) COPYRIGHT 2013-2014 ARM Limited.
//                ALL RIGHTS RESERVED
//
// This entire notice must be reproduced on all copies of this file
// and copies of this file may only be made by a person if such person is
// permitted to do so under the terms of a subsisting license agreement
// from ARM Limited.
//
//      SVN Information
//
//      Checked In          : $Date: 2014-07-02 16:52:21 +0100 (Wed, 02 Jul 2014) $
//
//      Revision            : $Revision: 283836 $
//
//      Release Information : CORTEXA53-r0p4-00rel1
//
//------------------------------------------------------------------------------

#ifndef BENCHMARK_H
#define BENCHMARK_H

#include <stdio.h>
#include <stdint.h>

#define MAINSTART
#define MAINEND

// #define TUBE_ADDRESS ((volatile uint32_t *) 0x1C090000u)
#define TUBE_ADDRESS ((volatile uint32_t *) 0x1C0A0000u)
#define BENCHSTART
#define BENCHFINISHED benchmark_finish();
#define LOOPSTART
#define LOOPEND

#define ITERATIONS 50000

// This function writes characters directly rather the use printf so that
// it can work when printf is not available.
static void benchmark_finish()
{
//   char  p[] = "** TEST PASSED OK **\n";
//   char* c   = p;

//   while (*c)
//   {
//     *TUBE_ADDRESS = *c;
//     c++;
//   }

//   *TUBE_ADDRESS = 0x4;
}

#endif
