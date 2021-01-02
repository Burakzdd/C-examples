/*
Write a C program to calculate geometric mean of the random numbers. Input the boundaries
of the random number interval. The program must include the geoMean function that receives
lower and upper boundaries and returns the geometric mean of the random numbers. In geoMean
function, generate and print six random numbers, then calculate the geometric mean of these
numbers and return it. Print the result in the main function.
*/
#include <stdio.h>
#include <math.h>
#include <time.h>
double geofunc(int a,int b){
	int sayi1,sayi2,sayi3,sayi4,sayi5,sayi6;
	sayi1= a+ (rand() % (b-a+1));
	sayi2= a+ (rand() % (b-a+1));
	sayi3= a+ (rand() % (b-a+1));
	sayi4= a+ (rand() % (b-a+1));
	sayi5= a+ (rand() % (b-a+1));
	sayi6= a+ (rand() % (b-a+1));
	printf("%d %d %d %d %d %d",sayi1,sayi2,sayi3,sayi4,sayi5,sayi6);
	return pow(sayi1*sayi2*sayi3*sayi4*sayi5*sayi6,1.0/6);
}
int main(){
	
	int a,b;
	double result;
	srand(time(NULL));
	printf("Please enter intervals");
	scanf("%d%d",&a,&b);
	result= geofunc(a,b);
	printf("\nResult = %lf",result);
	return 0;
}
