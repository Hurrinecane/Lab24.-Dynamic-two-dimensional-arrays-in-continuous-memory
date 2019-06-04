#include "two-dimensional array.h"

int ** CreateMas(int h, int w)
{
	if (!(h > 0 && w > 0)) exit(1);
	int **mas = (int**)malloc(h * sizeof(int*));
	for (int i = 0; i < h; i++)
		mas[i] = (int*)malloc(w * sizeof(int));
	return mas;
}

void WriteIn(int h, int w, int **mas)
{
	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++)
			scanf_s("%d", &mas[i][j]);
}

int * Counter(int h, int w, int **mas)
{
	int n = 0;
	int *ctr = (int*)malloc(h * sizeof(int));
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
			if (mas[i][j] < 0) n++;
		ctr[i] = n;
		n = 0;
	}
	return ctr;
}

void PrintOnScreen(int h, int w, int ** mas)
{
	system("cls");
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			printf_s("%5d ", mas[i][j]);
		}
		printf_s("\n");
	}
}

void FreeMas(int h, int ** mas)
{
	for (int i = 0; i < h; i++)
		free(mas[i]);
	free(mas);
}