#ifndef __BSP_H
#define __BSP_H

#define SYS_CLOCK       168000000

#define GREEN_LED        (1<<12U)
#define ORANGE_LED       (1<<13U)
#define RED_LED          (1<<14U) 
#define BLUE_LED         (1<<15U)

#define PORTD_CLOCK_ON() (RCC->AHB1ENR |= RCC_AHB1ENR_GPIODEN) 
#define PORTA_CLOCK_ON() (RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN) 

#define BUTTON_CURRENT()   (GPIOA->IDR & GPIO_IDR_IDR_0)

#define GREEN_LED_TOGGLE() (GPIOD->ODR ^= GPIO_BSRR_BS_12)
#define GREEN_LED_ON()   (GPIOD->BSRR = GPIO_BSRR_BS_12)
#define GREEN_LED_OFF()  (GPIOD->BSRR = GPIO_BSRR_BR_12)

#define ORANGE_LED_ON()  (GPIOD->BSRR = GPIO_BSRR_BS_13)
#define ORANGE_LED_OFF() (GPIOD->BSRR = GPIO_BSRR_BR_13)

#define RED_LED_TOGGLE() (GPIOD->ODR ^= GPIO_BSRR_BS_14)
#define RED_LED_ON()     (GPIOD->BSRR = GPIO_BSRR_BS_14)
#define RED_LED_OFF()    (GPIOD->BSRR = GPIO_BSRR_BR_14)

#define BLUE_LED_TOGGLE() (GPIOD->ODR ^= GPIO_BSRR_BS_15)
#define BLUE_LED_ON()    (GPIOD->BSRR = GPIO_BSRR_BS_15)
#define BLUE_LED_OFF()   (GPIOD->BSRR = GPIO_BSRR_BR_15)

#define ALL_LEDS_ON()    (GPIOD->ODR  |= (GREEN_LED | ORANGE_LED | RED_LED | BLUE_LED))
#define ALL_LEDS_OFF()   (GPIOD->ODR  &= ~(GREEN_LED | ORANGE_LED | RED_LED | BLUE_LED))

#endif /* __BSP_H */