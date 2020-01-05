/* SPDX-License-Identifier: GPL-2.0-or-later */

#ifndef _IPTS_PROTOCOL_ENUMS_H_
#define _IPTS_PROTOCOL_ENUMS_H_

/*
 * IPTS ME state
 */
enum ipts_me_status {
	IPTS_ME_STATUS_SUCCESS = 0,
	IPTS_ME_STATUS_INVALID_PARAMS,
	IPTS_ME_STATUS_ACCESS_DENIED,
	IPTS_ME_STATUS_CMD_SIZE_ERROR,
	IPTS_ME_STATUS_NOT_READY,
	IPTS_ME_STATUS_REQUEST_OUTSTANDING,
	IPTS_ME_STATUS_NO_SENSOR_FOUND,
	IPTS_ME_STATUS_OUT_OF_MEMORY,
	IPTS_ME_STATUS_INTERNAL_ERROR,
	IPTS_ME_STATUS_SENSOR_DISABLED,
	IPTS_ME_STATUS_COMPAT_CHECK_FAIL,
	IPTS_ME_STATUS_SENSOR_EXPECTED_RESET,
	IPTS_ME_STATUS_SENSOR_UNEXPECTED_RESET,
	IPTS_ME_STATUS_RESET_FAILED,
	IPTS_ME_STATUS_TIMEOUT,
	IPTS_ME_STATUS_TEST_MODE_FAIL,
	IPTS_ME_STATUS_SENSOR_FAIL_FATAL,
	IPTS_ME_STATUS_SENSOR_FAIL_NONFATAL,
	IPTS_ME_STATUS_INVALID_DEVICE_CAPS,
	IPTS_ME_STATUS_QUIESCE_IO_IN_PROGRESS,
	IPTS_ME_STATUS_MAX
};

enum ipts_sensor_mode {
	IPTS_SENSOR_MODE_SINGLETOUCH = 0,
	IPTS_SENSOR_MODE_MULTITOUCH,
	IPTS_SENSOR_MODE_MAX
};

enum ipts_touch_data_type {
	IPTS_TOUCH_DATA_TYPE_FRAME = 0,
	IPTS_TOUCH_DATA_TYPE_ERROR,
	IPTS_TOUCH_DATA_TYPE_VENDOR_DATA,
	IPTS_TOUCH_DATA_TYPE_HID_REPORT,
	IPTS_TOUCH_DATA_TYPE_GET_FEATURES,
	IPTS_TOUCH_DATA_TYPE_MAX
};

enum ipts_feedback_type {
	IPTS_FEEDBACK_TYPE_NONE = 0,
	IPTS_FEEDBACK_TYPE_SOFT_RESET,
	IPTS_FEEDBACK_TYPE_GOTO_ARMED,
	IPTS_FEEDBACK_TYPE_GOTO_SENSING,
	IPTS_FEEDBACK_TYPE_GOTO_SLEEP,
	IPTS_FEEDBACK_TYPE_GOTO_DOZE,
	IPTS_FEEDBACK_TYPE_HARD_RESET,
	IPTS_FEEDBACK_TYPE_MAX
};

#endif /* _IPTS_PROTOCOL_ENUMS_H_ */
