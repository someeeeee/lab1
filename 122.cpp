#include "stdafx.h"
#include "Windows.h"
#include "Locale.h"

int main()
{
	setlocale(0, "");
	int  j, i, sum=0;
	int m, n=0;
	int** arr=NULL;
	printf("������� ���������� ����� �  ��������: ");
	scanf_s("%d", &m);
	
	arr = (int**)malloc(m * sizeof(int*));
	for (int i = 0; i < m; i++) 
	{
		arr[i] = (int*)malloc(m * sizeof(int));
	}

	printf("������ : \n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			arr[i][j] = -10 + rand()%51;

			printf(" %d ", arr[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			sum = sum + arr[i][j];
		}
		printf("����� ��������� � ������: %d \n ", sum);
		sum = 0;
	}
	getchar();
	getchar();
	return 0;
}

