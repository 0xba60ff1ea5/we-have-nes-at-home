/**
 * @file nes.h
 * 
 * @author 0xba60ff1ea5 (ba60ff1ea5@gmail.com)
 * 
 * @brief 
 * 
 * @date 2026-02-28
 * 
 * @copyright Copyright (c) 2026
 */

typedef struct nes nes_t;


uint8_t nes_read(nes_t *nes, uint16_t addr);

uint16_t nes_read16(nes_t *nes, uint16_t addr);

void nes_write(nes_t *nes, uint16_t addr, uint16_t val);

void nes_reset(nes_t *nes);

nes_t *nes_init(void);
