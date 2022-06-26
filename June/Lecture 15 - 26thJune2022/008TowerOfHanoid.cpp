#include<iostream>

using namespace std;

void toh(int n, char src, char hlp, char dst) {

	// base case
	if(n == 0) {
		return;
	}

	// recursive case

	// 1. ask your friend to move (n-1) disk from src to hlp using dst
	toh(n-1, src, dst, hlp);

	// 2. move the largest disk from src to dst
	cout << "move disk from " << src << " to " << dst << endl;

	// 3. ask your friend to move (n-1) disks from hlp to dst using src
	toh(n-1, hlp, src, dst);

}

int main() {

	int n = 3;

	toh(n, 'A', 'B', 'C');

	return 0;

}