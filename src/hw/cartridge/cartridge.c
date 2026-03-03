/**
 * @file cartridge.c
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

#include "cartridge.h"
#include "../nes.h"
 
typedef struct nes_cartridge
{
    // TODO: Figure out what to do here
    uint8_t dummy_regs;

    nes_t *nes;
} nes_cartridge_t;


// ##################################################
// # Private Functions                              #
// ##################################################

// ##################################################
// # Public Functions                               #
// ##################################################

// void nes_cartridge_reset(nes_cartridge_t *cartridge)
// {
//     // TODO: Figure out what to do here
//     return;
// }

nes_cartridge_t *nes_cartridge_init(nes_t *nes)
{
    nes_cartridge_t *cartridge = g_malloc0(sizeof(nes_cartridge_t));
    cartridge->nes = nes;
    return cartridge;
}
