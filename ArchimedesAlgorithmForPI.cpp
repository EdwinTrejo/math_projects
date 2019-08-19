// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
// calculates pi by using the Archimedes Algorithm

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void calculatePi(int& initialSides, double& initialLength);

int main(){
	const int piPrecision = 20;
	int initialSides = 6;
	double initialLength = 1;
  
  //this is just for clarification of what happens to the value
  cout << "n_sides" << "\t" << "s_length" << "\t" << "s/2" << "\t" << "a=sqrt(1-(s/2)^2)" << "\t" << "b=1-a" << "\t" << "new_S_sqrt(b^2+(s/2)^2)" << "\t" << "p=n*s" << "\t" << "p/2" << endl;

	for (int i = 0; i < piPrecision; i++) {
		calculatePi(initialSides, initialLength);
	}
}

void calculatePi(int& initialSides, double& initialLength){
	double sHalf = initialLength / 2;
	double aCircularity = sqrt(1 - (pow(sHalf, 2)));
	double bCircularityLoss = 1 - aCircularity;
	double newSLength = sqrt((pow(bCircularityLoss, 2) + pow(sHalf, 2)));
	double pDoubleCircularReference = (double)initialSides * initialLength;
	double pHalfPiApproximation = pDoubleCircularReference / 2;
	cout << initialSides << "\t" << initialLength << "\t" << sHalf << "\t" << aCircularity << "\t" << bCircularityLoss << "\t" << newSLength << "\t" << pDoubleCircularReference << "\t" << pHalfPiApproximation << endl;
	initialLength = newSLength;
	initialSides = initialSides * 2;
}
