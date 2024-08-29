RCC-> Crsetal/seramik 
SYS-> Serial Wire 
Connectivity -> Analog ADC1 seçilir 
Dah sonra parametre ayarları yapılır



main.c

  HAL_ADC_Start(&hadc1);
	  HAL_ADC_PollForConversion(&hadc1, 10);
	  ldrValue= HAL_ADC_GetValue(&hadc1);
	  HAL_Delay(250);
	  HAL_GPIO_WritePin(laser_GPIO_Port, laser_Pin, 1);

	  if(ldrValue >100){
		  HAL_GPIO_WritePin(buzzer_GPIO_Port, buzzer_Pin, 0);

	  }else {
		  HAL_GPIO_WritePin(buzzer_GPIO_Port, buzzer_Pin, 1);
	  }

  }
