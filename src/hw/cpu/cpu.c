/**
 * @file cpu.c
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

#include "cpu.h"

// Macros for the Processor Status register
// https://www.nesdev.org/wiki/Status_flags
#define NES_CPU_C_FLAG 0x01 // Carry
#define NES_CPU_Z_FLAG 0x02 // Zero
#define NES_CPU_I_FLAG 0x04 // Interrupt Disable
#define NES_CPU_D_FLAG 0x08 // Decimal, ignored on NES
#define NES_CPU_B_FLAG 0x10 // See link above for details
#define NES_CPU_1_FLAG 0x20 // 1, always pushed as 1
#define NES_CPU_V_FLAG 0x40 // Overflow
#define NES_CPU_N_FLAG 0x80 // Negative

typedef struct nes_cpu
{
    // https://www.nesdev.org/wiki/CPU_registers
    uint8_t a;   // Accumulator
    uint8_t x;   // X-Index
    uint8_t y;   // Y-Index
    uint16_t pc; // Program Counter
    uint8_t s;   // Stack Pointer
    uint8_t p;   // Processor Status / Status Register
} nes_cpu_t;


// ##################################################
// # Private Functions                              #
// ##################################################

// ##################################################
// # Public Functions                               #
// ##################################################

// void nes_cpu_step(nes_cpu_t *cpu)
// {

// }

void nes_cpu_reset(nes_cpu_t *cpu)
{
    // https://www.nesdev.org/wiki/CPU_power_up_state
    cpu->p = NES_CPU_I_FLAG | NES_CPU_1_FLAG;

    // Set stack pointer to 0xFD on power up, decrement by 3 on reset
    for (int i = 0; i < 3; ++i)
    {
        --cpu->s;
    }

    // Set pc to Reset Vector $FFFC
}

nes_cpu_t *nes_cpu_init(void)
{
    nes_cpu_t *cpu = g_malloc0(sizeof(nes_cpu_t));
    return cpu;
}
