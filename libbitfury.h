/*
 * Copyright 2014 Con Kolivas
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 3 of the License, or (at your option)
 * any later version.  See COPYING for more details.
 */

#ifndef LIBBITFURY_H
#define LIBBITFURY_H
#include "miner.h"
#include "driver-bitfury.h"

void ms3steps(uint32_t *p);
uint32_t decnonce(uint32_t in);
void bitfury_work_to_payload(struct bitfury_payload *p, struct work *w);
void spi_set_freq(struct bitfury_info *info);
void spi_send_conf(struct bitfury_info *info);
void spi_send_init(struct bitfury_info *info);
void spi_clear_buf(struct bitfury_info *info);
void spi_add_buf(struct bitfury_info *info, const void *buf, const int sz);
void spi_add_break(struct bitfury_info *info);
void spi_add_data(struct bitfury_info *info, uint16_t addr, const void *buf, int len);
bool spi_reset(struct cgpu_info *bitfury, struct bitfury_info *info);
bool spi_txrx(struct cgpu_info *bitfury, struct bitfury_info *info);
bool libbitfury_sendHashData(struct cgpu_info *bf);

#endif /* LIBBITFURY_H */