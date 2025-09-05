#include <iostream>
#include <vector>
using namespace std;
vector<int> Heapify(vector<int>& arr);

vector<int> HeapSort(vector<int>& arr);
int main() {
	vector<int> arr = { 10 , 3, 5, 30, 2, 8, 6, 9 };
	arr = Heapify(arr);
	arr = HeapSort(arr);
	cout << "\nSorted array: ";
	for (int x : arr) {
		cout << x << " ";
	}
}

vector<int> Heapify(vector<int>& arr) {
	vector<int> temp;
	for (int i = 0; i < arr.size(); i++) {
		temp.push_back(arr[i]);
		int j = i;
		while (j > 0 && temp[j] > temp[(j - 1) / 2]) {
			swap(temp[j], temp[(j - 1) / 2]);
			j = (j - 1) / 2;
		}
	}
	return temp;
}

vector<int> HeapSort(vector<int>& arr) {
	vector<int> Sorted;
	while (arr.size() > 0) {
		Sorted.push_back(arr[0]);
		arr[0] = arr[arr.size() - 1];
		arr.pop_back();
		arr = Heapify(arr);
	}
	return Sorted;
}
