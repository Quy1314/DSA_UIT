#include <iostream>
#include <vector>
using namespace std;

vector<int> QuickSort(vector<int>& arr);

int main() {
	vector<int> arr = { 34, 7, 23, 32, 5, 62 };
	int n = arr.size();
	QuickSort(arr);
	for(int x:arr){
		cout << x << " ";
	}
	arr = QuickSort(arr);

	cout << "\nSorted array: ";
	for(int x:arr){
		cout << x << " ";
	}
	return 0;
}

vector<int> QuickSort(vector<int>& arr) {
	if (arr.size() <= 1) return arr;
	int pivot = arr.back();
	vector<int> left, right;
	for (int i = 0; i < arr.size() - 1; i++) {
		if (arr[i] < pivot) left.push_back(arr[i]);
		else right.push_back(arr[i]);
	}
	left = QuickSort(left);
	right = QuickSort(right);
	left.push_back(pivot);
	left.insert(left.end(), right.begin(), right.end());
	return left;
}