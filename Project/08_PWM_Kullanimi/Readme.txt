RCC-> Crsetal/seramik 
SYS-> Serial Wire 
Timers -> Timer şeç -> Clock Source = Internal Clock -> parametre ayarlarını yap
Şecilen tım clock configrasyonunu ayarla ve hangi bus bağlı olduğunu kontrol et .
NVIC içinden timer interrupt modunu aktif et. 


main.c
	HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_1);             //PWM komutu başlatma
	__HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_1,2000);    //PWM komutunun kontrolü

