/*
Write a C program to calculate the dot product of 2D two vectors. Consider we have two 2D
vectors such as A and B. Therefore, each vector has two components such as (a1, a2) and (b1,
b2). The dot product of 2D two vectors is calculated as follows:
𝑨. 𝑩 = ∑𝐴𝑖𝐵𝑖 = 𝑎1𝑏1 + 𝑎2𝑏2
(for intervals 1,2)
Prompt the boundaries of the random number interval. Generate the a1, a2, b1,and b2 and print
the numbers. The program must include the dotProduct function that receives these components
and returns nothing. In the function, calculate the dot product of these numbers and print the
result*/
/*P. J. Deitel and H. M. Deitel, “C How To Program Fifth Edition”, Prentice Hall, 2007.
*/
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
