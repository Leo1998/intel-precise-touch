/* SPDX-License-Identifier: GPL-2.0-or-later */

#ifndef _IPTS_PROTOCOL_TOUCH_H_
#define _IPTS_PROTOCOL_TOUCH_H_

#include <linux/types.h>

struct ipts_touch_data {
	u32 type;
	u32 size;
	u32 buffer;
	u8 reserved[52];
	u8 data[];
};
static_assert(sizeof(struct ipts_touch_data) == 64);

struct ipts_feedback {
	u32 type;
	u32 size;
	u32 transaction;
	u8 reserved[52];
	u8 data[];
};
static_assert(sizeof(struct ipts_feedback) == 64);

struct ipts_stylus_report {
	u16 timestamp;
	u16 mode;
	u16 x;
	u16 y;
	u16 pressure;
	u16 altitude;
	u16 azimuth;
	u16 reserved;
};
static_assert(sizeof(struct ipts_stylus_report) == 16);

#define IPTS_STYLUS_REPORT_MODE_PROXIMITY	BIT(0)
#define IPTS_STYLUS_REPORT_MODE_TOUCH		BIT(1)
#define IPTS_STYLUS_REPORT_MODE_BUTTON		BIT(2)
#define IPTS_STYLUS_REPORT_MODE_RUBBER		BIT(3)

#endif /* _IPTS_PROTOCOL_TOUCH_H_ */
