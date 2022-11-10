#include <iostream>
using namespace std;

void Create(int* mas, const int n, int A, int B, int i) {
	mas[i] = A + rand() % (B - A + 1);
	if (i < n - 1)
		Create(mas, n, A, B, i + 1);
}


void Print(int* mas, const int n, int i) {
	cout << " " << mas[i];
	if (i < n - 1)
		Print(mas, n, i + 1);
	else cout << " ";
}


void Found_Max(int* mas, const int n, int& max_el, int& index_max, int i) {
	if (mas[i] > max_el) {
		max_el = mas[i];
		index_max = i;
	}
	if (i < n - 1)
		Found_Max(mas, n, max_el, index_max, i + 1);
	else cout << endl;
}


void Found_Min(int* mas, const int n, int& min_el, int& index_min, int i) {
	if (mas[i] < min_el) {
		min_el = mas[i];
		index_min = i;
	}
	if (i < n - 1)
		Found_Min(mas, n, min_el, index_min, i + 1);
	else cout << endl;
}


void Obmin(int* mas, const int n, int& index_max, int& index_min, int i, int prom_in) {

	prom_in = mas[index_max];
	mas[index_max] = mas[index_min];
	mas[index_min] = prom_in;
}


int main()
{
	srand((unsigned)time(NULL));

	const int a = 20;
	int A[a]{};

	int max_el = A[0];
	int index_max = 0;
	int min_el = A[0];
	int index_min = 0;
	int prom_in = 0;

	Create(A, a, -20, 50, 0);
	cout << "A { "; Print(A, a, 0); cout << "}";

	Found_Max(A, a, max_el, index_max, 0);
	Found_Min(A, a, min_el, index_min, 0);
	cout << "max_el " << max_el << "  index_max " << index_max << endl;
	cout << "min_el " << min_el << "  index_min " << index_min << endl;

	Obmin(A, a, index_max, index_min, 0, prom_in);
	cout << "A { "; Print(A, a, 0); cout << "}";

	return 0;
}