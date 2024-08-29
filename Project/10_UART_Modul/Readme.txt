RCC-> Crsetal/seramik 
SYS-> Serial Wire 
Connectivity -> USART -> Seknron/Asenkron modda başlar ve gererki parametreleri ayarla.



main.c

		/* USER CODE BEGIN Includes */
			#include "stdio.h"
		/* USER CODE END Includes */

		
		/* USER CODE BEGIN PV */
			char data[5]="uart\n";
			int data2= 25;
			float data3=31.69;
			char message[50];
		/* USER CODE END PV */


	 /* HAL_UART_Transmit(&huart2,(uint8_t *)data, sizeof(data), 100);
	  HAL_Delay(300);*/

	  // İnt mesaj göndermek için
	  /*sprintf(message, "%d\n", data2);
	  HAL_UART_Transmit(&huart2,(uint8_t *)message, strlen(message), 100);
	  HAL_Delay(300);*/

	  //Float mesaj göndermek için
	  sprintf(message, "%.3f\n", data3);
	  HAL_UART_Transmit(&huart2,(uint8_t *)message, strlen(message), 100);
	  HAL_Delay(300);
