
//#include <stdio.h>//字段宽度
//#define PAGES 959
//int main(void)
//{
//    printf("*%d*\n", PAGES);
//    printf("*%2d*\n", PAGES);
//    printf("*%10d*\n", PAGES);
//    printf("*%-10d*\n", PAGES);
//
//    return 0;
//}


//#include<stdio.h>// 浮点类型修饰组合
//
//int main(void)
//{
//	const double PENT = 1.00;
//
//	printf("*%f*\n", PENT);
//	printf("*%e*\n", PENT);
//	printf("*%4.2f*\n", PENT);
//	printf("*%3.1f*\n", PENT);
//	printf("*%10.3f*\n", PENT);
//	printf("*%10.3E*\n", PENT);
//	printf("*%+4.2f*\n", PENT);
//	printf("*%010.2f*\n", PENT);
//
//	return 0;
//}


//#include<stdio.h>//打印字符串
//#define BLURB "Authentic imitation!"
//
//int main(void)
//{
//	printf("[%2s]\n", BLURB);
//	printf("[%24s]\n", BLURB);
//	printf("[%24.5s]\n", BLURB);
//	printf("[%-24.5s]\n", BLURB);
//
//	return 0;
//}
//

//#include<stdio.h>
//#define cash "$xxx.xx"
//
//
//int main(void)
//{
//	printf("the   family just may be %s \
//dollar richer!",cash);
//
//
//	return 0;
//}
//


//#include<stdio.h>
//int main(void)
//{
//	int age;
//	float assets;
//	char pet[30];
//
//	printf("Enter your age,assets,and favorite pet.\n");
//	 
//	scanf_s("%d %f", &age, &assets);
//	scanf_s("%s",pet,30);
//
//	printf("%d $%.2f %s\n", age, assets, pet);
//
//	return 0;
//}
//
//#include<stdio.h>  //变宽字符
//int main(void)
//{
//	unsigned width, precision;
//	int number;
//	double weight;
//
//	printf("Enter a field width and number:\n");
//	scanf_s("%d %d", &width,&number);
//	printf("The number is :%*d\n",width,number);
//	printf("Now enter a width and a precision :");
//	scanf_s("%d %d", &width, &precision);
//	printf("Enter a weight:");
//	scanf_s("%lf", &weight);
//	printf("Weight = %*.*f\n", width, precision, weight);
//	printf("Done!\n");
//
//	return 0;
//}



//#include<stdio.h>
//int main(void)
//{
//	int n1, n2, n3;
//	printf("Plesece enter three number:");
//	scanf_s("%d %d %d", &n1, &n2,&n3);
//	printf("%10d %9d %9d", n1, n2, n3);
//
//	return 0;
//
//}


//#include<stdio.h>
//#define BOOK "War and Peace"
//int main(void)
//{
//	float cost = 12.99;
//	float precent = 80.0;
//	printf("The copy of \"%.2s\" sells for $%f.\n",BOOK,cost);
//	printf("That is %%%.0f of list.",precent);
//
//	return 0;
//
//}


//#include<stdio.h>
//int main(void)
//{
//	char first[30];
//	printf("Please enter your firt name:");
//	scanf_s("%s", first,30);
//	printf("Your name is :%s", first);
//
//
//	return 0;
//
//}

//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	char name[30];
//	int n;
//	printf("Please enter your name:");
//	scanf_s("%s", name, 30);
//	printf("\"%s \"\n",name);
//	printf("\"%20s\"\n",name);
//	printf("\"%-20s\"\n",name);
//
//	n = strlen(name) + 3;
//
//	printf("\"%*s\"",n, name);
//
//	return 0;
//
//}


//#include<stdio.h>
//int main(void)
//{
//	float a;
//
//	printf("Please enter a number:");
//	scanf_s("%f", &a);
//	printf("The input is %.3e or %.3E\n",a);
//
//
//	return 0;
//}


//#include<stdio.h>    身高与英寸
//int main(void)
//{
//	float feet;
//	char name[30];
//
//	printf("Please enter your feet\(in\) and name :");
//	scanf_s("%f %s", &feet, name,30);
//	feet = feet * 2.54;
//	printf("%s,you are %.3f feet tall",name,feet);
//
//	return 0;
//}




//#include<stdio.h>
//int main(void)
//{
//	float speed, mb,time;
//
//	printf("please enter your downloads speed and document mb:");
//	scanf_s("%f %f",&speed,&mb);
//
//	time = mb * 8 / speed;
//
//	printf("at %.2f megabits per scond,a file of %.2f megabyytes.\n",speed,mb);
//	printf("downloads in %.2f seconds.",time );
//
//	return 0;
//
//}

//
//#include<stdio.h>
//#include <corecrt_math_defines.h>
//int main(void)
//{
//	float rad;
//	printf("请输入圆半径：");
//	scanf_s("%f", &rad);
//	printf("圆的面积为%.3f", rad * rad * M_PI);
//
//	return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//	int max(int x, int y);
//	int a, b, c;
//
//	printf("input a&b:");
//	scanf_s("%d,%d", &a, &b);
//	c = max(a, b);
//	printf("max=%d\n", c);
//
//	return 0;
//
//}
//
//
//int max(int x, int y)
//{
//	int z;
//	if (x > y)
//		z = x;
//	else
//	{
//		z = y;
//	}
//
//	return (z);
//}
//



//#include<stdio.h>
//#define GAL 3.785
//#define DIS 1.609
//int main(void)
//{
//	float dis, gal,oil;
//
//	printf("Please enter your distance and gal:");
//	scanf_s("%f %f", &dis, &gal);
//
//	oil = (dis * DIS / gal * GAL) * 100;
//
//	printf("Your oil is %.1f L/100km.", oil);
//
//	return 0;
//
//
//}
//	


//#include<stdio.h>
//#define ADJUST 7.31
//int main(void)
//{
//	const double SCALE = 0.333;
//	double shone, foot;
//
//	printf("Shone size \(man's\) foot length\n");
//	shone = 3.0;
//
//	while (shone < 18.5)
//	{
//		foot = SCALE * shone + ADJUST;
//		printf("%10.1f %15.2f inches\n", shone, foot);
//		shone = shone + 1.0;
//
//	}
//	printf("If the shone fits,wear it.\n");
//
//
//	return 0;
//}


//#include<stdio.h>
//int main(void)
//{
//	int num = 1;
//
//	while (num < 21)
//	{
//		printf("%4d %6d\n", num, num * num);
//
//		num = num + 1;
//
//	}
//
//	return 0;
//}

//
//#include<stdio.h>
//#define SQUARES 64
//int main(void)
//{
//	const double CROP = 2E16;
//	double current, total;
//	int count = 1;
//
//	printf("square      grains      total      ");
//	printf("franction of \n");
//	printf("            addes       grains     ");
//	printf("world total\n");
//	total = current = 1.0;
//	printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / CROP);
//
//	while (count < SQUARES)
//	{
//		count = count + 1;
//		current = 2.0 * current;
//		total = total + current;
//
//		printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / CROP);
//
//	}
//
//	printf("That's all\n");
//
//	return 0;
//}


//
//#include<stdio.h>
//int main(void)
//{
//	int n = 0;
//	size_t intsize;
//
//	intsize = sizeof(int);
//	printf("n = %d,n has bytes; all ints have %zd bytes.\n ",n,sizeof n,intsize);
//
//	return 0;
//
//
//}


//#include<stdio.h>
//#define SEC_PER_MIN 60
//int main(void)
//{
//	int sec, min, left;
//
//	printf("Convert seconds to minuties and second.\n");
//	printf("Enter the number of seconds (<=0 to quit ）：\n");
//	scanf_s("%d", &sec);
//
//	while (sec > 0)
//	{
//		min = sec / SEC_PER_MIN;  //分钟数
//		left = sec % SEC_PER_MIN;  //秒数
//
//		printf("%d seconds is %d minutes,%d seconds.\n",sec,min,left);
//		printf("Enter next value (<=0 to quit):\n");
//		scanf_s("%d", &sec);
//
//
//	}
//
//	printf("Done!");
//
//	return 0;
//
//

//
//#include<stdio.h>
//int main(void)
//{
//	int ultra = 0, super = 0;
//
//	while (super < 5)
//	{
//		super++;
//		++ultra;
//
//		printf("Super = %d,ultra = %d\n", super, ultra);
//
//	}
//
//	return 0;
//
//}


//#include<stdio.h>
//void pound(int n);
//int main(void)
//{
//	int times = 5;
//	char ch = '!';
//	float f = 6.0f;
//
//	pound(times);
//	pound(ch);
//	pound(f);
//
//	return 0;
//
//}
//
//
//void pound(int n)
//{
//	while (n-- > 0)
//	{
//		printf("#");
//
//	}
//
//	printf("\n");
//}


//
//#include<stdio.h>
//#define MIN 60
//int main(void)
//{
//	int num,min,hur;
//	;
//	printf("Please enter a number(<= to quit): ");
//	while ((scanf_s("%d", &num) == 1) && num > 0)
//	{
//		min = num % MIN;
//		hur = num / MIN;
//
//		printf("minter:%d, hour:%d\n", min, hur);
//		printf("Please enter a number: ");
//		
//	}
//
//	printf("Done.\n");
//
//	return 0;
//}



//
//#include<stdio.h>
//#define NUM 10
//int main(void)
//{
//	int en,num;
//	int i = 0;
//	printf("Please enter a number:");
//	scanf_s("%d", &en);
//	num = en;
//	while ( i < NUM)
//	{
//		i++;
//		printf("%-6d", en + i);
//	}
//
//	printf("\nDone!");
//
//	return 0;
//}
//
//#include<stdio.h>
//#define WEEK 7
//int main(void)
//{
//	int m, week, day;
//	printf("Please enter days(<=0 to quit:");
//	while ((scanf_s("%d",&m) == 1) && m > 0)
//	{
//		week = m / WEEK;
//		day = m % WEEK;
//		printf("%d days are %d week, %d day", m, week, day);
//		printf("\nPlease enter days(<= 0 to quit : ");
//
//	}
//
//	printf("\nDone!");
//
//	return 0;
//
//}


