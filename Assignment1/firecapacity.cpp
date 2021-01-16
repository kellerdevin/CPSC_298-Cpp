#include <iostream>
using namespace std;

int main() 

{
cout << endl;
int maxCapacity;
cout << "Enter max room capacity: ";
cin >> maxCapacity;

int numPeople;
cout << "Enter number of people attending the meeting: ";
cin >> numPeople;
cout << endl;
int additionalPeople = maxCapacity - numPeople;

if (numPeople <= maxCapacity){
    cout << "The number of people is legal and you can add " << additionalPeople << " people";

}
else{
    int removePeople = additionalPeople * -1;
    cout << "The number of people is illegal and you have to remove " << removePeople << " for it to be legal";
}


cout << endl;
return 0;
}

