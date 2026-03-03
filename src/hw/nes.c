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
#include "cartridge/cartridge.h"
#include "controller/controller.h"

// https://www.nesdev.org/wiki/CPU_memory_map
enum nes_memory_macros_e
{
    // 2 KB Internal RAM and Mirrors
    NES_MEM_RAM_SIZE   = 0x0800,
    NES_MEM_RAM_MASK   = 0x07FF,
    NES_MEM_RAM_OFFSET = 0x0000,

    // PPU Registers and Mirrors
    NES_MEM_PPU_SIZE   = 0x0008,
    NES_MEM_PPU_MASK   = 0x0007,
    NES_MEM_PPU_OFFSET = 0x2000,

    // APU and I/O
    NES_MEM_APU_IO_SIZE   = 0x0018,
    NES_MEM_APU_IO_MASK   = 0x0017,
    NES_MEM_APU_IO_OFFSET = 0x4000,

    // APU and I/O disabled regs
    NES_MEM_TEST_SIZE   = 0x0008,
    NES_MEM_TEST_MASK   = 0x0007,
    NES_MEM_TEST_OFFSET = 0x4018,

    // Cartridge
    NES_MEM_CART_SIZE   = 0xBFE0,
    NES_MEM_CART_MASK   = 0xBFDF,
    NES_MEM_CART_OFFSET = 0x4020,
}
 
typedef struct nes
{
    uint8_t ram[NES_BUS_RAM_SIZE];

    nes_cpu_t *cpu;
    nes_apu_t *apu;
    nes_ppu_t *ppu;
    nes_cartridge_t *cartridge;
    nes_controller_t *controller;
} nes_t;


// ##################################################
// # Private Functions                              #
// ##################################################

// ##################################################
// # Public Functions                               #
// ##################################################

uint8_t nes_read(nes_t *nes, uint16_t addr)
{
    if (addr < NES_MEM_PPU_OFFSET)
    {
        // RAM
        return nes->ram[addr & NES_MEM_RAM_MASK];
    }
    else if (addr < NES_MEM_APU_IO_OFFSET)
    {
        // PPU
        if (nes->ppu)
        {

        }
    }
    else if (addr < NES_MEM_TEST_OFFSET)
    {
        // APU and I/O
    }
    else if (addr < NES_MEM_CART_OFFSET)
    {
        // Test Regs
    }
    else
    {
        // Cartridge
        if (nes->cartridge)
        {

        }
    }
}

uint16_t nes_read16(nes_t *nes, uint16_t addr)
{
    uint8_t lo = nes_read(nes, addr);
    uint8_t hi = nes_read(nes, addr + 1);
    // Little Endian
    return (hi << 8 | lo);
}

void nes_write(nes_t *nes, uint16_t addr, uint16_t val)
{
    // TODO: Figure out what to do here
}

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
    nes->cartridge = nes_cartridge_init();
    // Assuming 1-player games for now...
    nes_controller_init(0);

    nes_reset(nes);

    // nes_cartridge_load(nes->cartridge, argv[1]);

    return nes;
}