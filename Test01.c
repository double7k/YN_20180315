/*
 * Test01.c
 *
 *  Created on: 2017. 9. 19.
 *      Author: double7k
 */

// 변수와 프린트

#include <stdio.h>

int main(void){

	int age = 109;
	int year1;
	int year2;
	int year3;

	printf("연도 : %d\n", year);

	year = age + 2000;

	printf("나이 : %d\n", age);
	printf("연도 : %d\n", year);

	age += 1;

	printf("나이 : %d\n", age);

	printf("\n \n");

	int x = 10;
	int y = 20;
	int tmp;

	printf("x : %d   y : %d\n",x,y);

	tmp = x;
	x = y;
	y = tmp;

	printf("x : %d   y : %d\n\n",x,y);

	char aa = 'A';
	char bb = 65;

	printf("%d\n",aa);
	printf("%d\n",bb);


	return 0;

}

