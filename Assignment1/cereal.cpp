#include <iostream>
using namespace std;

int main()
{
    const double TON = 35273.92;

    cout << "Enter cereal weight in ounces: ";


    float cereal;
    cin >> cereal;

    float weight;
    weight = cereal / TON;

    cout << "The cereal is " << weight << " metric tons";
    cout << endl;

    return 0;
}