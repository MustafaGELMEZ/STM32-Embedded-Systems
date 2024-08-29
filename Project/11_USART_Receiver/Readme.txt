RCC-> Crsetal/seramik 
SYS-> Serial Wire 
Connectivity -> USART -> Seknron/Asenkron modda başlar ve gerekli parametreleri ayarla.



main.c

		/* USER CODE BEGIN Includes */
			#include "stdio.h"
		/* USER CODE END Includes */

		
		/* USER CODE BEGIN PV */
		char receiver_data[1];
		/* USER CODE END PV */


	    /* UART ile veri alımı */
	    HAL_UART_Receive(&huart2, (uint8_t *)&receiver_data[0], 1, 100);

	    /* Eğer gelen veri '1' ise LED1'i yak */
	    if(receiver_data[0] == '1'){
	        HAL_GPIO_WritePin(LD1_GPIO_Port, LD1_Pin,1);
	    }

	    /* Eğer gelen veri '2' ise LED1'i söndür */
	    if(receiver_data[0] == '2'){
	        HAL_GPIO_WritePin(LD1_GPIO_Port, LD1_Pin,0);
	    }

	    /* Eğer gelen veri '3' ise LED2'i yak */
	    if(receiver_data[0] == '3'){
	        HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin,1);
	    }

	    /* Eğer gelen veri '4' ise LED2'i söndür */
	    if(receiver_data[0] == '4'){
	        HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin,0);
	    }

	    /* Eğer gelen veri '5' ise LED3'i yak */
	    if(receiver_data[0] == '5'){
	        HAL_GPIO_WritePin(LD3_GPIO_Port, LD3_Pin,1);
	    }

	    /* Eğer gelen veri '6' ise LED3'i söndür */
	    if(receiver_data[0] == '6'){
	        HAL_GPIO_WritePin(LD3_GPIO_Port, LD3_Pin,0);
	    }

