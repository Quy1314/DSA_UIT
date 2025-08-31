#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void InterchangeSort(int arr[], int n);

int main() {
	srand(time(0));
	int n = 0;
	n = rand() % 100 + 1;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 100;
	}

	cout << "Original array: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	InterchangeSort(arr, n);
	cout << "\nSorted array: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

}

void InterchangeSort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				swap(arr[i], arr[j]);
			}
		}
	}
}