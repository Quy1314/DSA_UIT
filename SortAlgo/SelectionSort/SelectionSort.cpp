#include <iostream>
#include <ctime>	
#include <cstdlib>
#include <vector>
using namespace std;

void SelectionSort(vector<int>& arr, int n);

int main() {
	int n = 0;
	srand(time(0));
	n = rand() % 100 + 1;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 100;
	}
	cout << "Original array: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	SelectionSort(arr, n);
	cout << "\nSorted array: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}

void SelectionSort(vector<int>& arr, int n) {
	for (int i = 0; i < n - 1; i++) {
		int minIndex = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[minIndex]) {
				minIndex = j;
			}
		}
		if (minIndex != i) {
			swap(arr[i], arr[minIndex]);
		}
	}
}