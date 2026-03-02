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
 
typedef struct nes_cpu
{
    // TODO: Figure out what to do here
    uint8_t dummy_regs;
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
    // TODO: Figure out what to do here
    return;
}

nes_cpu_t *nes_cpu_init(void)
{
    nes_cpu_t *cpu = g_malloc0(sizeof(nes_cpu_t));

    nes_cpu_reset(cpu);

    return cpu;
}
