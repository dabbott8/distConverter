#include <iostream>

using namespace std;


int main() 
{
	int distKilo;
	distKilo = 0;
	int distMiles;
	distMiles = 0;
	
	
	cout << "Enter distance in Kilometers:" << endl;
	cin >> distKilo;
	distMiles = distKilo / 1.609344;
	
	
	cout << "distance in miles is " << distMiles << endl;
	
	return 0;
}
