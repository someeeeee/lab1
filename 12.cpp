#include "stdafx.h"
#include "Windows.h"
#include "Locale.h"


int _tmain()
{
	setlocale(0, "");
	int n=0, j, i,a[10][5];
	
	printf("массив :");
	for (i = 0; i< 10; i++)
	{
		for (j = 0; j < 5; j++)
		{
			a[i][j] = rand();
			printf(" %d ", a[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < 10; i++ )
	{
		for (j = 0; j < 5; j++)
		{
			n = n + a[i][j];
		}
		printf("Сумма элементов в строке: %d \n ", n);
		n = 0;
	}
	getchar();
	getchar();
	return 0;
}
