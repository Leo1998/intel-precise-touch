// SPDX-License-Identifier: GPL-2.0-or-later

#include <linux/mei_cl_bus.h>
#include <linux/types.h>

#include "context.h"
#include "protocol/commands.h"
#include "protocol/events.h"

int ipts_control_send(struct ipts_context *ipts,
		u32 cmd, void *data, u32 size)
{
	int ret;
	struct ipts_command msg;

	memset(&msg, 0, sizeof(struct ipts_command));
	msg.code = cmd;

	// Copy message payload
	if (data && size > 0)
		memcpy(&msg.data, data, size);

	ret = mei_cldev_send(ipts->client_dev, (u8 *)&msg,
			sizeof(msg.code) + size);
	if (ret) {
		dev_err(ipts->dev, "%s: error 0x%X:%d\n", __func__, cmd, ret);
		return ret;
	}

	return 0;
}

int ipts_control_start(struct ipts_context *ipts)
{
	ipts->status = IPTS_HOST_STATUS_INIT;
	return ipts_control_send(ipts, IPTS_CMD(NOTIFY_DEV_READY), NULL, 0);
}