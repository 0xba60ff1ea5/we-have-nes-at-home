/**
 * @file ppu.h
 * @author 0xba60ff1ea5 (ba60ff1ea5@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2026-02-28
 * 
 * @copyright Copyright (c) 2026
 * 
 */

typedef struct nes_ppu nes_ppu_t;


// void nes_ppu_step(nes_ppu_t *ppu);

void nes_ppu_reset(nes_ppu_t *ppu);

nes_ppu_t *nes_ppu_init(void);
