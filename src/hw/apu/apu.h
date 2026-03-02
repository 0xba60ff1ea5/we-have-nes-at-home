/**
 * @file apu.h
 * 
 * @author 0xba60ff1ea5 (ba60ff1ea5@gmail.com)
 * 
 * @brief 
 * 
 * @date 2026-02-28
 * 
 * @copyright Copyright (c) 2026
 */

typedef struct nes_apu nes_apu_t;


// void nes_apu_step(nes_apu_t *apu);

void nes_apu_reset(nes_apu_t *apu);

nes_apu_t *nes_apu_init(void);
