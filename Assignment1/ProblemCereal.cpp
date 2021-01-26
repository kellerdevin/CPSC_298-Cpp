#include <iostream>
using namespace std;

int main()
{
    const double TON = 35273.92;

    // Grab cereal weight from user
    cout << "Enter cereal weight in ounces: ";


    float cereal;
    cin >> cereal;

    float weight;

    //Calculate weight in tons
    weight = cereal / TON;

    cout << "The cereal is " << weight << " metric tons";
    cout << endl;

    return 0;
}
