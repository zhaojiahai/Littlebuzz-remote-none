/********************************************************************
���ߣ�Songyimiao
��������: 20151129
�汾��V2.0
����ʵ���Ұ�Ȩ����
/********************************************************************/
#ifndef _CARSTAND_H_
#define _CARSTAND_H_

/******�Ƕȿ�����غ궨��******/
#define	CAR_ANGLE_SET	      0
#define CAR_ANGULARSPEED_SET  0
#define GRAVITY_OFFSET   (-2000)      			//���ٶ����ƫ��ֵ 
#define GYRO_OFFSET      0//g_iGyroOffset      //���������ƫ��ֵ 
#define	GYROSCOPE_ANGLE_RATIO 24.0
/******�ٶȿ�����غ궨��******/
#define CAR_POSITION_SET      0
#define CAR_SPEED_SET         g_iCarSpeedSet//0
#define MOTOR_LEFT_SPEED_POSITIVE  ((int)g_fLeftMotorOut >0)
#define MOTOR_RIGHT_SPEED_POSITIVE ((int)g_fRightMotorOut>0)
#define SPEED_CONTROL_OUT_MAX	MOTOR_OUT_MAX 
#define SPEED_CONTROL_OUT_MIN	MOTOR_OUT_MIN

/******���������غ궨��******/
#define MOTOR_OUT_DEAD_VAL       0//200 	   //����ֵ200
#define MOTOR_OUT_MAX           20000	   //ռ�ձ������ֵ
#define MOTOR_OUT_MIN         (-20000)   //ռ�ձȸ����ֵ		   


extern unsigned int xdata g_uiStartCount;
extern unsigned char xdata g_ucLEDCount;
extern int g_iLeftMotorPulse;
extern int g_iRightMotorPulse;
extern float g_fCarAngle;
extern float g_fGravityAngle;
extern float g_fGyroAngleSpeed ;
extern int g_iAccelInputVoltage_Y_Axis;
extern int g_iGyroInputVoltage_X_Axis ;
extern unsigned char g_ucSpeedControlCount ;
extern float g_fSpeedControlOut;
extern float g_fCarSpeed;
extern float g_fCarPosition;
extern float g_fGyroscopeAngleIntegral;
extern int g_iGyroOffset;
extern int g_iLeftMotorPulseSigma  ;


void DriversInit(void);
void SampleInputVoltage(void);
void CarStandInit(void);
void SpeedControl(void);
void AngleControl(void);
void BluetoothControl(void);	
void GetMotorPulse(void);
void GyroRevise(void);
void MotorOutput(void);

#endif