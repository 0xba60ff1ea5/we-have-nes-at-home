/**
 * @file nes.c
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

#include "cpu/cpu.h"
#include "apu/apu.h"
#include "ppu/ppu.h"
#include "rom/rom.h"
#include "controller/controller.h"
 
typedef struct nes
{
    nes_cpu_t *cpu;
    nes_apu_t *apu;
    nes_ppu_t *ppu;
    nes_rom_t *rom;
    nes_controller_t *controller;
} nes_t;


// ##################################################
// # Private Functions                              #
// ##################################################

// ##################################################
// # Public Functions                               #
// ##################################################

// void nes_step(nes_t *nes)
// {
//     // TODO: Verify this
//     nes_cpu_step(nes->cpu);

//     /* PPU runs 3x faster */
//     nes_ppu_step(nes->ppu);
//     nes_ppu_step(nes->ppu);
//     nes_ppu_step(nes->ppu);

//     nes_apu_step(nes->apu);
// }

void nes_reset(nes_t *nes)
{
    nes_cpu_reset(nes->cpu);
    nes_ppu_reset(nes->ppu);
    nes_apu_reset(nes->apu);
}

nes_t *nes_init(void)
{
    nes_t *nes = g_malloc0(sizeof(nes_t));

    nes->cpu = nes_cpu_init();
    nes->apu = nes_apu_init();
    nes->ppu = nes_ppu_init();
    nes->rom = nes_rom_init();
    nes->controller = nes_controller_init();

    nes_reset(nes);

    // nes_rom_load(nes->rom, argv[1]);

    return nes;
}