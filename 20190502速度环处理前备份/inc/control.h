#ifndef _control_H
#define _control_H
#include "headfile.h"
#include  "common.h"

void PIT0_IRQHandler(void);
int pspeed_smoothness_output();
int direction_smoothness_output();
void motor_control(int motor_right_val,int motor_left_val);
void Get_encoder(void);
void angle_output(void);
void angle_speed_output(void);
void mpu_normalization_point(void);

#endif
