#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void midpoint(){
	int a1,b1,a2,b2;
	int a,b;
	double m1,m2;
	printf("Please enter shift value and scaling factor");
	scanf("%d%d",&a,&b);
	a1= a+ (rand() % (b-a));
	a2= a+ (rand() % (b-a));
	b1= a+ (rand() % (b-a));	
	b2= a+ (rand() % (b-a));
	printf("a1=%d a2=%d b1=%d b2=%d",a1,a2,b1,b2);
	m1=(a1+b1)/2.0;
	m2=(a2+b2)/2.0;
	printf("\nm1=%lf m2=%lf",m1,m2);
}
int main(){
	srand(time(NULL));
	midpoint();
	return 0;
}
