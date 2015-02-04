#include <vector>
#include <iostream>
#include <numeric>
#include <math.h>
using namespace std;

int main()
{
	// Initialize Variables
    vector<double> myValues;
    double myNums, sum, mean, stdDev, E = 0;
    
    // Ask user to enter values
    cout << "Please enter values (enter end at end) ==> ";
    // Enter Values into the vector
    while(cin >> myNums)
    {
        myValues.push_back(myNums);
    }
    
    // Calculate the sum of the values
    sum = accumulate(myValues.begin(), myValues.end(), 0.0);
    
    cout << "\nSum of Numbers Entered is: " << sum << "\n";
    
    // Calculate the average/mean of the values
    mean = sum / myValues.size();
    
    cout << "\nAverage of values entered is: " << mean << "\n";
    
    // Calculate the Standard Deviation of the values
    double inverse = 1.0 / static_cast<double>(myValues.size());

    for(unsigned int i=0; i<myValues.size(); i++)
    {
    	E += pow(static_cast<double>(myValues[i]) - mean, 2);
    }

    stdDev = sqrt(inverse * E);
    
    cout << "\nStandard Deviation: " << stdDev << "\n";
}
