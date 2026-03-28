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
#include <stdio.h>
#include <stdbool.h>

#include "cartridge.h"
#include "../nes.h"

enum nes_cartridge_constants_e
{
    INES_HEADER_SIZE = 16,
};

typedef struct nes_ines_header
{
    // https://www.nesdev.org/wiki/INES
    uint32_t magic; // "NES\x1A"
    uint8_t prg_rom_size;
    uint8_t chr_rom_size;
    uint8_t flags_6;
    uint8_t flags_7;
    uint8_t flags_8;
    uint8_t flags_9;
    uint8_t flags_10;
    uint8_t padding[5];
} nes_ines_header_t;
 
typedef struct nes_cartridge
{
    nes_ines_header_t ines_header;
    nes_t *nes;
} nes_cartridge_t;


// ##################################################
// # Private Functions                              #
// ##################################################

// ##################################################
// # Public Functions                               #
// ##################################################

bool nes_cartridge_load(nes_cartridge_t *rom, const char *path)
{
    // Open file
    FILE *f = fopen(path, "rb");
    if (!f)
    {
        printf("%s - Failed to open ROM file\n", __func__);
        return false;
    }

    // Read header

    // Parse header

    // Skip trainer if present (bit 2 of flags6)

    // Load PRG-ROM

    // Load CHR-ROM (if present)
        // else: CHR-RAM will be used — already zeroed in nes_rom_init

    fclose(f);
    return true;
}

nes_cartridge_t *nes_cartridge_init(nes_t *nes)
{
    nes_cartridge_t *cartridge = g_malloc0(sizeof(nes_cartridge_t));
    cartridge->nes = nes;
    return cartridge;
}
