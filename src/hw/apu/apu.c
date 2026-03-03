/**
 * @file apu.c
 * 
 * @author 0xba60ff1ea5 (ba60ff1ea5@gmail.com)
 * 
 * @brief 
 * 
 * @date 2026-02-28
 * 
 * @copyright Copyright (c) 2026
 */

#include <glib.h>
#include <stdint.h>

#include "apu.h"
#include "../nes.h"
 
typedef struct nes_apu
{
    // TODO: Figure out what to do here
    uint8_t dummy_regs;

    nes_t *nes;
} nes_apu_t;


// ##################################################
// # Private Functions                              #
// ##################################################

// ##################################################
// # Public Functions                               #
// ##################################################

// void nes_apu_step(nes_apu_t *apu)
// {

// }

void nes_apu_reset(nes_apu_t *apu)
{
    // TODO: Figure out what to do here
    return;
}

nes_apu_t *nes_apu_init(nes_t *nes)
{
    nes_apu_t *apu = g_malloc0(sizeof(nes_apu_t));
    apu->nes = nes;
    return apu;
}
