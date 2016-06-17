/*****************************************************
 * vecOps.cpp
 * Determines differences between two sets of vectors
 * Numbers in A but not in B
 * Works only if compiled with C++11
 ****************************************************/
#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

int main () {
	
	//Works only in c++11
	vector<double> setA = {1, 4, 5, 8, 11, 13, 16};
	vector<double> setB = {2, 5, 11};
	
	int sizeA = setA.size();
	int sizeB = setB.size();

	cout << "Size of Set A is " << sizeA << endl;
	cout << "Size of Set B is " << sizeB << endl; 	

	vector<double> setAPrime;
 
 //int b = 2;
 
 //setAPrime.push_back(b);
 
 //cout << "Contents of APrime is: " << setAPrime[0] << endl;
 
 int i = 0;
	int j = 0;
 
 while (i < sizeA && j < sizeB) {
  //cout << "Still in loop" << endl;
  if (setA[i] < setB[j]) {
   setAPrime.push_back(setA[i]);
   i++;
  }
  else if (setA[i] > setB[j]) {
   setAPrime.push_back(setA[i]);
   j++;
  }
  else {
   i++;
   j++;
  }
 }
 
 for (i = 0; i < setAPrime.size(); i++) {
  cout << "Contents of APrime: " << setAPrime[i] << endl;
 }
 /*
	while (setA.size() < i && setB.size() < j) {
		if (setA[i] < setB[j]) {
			setAPrime.insert
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
 */
	return 0;
}	
