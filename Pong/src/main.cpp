/*
 * @brief This is our Small Embedded Systems Pong assignment work.
 * All code was written by Cameron Bennett (W14019187) and Y.
 */


//Headers
#include <stdbool.h>
#include <ucos_ii.h>
#include <stdio.h>
#include <mbed.h>
#include <display.h>

/*
*********************************************************************************************************
*                                            APPLICATION TASK PRIORITIES
*********************************************************************************************************
*/

typedef enum {
	APP_TASK_BUTTONS_PRIO = 4,
	APP_TASK_BALL_PRIO,
	APP_TASK_POT_PRIO,
	APP_TASK_JOY_PRIO,
  APP_TASK_LED_PRIO,

	
} taskPriorities_t;



/*
*********************************************************************************************************
*                                            APPLICATION TASK STACKS
*********************************************************************************************************
*/


#define  APP_TASK_BUTTONS_STK_SIZE           256
#define  APP_TASK_BALL_STK_SIZE              256
#define  APP_TASK_BAT_STK_SIZE               256
#define  APP_TASK_POT_STK_SIZE               256
#define  APP_TASK_JOY_STK_SIZE               256
#define  APP_TASK_LED_STK_SIZE               256

static OS_STK appTaskButtonsStk[APP_TASK_BUTTONS_STK_SIZE];
static OS_STK appTaskBallStk[APP_TASK_BALL_STK_SIZE];
static OS_STK appTaskBatStk[APP_TASK_BAT_STK_SIZE];
static OS_STK appTaskPotStk[APP_TASK_POT_STK_SIZE];
static OS_STK appTaskJoyStk[APP_TASK_JOY_STK_SIZE];
static OS_STK appTaskLED1Stk[APP_TASK_LED_STK_SIZE];



/*
*********************************************************************************************************
*                                            APPLICATION FUNCTION PROTOTYPES
*********************************************************************************************************
*/

typedef struct Ball //Ball Constructor
{	
int x, y; //position coordinates
int vx, vy; //velocity components
int colour;
}
ball_t;
ball_t ball;

/*
*********************************************************************************************************
*                                            GLOBAL TYPES AND VARIABLES 
*********************************************************************************************************
*/

typedef enum //For Joystick control.
	{
	JLEFT = 0,
	JRIGHT,
	JUP,
	JCENTRE,
	JDOWN
} 
JoyID_t;

Display *d = Display::theDisplay(); //Returns a pointer to an object that manages the display screen

/*
*********************************************************************************************************
*                                            GLOBAL FUNCTION DEFINITIONS
*********************************************************************************************************
*/

int main()
{
/* Initialise the OS */
  OSInit();

	
	
	/* Initialise the display */
d->fillScreen(WHITE);
d->setTextColor(BLACK, WHITE);	
//d->setCursor(2, 2);
d->drawRect(109, 12, 102, 10, BLACK); //TBC
//d->drawRect(109, 12, 102, 10, BLACK); //TBC
	
	
	
// initialiseDevices(); //Devices TBA, (buttons, LCD, accelerometer)
	

d->printf("Total Score: %l"); //Calls from incScore. Will use a long Integer.
//Location On Screen Settings

d->printf("                                                 Balls Left: %i");	//Calls from remainingBalls (remainingBalls = ball -1)
//Location On Screen Settings
	

	
	
/*	
remainingBalls = initialiseGame();
	
while (remainingBalls > 0) 
{
waitForStart();
ballInPlay = 1;
batPos = initialiseBatBall(ball);
renderBall(ball);
updateBall(ball);
renderBat(batPos);
	
	
while (ballInPlay) 
{
renderBall(ball);
updateBall( ball);
batMovement = ReadBoardAngle();
batPos = adjustBat ( batMovement );
renderBat(batPos);
ballInPlay = testBottom( ball );
delay();
}
*/

 /* Should never arrive here */ 
  return 0;
}



/*
*********************************************************************************************************
*                                            APPLICATION TASK DEFINITIONS
*********************************************************************************************************
*/
static void appTaskButtons(void *pdata)
{
	
};

static void appTaskBall()
{

};


static void appTaskBat()
{
	
};         
static void appTaskPot()
{

};


static void appTaskJoy()
{
	
};

static void appTaskLED()
{

};


