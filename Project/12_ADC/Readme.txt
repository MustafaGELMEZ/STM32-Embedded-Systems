RCC-> Crsetal/seramik 
SYS-> Serial Wire 
Analog -> Adc pini şeçilir -> Continious Conversion enable edilir.



main.c


HAL_ADC_Start(&hadc1);               // ADC1 modülünü başlatır ve analog veriyi dijital olarak okumaya hazır hale getirir.
HAL_ADC_PollForConversion(&hadc1, 1000); // ADC'nin belirli bir süre (1000 ms) içinde dönüşüm yapmasını bekler. Dönüşüm tamamlandığında, bu fonksiyon dönüş yapar.
  
data = HAL_ADC_GetValue(&hadc1);     // ADC tarafından dijitalleştirilen değeri okur ve 'data' değişkenine atar. Bu değer, ADC'nin dönüştürdüğü analog sinyalin dijital karşılığıdır.
HAL_ADC_Stop(&hadc1);                // ADC1 modülünü durdurur, ADC işlemi sona erdirilir.

HAL_Delay(150);                      // 150 milisaniyelik bir gecikme ekler. Bu, ADC okuma işlemleri arasında bekleme süresi sağlar.





// LED UYGULAMASI 

HAL_ADC_Start(&hadc1);
HAL_ADC_PollForConversion(&hadc1, 1000);

data = HAL_ADC_GetValue(&hadc1);
HAL_ADC_Stop(&hadc1);

HAL_Delay(150);

if (data > 0 && data < 1300) {
    HAL_GPIO_WritePin(LD1_GPIO_Port, LD1_Pin, 1);
    HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, 0);
    HAL_GPIO_WritePin(LD3_GPIO_Port, LD3_Pin, 0);
}
else if (data >= 1300 && data < 2600) {
    HAL_GPIO_WritePin(LD1_GPIO_Port, LD1_Pin, 0);
    HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, 1);
    HAL_GPIO_WritePin(LD3_GPIO_Port, LD3_Pin, 0);
}
else if (data >= 2600 && data < 3900) {
    HAL_GPIO_WritePin(LD1_GPIO_Port, LD1_Pin, 0);
    HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, 0);
    HAL_GPIO_WritePin(LD3_GPIO_Port, LD3_Pin, 1);
}
