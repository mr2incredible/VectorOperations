/*****************************************************
 * vecOps.cpp
 * Walter J. Galan
 * Various operations with vectors
 * Works only if compiled with C++11
 ****************************************************/

#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

vector<double> setDifference(vector<double> setA, vector<double> setB);

int main () {
	
 	// Define two sets of vectors
  vector<double> setA = {1, 4, 5, 8, 11, 13, 16};
  vector<double> setB = {2, 5, 11};
	
 	// Vector set containing values in set A but not in B
 	vector<double> setAPrime;
 
  setAPrime = setDifference(setA, setB);
 
  // Display contents of vector containing values in A but not in B
 	for (int i = 0; i < setAPrime.size(); i++) {
  		cout << "Contents of APrime: " << setAPrime[i] << endl;
 	}
 
 	return 0;
}

// Determine values in set A but not in set B
vector<double> setDifference(vector<double> setA, vector<double> setB) {
 
 // Determine size of each vector set
	int sizeA = setA.size();
	int sizeB = setB.size();
 
 int i = 0;
	int j = 0;
 
 vector<double> setDiff;
 
 // Determine which values in set A but not in set B
 while (i < sizeA && j < sizeB) {
  if (setA[i] < setB[j]) {
   setDiff.push_back(setA[i]);
   i++;
  }
  else if (setA[i] > setB[j]) {
   j++;
  }
  else {
   i++;
   j++;
  }
 }
 
	// Append remaining values
 if (sizeA > sizeB) {
  while (i < sizeA) {
   setDiff.push_back(setA[i]);
   i++;
  }
 }
 else {
  while (j < sizeB) {
   setDiff.push_back(setB[j]);
   j++;
  }
 }
 
 return setDiff;
}

