#define _CRT_SECURE__NO_WARNINGS 1

#include <stdio.h>

//变量的分类-局部变量 全局变量

//int  num2 = 100;//全局变量：定义在代码块({})之外的变量
//
//int main()
//{
//	int num1 = 10;//局部变量：定义在代码块（{}）内
//	局部变量和全局变量的名字建议不要相同-容易产生bug
//	当局部变量和全部变量名字相同时，局部变量优先
//	printf("%d", num2);
//	return 0;
//}

//变量的使用

//int main()
//{
//	//计算两个数的和
//	int num1 = 0;
//	int num2 = 0;
//    int num3 = 0;
//	int sum = 0;
////输入函数-使用输入函数scanf
//	scanf_s("%d%d%d",&num1, &num2, &num3);//取地址符号&
//	//C语言语法规定，变量要定义在当前代码块的最前面
//	sum = num1 + num2 * num3;
//	printf("傻逼 = %d\n", sum);//(傻逼 =)会原模原样的在调试器里显示出来，别无他用
//	return 0;
//}

//变量的作用域和生命周期 作用域（scope）

//1.局部变量的作用域是变量所在的局部范围
//2.全局变量的作用域是整个工程

int ch = 5;//ch为全局变量 在代码块（{}）之内的变量都为局部变量

int main()
{
	//未声明的标识符
	//声明extern外部符号的
	extern int g_val;
	printf("g_val = %d\n", g_val);
	{
		int a = 10;
			printf("%d", a); //局部变量num只在自己定义的生命周期内有用
	}
	printf("%d", a);//ERROR 
	return 0;
}


