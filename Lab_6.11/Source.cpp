#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* b, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		b[i] = Low + rand() % (High - Low + 1);
}
void Print(int* b, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << b[i];
	cout << endl;
}
int Number(int* b, const int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
		if (!(b[i] % 5 == 0 && b[i] > 0))
			count++;
	return count;
}
int Sum(int* b, const int size)
{
	int S = 0;
	for (int i = 0; i < size; i++)
		if (!(b[i] % 5 == 0 && b[i] > 0))
			S += b[i];
	return S;
}
void Mode(int* b, const int size)
{
	for (int i = 0; i < size; i++)
		if (!(b[i] % 5 == 0 && b[i] > 0))
			b[i] = 0;
}

int main()
{
	srand((unsigned)time(NULL));
	const int n = 22;
	int b[n];
	int Low = -40;
	int High = 50;
	Create(b, n, Low, High);
	Print(b, n);
	cout << "  " << "N = " << Number(b, n) << endl;
	cout << "  " << "S = " << Sum(b, n) << endl;
	Mode(b, n);
	Print(b, n);
	return 0;
}