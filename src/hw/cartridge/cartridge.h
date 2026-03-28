/**
 * @file cartridge.h
 * 
 * @author 0xba60ff1ea5 (ba60ff1ea5@gmail.com)
 * 
 * @brief 
 * 
 * @date 2026-02-28
 * 
 * @copyright Copyright (c) 2026
 */

#include <stdbool.h>

typedef struct nes_cartridge nes_cartridge_t;
typedef struct nes nes_t;


bool nes_cartridge_load(nes_cartridge_t *rom, const char *path);

nes_cartridge_t *nes_cartridge_init(nes_t *nes);
