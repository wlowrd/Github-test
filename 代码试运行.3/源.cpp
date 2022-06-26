//#include<stdio.h>
//#include<stdbool.h>
//#include"hotel.h"
//int menu(void)
//{
//	int code, status;
//
//	printf("\n%s%s\n", STARS, STARS);
//	printf("Enter the number of the desired hotel:\n");
//	printf("1) Fairfieid Arms          2) Hotel Olympic\n");
//	printf("3) Chertworthy Plaza       4) The Stockton\n");
//	printf("quit\n");
//	printf("\n%s%s\n", STARS, STARS);
//	while ((status = scanf_s("%d",&code)) != 1 || code < 1 || code > 5)
//	{
//		if (status != 1)
//		{
//			scanf_s("%*s");
//		}
//
//		printf("Please enter an integer from 1 to 5.\n");
//	}
//
//	return code;
//}
//
//int getnights(void)
//{
//	int nights;
//	
//	//printf("How many nights are needed?\n");
//
//	while (scanf_s("%d", &nights) != 1)
//	{
//		scanf_s("%*s");
//		printf("Please enter an integer,such as 2.\n");
//
//	}
//
//	return nights;
//}
//
//void showprice(double rate, int nights)
//{
//	int n;
//	double total = 0.0;
//	double factor = 1.0;
//
//	for (n = 1; n <= nights; n++, factor *= DISCOUNT)
//	{
//		total = rate * factor;
//	}
//
//	printf("The total cost will be $%0.2f.\n", total);
//
//}

//static unsigned long int next = 1;
//
//unsigned int rand0(void)
//{
//	next = next * 110351545 + 12345;
//	return (unsigned int)(next / 65536) % 32768;
//}
//
//void srand1(unsigned int seed)
//{
//	next = seed;
//}
#include "diceroll.h"
#include<stdio.h>
#include<stdlib.h>

int roll_count = 0;

static int rollem(int sides)
{
	int roll;
	roll = rand() % sides + 1;
	++roll_count;

	return roll;
}

int roll_n_dice(int dice, int sides)
{
	int d;
	int total = 0;
	if (sides < 2)
	{
		printf("Need at least 2 sides.\n");
		return -2;
	}
	if (dice < 1)
	{
		printf("Need at least 1 dice.\n");
		return -1;
	}

	for (d = 0; d < dice; d++)
	{
		total += rollem(sides);

	}

	return total;
}
