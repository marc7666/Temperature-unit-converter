#include<stdio.h>
#include<stdlib.h>

#define RESET_COLOR "\x1b[0m"
#define MAGENTA_T "\x1b[35m"
#define CYAN_T "\x1b[36m"
#define RED_T "\x1b[31m"

float celsiusToFahrenheit(float degreesC);
float celsiusToKelvin(float degreesC);
float FahrenheitToKelvin(float degreesF);
float KelvinToFahrenheit(float degreesK);
float KelvinToCelsius(float degreesK);
float FahrenheitToCelsius(float degreesF);

int main(){
	int cont = 1;
	
	while(cont == 1){
		int unit = 0;
		float degrees = 0;	
		printf(MAGENTA_T "Enter a number of degrees to convert: \n" RESET_COLOR);
		scanf("%f", &degrees);
		printf(MAGENTA_T "Enter the unit of the degrees. Celsius (0), Fahrenheit (1), Kelvin (2): \n" RESET_COLOR);
		scanf("%i", &unit);
		switch (unit){
		case 0:
			printf(CYAN_T "Converted to Fahrenheit:" RED_T " %.2f F \n", celsiusToFahrenheit(degrees));
			printf(CYAN_T "Converted to Kelvin:" RED_T " %.2f K \n",  celsiusToKelvin(degrees));
			break;
		case 1:
			printf(CYAN_T "Converted to Celsius:" RED_T " %.2f C\n", FahrenheitToCelsius(degrees));
			printf(CYAN_T "Converted to Kelvin:" RED_T " %.2f K \n",  FahrenheitToKelvin(degrees));
			break;
		case 2:
			printf(CYAN_T "Converted to Celsius:" RED_T " %.2f C \n", KelvinToCelsius(degrees));
			printf(CYAN_T "Converted to Fahrenheit:" RED_T " %.2f F \n",  KelvinToFahrenheit(degrees));
			break;	
		}
		
		printf(MAGENTA_T "Do you want to continue converting? In case yes press '1', otherwise press '0'\n" RESET_COLOR);
		scanf("%i", &cont);

	}
	return 0;
	
}

float celsiusToFahrenheit(float degreesC){
	return (degreesC * (9.0 / 5.0)) + 32;
}

float celsiusToKelvin(float degreesC){
	return degreesC + 273.15;
}
float FahrenheitToKelvin(float degreesF){
	return (degreesF - 32) * (5.0 / 9.0) + 273.15;
}
float KelvinToFahrenheit(float degreesK){
	return (degreesK - 273.15) * (9.0 / 5.0) + 32;
}
float KelvinToCelsius(float degreesK){
	return degreesK - 273.15;
}
float FahrenheitToCelsius(float degreesF){
	return (degreesF - 32) * (5.0 / 9.0);
}



