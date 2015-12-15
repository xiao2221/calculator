#include <stdio.h>

int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
int div(int a,int b)
{
	return a/b;
}
void eight(int a)
{
	printf("%o\n",a);
}
void sixteen(int a)
{
	printf("%x\n",a);
}
void two(int a)
{
	int b[64],i=0;
	while(a/2!=0){
		b[i++]=a%2;
		a/=2;
	}
	b[i]=1;
	for(int j=i;j>=0;j--)
		printf("%d",b[j]);
	printf("\n");
}

void calculate(void)
{
	char fu,dis;
	int num1,num2,ret=0;
	printf("请选择运算法则(+-*/):\n");
	scanf("%c%c",&fu,&dis);
	printf("请输入两个数:\n");
	scanf("%d%d%c",&num1,&num2,&dis);

	switch(fu){
		case '+':
			ret=add(num1,num2);
			break;
		case '-':
			ret=sub(num1,num2);
			break;
		case '*':
			ret=mul(num1,num2);
			break;
		case '/':
			ret=div(num1,num2);
			break;
		default:
			printf("您的输入有误\n");
	}
	printf("%d %c %d = %d\n",num1,fu,num2,ret);
}

void convert(void)
{
	char fu,dis;
	int num;
	printf("请输入（O八进制、H十六进制、B二进制）\n");
	scanf("%c%c",&fu,&dis);
	printf("请输入要转换的数值:\n");
	scanf("%d%c",&num,&dis);
	switch(fu){
		case 'O':
		case 'o':
			eight(num);
			break;
		case 'H':
		case 'h':
			sixteen(num);
			break;
		case 'B':
		case 'b':
			two(num);
			break;
		default:
			printf("您的输入有误\n");
	}
}
