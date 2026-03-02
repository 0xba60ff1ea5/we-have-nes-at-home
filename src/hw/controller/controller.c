/**
 * @file controller.c
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

#include "controller.h"
 
typedef struct nes_controller
{
    // TODO: Figure out what to do here
    uint8_t dummy_regs;
} nes_controller_t;


// ##################################################
// # Private Functions                              #
// ##################################################

// ##################################################
// # Public Functions                               #
// ##################################################

// void nes_controller_reset(nes_controller_t *controller)
// {
//     // TODO: Figure out what to do here
//     return;
// }

nes_controller_t *nes_controller_init(void)
{
    nes_controller_t *controller = g_malloc0(sizeof(nes_controller_t));

    // nes_controller_reset(controller);

    return controller;
}
