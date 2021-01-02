/*
Write a C program to convert the miles to kilometers.
The program must include the mileToKm function that
receives miles as in double type and returns kilometers also
in double type. (Hint: 1 mile is equivalent 1.61km)

http://learn.parallax.com/propeller-c-functions/reusable-code-functions, 2018.
*/
#include <stdio.h>
double convert(double mil2){
	double kilometre;
	kilometre=mil2*1.61;
    return kilometre;
}
int main(){
	double mil,km;
	printf("Bir mil giriniz");
	scanf("%lf",&mil);
	km=convert(mil);
	printf("%lf mil = %lf kilometre",mil,km);
	return 0;
}

