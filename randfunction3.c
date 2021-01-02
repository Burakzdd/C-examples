#include <stdio.h>
void product(int a11,int a22,int b11,int b22){
	int result;
	result = (a11*b11)+(a22*b22);
	printf("result=%d",result);
}
int main(){
	int a1,b1,a2,b2;
	int a,b;
	printf("Please enter intervals");
	scanf("%d%d",&a,&b);
	a1= a+ (rand() % (b-a+1));
	a2= a+ (rand() % (b-a+1));
	b1= a+ (rand() % (b-a+1));	
	b2= a+ (rand() % (b-a+1));
	printf("a1=%d a2=%d b1=%d b2=%d\n",a1,a2,b1,b2);
	product(a1,a2,b1,b2);
	return 0;
}
