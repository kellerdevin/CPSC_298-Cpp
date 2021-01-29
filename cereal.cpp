#include <iostream>
using namespace std;

int main()
{
    const float TON = 35273.92;

    // Grab cereal weight from user
    cout << "Enter cereal weight in ounces: ";

    double cerealWeight;
    cin >> cerealWeight;

    double weightInTons;

    //Calculate Weight in tons

    weightInTons = cerealWeight / TON;

    cout << "The cereal is " << weightInTons << " metric tons";
    cout << endl;

    return 0;
}