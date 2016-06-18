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
vector<double> setIntersection(vector<double> setA, vector<double> setB);

// Next step is to implement set union
vector<double> setUnion(vector<double> setA, vector<double> setB);

int main () {
	
 // Define two sets of vectors
 vector<double> setA = {1, 2, 4, 5, 8, 11, 13, 16};
 vector<double> setB = {2, 5, 11};
	
 // Vector set containing values in set A but not in B
 vector<double> setOfDifference;
 
 // Vector set containing values in set A that are also in set B
 vector<double> setOfIntersection;
 
 setOfDifference = setDifference(setA, setB);
 setOfIntersection = setIntersection(setA, setB);
 
 cout << "\n***** Difference *****" << endl;
 
 // Display contents of difference vector
 for (int i = 0; i < setOfDifference.size(); i++) {
   cout << "Values in Set A but not in Set B: " << setOfDifference[i] << endl;
 }
 
 cout << "\n***** Intersection *****" << endl;
 
 // Display contents of intersection vector
 for (int i = 0; i < setOfIntersection.size(); i++) {
  cout << "Values in Set A that are also in Set B: " << setOfIntersection[i] << endl;
 }
 
 return 0;
}

// Determines difference in values of two sets
vector<double> setDifference(vector<double> setA, vector<double> setB) {
 
 // Contains difference values
 vector<double> setDiff;
 
 // Determine size of each vector set
	int sizeA = setA.size();
	int sizeB = setB.size();
 
 int i = 0;
	int j = 0;
 
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

// Determines intersection of two sets
vector<double> setIntersection(vector<double> setA, vector<double> setB) {
 
 vector<double> setInter;
 
 // Determine size of each vector set
	int sizeA = setA.size();
	int sizeB = setB.size();
 
 int i = 0;
	int j = 0;
 
 // Determine which values in set A and also in set B
 while (i < sizeA && j < sizeB) {
  if (setA[i] < setB[j]) {
   i++;
  }
  else if (setA[i] > setB[j]) {
   j++;
  }
  else {
   setInter.push_back(setA[i]);
   i++;
   j++;
  }
 }

 return setInter;
}