//#include<stdio.h>       设计函数
//void cube(double m);
//int main(void)
//{
//	double n;
//	printf("Please enter a double number :");
//	scanf_s("%lf", &n);
//	cube(n);
//
//	return 0;
//
//}
//
//
//void cube(double m)
//{
//	printf("The numbe's nub is %.2lf", m = m * m * m);
//	return;
//}


//
//#include<stdio.h>
//int main(void)
//{
//	int n, m;
//	printf("This propram computes moduli.\n");
//	printf("Enter an integer to serve as the second operand:");
//	scanf_s("%d", &n);
//	printf("Now enter the first operand:");
//	scanf_s("%d", &m);
//	printf("%d %% is %d",m,n, m % n);
//	printf("\nEnter next number for first operand(<=0 to quit):");
//	
//	while ((scanf_s("%d", &m)) == 1 && m > 0)
//	{
//		
//		printf("%d %% %d is %d", m, n, m % n);
//		printf("\nEnter next number for first operand(<=0 to quit):");
//	}
//	printf("\nDone.");
//
//	return 0;
//}
//
//
//#include<stdio.h>
//void Temperatures(double n);
//int main(void)
//{
//	double temp;
//	printf("Please enter a tempertauer:");
//	while ((scanf_s("%lf",&temp)) == 1)
//	{
//		Temperatures(temp);
//		printf("\nPlease enter a tempertauer (q to quit):");
//	}
//	 
//	return 0;
//}
//
//
//void Temperatures(double n)
//{
//	const double T = 5.0 / 9.0 * (n - 32.0);
//	const double K = T + 273.16;
//	printf("The temperatures is :%.3lf,%.3lf℃,%.3lfK.", n, T, K);
//
//	return;
//


