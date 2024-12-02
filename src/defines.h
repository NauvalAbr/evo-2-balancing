#ifndef DEFINES_H_
#define DEFINES_H_

#define PIN_ENABLE_MOTORS 5
#define PIN_MOTOR1_DIR 15
#define PIN_MOTOR1_STEP 4

#define PIN_MOTOR2_DIR 18
#define PIN_MOTOR2_STEP 19

#define PIN_SERVO1 13
#define PIN_SERVO2 14

#define PIN_BUZZER 33
#define PIN_LED 32

// NORMAL MODE PARAMETERS (MAXIMUN SETTINGS)
#define MAX_THROTTLE 550
#define MAX_STEERING 140
#define MAX_TARGET_ANGLE 14

// PRO MODE = MORE AGGRESSIVE (MAXIMUN SETTINGS)
#define MAX_THROTTLE_PRO 780   // Max recommended value: 860
#define MAX_STEERING_PRO 260   // Max recommended value: 280
#define MAX_TARGET_ANGLE_PRO 26   // Max recommended value: 32

// Default control terms for EVO 2
#define KP 0.30     //0.32
#define KD 0.08     //0.050
#define KP_THROTTLE 0.080
#define KI_THROTTLE 0.1
#define KP_POSITION 0.085
#define KD_POSITION 0.47
//#define KI_POSITION 0.02

// Control gains for raiseup (the raiseup movement requiere special control parameters)
#define KP_RAISEUP 0.1
#define KD_RAISEUP 0.16
#define KP_THROTTLE_RAISEUP 0   // No speed control on raiseup
#define KI_THROTTLE_RAISEUP 0.0

#define MAX_CONTROL_OUTPUT 500
#define ITERM_MAX_ERROR 30   // Iterm windup constants for PI control
#define ITERM_MAX 10000

#define ANGLE_OFFSET -0.5  // Offset angle for balance (to compensate robot own weight distribution)

// Servo definitions
#define SERVO_AUX_NEUTRO 6000  // Servo neutral position
#define SERVO_MIN_PULSEWIDTH 7450
#define SERVO_MAX_PULSEWIDTH 3000 // not used

#define SERVO2_NEUTRO 6500
#define SERVO2_LEFT 6000
#define SERVO2_RIGHT 7000

#define ZERO_SPEED 0xffffff
#define MAX_ACCEL 14      // Maximun motor acceleration (MAX RECOMMENDED VALUE: 20) (default:14)

#define MICROSTEPPING 8   // 8 or 16 for 1/8 or 1/16 driver microstepping (default:16)

#define DEBUG 1   // 0 = No debug info (default) DEBUG 1 for console output

// AUX definitions
#define CLR(x,y) (x&=(~(1<<y)))
#define SET(x,y) (x|=(1<<y))
#define RAD2GRAD 57.2957795
#define GRAD2RAD 0.01745329251994329576923690768489

#endif /* DEFINES_H_ */
