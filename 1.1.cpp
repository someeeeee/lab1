#include "stdafx.h"
#include <iostream>


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(0, "");
	int n, j, i, min=10000, max=-1000000;
	scanf("%d", &j);
	int *a= new int[j];
	
	printf("массив :");
	for (i=0; i<j; i++)
		{
		a[i]=rand();
		printf(" %d ",a[i]);
		}
	for (i=0; i<j;i++)
	{
		if (a[i]<min)
			min=a[i];
		if (a[i]>max)
			max=a[i];
	}
	n=max-min;
	printf(" \n  –азница между максимальным и минимальным элементом массива =  %d ",n);
	getchar();
	getchar();
	return 0;
}

