/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCKMOTOR_CMD_H
#define _MOCKMOTOR_CMD_H

#include "motor_cmd.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic push
#endif
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void Mockmotor_cmd_Init(void);
void Mockmotor_cmd_Destroy(void);
void Mockmotor_cmd_Verify(void);




#define motor_init_Ignore() motor_init_CMockIgnore()
void motor_init_CMockIgnore(void);
#define motor_init_ExpectAnyArgs() motor_init_CMockExpectAnyArgs(__LINE__)
void motor_init_CMockExpectAnyArgs(UNITY_LINE_TYPE cmock_line);
#define motor_init_Expect() motor_init_CMockExpect(__LINE__)
void motor_init_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_motor_init_CALLBACK)(int cmock_num_calls);
void motor_init_StubWithCallback(CMOCK_motor_init_CALLBACK Callback);
#define steer_full_left_Ignore() steer_full_left_CMockIgnore()
void steer_full_left_CMockIgnore(void);
#define steer_full_left_ExpectAnyArgs() steer_full_left_CMockExpectAnyArgs(__LINE__)
void steer_full_left_CMockExpectAnyArgs(UNITY_LINE_TYPE cmock_line);
#define steer_full_left_Expect() steer_full_left_CMockExpect(__LINE__)
void steer_full_left_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_steer_full_left_CALLBACK)(int cmock_num_calls);
void steer_full_left_StubWithCallback(CMOCK_steer_full_left_CALLBACK Callback);
#define steer_slight_left_Ignore() steer_slight_left_CMockIgnore()
void steer_slight_left_CMockIgnore(void);
#define steer_slight_left_ExpectAnyArgs() steer_slight_left_CMockExpectAnyArgs(__LINE__)
void steer_slight_left_CMockExpectAnyArgs(UNITY_LINE_TYPE cmock_line);
#define steer_slight_left_Expect() steer_slight_left_CMockExpect(__LINE__)
void steer_slight_left_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_steer_slight_left_CALLBACK)(int cmock_num_calls);
void steer_slight_left_StubWithCallback(CMOCK_steer_slight_left_CALLBACK Callback);
#define steer_straight_Ignore() steer_straight_CMockIgnore()
void steer_straight_CMockIgnore(void);
#define steer_straight_ExpectAnyArgs() steer_straight_CMockExpectAnyArgs(__LINE__)
void steer_straight_CMockExpectAnyArgs(UNITY_LINE_TYPE cmock_line);
#define steer_straight_Expect() steer_straight_CMockExpect(__LINE__)
void steer_straight_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_steer_straight_CALLBACK)(int cmock_num_calls);
void steer_straight_StubWithCallback(CMOCK_steer_straight_CALLBACK Callback);
#define steer_slight_right_Ignore() steer_slight_right_CMockIgnore()
void steer_slight_right_CMockIgnore(void);
#define steer_slight_right_ExpectAnyArgs() steer_slight_right_CMockExpectAnyArgs(__LINE__)
void steer_slight_right_CMockExpectAnyArgs(UNITY_LINE_TYPE cmock_line);
#define steer_slight_right_Expect() steer_slight_right_CMockExpect(__LINE__)
void steer_slight_right_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_steer_slight_right_CALLBACK)(int cmock_num_calls);
void steer_slight_right_StubWithCallback(CMOCK_steer_slight_right_CALLBACK Callback);
#define steer_full_right_Ignore() steer_full_right_CMockIgnore()
void steer_full_right_CMockIgnore(void);
#define steer_full_right_ExpectAnyArgs() steer_full_right_CMockExpectAnyArgs(__LINE__)
void steer_full_right_CMockExpectAnyArgs(UNITY_LINE_TYPE cmock_line);
#define steer_full_right_Expect() steer_full_right_CMockExpect(__LINE__)
void steer_full_right_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_steer_full_right_CALLBACK)(int cmock_num_calls);
void steer_full_right_StubWithCallback(CMOCK_steer_full_right_CALLBACK Callback);
#define motor_forward_Ignore() motor_forward_CMockIgnore()
void motor_forward_CMockIgnore(void);
#define motor_forward_ExpectAnyArgs() motor_forward_CMockExpectAnyArgs(__LINE__)
void motor_forward_CMockExpectAnyArgs(UNITY_LINE_TYPE cmock_line);
#define motor_forward_Expect(speed) motor_forward_CMockExpect(__LINE__, speed)
void motor_forward_CMockExpect(UNITY_LINE_TYPE cmock_line, int16_t speed);
typedef void (* CMOCK_motor_forward_CALLBACK)(int16_t speed, int cmock_num_calls);
void motor_forward_StubWithCallback(CMOCK_motor_forward_CALLBACK Callback);
#define motor_forward_IgnoreArg_speed() motor_forward_CMockIgnoreArg_speed(__LINE__)
void motor_forward_CMockIgnoreArg_speed(UNITY_LINE_TYPE cmock_line);
#define motor_stop_Ignore() motor_stop_CMockIgnore()
void motor_stop_CMockIgnore(void);
#define motor_stop_ExpectAnyArgs() motor_stop_CMockExpectAnyArgs(__LINE__)
void motor_stop_CMockExpectAnyArgs(UNITY_LINE_TYPE cmock_line);
#define motor_stop_Expect() motor_stop_CMockExpect(__LINE__)
void motor_stop_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_motor_stop_CALLBACK)(int cmock_num_calls);
void motor_stop_StubWithCallback(CMOCK_motor_stop_CALLBACK Callback);
#define motor_reverse_Ignore() motor_reverse_CMockIgnore()
void motor_reverse_CMockIgnore(void);
#define motor_reverse_ExpectAnyArgs() motor_reverse_CMockExpectAnyArgs(__LINE__)
void motor_reverse_CMockExpectAnyArgs(UNITY_LINE_TYPE cmock_line);
#define motor_reverse_Expect() motor_reverse_CMockExpect(__LINE__)
void motor_reverse_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_motor_reverse_CALLBACK)(int cmock_num_calls);
void motor_reverse_StubWithCallback(CMOCK_motor_reverse_CALLBACK Callback);
#define swi_motor_decode_Ignore() swi_motor_decode_CMockIgnore()
void swi_motor_decode_CMockIgnore(void);
#define swi_motor_decode_ExpectAnyArgs() swi_motor_decode_CMockExpectAnyArgs(__LINE__)
void swi_motor_decode_CMockExpectAnyArgs(UNITY_LINE_TYPE cmock_line);
#define swi_motor_decode_Expect() swi_motor_decode_CMockExpect(__LINE__)
void swi_motor_decode_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_swi_motor_decode_CALLBACK)(int cmock_num_calls);
void swi_motor_decode_StubWithCallback(CMOCK_swi_motor_decode_CALLBACK Callback);
#define swi_servo_decode_Ignore() swi_servo_decode_CMockIgnore()
void swi_servo_decode_CMockIgnore(void);
#define swi_servo_decode_ExpectAnyArgs() swi_servo_decode_CMockExpectAnyArgs(__LINE__)
void swi_servo_decode_CMockExpectAnyArgs(UNITY_LINE_TYPE cmock_line);
#define swi_servo_decode_Expect() swi_servo_decode_CMockExpect(__LINE__)
void swi_servo_decode_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_swi_servo_decode_CALLBACK)(int cmock_num_calls);
void swi_servo_decode_StubWithCallback(CMOCK_swi_servo_decode_CALLBACK Callback);
#define control_speed_Ignore() control_speed_CMockIgnore()
void control_speed_CMockIgnore(void);
#define control_speed_ExpectAnyArgs() control_speed_CMockExpectAnyArgs(__LINE__)
void control_speed_CMockExpectAnyArgs(UNITY_LINE_TYPE cmock_line);
#define control_speed_Expect(reqspeed) control_speed_CMockExpect(__LINE__, reqspeed)
void control_speed_CMockExpect(UNITY_LINE_TYPE cmock_line, float reqspeed);
typedef void (* CMOCK_control_speed_CALLBACK)(float reqspeed, int cmock_num_calls);
void control_speed_StubWithCallback(CMOCK_control_speed_CALLBACK Callback);
#define control_speed_IgnoreArg_reqspeed() control_speed_CMockIgnoreArg_reqspeed(__LINE__)
void control_speed_CMockIgnoreArg_reqspeed(UNITY_LINE_TYPE cmock_line);
#define on_board_LED_Ignore() on_board_LED_CMockIgnore()
void on_board_LED_CMockIgnore(void);
#define on_board_LED_ExpectAnyArgs() on_board_LED_CMockExpectAnyArgs(__LINE__)
void on_board_LED_CMockExpectAnyArgs(UNITY_LINE_TYPE cmock_line);
#define on_board_LED_Expect(ledno) on_board_LED_CMockExpect(__LINE__, ledno)
void on_board_LED_CMockExpect(UNITY_LINE_TYPE cmock_line, uint8_t ledno);
typedef void (* CMOCK_on_board_LED_CALLBACK)(uint8_t ledno, int cmock_num_calls);
void on_board_LED_StubWithCallback(CMOCK_on_board_LED_CALLBACK Callback);
#define on_board_LED_IgnoreArg_ledno() on_board_LED_CMockIgnoreArg_ledno(__LINE__)
void on_board_LED_CMockIgnoreArg_ledno(UNITY_LINE_TYPE cmock_line);
#define on_board_LED_off_Ignore() on_board_LED_off_CMockIgnore()
void on_board_LED_off_CMockIgnore(void);
#define on_board_LED_off_ExpectAnyArgs() on_board_LED_off_CMockExpectAnyArgs(__LINE__)
void on_board_LED_off_CMockExpectAnyArgs(UNITY_LINE_TYPE cmock_line);
#define on_board_LED_off_Expect(ledno) on_board_LED_off_CMockExpect(__LINE__, ledno)
void on_board_LED_off_CMockExpect(UNITY_LINE_TYPE cmock_line, uint8_t ledno);
typedef void (* CMOCK_on_board_LED_off_CALLBACK)(uint8_t ledno, int cmock_num_calls);
void on_board_LED_off_StubWithCallback(CMOCK_on_board_LED_off_CALLBACK Callback);
#define on_board_LED_off_IgnoreArg_ledno() on_board_LED_off_CMockIgnoreArg_ledno(__LINE__)
void on_board_LED_off_CMockIgnoreArg_ledno(UNITY_LINE_TYPE cmock_line);
#define on_board_7Seg_Display_Ignore() on_board_7Seg_Display_CMockIgnore()
void on_board_7Seg_Display_CMockIgnore(void);
#define on_board_7Seg_Display_ExpectAnyArgs() on_board_7Seg_Display_CMockExpectAnyArgs(__LINE__)
void on_board_7Seg_Display_CMockExpectAnyArgs(UNITY_LINE_TYPE cmock_line);
#define on_board_7Seg_Display_Expect(displayno) on_board_7Seg_Display_CMockExpect(__LINE__, displayno)
void on_board_7Seg_Display_CMockExpect(UNITY_LINE_TYPE cmock_line, uint8_t displayno);
typedef void (* CMOCK_on_board_7Seg_Display_CALLBACK)(uint8_t displayno, int cmock_num_calls);
void on_board_7Seg_Display_StubWithCallback(CMOCK_on_board_7Seg_Display_CALLBACK Callback);
#define on_board_7Seg_Display_IgnoreArg_displayno() on_board_7Seg_Display_CMockIgnoreArg_displayno(__LINE__)
void on_board_7Seg_Display_CMockIgnoreArg_displayno(UNITY_LINE_TYPE cmock_line);
#define c_LCD_init_Ignore() c_LCD_init_CMockIgnore()
void c_LCD_init_CMockIgnore(void);
#define c_LCD_init_ExpectAnyArgs() c_LCD_init_CMockExpectAnyArgs(__LINE__)
void c_LCD_init_CMockExpectAnyArgs(UNITY_LINE_TYPE cmock_line);
#define c_LCD_init_Expect() c_LCD_init_CMockExpect(__LINE__)
void c_LCD_init_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_c_LCD_init_CALLBACK)(int cmock_num_calls);
void c_LCD_init_StubWithCallback(CMOCK_c_LCD_init_CALLBACK Callback);
#define c_update_LCD_Ignore() c_update_LCD_CMockIgnore()
void c_update_LCD_CMockIgnore(void);
#define c_update_LCD_ExpectAnyArgs() c_update_LCD_CMockExpectAnyArgs(__LINE__)
void c_update_LCD_CMockExpectAnyArgs(UNITY_LINE_TYPE cmock_line);
#define c_update_LCD_Expect() c_update_LCD_CMockExpect(__LINE__)
void c_update_LCD_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_c_update_LCD_CALLBACK)(int cmock_num_calls);
void c_update_LCD_StubWithCallback(CMOCK_c_update_LCD_CALLBACK Callback);

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif
