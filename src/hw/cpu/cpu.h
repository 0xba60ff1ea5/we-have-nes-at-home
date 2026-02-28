/**
 * @file cpu.h
 * @author 0xba60ff1ea5 (ba60ff1ea5@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2026-02-28
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#pragma once

typedef struct nes_cpu nes_cpu_t;


// void nes_cpu_step(nes_cpu_t *cpu);

void nes_cpu_reset(nes_cpu_t *cpu);

nes_cpu_t *nes_cpu_init(void);
