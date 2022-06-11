/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define PWM_OUT_Pin GPIO_PIN_7
#define PWM_OUT_GPIO_Port GPIOA
#define GPIO_Out_S3_Pin GPIO_PIN_14
#define GPIO_Out_S3_GPIO_Port GPIOB
#define GPIO_Out_S2_Pin GPIO_PIN_15
#define GPIO_Out_S2_GPIO_Port GPIOB
#define GPIO_Out_S1_Pin GPIO_PIN_6
#define GPIO_Out_S1_GPIO_Port GPIOC
#define GPIO_Out_S0_Pin GPIO_PIN_7
#define GPIO_Out_S0_GPIO_Port GPIOC
#define GPIO_Out_G_Pin GPIO_PIN_9
#define GPIO_Out_G_GPIO_Port GPIOC
#define GPIO_Out_F_Pin GPIO_PIN_8
#define GPIO_Out_F_GPIO_Port GPIOA
#define GPIO_Out_E_Pin GPIO_PIN_9
#define GPIO_Out_E_GPIO_Port GPIOA
#define GPIO_Out_D_Pin GPIO_PIN_10
#define GPIO_Out_D_GPIO_Port GPIOA
#define GPIO_Out_C_Pin GPIO_PIN_11
#define GPIO_Out_C_GPIO_Port GPIOA
#define GPIO_Out_B_Pin GPIO_PIN_12
#define GPIO_Out_B_GPIO_Port GPIOA
#define GPIO_Out_A_Pin GPIO_PIN_13
#define GPIO_Out_A_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
