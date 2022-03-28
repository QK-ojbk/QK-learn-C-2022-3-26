//if语句的使用
#define _CRT_SECURE_NO_WARNINGS 1
//分支语句和循环语句
//分支语句：if,switch
//循环语句：while,for,do while
//goto语句
//一共三种结构：1.顺序结构，2.选择结构，3.循环结构
//什么是语句：C语言中由一个分号“；”隔开的一条语句，例如1+2；printf("hehe");
//if语句的语法结构：
//情况1、if(表达式)	//表达式如果非零，则为真，执行下面的语句
//				语句；
//情况2、if(表达式)//如果表达式计算为真，则执行语句1，否则执行语句2
//			语句1；
//		else
//			语句2；
//多分支：if(表达式1)
//			语句1；
//		else if(表达式2)
//			语句2；
//		else
//			语句3；
//例子如下
//1.if……else举例1
#include<stdio.h>
int main()
{
	int age;
	scanf("%d",&age);
	if(age<18)
		printf("未成年\n");
	else if(age>=18&&age<28)
		printf("青年\n");
	else if(age>=28&&age<50)
		printf("中年\n");
	else
		printf("老年\n");
	return 0;
}
//2.举例2：代码块
//#define _CRT_SECURE_NO_WARNINGS 1
//如果条件成立，要执行多条语句，则应该使用代码块
//#include<stdio.h>
//int main()
//{
//	if(表达式)
//	{
//		语句列表1；
//	}
//	else
//	{
//		语句列表2；
//	}
//	return 0;
//}
//这里一对{}就是一个代码块
//例子如下：
/*#include<stdio.h>
int main()
{
	int age;
	scanf("%d",&age);
	if(age<18)//此处没有分号,此处一个大括号就是一个代码块
	{
		printf("未成年\n");
		printf("切忌早恋\n");
	}
	else
	{
		 if(age>=18&&age<28)
		 printf("青年\n");
		 else if(age>=28&&age<50)
		 printf("中年\n");
		 else
		 printf("老年\n");	
	}
	return 0;
}*/

//3.举例3，if……else使用规则
/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a=0;
	int b=2;
	if(a==1)
		if(b==2)
			printf("hehe\n");
		else
			printf("haha\n");
	return 0;
}
//输出结果为空是因为其执行顺序如下
//先执行判断a是否等于1，得出为假，直接跳出程序
//else与最近的if构成if……else语句
*/

//4.举例4，if……else规则2
/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a=0;
	int b=2;
	if(a==1)
	{
		if(b==2)
			printf("hehe\n");
	}
		else
			printf("haha\n");
	return 0;
}
//输出结果为空是因为其执行顺序如下
//先执行判断a是否等于1，得出为假，直接跳出程序
//else与最近的if构成if……else语句
*/

//5.举例3：if……else规则3
//#define _CRT_SECURE_NO_WARNINGS 1
//代码1
//if(condition)
//{
//	return x;
//}
//return y;//含义是条件成立返回x，不成立返回y。该代码容易产生误解，可读性不强

//代码2//该代码与上一个含义一样，但可读性更强
//if(condition)
//{
//	return x;
//}
//else
//{
//	return y;
//}
/*#include<stdio.h>
int main()
{
	int num=4;
	if(num=5)//该处的是一个等号“=”，意思是赋值，则num被赋值后是非零数，为真，执行语句，打印“呵呵”
	{
		printf("呵呵\n");
	}
	return 0;
}*/

//6.例题1：判断一个数是否在0~100以内，且是否为奇数
/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()//判断一个数是否在0~100以内，且是否为奇数
{
	int num;
	scanf("%d",&num);
	if(num<=100&&num>0)
	{
		if(num%2==1)
		{
			printf("该数是0~100以内的数\n");
			printf("且该数是奇数\n");
		}
		else
		{
			printf("该数是0~100以内的数\n");
			printf("但该数不是奇数\n");
		}
	}
	else if(num>100)
	{
		if(num%2==1)
		{
			printf("该数不是0~100以内的数\n");
			printf("但该数是奇数\n");
		}
		else
		{
			printf("该数不是0~100以内的数\n");
			printf("且该数不是奇数\n");
		}
	}
	else
	{
		printf("不可是负数，请重新输入一个数\n");
	}
	return 0;
}*/

//7.例题2：找到0~100以内的奇数，并给其编号
/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()//找到0~100以内的奇数，并给其编号
{
	int num=0;
	int i=0;
	while(num<=100)
	{
		if(num%2==1)
		{
			i++;
			printf("第%d个奇数=%d  ",i,num);//此处第二个%d后面留空格的话，则后面输出的数也都间隔空格
		}
		num++;
	}
	return 0;
}*/

