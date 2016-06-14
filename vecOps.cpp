/*****************************************************
 * vecOps.cpp
 * Determines differences between two sets of vectors
 ****************************************************/
#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

int main () {
	
	cout << "Hello world" << endl;
		
	//Works only in c++11
	vector<double> setA = {1, 4, 5, 8, 11, 13, 16};
	vector<double> setB = {2, 5, 11};
	
	int sizeA = setA.size();
	cout << "Size of Set A is " << sizeA << endl;	

	vector<double> setAPrime;

	int i = 0;
	int j = 0;

	while (setA.size() < i && setB.size() < j) {
		if (setA[i] < setB[j]) {
			setAPrime[i] = setA[i];
			i++;
			cout << "Item in A is greater than Item in B" << endl;
		}
		else if (setA[i] > setB[j]) {
			cout << "Not sure yet" << endl;	
		}
		else {
			cout << "Hey" << endl;
		}
	}
	return 0;
}	
