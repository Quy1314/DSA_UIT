#include <iostream>
#include <vector>
using namespace std;

void Merge(vector<int>& arr, int left, int mid, int right);
vector <int> MergeSort(vector<int>& arr, int left, int right);

int main() {
	vector<int> arr = { 34, 7, 23, 32, 5, 62, 9 };
	int n = arr.size();

	MergeSort(arr, 0, n - 1);

	cout << "\nSorted array: ";
	for (int x : arr) {
		cout << x << " ";
	}

}

vector <int> MergeSort(vector<int>& arr, int left, int right) {
	if (left < right) {
		int mid = left + (right - left) / 2;
		MergeSort(arr, left, mid);
		MergeSort(arr, mid + 1, right);
		Merge(arr, left, mid, right);
	}
	return arr;
}

void Merge(vector<int>& arr, int left, int mid, int right) {
	vector<int> Temp;	
	int i = left;
	int j = mid + 1;
	while (!(i > mid && j > right)) {
		if(j > right || (i <= mid && arr[i] <= arr[j])) {
			Temp.push_back(arr[i]);
			i++;
		}
		else {
			Temp.push_back(arr[j]);
			j++;
		}
	}

	for (int i = 0; i < Temp.size(); i++) {
		arr[left + i] = Temp[i];
	}

}