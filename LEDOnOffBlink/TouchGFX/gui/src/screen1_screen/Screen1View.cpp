#include <gui/screen1_screen/Screen1View.hpp>
#include "stm32f4xx_hal.h"
uint8_t BlinkFlag;
Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::LED_On()
{
	HAL_GPIO_WritePin(GPIOG, GPIO_PIN_13, GPIO_PIN_SET);
	BlinkFlag=0;
}

void Screen1View::LED_Off()
{
	HAL_GPIO_WritePin(GPIOG, GPIO_PIN_13, GPIO_PIN_RESET);
	BlinkFlag=0;
}
void Screen1View::LED_Blink()
{
	BlinkFlag=1;
}
