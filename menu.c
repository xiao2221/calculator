#include <stdio.h>

/*
 私有函数add()
 函数功能：加法运算
 函数参数：
 int a:被加数
 int b:加数
 返回值：运算（a+b）之后的值
*/
int add(int a,int b)
{
	return a+b;
}
/*
 私有函数sub()
 函数功能：减法运算
 函数参数：
 int a:被减数
 int b:减数
 返回值：运算（a-b）之后的值
*/
int sub(int a,int b)
{
	return a-b;
}
/*
 私有函数mul()
 函数功能：乘法运算
 函数参数：
 int a:被乘数
 int b:乘数
 返回值：运算（a*b）之后的值
*/
int mul(int a,int b)
{
	return a*b;
}
/*
 私有函数div()
 函数功能：除法运算
 函数参数：
 int a:被除数
 int b:除数
 返回值：运算（a/b）之后的值
*/
int div(int a,int b)
{
	return a/b;
}

/*
 私有函数eight()
 函数功能：将十进制数值转换成八进制，并输出
 函数参数：
 int a:被转换的十进制数
 返回值：无
*/
void eight(int a)
{
	printf("%d对应的八进制数是：%o\n",a,a);
}
/*
 私有函数sixteen()
 函数功能：将十进制数值转换成十六进制，并输出
 函数参数：
 int a:被转换的十进制数
 返回值：无
*/
void sixteen(int a)
{
	printf("%d对应的十六进制数是：%x\n",a,a);
}
/*
 私有参数two()
 函数功能：将十进制数值转换成二进制，并输出
 函数参数：
 int a:被转换的十进制数
 返回值：无
*/
void two(int a)
{
	int b[64],i=0;
	while(a/2!=0){
		b[i++]=a%2;
		a/=2;
	}
	b[i]=1;
	printf("%d对应的二进制数是：",a);
	for(int j=i;j>=0;j--)
		printf("%d",b[j]);
	printf("\n");
}

/*
 导出的公共函数
 函数功能：四则运算函数，可满足加、减、乘、除四种运算
 函数参数：无
 返回值：无
*/
void calculate(void)
{
	char fu,dis;
	int num1,num2,ret=0;
	printf("+:加法运算\n");
	printf("-:减法运算\n");
	printf("*:乘法运算\n");
	printf("/:除法运算\n");
	printf("请选择运算法则:");
	scanf("%c%c",&fu,&dis);
	printf("请输入两个数:");
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
			printf("(⊙o⊙)哦，您的输入有误\n");
	}
    
	printf("\n****************\n");
	printf("%d %c %d = %d\n",num1,fu,num2,ret);
	printf("****************\n");
}
/*
 导出的公共函数
 函数功能：将已知十进制数值转换成对应的八进制、十六进制、二进制数值
 函数参数：无
 返回值：无
*/
void convert(void)
{
	char fu,dis;
	int num;
	printf("O八进制\n");
	printf("H十六进制\n");
	printf("B二进制\n");
	printf("请选择：");
	scanf("%c%c",&fu,&dis);
	printf("请输入要转换的数值:");
	scanf("%d%c",&num,&dis);
    
	printf("\n*************************\n");
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
			printf("(⊙o⊙)哦，您的输入有误\n");
	}
	printf("*************************\n");
}