#/*include<stdio.h>
#include<stdbool.h>
int main(void)
{
	long num;
	long sum = 0L;
	int input_is_good;

	printf("Please enter an interger to be summed");
	printf("(q to quit):");

+-":l>KMNB 1`		JJJGHGFGERRC 
3
input_is_good = (scanf_s("%ld", &num) == 1);
	while (input_is_good)
	{
		sum = sum + num;
		printf("Please enter next interger (q to quit):");
		input_is_good = (scanf_s("%ld", &num) == 1);
	}

	printf("Those interger sum to %ld.\n", sum);

	return 0;*/
//}
//

//#include<stdio.h>   //邮资
//int main(void)
//{
//	const int FIRST_OZ = 46;
//	const int NEST_OZ = 20;
//	int ounces, cost;
//
//	printf(" ounces cost\n");
//	for (ounces = 1, cost = FIRST_OZ; ounces <= 16; ounces++, cost += NEST_OZ)
//		printf("%5d    $%4.2f\n", ounces, cost / 100.0);
//
//	return 0
//}




//#include<stdio.h>  //求序列的和
//int main(void)
//{
//	int t_ct;
//	double time, power_of_2;
//	int limit;
//
//	printf("Enter the number of terms you want:");
//	scanf_s("%d", &limit);
//	for (time = 0, power_of_2 = 1, t_ct = 1; t_ct <= limit; t_ct++, power_of_2 *= 2.0)
//	{
//		time += 1.0 / power_of_2;
//		printf("time = %f when terms = %d.\n", time, t_ct);
//
//	}
//
//	return 0;
//}
//
//
//#include<stdio.h>
//int main(void)
//{
//	const int secret_code = 13;
//	int code_entered;
//
//	do
//	{
//		printf("To enter the triskaidekaphobia therapy club.\n");
//		printf("please enter the secret code number:");
//		scanf_s("%d", &code_entered);
//
//	} while (code_entered != secret_code);
//
//	printf("Congradulation ! You are cured!\n");
//
//
//	return 0;00
//
//	
//}


//#include<stdio.h>
//#define ROWS 6
//#define CHARS 10
//int main(void)
//{
//	int row;
//	char ch;
//	for ( row = 0; row < ROWS ;row++)
//	{
//		for (ch = 'A'; ch < ('A' + CHARS); ch++)
//		{
//			printf("%c", ch);
//
//		}
//
//		printf("\n");
//	}
//
//	return 0;
//	
//}

//
//#include<stdio.h>  //嵌套循环
//#define ROWS 6
//#define CHARS 6
//int main(void)
//{
//	int row;
//	char ch;
//
//	for (row = 0 ;row < ROWS ;row ++)
//	{
//		for (ch = ('A' + row); ch < ('A' + CHARS); ch++)
//			printf("%c", ch);
//		printf("\n");
//	}
//
//	return 0;
//}



//#include<stdio.h>
//#define SIZE 3
//#define PAR 72
//int main(void)
//{
//	int index, score[SIZE];
//	int sum = 0;
//	float average;
//
//	printf("Enter %d golf scores:\n", SIZE);
//	for (index = 0; index < SIZE; index++)
//	{
//		scanf_s("%d", &score[index]);  //读取10个分数
//		sum += score[index];//计算和
//	}
//	printf("The scores read in are as follows:\n");
//	for (index = 0; index < SIZE; index++)
//		printf("%-5d", score[index]);  //验证输入
//	printf("\n");		
//	average = (float)sum / SIZE;
//
//	printf("sum is %d,average is %.2f.\n", sum,average);
//
//	return 0;
//
//}ST



//#include<stdio.h>
//double power(double n, int p);
//int main(void)
//{
//	double x, xpow;
//	int exp;
//
//	printf("Enter a number and the positive integer power");
//	printf("to which/nthe number will be raised.");
//	printf("Enter q to quit.\n");
//	while (scanf_s("%lf%d",&x,&exp) ==2)
//	{
//		xpow = power(x, exp);
//		printf("%.3f to the power %d is %.5f \n",x,exp,xpow);
//		printf("Enter next pair of numbers or q to quit.\n");
//
//	}
//
//	printf("Hope you enjoyed this power trip -- byebye!\n");
//
//	return 0;
//
//}
//
//double power(double n, int p)
//{
//	double pow = 1;
//	int i;
//	
//	for (i = 1; i <= p; i++)
//	{
//		pow *= n;
//
//	}
//
//	return pow;
//}

//#include<stdio.h>
//#define LEN 26
//
//int main(void)
//{
//	char ch[n];
//	int m;
//	for (m = 0; m < LEN; m++)
//		ch[n] = 'A' + m;
//
//
//	for (n = 0; n < LEN; n++)
//	{
//		printf("Here is %c", ch[n]);
//	}
//
//
//	return 0;
//}


//#include <stdio.h>
//#define LEN 26
//
//int main(void)
//{
//	int n;
//	char letters[LEN];
//
//	for (n = 0; n < LEN; n++)
//	{
//		letters[n] = 'a' + n;
//	}
//	printf("Here are %d letters:\n", LEN);
//	for (n = 0; n < LEN; n++)
//	{
//		printf("%-3c", letters[n]);
//	}
//
//	return 0;
//}

//#include<stdio.h>
//#define CH '$'
//
//int main(void)
//{
//	int n,m;
//
//	for (n = 0; n < 5; n++)
//	{
//		for (m = 0; m <= n; m++)
//		{
//			printf("%c", CH);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//
//#include<stdio.h>
//#define ROW 6
//
//int main(void)
//{
//	char n = 'A';
//	int i, j;
//	for (i = 1; i <= ROW; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%c", n++);
//
//		}
//
//		printf("\n");
//	}
//}

//	return 0;
//}
//#include <stdio.h>
//#define N 6
//
//int main(void)
//{
//	int i, j;
//	char ch = 'A';
//
//	for (i = 1; i <= N; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%c", ch++);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//
//#include<stdio.h>
//int main(void)
//{
//	int i,j;
//	char ch;
//	
//	printf("Please enter a upper letter:");
//	scanf_s("%c", &ch);
//
//	int length = ch - 'A';//循环次数
//
//	printf("The pyramid of %c is:\n", ch);
//
//
//	for (i = 0; i <= length; i++)
//	{
//		char t = 'A';  
//		for (j = 0; j < length - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%c", t++); //递增字符
//		}
//		for (j = 0; j < i; j++)
//		{
//			printf("%c", t--);
//		}
//
//		printf("\n");
//
//	}
//
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//    int i, j;
//    char ch;
//
//    printf("Please enter a upper letter: ");
//    scanf_s("%c", &ch);
//
//    int length = ch - 'A';
//    //循环次数;
//    printf("The pyramid of %c is:\n", ch);
//    for (i = 0; i <= length; i++)
//    {
//        char t = 'A' -1;
//        for (j = 0; j < length - i; j++)
//        {
//            printf(" ");
//        }
//        //↑左侧空格数;
//        for (j = 0; j <= i; j++)
//        {
//            printf("%c", ++t);
//        }
//        //↑打印递增字母;
//        for (j = 0; j < i; j++)
//        {
//            printf("%c", --t);
//        }
//        //↑打印递减字母
//        printf("\n");
//    }
//
//    return 0;
//




#/*include<stdio.h>
int main(void)
{
	int i, up, down;

	printf("Plaese enter a up limit:");
	scanf_s("%d", &up);
	printf("Plaese enter a down limit:");
	scanf_s("%d", &down);
	for (i = down; i < up; i++);
	{
		printf("%-10s%10s%10s", "number", "square", "cube");
		printf("\n%-10d%10d%10d", i, i * i, i * i * i);

	}

	printf("\nDone!");

	return 0;
}*/


//
//#include<stdio.h>
//#include<string.h>
//#define LED 20
//
//int main(void)
//{
//	char ch[LED];
//	int i;
//
//	printf("Please enter a word:");
//	scanf_s("%c", ch);
//	printf("Reversing the word is:");
//		for (i = strlen(ch) - 1; i >= 0; i--)
//		{
//			printf("%c", ch[i]);
//		}
//	return 0;
//
//}
// 
//#include <stdio.h>
//#include <string.h>
//#define LEN 20
//
//int main(void)
//{
//	int i;
//	char str[LEN];
//
//	printf("Please enter a word: ");
//	scanf_s("%19s", str);
//	printf("The word is:\n");
//	printf("%s\n", str);
//
//	printf("Reversing the word is:\n");
//	for (i = strlen(str) - 1; i >= 0; i--)
//	{
//		printf("%c", str[i]);
//	}
//
//	return 0;
//}


//#include<stdio.h>
//float count(float n,float m);
//
//int main(void)
//{
//	float i, j, k;
//
//	printf("Please enter two number:");
//	while (scanf_s("%f %f", &i, &j) == 2)
//	{
//		printf("The answer %.3f - %.3f/%f * %.3f is: %.3g.\n",i, j, i, j, count(i,j));
//		printf("You can enter again( q to quit ):);
//	}
//
//	return 0;
//}
//
//
//float count(float n, float m)
//{
//	return (n - m )/( n * m);
//}

//#include<stdio.h>
//
//int main(void)
//{
//	int lower, upper, i, j;
//	int k = 0;
//	
//	printf("Enter lower and upper integer limit:");
//	scanf_s("%d %d", &lower, &upper);
//	if (upper > lower)
//	{
//		j = lower;
//
//		for (i = 1; i < upper - lower; i++)
//		{
//			j++;
//			k = (j * j) + k;
//			
//		}
//			printf("The sum of the square from %d to %d is: %d", lower, upper, k);
//			printf("\nEnter next set of limit( q to quit):");
//			scanf_s("%d %d", &lower, &upper);
//	}
//	
// 
//	return 0;
//}
////
//#include<stdio.h>
//#include<string.h>
//#define N 8
//int main(void)
//{
//	int ch[N];
//	int i;
//
//	printf("Enter eight number:");
//
//	scanf_s("%d", &ch[N]);
//	for (i = N -1; i > 0; i--)
//	{
//		printf("%d", ch[i]);
//	}
//	
//	return 0;
//}
//


//#include<stdio.h>	
//int main(void)
//{
//	int i, n;
//	double j = 0.0, k = 0.0;
//	printf("Please enter a number:");
//	while ((scanf_s("%d", &i) == 1) && (i > 0) )
//	{
//		
//		for (n = 1; n <= i; n++)
//		{
//			k += 1.0 / n;
//
//			if (n % 2 == 1)
//			{
//				j += 1.0 / n;
//			}
//			else
//			{
//				j -= 1.0 / n;
//			}
//		}
//
//		printf("1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ...");
//		printf("sum are %g\n", k);
//		printf("1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ...");
//		printf("sum are %g\n", j);
//		printf("The sum of the first %d items of the two sequences is %g\n", i, k+ j);
//		printf("\nYou can enter again (<= 0 to quit): ");
//		
//	}
//
//	printf("Done!\n");
//
//	return 0;
//
//}

/*nclude <stdio.h>

int main(void)
{
	int i, n;

	printf("Please enter a number (<= 0 to quit): ");
	while ((scanf_s("%d", &n) == 1) && (n > 0))
	{
		double res1 = 0.0;
		double res2 = 0.0;
		for (i = 1; i <= n; i++)
		{
			res1 += 1.0 / i;
			if (i % 2 == 1)
			{
				res2 += 1.0 / i;
			}
			else
			{
				res2 -= 1.0 / i;
			}
		}
		printf("1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ...");
		printf("sum are %g\n", res1);
		printf("1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ...");
		printf("sum are %g\n", res2);
		printf("The sum of the first %d items of the two sequences is %g\n", n, res1 + res2);
		printf("\nYou can enter again (<= 0 to quit): ");
	}
	printf("Done.\n");

	return 0;
}*/

//#include<stdio.h>
//#define N 8
//int main(void)
//{
//	int a[N], i;
//	int j = 2;
//
//	for (i = 0; i <= N; i++)
//	{
//		a[i] = j;
//		j *= 2;
//
//	}
//	i = 0;
//	printf("Here are the results for array:\n", N);
//	do
//	{
//		printf("%d\n", a[i++]);
//
//	} while (i < N);
//
//	printf("\nDone.\n");
//
//	return 0;
//}


//
//#include<stdio.h>
//#define N 8
//int main(void)
//{
//	double a[N], b[N];
//	int i;
//	printf("Please enter a %d number:",N);
//		
//		for (i = 0; i < N; i++)
//		{
//			scanf_s("%lf", &a[i]);
//		}
//
//		b[0] = a[0];
//
//		for (i = 0; i < N; i++)
//		{	
//			b[i] += a[i];
//		}
//
//		for (i = 0; i < N; i++)
//		{
//			printf("\n%-3g", a[i]);
//		}
//
//		for (i = 0; i < N; i++)
//		{
//			printf("\n%-3g", b[i]);
//		}
//
//		printf("Done!\n");
//
//	return 0; 
//}

//
//#include <stdio.h>
//#define LEN 255
//
//int main(void)
//{
//	int i = 0;
//	char input[LEN];
//
//	printf("Please enter a string:\n");
//	do
//	{
//		scanf_s("%c", &input[i]);
//	} while (input[i] != '\n' && ++i && i < LEN);
//
//	printf("Reversing print the string is:\n");
//	for (i--; i >= 0; i--)
//	{
//		//↑避免打印换行符;
//		printf("%c", input[i]);
//	}
//	printf("\nDone.\n");
//
//	return 0;
//}


//#include<stdio.h>
//#define RATE_SIMP 0.1
//#define RATE_COMP 0.05
//#define ATM 100
//int main(void)
//{
//	int years = 0;
//	double daphne = RATE_SIMP, deirdre = RATE_COMP;
//	do
//	{
//		daphne += RATE_SIMP * ATM;
//		deirdre += RATE_COMP * deirdre;
//
//		years++;
//		
//	} while (deirdre < daphne);
//
//	printf("Investment values after %d years:\n", years);
//	printf("Daphne: $%.2f\n", daphne);
//	printf("Deirdre: $%.2f\n", deirdre);
//	printf("Deirdre(invest) > Daphne(invest)\n");
//
//	return 0;
//	
//}

//
//#include<stdio.h>
//#include<ctype.h>
//#define SPACE ' '
//
//int main(void)
//{
//	char ch;
//
//	while ((ch = getchar()) != '\n')
//	{
//		if (isalpha(ch))
//		{
//			putchar(ch + 1);
//		}
//		else
//		{
//			putchar(ch );
//		}
//	}
//		putchar(ch);
//	
//
//	return 0;
//}

//
//#include<stdio.h>//显示约数
//#include<stdbool.h>
//
//int main(void)
//{
//	unsigned long num;
//	unsigned long div;
//	bool isPrime;//素数标记
//
//	printf("Please enter an interger for analysis;");
//	printf("Enter q to quit:");
//
//	while (scanf_s("%lu",&num) == 1)
//	{
//		for (div = 2, isPrime = true; (div * div) <= num; div++)
//		{
//			if (num % div == 0)
//			{
//
//				if ((div * div) != num)
//				{
//					printf("%lu is divisible by %lu and %lu.\n", num, div, num / div);
//				}
//				else
//				{
//					printf("%lu is divisible by %lu.\n", num, div);
//				}
//
//				isPrime = false;
//			}
//						
//		}
//		if (isPrime)
//		{
//			printf("%lu is prime.\n", num);
//		}
//		printf("Please enter an interger for analysis;");
//		printf("Enter q to quit:");
//	}
//
//	printf("BYE!\n");
//
//	return 0;
//}


//
//#include<stdio.h>
//#include<ctype.h>
//#include<stdbool.h>
//#define STOP '|'
//
//int main(void)
//{
//	char c;  // 读入字符
//	char prev; //读入前一个字符
//	long n_chars = 0L;//字符数
//	int  n_lines = 0;//行数
//	int  n_words = 0;//单词数
//	int  p_lines = 0;//不完整的行数
//	bool inword = false;//如果c在单词中，inword等于true
//
//	printf("Enter text to be analyzed (| to terminate):\n");
//	//prev = '\n';
//
//	while (( c = getchar()) != STOP)
//	{
//		n_chars++;
//		if (c == '\n')
//		{
//			n_lines++;
//
//		}
//
//		if (!isspace(c) && !inword)
//		{
//			inword = true;
//			n_words++;
//		}
//
//		if (isspace(c) && inword)
//		{
//			inword = false;
//		}
//
//		prev = c;
//		
//	}
//
//	if (prev != '\n')
//	{
//		p_lines = 1;
//	}
//
//	printf("characters = %ld,word = %d,lines = %d,", n_chars, n_words, n_lines);
//	printf("partial line = %d\n", p_lines);
//
//	return 0;
//
//}



//#include<stdio.h>
//#define COVERAGE 350
//
//int main(void)
//{
//	int sq_feet;
//	int cans;
//
//	printf("Enter number of square feet to be painted:\n");
//	while (scanf_s("%d",&sq_feet) == 1)
//	{
//		cans = sq_feet / COVERAGE;
//		cans += ((sq_feet % COVERAGE == 0)) ? 0 : 1;
//
//		printf("You need %d %s of piant .\n", cans, cans == 1 ? "can" : "cans");
//		printf("Enter next value (q to quit):\n");
//
//	}
//
//	return 0;
//}


//#include<stdio.h>
//void PrintDigit(int n); //递归
//
//int main(void)
//{
//	int n;
//	scanf_s("%d", &n);
//	PrintDigit(n);
//
//	return 0;
//}
//
//
//void PrintDigit(int n)
//{
//	if (n < 10)
//		printf("%d\n", n);
//	else
//	{
//		PrintDigit(n / 10);//调用函数本身
//		printf("%d\n", n % 10);
//	}
//}


//
//#include<stdio.h>
//int main(void)
//{
//	const float MIN = 0.0f;
//	const float MAX = 100.0f;
//
//	float score;
//	float total = 0.0f;
//	int n = 0;
//	float min = MAX;
//	float max = MIN;
//
//	printf("Enter the first score(q to quit):");
//	while (scanf_s("%f",&score) == 1)
//	{
//		if (score < MIN || score > MAX)
//		{
//			printf("%0.1f is an invalid value.Try again:",score);
//			continue;
//		}
//
//		printf("Accpecting %0.1f .\n", score);
//		min = (score < min) ? score : min;
//		max = (score > max) ? score : max;
//		total += score;
//
//		n++;
//
//		printf("Enter next score (q to quit):");
//
//	}
//
//	if (n > 0)
//	{
//		printf("Average of %d scores is %0.1f .\n", n, total);
//		printf("Low = %0.1f,hight = %0.1f\n", min, max);
//	}
//	else
//	{
//		printf("No valid scores were enterd.\n");
//	}
//
//	return 0;
//}
//
//#include<stdio.h>
//#include<ctype.h>
//int main(void)
//{
//	char ch;
//
//	printf("Give me a letter of the alphabet,and I will give ");
//	printf("an animal name\nbegining withe that letter.\n");
//	printf("Please type in a letter type # to end my act.\n");
//
//	while ((ch = getchar()) != '#')
//	{
//		if ('\n' == ch)
//		{
//			continue;
//		}
//		if (tolower(ch))//大写转小写
//		{
//			switch (ch)
//			{
//			case 'a':
//			case 'A':
//				printf("argail,a wild sheep of Asia.\n");
//				break;
//			case 'b':
//			case 'B':
//				printf("babiruse,a wild pig of Malay.\n");
//				break;
//
//			}
//		}
//		else
//		{
//			printf("I recognize only lowercase letter.\n");
//		}
//
//		while (getchar() != '\n') //读取并丢去输入
//		{
//			continue;
//		}
//
//		printf("Please type in a letter;type # to end my act.\n");
//	}
//
//	printf("Bye.\n");
//
//	return 0;
//}



//#include<stdio.h>
//#define STOP '#'
//int main(void)
//{
//	char ch;
//	int space, enter, other;
//	
//	space = enter = other = 0;
//
//	printf("Enter some charecters(# to quit):");
//	while ((scanf_s("%c", &ch)) != STOP)
//	{
//		if (ch == ' ')
//		{
//			space++;
//		}
//		else if (ch == '\n')
//		{
//			enter++;
//		}
//		else
//		{
//			other++;
//		}
//	}
//
//	printf("Here are the messages\n");
//	printf("Space is: %d\n", space);
//	printf("Lines is: %d\n", enter);
//	printf("Other is: %d\n", other);
//
//	return 0;
//	
//}

//#include <stdio.h>
//#define STOP '#'

//int main(void)
//{
//	int ch, space, enter, others;
//	space = enter = others = 0;
//
//	printf("Please enter some characters ('#' to quit):\n");
//	while ((ch = getchar()) != STOP)
//	{
//		if (ch == ' ')
//		{
//			space++;
//		}
//		else if (ch == '\n')
//		{
//			enter++;
//		}
//		else
//		{
//			others++;
//		}
//	}
//	printf("Here are the messages\n");
//	printf("Space: %d\n", space);
//	printf("Linefeed: %d\n", enter);
//	printf("Others: %d\n", others);
//
//	return 0;
//}

//#include<stdio.h>
//#define STOP '#'
//#define N 8
//
//int main(void)
//{
//	int i = 0;
//	char ch;
//
//	printf("Enter some characters('#' to quit):\n");
//
//	while((ch = getchar()) != STOP)
//	{
//		
//
//		if (i++ % N == 0)
//		{
//			putchar('\n');
//		}
//		if (ch == '\n')
//		{
//			printf("'\\n'-%3d \n", ch);
//		}
//		else if (ch == '\t')
//		{
//			printf("'\\t'-%3d ", ch);
//		}
//		else
//		{
//		printf("'%c'---%3d ", ch, ch);
//		}
//	}
//
//	printf("Done!\n");
//
//	return 0;
//}
//
//
////#include <stdio.h>
////#define STOP '#'
////
////int main(void)
////{
//	int ch;
//	int i = 0;
//
//	printf("Enter some characters('#' to quit):\n");
//	while ((ch = getchar()) != STOP)
//	{
//		if (i++ % 8 == 0)
//		{
//			putchar('\n');
//		}
//		if (ch == '\n')
//		{
//			printf("'\\n'-%3d ", ch);
//		}
//		else if (ch == '\t')
//		{
//			printf("'\\t'-%3d ", ch);
//		}
//		else
//		{
//			printf("'%c'-%3d ", ch, ch);
//		}
//	}
//	printf("Done.\n");
//
//	return 0;
//}

//
//#include<stdio.h>
//#define N 0
//int main(void)
//{
//	int n, even, odd;
//	int e_sum, o_sum;
//
//	even = odd = 0;
//	e_sum = o_sum = 0;
//
//	printf("Please enter some number:");
//
//	while ((scanf_s("%d",&n)) == 1 && (n != N) )
//	{
//		if (n % 2 == 0)
//		{
//			even++;
//			e_sum += n;
//		}
//		else
//		{
//			odd++;
//			o_sum += n;
//		}
//
//		printf("\nYou can enter again (0 to quit): ");
//	}
//
//	printf("Even number: %d\n", even);
//	if (even > 0)
//	{
//		printf("The average of even: %g\n", (float)e_sum / even);
//	}
//	printf("Odd number: %d\n", odd);
//	if (odd > 0)
//	{
//		printf("The average of odd: %g\n", (float)o_sum / odd);
//	}
//
//	printf("Done.\n");
//	
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int n, odd, even;
//	int e_sum, o_sum;
//	odd = even = 0;
//	e_sum = o_sum = 0;
//
//	printf("Please enter a integer (0 to quit): ");
//	while (scanf_s("%d", &n) == 1 && (n != 0))
//	{
//		if (n % 2 == 0)
//		{
//			even++;
//			e_sum += n;
//		}
//		else
//		{
//			odd++;
//			o_sum += n;
//		}
//		printf("You can enter again (0 to quit): ");
//	}
//	printf("Even number: %d\n", even);
//	if (even > 0)
//	{
//		printf("The average of even: %g\n", (float)e_sum / even);
//	}
//	printf("Odd number: %d\n", odd);
//	if (odd > 0)
//	{
//		printf("The average of odd: %g\n", (float)o_sum / odd);
//	}
//	printf("Done.\n");
//
//	return 0;
//}
//
//#include<stdio.h>
//#define STOP '#'
//
//int main(void)
//{
//	char ch;
//	int i = 0;
//
//	printf("Please enter some words(# to quit):");
//	while ((ch = getchar()) != STOP)
//	{
//		switch (ch)
//		{
//		 case '.':
//		 {
//			putchar('!');
//			i++;
//			break;
//		 }
//		 case '!':
//		 {
//			putchar('!!');
//			i++;
//			break;
//		 }
//		 default:
//		 {
//			putchar(ch);
//			break;
//		 }
//
//		}
//	}
//	printf("\nTotal replace time %d", i);
//
//
//	return 0;
//}

//#include<stdio.h>
//#define STOP '#'
//
//int main(void)
//{
//	int i = 0;
//	int flag = 0;
//	char ch;
//
//	printf("Please enter some characters(# to quit):");
//
//	while ((ch = getchar()) != STOP )
//	{
//		switch (ch)
//		{
//		case 'e':
//		{
//			flag = 1; //标记e
//			break;
//		}
//		case 'i' :
//		{
//			if (1 == flag)
//			{
//				i++;
//			}
//
//			flag = 0;//重置标记
//			break;
//		}
//		default:
//		{
//			flag = 0;
//			break;
//		}
//
//		}
//	}
//	printf("\nTotally exit %d times\'ei\'.", i);
//
//	return 0;
//}

//#include<stdio.h>  //工资计算
//#define BASE_SALARY 10.0f
//#define EXTRA_HOUR 1.5f
//#define BASE_TAX 0.15f
//#define EXTRA_TAX 0.2f
//#define EXCEED_TAX 0.25f
//
//int main(void)
//{
//	float hours;
//	float salary, tax, total;
//
//	printf("Please enter your work hour a week:");
//	while (scanf_s("%f", &hours) != 1 || (hours < 0))
//	{
//		while (getchar() != '\n')
//			continue;
//		printf("Please enter a positive number: ");
//	}
//	
//	salary = total - tax;
//	printf("\nThe total is:%0.3f, salary is:%.3f, tax is:%0.3f", total, salary, tax);
//
//	return 0;
//}
//#include <stdio.h>
//#define BASE_SALARY 10.0f
//#define EXTRA_HOUR 1.5f
//#define BASE_TAX 0.15f
//#define EXTRA_TAX 0.2f
//#define EXCEED_TAX 0.25f
//
//int main(void)
//{
//	float hours = 0.0f;
//	float salary, tax, taxed_salary;
//
//	printf("Enter the working hours a week: ");
//	while (scanf_s("%f", &hours) != 1 || (hours < 0))
//	{
//		while (getchar() != '\n')
//			continue;
//		printf("Please enter a positive number: ");
//	}
//	if (hours <= 30)
//	{
//		salary = hours * BASE_SALARY;
//		tax = salary * BASE_TAX;
//		taxed_salary = salary - tax;
//	}
//	else if (hours <= 40)
//	{
//		salary = hours * BASE_SALARY;
//		tax = 300 * BASE_TAX + (salary - 300) * EXTRA_TAX;
//		taxed_salary = salary - tax;
//	}
//	else
//	{
//		salary = (40 + (hours - 40) * EXTRA_HOUR) * BASE_SALARY;
//		if (salary <= 450)
//		{
//			tax = 300 * BASE_TAX + (salary - 300) * EXTRA_TAX;
//		}
//		else
//		{
//			tax = 300 * BASE_TAX + 150 * EXTRA_TAX + (salary - 450) * EXCEED_TAX;
//		}
//		taxed_salary = salary - tax;
//	}
//	printf("salary(before tax): $%g\n", salary);
//	printf("tax: $%g\n", tax);
//	printf("salary(after tax): $%g\n", taxed_salary);
//
//	return 0;
//}


// #include<stdio.h>  //工资计算
//#include<ctype.h>
//#define EXTRA_HOUR 1.5f
//#define BASE_TAX 0.15f
//#define EXTRA_TAX 0.2f
//#define EXCEED_TAX 0.25f
//
//int show_menu(void);
//void show_salary(float BASE_SALARY, float hours);
//int get_choice(void);
//void eatline(void);
//
//int main(void)
//{
//	int ch;
//	float n;
//
//	while ((ch = show_menu()) != 5)
//	{
//		printf("Enter work hours a week:");
//		while (scanf_s("%f",&n) != 1 || n < 0)
//		{
//			eatline();
//			printf("\nEnter a positive number:");
//			
//		}
//		eatline();
//
//		switch (ch)
//		{
//		case 1:
//		{
//			show_salary(8.75f, n);
//			break;
//		}
//		case 2:
//		{
//			show_salary(9.33f, n);
//			break;
//		}
//		case 3:
//		{
//			show_salary(10.00f, n);
//			break;
//		}
//		case 4:
//		{
//			show_salary(11.20f, n);
//			break;
//		}
//				
//		}
//
//		putchar('\n');
//
//	}
//	printf("Done!\n");
//
//	return 0;
//	
//}
//
//void eatline(void)
//{
//	while (getchar() != '\n')
//		continue;
//	return;
//}
//
//int get_choice(void)
//{
//	int ch;
//	scanf_s("%d", &ch);
//	eatline();
//
//	return ch;
//}
//
//int show_menu(void)
//{
//	int ch;
//	printf("******************************************************************\n");
//	printf("Enter the number corresponding to deried pay rate or action:\n");
//	printf("1) $8.75/hr                       2) $9.33/hr\n");
//	printf("3) $10.00/hr                      4) $11.20/hr\n");
//	printf("5) quit\n");
//	printf("******************************************************************\n");
//	printf("Please enter your chose:");
//	ch = get_choice();
//
//	while (ch != 1 && ch != 2 && ch!= 3 && ch != 4 && ch != 5)
//	{
//		printf("Please enter 1,2,3,4 or 5:");
//		ch = get_choice();
//	}
//
//	return ch;
//}
//
//void show_salary(float BASE_SALARY, float hours)
//{
//	float salary, tax, total;
//	
//	if (hours < 40)
//	{
//		total = hours * BASE_SALARY;//不加班工资
//		if ((total) <= 300)
//		{
//			tax = hours * BASE_SALARY * BASE_TAX;//	前300税金			
//		}
//		else
//		{
//			tax = ((total - 300) * EXCEED_TAX) + 300 * BASE_TAX;//300--400税率
//		}
//		
//	}
//	else
//	{
//		total = ((hours - 40) * EXTRA_HOUR * BASE_SALARY) + 40 * BASE_SALARY; //加班工资
//		if (total < 450)
//		{
//			tax = ((hours - 40) * EXTRA_HOUR * BASE_SALARY * EXTRA_TAX) + 40 * BASE_SALARY * BASE_TAX; //400--450税金
//		}
//		else
//		{
//			tax = (300 * BASE_TAX) + (150 * EXTRA_TAX) + (total - 450) * EXCEED_TAX; //450以上税金
//		}
//
//	}
//	salary = total - tax;
//	printf("\nThe total is:%0.3f, salary is:%.3f, tax is:%0.3f", total, salary, tax);
//	
//	return;
//}
//
//#include<stdio.h> //求素数
//#include<math.h>
//int main(void)
//{
//	int i ;
//	int n, number, prime;
//
//	printf("Please enter a positive integer( <= to quit):");
//	while ((scanf_s("%d", &number)) == 1 && number > 0)
//	{		
////		if (number == 1)
//		{
//			printf(" 1 isn't prime\n.");
//			printf("Please enter a positive integer( <= to quit):");
//			continue;
//		}
//		printf("Here are the prime (<= %d):\n", number);
//
//		for (i = 2; i < number; i++)
//		{
//			prime = 1;
//			for (n = 2; n <= sqrt(i); n++)
//			{
//				if (i % n == 0)
//				{
////					prime = 0;
//// 					break;
//				}
//			}
//			if (prime)
//			{
//				printf("%-3d", i);
//			}
//		}
//
//	}
//
//	printf("Done!\n");
//
//	return 0;
//}

////#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int ch;
//	FILE * fq;
//	char fname[50];
//
//	printf("Enter tne name of the file:");
//	scanf_s("%s", fname);
//	fp = fopen(fname, "r");
//	if (fq == NULL)
//	{
//		printf("Failed to open file.Bye!\n");
//		exit(1);
//	}
//
//	while ((ch = getc(fp)) != EOF)
//	{
//		putchar(ch);
//	}
//
//	fclose(fq);
//
//	return 0;
//}
//
//#include<stdio.h>
//#include<stdbool.h>
//long get_long(void);  //验证整数
//bool bad_limits(long begin, long end, long low, long hight); // 验证上下限是否有效
//double sum_aquares(long a, long b); //计算a--b平方和
//
//int main(void)
//{
//	const long MIN = -10000000L;  //上限
//	const long MAX = 10000000L; //下限
//	long start, stop;  //用户输入的上下限
//	double answer;
//
//	printf("This program computer the sum of the squares of"
//		"integers in a range.\nThe lower bound should not"
//		"be less than -10000000 and the upper bound should not be more than +10000000.\n"
//		"Enter the (enter 0 for both limits to quit):\n"
//		"lower limits:");
//
//	start = get_long();
//	printf("upper lower:");
//	stop = get_long();
//
//	while (start != 0 || stop != 0)
//	{
//		if (bad_limits(start, stop, MIN, MAX))
//		{
//			printf("Please try again.\n");
//		}
//		else
//		{
//			answer = sum_aquares(start, stop );
//			printf("The sum of the squares of the integers from %ld to %ld is %g.\n", start, stop, answer);
//		}
//		printf("Enter the (enter 0 for both limits to quit):\n");
//		printf("lower limits:");
//		start = get_long();
//		printf("upper lower:");
//		stop = get_long();
//
//	}
//
//	printf("Done!\n");
//
//	return 0;
//
//}
//
//long get_long(void)
//{
//	long input;
//	int ch;
//
//	while (scanf_s("%ld",&input) != 1)
//	{
//		while ((ch = getchar()) != '\n')
//		{
//			putchar(ch);
//			printf(" is not an integer .\nPlease enter an ");
//			printf("integer value,such as 26,-428 or 5:");
//		}
//	}
//
//	return input;
//}
//
//bool bad_limits(long begin, long end, long low, long hight)
//{
//	bool not_good = false;
//
//	if (begin > end)
//	{
//		printf("%ld isn't samller than %ld.\n", begin, end);
//		not_good = true;
//	}
//	if (begin < low || end < low)
//	{
//		printf("Values must be %ld or geater.\n", low);
//		not_good = true;
//	}
//	if (begin > hight || end > hight)
//	{
//		printf("Values must be %ld or less.\n", hight);
//		not_good = true;
//	}
//	return not_good;
//}
//
//double sum_aquares(long a, long b)
//{
//	long i;
//	double total = 0;
//	for ( i = a; i < b; i++)
//	{
//		total += (double)i * (double)i;
//	}
//
//	return total;
//}

//#include<stdio.h>
//
//int main(void)
//{
//	char ch;
//	int i = 0;
//
//	printf("Please enter some characters:");
//
//	while ((ch = getchar()) != EOF)
//	{
//		if(ch != '\n')
//		{
//			i++;
//		}
//	}
//	printf("Characters is %d.\n", i);
//
//	return 0;
//}


//#include<stdio.h>
//
//int main(void)
//{
//	int i = 0;
//	char ch;
//
//	while ((ch = getchar()) != EOF)
//	{
//		if (i++ == 10)
//		{
//			putchar('\n');
//			i = 0;
//		}
//		if (ch >=32)
//		{
//			printf("\'%c\' - %3d", ch, ch);
//		}
//		else if(ch == '\n')
//		{
//			printf("\\n - \\n \n");
//		}
//		else if (ch == '\t')
//		{
//			printf("\\t - \\t \n");
//		}
//		else
//		{
//			 printf(" \'%c\' - ^%c ", ch, ch + 64);
//		}
//	}
//	puts("Done!");
//
//	return 0;
//}
//
//#include<stdio.h>
//#include<ctype.h>
//
//int main(void)
//{
//	char ch;
//	unsigned int uct = 0;
//	unsigned int lct = 0;
//	unsigned int oct = 0;
//
//	printf("Please enter some characters:");
//
//	while ((ch = getchar()) != EOF)
//	{
//		if (isupper(ch))
//		{
//			uct++;
//		}
//		else if(islower(ch))
//		{
//			lct++;
//		}
//		else
//		{
//			oct++;
//		}
//	}
//
//	printf("Upper: %u.\n", uct);
//	printf("Lower: %u.\n", lct);
//	printf("Others: %u.\n", oct);
//
//	puts("Done!");
//
//	return 0;
//}
////
//#include<stdio.h>
//#include<ctype.h>
//#include<stdbool.h>
//int main(void)
//{
//	int words = 0;
//	float average;
//	int number = 0;
//	char ch;
//	bool inword = false;
//
//	printf("Please enter some character:");
//
//	while ((ch = getchar()) != EOF)
//	{
//		if (ispunct(ch))
//		{
//			continue;
//		}
//		if (isalpha(ch))
//		{
//			number++;
//		}
//		if (!isspace(ch) && !inword)
//		{
//			inword = true;
//			words++;
//		}
//		if (isspace(ch) && inword)
//		{
//			inword = false;
//		}
//
//	}
//	average = (float)number / words;
//
//	printf("Total words: %d.\n", number);
//	printf("Total letters: %d.\n", words);
//	printf("Average letters of words: %g.\n", average);
//}
//
//#include <stdio.h>
//#include <ctype.h>
//#include <stdbool.h>
//
//int main(void)
//{
//	float count;
//	bool inword = false;
//	int ch, words, letter;
//	words = letter = 0;
//
//	printf("Please enter some words (EOF to quit):\n");
//	while ((ch = getchar()) != EOF)
//	{
//		if (ispunct(ch))
//		{
//			continue;
//		}
//		if (isalpha(ch))
//		{
//			letter++;
//		}
//		if (!isspace(ch) && !inword)
//		{
//			inword = true;
//			words++;
//		}
//		if (isspace(ch) && inword)
//		{
//			inword = false;
//		}
//	}
//	count = (float)letter / words;
//	printf("Total words: %d.\n", words);
//	printf("Total letters: %d.\n", letter);
////	printf("Average letters of words: %g.\n", count);
//
//	return 0;
//}

//
//#include<stdio.h>
//#include<ctype.h>
//int main(void)
//{
//	
//	int high = 100;
//	int low = 1;
//	int guess = (high + low) / 2;
//	int respond;
//
//	printf("Pick an integer from 1 to 100. I will try to guess ");
//	printf("it.\nRespond with a y if my guess is right, with");
//	printf("\na h if it is high, and with an l if it is low.\n");
//	//printf("Uh...is your number %d?\n", guess);
//	
//	while ((respond = getchar()) != 'y')
//	{
//		if (respond == '\n')
//		{
//			continue;
//		}
//		if (tolower(respond) != 'h' && tolower(respond) != 'l')
//		{
//			printf("I don't understand that response. Please enter h for\n");
//			printf("high, l for low, or y for correct.\n");
//			continue;	
//		}
//		if (tolower(respond) == 'h')
//		{
//			high = guess;
//		}
//		else if (tolower(respond) == 'l')
//		{
//			low = guess;
//		}
//		guess = (high + low) / 2;
//		printf("Well,is it %d.\n", guess);
//	}
//
//	printf("Yes,I konw I could do it.\n");
//
//	return 0;
//}
//
//#include<stdio.h>
//#include<ctype.h>
//#define STOP '#'
//int get_first(void);
//int main(void)
//{
//	char ch;
//	printf("Please enter some characters(# to quit):");
//	while ((ch = get_first()) != STOP)
//	{
//		printf("Result:%c\n", ch);
//		printf("You can try again:");
//	}
//
//	printf("Done!\n");
//	
//	return 0;
//}
//
//int get_first(void)
//{
//	int ch;
//
//	do
//	{
//		ch = getchar();
//
//	}while (isspace(ch));
//
//	while (getchar() != '\n')
//	{
//		continue;
//	}
//
//	return ch;
//}


//#include<stdio.h>
//#include<ctype.h>
//#include <string.h>
//#include<math.h>
//char get_choice(void);
//float get_number(void);
//float add(float n, float m);
//float subtract(float n, float m);
//float multiply(float n, float m);
//float divide(float n, float m);
//int main(void)
//{
//	float fst, scd;//获取数字
//	char choice;//获取选择
//	while ((choice = get_choice()) != 'q')
//	{
//
//		printf("Enter first number:");
//		fst = get_number();
//		printf("Enter second number:");
//		scd = get_number();
//	
//		switch (tolower (choice))
//		{
//		case 'a': add(fst, scd);
//				break;
//		case 's': subtract(fst, scd);
//				break;
//		case 'm': multiply(fst, scd);
//				break;
//		case 'd': divide(fst, scd);
//				break;
//		
//		}
//	}
//
//	printf("Bye.\n");
//
//	return 0;
//
//}
//
//char get_choice(void)
//{
//	
//	int ch;
//	printf("Enter the operation of your choice:\n");
//	printf("a.add                 s.subtract\n");
//	printf("m.multiply            d.divide\n");
//	printf("q.quit\n");
//	
//	do
//	{
//		ch = getchar();
//
//	} while (isspace(ch)); //忽略非空白字符
//
//	while (getchar() != '\n')
//	{
//		continue;
//	}
//	while (ch != 'a' && ch != 's' && ch != 'm' && ch != 'd' && ch != 'q')
//	{
//		printf("Please enter with a,s,m,d or q :\n");
//		ch = get_choice();
//	}
//	
//	return ch;
//}
//
//float get_number(void)
//{
//	char ch;
//	float i;
//	while ((scanf_s("%f", &i)) != 1)
//	{
//		while ((ch = getchar()) != '\n')
//		{
//			putchar(ch);
//		}
//		printf(" is not an number.\n");
//		printf("Please enter a number such as 2.5, -1.78E8 or 3: ");
//		
//	}
//	
//	return i;
//}
//
//float add(float n, float m)
//{
//	float sum;
//	sum = n + m;
//	printf("%f + %f = %.3f.\n", n, m, sum);
//	return sum;
//}
//
//float subtract(float n, float m)
//{
//	float sum;
//
//	sum = n - m;
//	printf("%f - %f = %.3f.\n", n, m, sum);
//	return sum;
//}
//
//float multiply(float n, float m)
//{
//	float sum;
//	
//	sum = n * m;
//	printf("%f * %f = %.3f.\n", n, m, sum);
//
//	return sum;
//}
//
//float divide(float n, float m)
//{
//	float sum;
//	while (fabs(m) <= 1e-6)  //判断被除数是否为0
//	{
//		printf("Enter a number other than 0:");
//		m = get_number();
//	}
//	sum = n / m;
//	printf("%f / %f = %.3f.\n", n, m, sum);
//	return sum;
//
//}
//
//#include <stdio.h>
//#include <math.h>
//#include <ctype.h>
//#include <string.h>
//
//int get_first(void);
//int get_choice(void);
//float get_float(void);
//
//int main(void)
//{
//    int ct;
//    float i, j;
//
//    while ((ct = get_choice()) != 'q')
//    {
//        printf("Enter first number: ");
//        i = get_float();
//        printf("Enter second number: ");
//        j = get_float();
//        switch (ct)
//        {
//        case 'a':
//        {
//            printf("%g + %g = %g\n", i, j, i + j);
//            break;
//        }
//        case 's':
//        {
//            printf("%g - %g = %g\n", i, j, i - j);
//            break;
//        }
//        case 'm':
//        {
//            printf("%g * %g = %g\n", i, j, i * j);
//            break;
//        }
//        case 'd':
//        {
//            while (fabs(j) <= 1e-6)
//            {
//                //↑判断float型浮点数是否为0;
//                printf("Enter a number other than 0: ");
//                j = get_float();
//            }
//            printf("%g / %g = %g\n", i, j, i / j);
//            break;
//        }
//        }
//    }
//    printf("Bye.\n");
//
//    return 0;
//}
//
//int get_first(void)
//{
//    int ch;
//
//    do
//    {
//        ch = tolower(getchar());
//    } while (isspace(ch));
//    while (getchar() != '\n')
//        continue;
//
//    return ch;
//}
//
//int get_choice(void)
//{
//    int ch;
//
//    printf("Enter the operation of your choice:\n");
//    printf("a. add           s. subtract\n");
//    printf("m. multiply      d. divide\n");
//    printf("q. quit\n");
//    ch = get_first();
//
//    while (ch != 'a' && ch != 's' && ch != 'm' && ch != 'd' && ch != 'q')
//    {
//        printf("Please enter with a,s,m,d or q :");
//        ch = get_first();
//    }
//    return ch;
//}
//
//float get_float(void)
//{
//    int ch;
//    float input;
//
//   // while (scanf_s("%f", &input) != 1)
//    {
//        while ((ch = getchar()) != '\n')
//        {
//           putchar(ch);
//        }
//        printf(" is not an number.\n");
//        printf("Please enter a number such as 2.5, -1.78E8 or 3: ");
//    }
//    return input;
//}


//#include<stdio.h>
//#include "hotel.h"
//
//int main(void)
//{
//	int nights;
//	double hotel_rate;
//	int code;
//
//	while ((code = menu()) != QUIT)
//	{
//		switch (code)
//		{
//		case 1: hotel_rate = HOTEL_1;
//			break;
//		case 2: hotel_rate = HOTEL_2;
//			break;
//		case 3: hotel_rate = HOTEL_3;
//			break;
//		case 4: hotel_rate = HOTEL_4;
//			break;
//		default:hotel_rate = 0.0;
//			printf("Opos!\n");
//			break;
//		}
//
//
//		nights = getnights();
////		showprice(hotel_rate, nights);
//	}
//
//	printf("Thank you and goodbye.\n");
//
//	return 0;
//}

//#include<stdio.h>
//void interchange(int* u, int* p);
//
//int main(void)
//{
//	int x = 5, y = 10;
//	printf("Originally x = %d and y = %d.\n", x, y);
//	interchange(&x, &y);
//	printf("Now x = %d and y = %d.\n", x, y);
//
//	return 0;
//}
//
//void interchange(int* u, int* p)
//{
//	int temp;
//	temp = *u;
//	*u = *p;
//	*p = temp;
//
//}


//
//#include<stdio.h>
//double min(double x, double y) { return (x < y) ? x : y; }
//
//int main(void)
//{
//	double n, m;
//
//	printf("Enter two number(q to quit):\n");
//	while (scanf_s("%lf %lf",&n , &m) == 2)
//	{
//		
//		printf("The min is %lf.\n", min(n, m));
//		printf("Your can enter again:");
//
//	}
//
//	printf("Done!\n");
//
//	return 0;
//}


//#include<stdio.h>
//#define CHAR '#'
//void chline(char ch, int rows, int cols);
//
//int main(void)
//{
//	int i, j;
//	printf("Please enter colunm and rows(q to quit):");
//	while (scanf_s("%d %d",&i, &j) == 2)
//	{
//		chline(CHAR, i, j);
//		printf("\nYou can enter again:");
//
//	}
//
//	printf("Done!\n");
//
//	return 0;
//}
//
//void chline(char ch, int rows, int cols)
//{
//	int n, m;
//	for ( n = 0; n < rows; n++)
//	{
//		for ( m = 0; m < cols; m++)
//		{
//			printf("%c", ch);
//		}
//		putchar('\n');
//	}
//
//}


//#include<stdio.h>
//void larger_of(double* i, double* j) { *i = *j = (*i > *j) ? *i : *j; }
//int main(void)
//{
//	double n, m;
//	printf("Please enter two number(q to quit):");
//	while (scanf_s("%lf %lf", &n, &m) == 2)
//	{
//		larger_of(&n, &m);
//		printf("Results: %g and %g\n", n, m);
//		printf("You can enter two numbers again (q to quit): ");
//	}
//
//	printf("Done!\n");
//
//	return 0;
//}



//#include <stdio.h>
//
//void larger_of(double* x, double* y);
//
//int main(void)
//{
//	double a, b;
//
//	printf("Please enter two numbers (q to quit): ");
//	while (scanf_s("%lf %lf", &a, &b) == 2)
//	{
//		larger_of(&a, &b);
//		printf("Results: %g and %g\n", a, b);
//		printf("You can enter two numbers again (q to quit): ");
//	}
//	printf("Done.\n");
//
//	return 0;
//}
//
//void larger_of(double* x, double* y)
//{
//	*x = *y = *x > *y ? *x : *y;
//	return;
//}

//
//#include<stdio.h>
//void text(double* x, double* y, double* z);
//int main(void)
//{
//	double i, j, k;
//	printf("Enter three number(q to quit):");
//	while (scanf_s("%lf %lf %lf", &i, &j, &k) == 3)
//	{
//		text(&i, &j, &k);
//		printf(" first:%lf  second:%lf third:%lf\n", i, j, k);
//		printf("You can enter again(q to quit):");
//	}
//
//	printf("Done!\n");
//}
//
//void text(double* x, double* y, double* z)
//{
//	double temp;
//	if (*x > *y)
//	{
//		temp = *x;
//		*x = *y;
//		*y = temp;
//	}
//	if (*x > *z)
//	{
//		temp = *x;
//		*x = *z;
//		*z = temp;
//	}
//	if (*y > *z)
//	{
//		temp = *y;
//		*y = *z;
//		*z = temp;
//	}
//
//	return;
//}


//#include<stdio.h>
//#include<ctype.h>
//int postion(int ch);
//int main(void)
//{
//	char ch;
//	int figure;
//
//	printf("Enter some character(EOF to quit):");
//	while ((ch = getchar()) != EOF)
//	{
//		figure = postion(ch);
//		if (figure)
//		{
//			printf("\n %c is %d in alphabet.",ch , figure);
//		}
//		else
//		{
//			printf("%c isn't a letter.\n");
//		}
//
//		while (getchar() != '\n')
//		{
//			continue;
//		}
//		printf("Your can enter again(EOF to quit):");
//	}
//
//	printf("Done!\n");
//
//	return 0;
//}
//
//int postion(int ch)
//{
//	if (isupper(ch))
//	{
//		return (ch - 'A' + 1);
//	}
//	else if(islower(ch))
//	{
//		return (ch - 'a' + 1);
//	}
//
//	return 0;
//
//}
//
//#include<stdio.h>
//double power(double a, int b);
//int main(void)
//{
//	double x, xpow;
//	int exp;
//
//	printf("Enter a number and the integer power");
//	printf(" to which\nthe number will be raised. Enter q");
//	printf(" to quit.\n");
//	while (scanf_s("%lf %d", &x, &exp) == 2)
//	{
//		xpow = power(x, exp);
//		printf("%.3g to the power %d is %.5g.\n", x, exp, xpow);
//		printf("Enter next pair of numbers or q to quit.\n");
//	}
//	printf("Hope you enjoyed this power trip -- bye!\n");
//
//	return 0;
//	
//}
//
//double power(double a, int b)
//{
//	if (0 == a)
//	{
//		return 0;
//	}
//	else if (0 == b)
//	{
//		return 1;
//	}
//	else if (0 == a && 0 == b)
//	{
//		printf("0 to the 0 undefined, using 1 as the value.\n");
//		return 1;
//	}
//	if (b > 0)
//	{
//		return a * power(a, b - 1);
//	}
//	else
//	{
//		return power(a, b + 1) / a;  
//	}
//
//#include<stdio.h>
//#define SIZE 4
//int main(void)
//{
//	short dates[SIZE];
//	short* pti;
//	short index;
//	double bills[SIZE];
//	double* ptf;
//	pti = dates;
//	ptf = bills;
//	printf("%23s %15s\n", "short", "double");
//	for ( index = 0; index < SIZE; index++)
//	{
//		printf("ponters + %d : %10p %10p\n", index, pti + index, ptf + index);
//	}
//
//	return 0;
//}


 
//#include<stdio.h>
//#define ROWS 3
//#define COLS 4
//void sum_rows(int ar[][COLS], int rows);
//void //sum_cols(int[][COLS], int);
//int sum2d(int(*ar)[COLS], int rows);
//
//int main(void)
//{
//	int junk[ROWS][COLS] = {
//		{ 2, 4, 6, 8 },
//		{ 3, 5, 7, 9 },
//		{ 12, 10, 8, 6 }
//	};
//
//	sum_rows(junk, ROWS);
//	sum_cols(junk, COLS);
//
//	printf("Sum of all elements = %d\n", sum2d(junk, ROWS));
//	
//
//	return 0;
//}
//
//void sum_rows(int ar[][COLS], int rows)
//{
//	int r, c, tot;
//
//	for ( r = 0; r < rows; r++)
//	{
//		tot = 0;
//		for ( c = 0; c < COLS; c++)
//		{
//			tot += ar[r][c];
//		}
//		printf("row = %d: sum = %d\n", r, tot);
//	}
//}
//
//void sum_cols(int ar[][COLS], int rows)
//{
//	int r, c, tot;
//
//	for ( c = 0; c < COLS; c++)
//	{
//		tot = 0;
//		for ( r = 0; r < rows; r++)
//		{
//			tot += ar[r][c];
//		}
//
//		printf("col = %d: sum = %d\n", c, tot);
//	}
//}
//
//int sum2d(int(*ar)[COLS], int rows)
//{
//	int r, c;
//	int tot = 0;
//
//	for (r = 0; r < rows; r++)
//	{
//		for (c = 0; c < COLS; c++)
//		{
//			tot += ar[r][c];
//		}
//	}
//
//	return tot;
//}


//#include<stdio.h>
//#define LEN 5
//
//void copy_arr(double x[], const double source[], int n);
//void copy_ptr(double *x, const double *source, int n);
//void copy_ptrs(double* x, const double *source, const double* end);
//void show_arr(const double x[], int n);
//
//int main(void)
//{
//	double source[LEN] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
//	double target1[LEN];
//	double target2[LEN];
//	double target3[LEN];
//
//	printf("Source array:\n");
//	show_arr(source, LEN); 
//
//	printf("Target array:\n");
//	copy_arr(target1, source, LEN);
//	show_arr(target1, LEN);
//
//	printf("Target2 array:\n");
//	copy_ptr(target2, source, LEN);
//	show_arr(target2, LEN);
//
//	printf("Targer3 array:\n");
//	copy_ptrs(target3, source, source + LEN);
//	show_arr(target3, LEN);
//
//	printf("Done!\n");
//
//	return 0;
//
//}
//
//
//void copy_arr(double x[], const double source[], int n)
//{
//	int i;
//
//	for (i = 0; i < n; i++)
//	{
//		x[i] = source[i];
//	}
//
//	return;
//}
//
//void copy_ptr(double* x, const double* source, int n)
//{
//	int i;
//
//	for ( i = 0; i < n; i++)
//	{
//		*(x + i) = *(source + i);
//	}
//	return;
//}
//
//void copy_ptrs(double* x, const double* source, const double* end)
//{
//	int i;
//
//	for ( i = 0; i < end - source; i++)
//	{
//		*(x + i) = *(source + i);
//	}
//	return;
//}
//
//void show_arr(const double x[], int n)
//{
//	int i;
//
//	for ( i = 0; i < n; i++)
//	{
//		printf("%-5g", x[i]);
//	}
//
//	putchar('\n');
//
//	return;
//}

//#include <stdio.h>
//#define LEN 5
//
//void copy_arr(double x[], const double source[], int n);
//void copy_ptr(double* x, const double* source, int n);
//void copy_ptrs(double* x, const double* source, const double* end);
//void show_arr(const double x[], int n);
//
//int main(void)
//{
//	double source[LEN] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
//	double target1[LEN];
//	double target2[LEN];
//	double target3[LEN];
//
//	printf("Source array:\n");
//	show_arr(source, LEN);
//
//	copy_arr(target1, source, LEN);
//	printf("Target1:\n");
//	show_arr(target1, LEN);
//
//	copy_ptr(target2, source, LEN);
//	printf("Target2:\n");
//	show_arr(target2, LEN);
//
//	copy_ptrs(target3, source, source + LEN);
//	printf("Target3:\n");
//	show_arr(target3, LEN);
//
//	printf("Done.\n");
//
//	return 0;
//}
//
//void show_arr(const double x[], int n)
//{
//	int i;
//
//	for (i = 0; i < n; i++)
//	{
//		printf("%-5g", x[i]);
//	}
//	putchar('\n');
//	return;
//}
//
//void copy_arr(double x[], const double source[], int n)
//{
//	int i;
//
//	for (i = 0; i < n; i++)
//	{
//		x[i] = source[i];
//	}
//	return;
//}
//
//void copy_ptr(double* x, const double* source, int n)
//{
//	int i;
//
//	for (i = 0; i < n; i++)
//	{
//		*(x + i) = *(source + i);
//	}
//	return;
//}
//
//void copy_ptrs(double* x, const double* source, const double* end)
//{
//	int i;
//
//	for (i = 0; i < end - source; i++)
//	{
//		*(x + i) = *(source + i);
//	}
//	return;
//}


//
//#include<stdio.h>
//#define N 5
//int find_max(const int a[], int n);
//void show_array(const int a[], int n);
//
//int main(void)
//{
//	int array[N] = { 1, 4, 3, 2, 5 };
//
//	printf("Array:\n");
//	show_array(array, N);
//	putchar('\n');
//	printf("Max:%d\n",find_max(array,N));
//	find_max(array, N);
//
//	printf("Done!\n");
//
//	return 0;
//
//}
//
//void show_array(const int a[], int n)
//{
//	int i;
//
//	for ( i = 0; i < n; i++)
//	{
//		printf("%-5d", a[i]);
//	}
//
//	return;
//}
//
//int find_max(const int a[], int n)
//{
//	int i;
//	int max = a[0];
//
//	for ( i = 1; i < n; i++)
//	{
//		max = max < a[i] ? a[i] : max;
//	}
//
//	return max;
//}

//#include<stdio.h>
//#define N 5
//double find_max_index(const double x[], int n);
//void show_array(const double x[], int n);
//
//int main(void)
//{
//	double max_index;
//
//	double array[N] = { 1.0, 4.0, 3.0, 2.0, 5.0 };
//	printf("Array:\n");
//	show_array(array, N);
//	max_index = find_max_index(array, N);
//	printf("Max_index:%lf\n", max_index);
//
//	return 0;
//
//}
//
//void show_array(const double x[], int n)
//{
//	int i;
//	for ( i = 0; i < N; i++)
//	{
//		printf("%-5g", x[i]);
//	}
//
//	return;
//}
//
//double find_max_index(const double x[], int n)
//{
//	int i;
//	double max = x[0];
//	double min = x[0];
//
//	for ( i = 0; i < N; i++)
//	{
//		max = x[0] < x[i] ? x[i] : x[0];
//		min = x[0] > x[i] ? x[i] : x[0];
//	}
//
//	return (max - min);
//}

//#include<stdio.h>
//#define N 5
//void reverse(double x[], int n);
//void show_array(const double x[], int n);
//
//int main(void)
//{
//	double array[N] = { 1.0, 4.0, 3.0, 2.0, 5.0 };
//
//	printf("Array:\n");
//	show_array(array, N);
//	printf("\nReverse:\n");
//	reverse(array, N);
//	show_array(array, N);
//
//	return 0;
//}
//
//void show_array(const double x[], int n)
//{
//	int i;
//	for ( i = 0; i < n; i++)
//	{
//		printf("%-5g", x[i]);
//	}
//
//	return;
//}
//
//void reverse(double x[], int n)
//{
//	int i;
//	double t;
//
//	for ( i = 0; i < n / 2; i++)
//	{
//		t = x[i];
//		x[i] = x[n - i - 1];
//		x[n - i - 1] = t;
//	}
//	return;
//}

//#include<stdio.h>
//#define N 2
//#define M 3
//void copy_arr(const double x[], double y[], int n);
//void show_arr(double (* x)[M], int n);
//
//int main(void)
//{
//	int i;
//	double a[N][M] =
//	{
//		{1.0, 2.0, 3.0},
//		{4.0, 5.0, 6.0}
//	};
//
//	double b[N][M] = {0.0};
//	printf("Array a:\n");
//	show_arr(a, N);
//	printf("Array b:\n");
//	show_arr(b, N);
//	for ( i = 0; i < N; i++)
//	{
//		copy_arr(a[i], b[i], M);
//	}
//
//	printf("Copying array a to array b is:\n");
//	show_arr(b, N);
//
//	return 0;
//}
//
//void show_arr(double(*x)[M], int n)
//{
//	int i, j;
//	for ( i = 0; i < n; i++)
//	{
//		for (j = 0; j < M; j++)
//		{
//			printf("%-5g", x[i][j]);
//		}
//	}
//
//	putchar('\n');
//
//	return;
//}
//
//void copy_arr(const double x[], double y[], int n)
//{
//	int i;
//	for ( i = 0; i < n; i++)
//	{
//		y[i] = x[i];
//	}
//
//	return;
//}

//#include<stdio.h>
//#define N 7
//#define M 3
//void copy_arr(const double x[], double y[], int n);
//void show_arr(const double x[], int n);
//
//int main(void)
//{
//	double orig[N] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0 };
//	double copy[M];
//
//	printf("Origal:\n");
//	show_arr(orig, N);
//	printf("Copying:\n");
//	copy_arr(orig + 2, copy, M);
//	show_arr(copy, M);
//
//	putchar('\n');
//
//	return 0;
//
//}
//
//void show_arr(const double x[], int n)
//{
//	int i;
//	for ( i = 0; i < n; i++)
//	{
//		printf("%-5g", x[i]);
//	}
//
//	putchar('\n');
//
//	return;
//}
//
//void copy_arr(const double x[], double y[], int n)
//{
//	int i;
//	for ( i = 0; i < n; i++)
//	{
//		y[i] = x[i];
//	}
//
//	return;
//}


//#include<stdio.h>
//#include<math.h>
//void n_n(int b);
//int main(void)
//{
//	n_n(9);
//
//	return 0;
//}
//
//void n_n(int b)
//{
//	int i = 1;
//	while (i <= b)
//	{
//		printf("%d * %d = %d     ", i, b, i * b);
//		i++;
//	}
//	printf("\n");
//	if (b - 1)
//	{
//		n_n(b - 1);
//	}
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//void multiply(int max, int i, int j) {
//	if (i > max) {
//		return;
//	}
//	printf("%d * %d = %d\t", j, i, i * j);
//	if (i <= j) {
//		j = 0;
//		i++;
//		printf("\n");
//	}
//	j++;
//	multiply(max, i, j);
//}
//
//int main()
//{
//	int max = 9;
//	multiply(max, 1, 1);
//
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#define SIZE 81
//int main(void)
//{
//	char words[SIZE];
//	puts("ENter a string:");
//	gets_s(words);
//	puts(words);
//
//	return 0;
//}

//#include<stdio.h>  //斐波那契数
//#define N 6
//int main(void)
//{
//	int a = 1;
//	int b = 1;
//	int temp;
//	int i;
//	for ( i = 2; i < N; i++)
//	{
//		temp = a + b;
//		a = b;
//		b = temp;
//		printf("%-6d",b);
//	}
//
//	printf("\nDone!");
//
//	return 0;

//#include<stdio.h>
//#include<ctype.h>
//#define LIE 10
//void get_enter(char ch[], int n);
//int main(void)
//{
//	int i;
//	char a[LIE] = { '0'};
//	printf("Enter some words:\n");
//	get_enter(a, LIE);
//	printf("result:\n");
//	puts(a);
//	puts("Done!");
//
//	return 0;
//	
//}
//
//void get_enter(char ch[], int n)
//{
//	int i = 0;
//	while (i < n-1)
//	{
//		ch[i++] = getchar();
//
//	}
//
//	ch[i] = '\0';
//}
//
//


//#include<stdio.h>
//#include<ctype.h>
//#define LIE 10
//char getwords(char* ptr);
//
//int main(void)
//{
//	char s[LIE];
//	printf("Enter some word:\n");
//	while (getwords(s) != NULL)
//	{
//		printf("Result:\n");
//		puts(s);
//		printf("Your can enter again:");
//	}
//
//	printf("Done!\n");
//
//	return 0;
//}
//
//
//char getwords(char* ptr)
//{
//	int i = 0;
//	char ch;
//
//	while ((ch = getchar()) != EOF && isspace(ch))
//	{
//		continue;
//	}
//
//	if (ch == EOF)
//	{
//		return NULL;
//	}
//	else
//	{
//		i++;
//		*ptr++ = ch;
//	}
//
//	while ((ch = getchar()) != EOF && !isspace(ch) && i < (LIE - 1))
//	{
//		*ptr++ = ch;
//		i++;
//	}
//
//	*ptr = '\0';
//
//	if (ch == EOF)
//	{
//		return NULL;
//	}
//	else
//	{
//		while ((ch = getchar()) != '\n')
//		{
//			continue;
//		}
//	}
//	
//	return *ptr;
//}


//#include<stdio.h>
//extern unsigned int rand0();
//extern void srand1(unsigned int x);
//int main(void)
//{
//	int count;
//	unsigned seed;
//
//	printf("Please enter your chioce for seed.\n");
//
//	while (scanf_s("%u",&seed) == 1)
//	{
//		srand1(seed);
//		for (count = 0; count < 5; count++)
//		{
//			printf("%d\n", rand0());
//		}
//
//		printf("Please enter next seed (q to quit):\n");
//
//	}
//
//	printf("Done!\n");
//
//	return 0;
//}

