/**
 * @file rom.c
 * @author 0xba60ff1ea5 (ba60ff1ea5@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2026-02-28
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#include <glib.h>

#include "rom.h"
 
typedef struct nes_rom
{
    // TODO: Figure out what to do here
    uint8_t dummy_regs;
} nes_rom_t;


// ##################################################
// # Private Functions                              #
// ##################################################

// ##################################################
// # Public Functions                               #
// ##################################################

// void nes_rom_reset(nes_rom_t *rom)
// {
//     // TODO: Figure out what to do here
//     return;
// }

nes_rom_t *nes_rom_init(void)
{
    nes_rom_t *rom = g_malloc0(sizeof(nes_rom_t));

    // nes_rom_reset(rom);

    return rom;
}
