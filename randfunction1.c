/*
Write a C program to consider triangular inequality. Prompt the boundaries of the random
number interval. The program must include the triangular function that receives lower and upper
boundaries and returns whether the three random numbers can form a triangular or not. In
triangular function, generate and print three random numbers, return 1, if they can construct a
triangular, otherwise return 0. Print the result in the main function. (Hint: For any triangle, the
sum of the lengths of any two sides must be greater than or equal to the length of the
remaining side.)
http://css-tricks.com/generate-a-random-number/, 2017
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int triangle(int a,int b){
	int s1,s2,s3;
	s1= a+ (rand() % (b-a+1));
	s2= a+ (rand() % (b-a+1));
	s3= a+ (rand() % (b-a+1));
	printf("side1=%d side2=%d side3=%d\n",s1,s2,s3);
    if((s1+s2)>=s3 && (s1+s3)>=s2 && (s3+s2)>=s1){
    	return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int a,b;
	int result;
	srand(time(NULL));
	printf("please enter intervals");
	scanf("%d%d",&a,&b);
    result= triangle(a,b);
    if(result==1){
    	printf("This sides can be triangle");
	}
	else{
		printf("This sides can not be triangle");
	}
	return 0;
}
