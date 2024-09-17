
void clearAllClock(){
	HAL_GPIO_WritePin (LED_1_GPIO_Port, LED_1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin (LED_2_GPIO_Port, LED_2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin (LED_3_GPIO_Port, LED_3_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin (LED_4_GPIO_Port, LED_4_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin (LED_5_GPIO_Port, LED_5_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin (LED_6_GPIO_Port, LED_6_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin (LED_7_GPIO_Port, LED_7_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin (LED_8_GPIO_Port, LED_8_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin (LED_9_GPIO_Port, LED_9_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin (LED_10_GPIO_Port, LED_10_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin (LED_11_GPIO_Port, LED_11_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin (LED_12_GPIO_Port, LED_12_Pin, GPIO_PIN_SET);
}
void setNumberOnClock(int num){
	switch (num) {
	case 0:
				HAL_GPIO_WritePin (LED_12_GPIO_Port, LED_12_Pin, GPIO_PIN_RESET);
				break;
	case 1:
				HAL_GPIO_WritePin (LED_1_GPIO_Port, LED_1_Pin, GPIO_PIN_RESET);
				break;
	case 2:
				HAL_GPIO_WritePin (LED_2_GPIO_Port, LED_2_Pin, GPIO_PIN_RESET);
				break;
	case 3:
				HAL_GPIO_WritePin (LED_3_GPIO_Port, LED_3_Pin, GPIO_PIN_RESET);
				break;
	case 4:
				HAL_GPIO_WritePin (LED_4_GPIO_Port, LED_4_Pin, GPIO_PIN_RESET);
				break;
	case 5:
				HAL_GPIO_WritePin (LED_5_GPIO_Port, LED_5_Pin, GPIO_PIN_RESET);
				break;
	case 6:
				HAL_GPIO_WritePin (LED_6_GPIO_Port, LED_6_Pin, GPIO_PIN_RESET);
				break;
	case 7:
				HAL_GPIO_WritePin (LED_7_GPIO_Port, LED_7_Pin, GPIO_PIN_RESET);
				break;
	case 8:
				HAL_GPIO_WritePin (LED_8_GPIO_Port, LED_8_Pin, GPIO_PIN_RESET);
				break;
	case 9:
				HAL_GPIO_WritePin (LED_9_GPIO_Port, LED_9_Pin, GPIO_PIN_RESET);
				break;
	case 10:
				HAL_GPIO_WritePin (LED_10_GPIO_Port, LED_10_Pin, GPIO_PIN_RESET);
				break;
	case 11:
				HAL_GPIO_WritePin (LED_11_GPIO_Port, LED_11_Pin, GPIO_PIN_RESET);
				break;
	default:
				clearAllClock();
				break;
	}
}
void  clearNumberOnClock(int num) {
	switch (num) {
		case 0:
					HAL_GPIO_WritePin (LED_12_GPIO_Port, LED_12_Pin, GPIO_PIN_SET);
					break;
		case 1:
					HAL_GPIO_WritePin (LED_1_GPIO_Port, LED_1_Pin, GPIO_PIN_SET);
					break;
		case 2:
					HAL_GPIO_WritePin (LED_2_GPIO_Port, LED_2_Pin, GPIO_PIN_SET);
					break;
		case 3:
					HAL_GPIO_WritePin (LED_3_GPIO_Port, LED_3_Pin, GPIO_PIN_SET);
					break;
		case 4:
					HAL_GPIO_WritePin (LED_4_GPIO_Port, LED_4_Pin, GPIO_PIN_SET);
					break;
		case 5:
					HAL_GPIO_WritePin (LED_5_GPIO_Port, LED_5_Pin, GPIO_PIN_SET);
					break;
		case 6:
					HAL_GPIO_WritePin (LED_6_GPIO_Port, LED_6_Pin, GPIO_PIN_SET);
					break;
		case 7:
					HAL_GPIO_WritePin (LED_7_GPIO_Port, LED_7_Pin, GPIO_PIN_SET);
					break;
		case 8:
					HAL_GPIO_WritePin (LED_8_GPIO_Port, LED_8_Pin, GPIO_PIN_SET);
					break;
		case 9:
					HAL_GPIO_WritePin (LED_9_GPIO_Port, LED_9_Pin, GPIO_PIN_SET);
					break;
		case 10:
					HAL_GPIO_WritePin (LED_10_GPIO_Port, LED_10_Pin, GPIO_PIN_SET);
					break;
		case 11:
					HAL_GPIO_WritePin (LED_11_GPIO_Port, LED_11_Pin, GPIO_PIN_SET);
					break;
		default:
					clearAllClock();
					break;
		}
}
void Exercise10_Run(int *h, int *m, int *s) {
	clearNumberOnClock((*s-1)/5);
	if (*s >= 60) {
		*s = 0;
		clearNumberOnClock(*m/5);
		(*m)++;
	}
	if (*m >= 60) {
		*m = 0;
		clearNumberOnClock(*h);
		(*h)++;
	}
	if (*h >= 12) {
		*h = 0;
	}
	setNumberOnClock(*h);
	setNumberOnClock(*m/5);
	setNumberOnClock(*s/5);
	(*s)++;
	//Delay
}


