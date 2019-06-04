#include "two-dimensional array 2.h"

int * CreateMas(int h, int w)
{
	if (!(w > 0 && h > 0)) exit(1);
	int *mas = (int*)malloc(h*w * sizeof(int));

	return mas;
}

void WriteIn(int h, int w, int *mas)
{
	for ( int i = 0; i<h; i++)
	{
		for (int j = 0; j<w; j++) 
		{
			printf_s("a[%d][%d] = ", i, j);
			scanf_s("%d", (mas + i*w + j));
		}
	}
}

void PrintOnScreen(int h, int w, int * mas)
{
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			printf_s("%5d ", *(mas + i*w + j)); 
		}
		printf_s("\n");
	}
}

void FreeMas(int * mas)
{
	free(mas);
}