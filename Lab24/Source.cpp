/*
1.	—формировать в пам€ти  динамический двумерный массив (двум€ способами).
2.	«аполнить массив значени€ми с клавиатуры.
3.	¬ывести массив на экран.
8.	Ќайти количество отрицательных чисел в каждой строке.
*/

#include "two-dimensional array.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	int  h = 2, w = 2;

	int **mas = CreateMas(w, h);
	
	WriteIn(w, h, mas);
	
	PrintOnScreen(w, h,  mas);

	int *ctr = Counter(w, h, mas);

	for (int i = 0; i < w; i++)
		printf_s(" оличество отрицательных чисел в строке %d: %d\n", i+1, ctr[i]);
	system("pause");

	free(ctr);
	FreeMas(w, mas);
}