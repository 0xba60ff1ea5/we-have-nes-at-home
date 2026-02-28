/**
 * @file ppu.c
 * @author 0xba60ff1ea5 (ba60ff1ea5@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2026-02-28
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#include <glib.h>

#include "ppu.h"
 
typedef struct nes_ppu
{
    // TODO: Figure out what to do here
    uint8_t dummy_regs;
} nes_ppu_t;


// ##################################################
// # Private Functions                              #
// ##################################################

// ##################################################
// # Public Functions                               #
// ##################################################

// void nes_ppu_step(nes_ppu_t *ppu)
// {

// }

void nes_ppu_reset(nes_ppu_t *ppu)
{
    // TODO: Figure out what to do here
    return;
}

nes_ppu_t *nes_ppu_init(void)
{
    nes_ppu_t *ppu = g_malloc0(sizeof(nes_ppu_t));

    nes_ppu_reset(ppu);

    return ppu;
}