#include <iostream>
#include <iomanip>

using namespace std;


void genArray(int arr[], const int size, int i = 0)
{
	if (size <= i) {
		return;
	}
	
	arr[i] = i + 1;
	genArray(arr, size, i + 1);
}

int avgSum(const int arr[], const int n, int s = 0, int count = 0, int i = 0)
{
	if (i >= n) {
		if (count == 0) return count = 0;
		else {
			return s / count;
		}
	}

	if (arr[i] % 2 == 0) {
		s += i;
		count++;
	}

	return avgSum(arr, n, s, count, i + 1);
}

void Print(const int arr[], const int size, int i = 0)
{
	if (i >= size) {
		return;
	}
	cout << setw(4) << arr[i];

	Print(arr, size, i + 1);

}

int main()
{
	int size;

	cout << "Enter size - "; cin >> size;
	int* arr = new int[size];
	genArray(arr, size);

	cout << "Array: ";
	Print(arr, size);
	cout << endl;
	int sum = avgSum(arr, size);
	cout << "avgSum: " << sum << endl;

	delete[] arr;
	return 0;
}
