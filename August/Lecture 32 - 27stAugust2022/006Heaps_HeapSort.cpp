/*

	Given an array of n integers, sort the array using heap sort algorithm.

*/

#include<iostream>
#include<vector>

using namespace std;

void heapify(vector<int>& v, int n, int i) {

		int maxIdx = i; // assume the value at the ith index is the largest

		int leftIdx = 2*i + 1;
		if(leftIdx < n && v[leftIdx] > v[maxIdx]) {
			maxIdx = leftIdx;
		}

		int rightIdx = 2*i + 2;
		if(rightIdx < n && v[rightIdx] > v[maxIdx]) {
			maxIdx = rightIdx;
		}

		if(maxIdx != i) {
			swap(v[i], v[maxIdx]);
			heapify(v, n, maxIdx);
		}

	}



int main() {
	
	vector<int> v = {1, 3, 2, 7, 5, 4, 6, 9, 8};
	int n = v.size();

	// 1. build a maxHeap
	for(int i=n-1; i>=0; i--) {
		heapify(v, n, i);
	}

	// for(int i=0; i<v.size(); i++) {
	// 	cout << v[i] << " ";
	// }

	// cout << endl;

	int heapsize = n;

	while(heapsize > 1) {
		swap(v[0], v[heapsize-1]);
		heapsize--;
		heapify(v, heapsize, 0);
	}

	for(int i=0; i<n; i++) {
		cout << v[i] << " ";
	}

	cout << endl;
	
	return 0;
}
