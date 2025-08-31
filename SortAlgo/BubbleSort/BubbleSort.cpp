#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void BubbleSort(int arr[], int n);

int main() {
	int n = 0;
	srand(time(0));
	n = 10;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 100;
	}
	cout << "Original array: ";

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	BubbleSort(arr, n);

	cout << "\nSorted array: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	
}

void BubbleSort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}