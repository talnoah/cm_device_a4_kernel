#ifndef HDMI_CEC_H
#define HDMI_CEC_H

/* CEC opcode */
#define CEC_OPCODE_GIVE_DECK_STATUS		0x1A
#define CEC_OPCODE_DECK_STATUS			0x1B
#define CEC_OPCODE_PLAY				0x41
#define CEC_OPCODE_DECK_CONTROL			0x42
#define CEC_OPCODE_USER_CONTROL_PRESSED		0x44
#define CEC_OPCODE_USER_CONTROL_RELEASED	0x45
#define CEC_OPCODE_GIVE_OSD_NAME		0x46
#define CEC_OPCODE_SET_OSD_NAME			0x47
#define CEC_OPCODE_ACTIVE_SOURCE		0x82
#define CEC_OPCODE_GIVE_PHYSICAL_ADDRESS	0x83
#define CEC_OPCODE_REPORT_PHYSICAL_ADDRESS	0x84
#define CEC_OPCODE_REQUEST_ACTIVE_SOURCE	0x85
#define CEC_OPCODE_SET_STREAM_PATH		0x86
#define CEC_OPCODE_DEVICE_VENDOR_ID		0x87
#define CEC_OPCODE_GIVE_DEVICE_VENDOR_ID	0x8C
#define CEC_OPCODE_MENU_REQUEST			0x8D
#define CEC_OPCODE_MENU_STATUS			0x8E
#define CEC_OPCODE_GIVE_DEVICE_POWER_STATUS	0x8F
#define CEC_OPCODE_REPORT_POWER_STATUS		0x90
#define CEC_OPCODE_CEC_VERSION			0x9E
#define CEC_OPCODE_GET_CEC_VERSION		0x9F

#define MAX_KEYCODE	0x76

enum cec_device_type {
	type_tv,
	type_recording_device,
	type_reserved,
	type_tuner,
	type_playback_device,
	type_audio_system
};

#endif  // HDMI_CEC_H