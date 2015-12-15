//做一个计算器，满足+-*/，以及十进制转换成二进制、八进制、十六进制。
#include <stdio.h>
#include "menu.h"
int main(void)
{
	int num;
	char sel,dis;
	
BE:
	printf("请选择使用方法（1、计算；2、转换）:\n");
	scanf("%d%c",&num,&dis);
	switch(num){
		case 1:
			calculate();
			break;
		case 2:
			convert();
			break;
		default:
			printf("输入有误\n");
			break;
	}

	printf("是否继续(Y/N)?\n");
	scanf("%c%c",&sel,&dis);
	if(sel=='Y'||sel=='y')
		goto BE;
		
	return 0;
}
