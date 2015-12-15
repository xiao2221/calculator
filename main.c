/*
项目要求：做一个计算器，满足加、减、乘、除，以及十进制转换成二进制、八进制、十六进制。
时间：2015.12.15
作者：xiaoliang
*/
#include <stdio.h>
#include "menu.h"
int main(void)
{
	int num;
	char sel,dis;
BE:
	system("clear");	
	printf("========================\n");
	printf("欢迎使用xiaoliang计算器！\n");
	printf("1、计算\n");
    	printf("2、转换\n");
	printf("========================\n");
	printf("\n请选择计算类型:");

    	scanf("%d%c",&num,&dis);
	switch(num){
		case 1:
			calculate();
			break;
		case 2:
			convert();
			break;
		default:
			printf("\n(⊙o⊙)哦，输入有误！\n");
			break;
	}

	printf("\n是否继续(Y/N)?\n");
	scanf("%c%c",&sel,&dis);
	if(sel=='Y'||sel=='y')
		goto BE;
		
	return 0;
}
