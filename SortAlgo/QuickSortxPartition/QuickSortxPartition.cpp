#include <iostream>
#include <vector>
using namespace std;

int Partition(vector<int>& arr, int low, int high);
void QuickSort(vector<int>& arr, int low, int high);

int main() {
	vector<int> arr = { 34, 7, 23, 32, 5, 62 };
	int n = arr.size();
	for (int x : arr) {
		cout << x << " ";
	}
	QuickSort(arr, 0, n-1);

	cout << "\nSorted array: ";
	for (int x : arr) {
		cout << x << " ";
	}
	return 0;
}

int Partition(vector<int>& arr, int low, int high) {
	int pivot = arr[low];
	int i = low;
	int j = high;
	while (i < j) {
		do {
			i++;
		} while (arr[i] <= pivot);
		do  {
			j--;
		} while (arr[j] > pivot);
		if (i < j) {
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[low], arr[j]);
	return j;
}


void QuickSort(vector<int>& arr, int low, int high) {
	if (low < high) {
		int pivot = Partition(arr, low, high);
		QuickSort(arr, low, pivot - 1);
		QuickSort(arr, pivot + 1, high);
	}
}