
#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    cout << "How many postive integers would you like to enter (Max 10)" << endl;

    int num_elements;
    
    cin >> num_elements;

    //Checks to see if num_elements > 10

    if (num_elements <= 10) {
        // read 10 nonnegative integers from user into array numberArray
        cout << "Enter  integers: " << endl;

        vector<int> numberArray(num_elements);
        int i;

        for (i = 0; i < numberArray.size(); ++i)
        {
            cin >> numberArray.at(i);
        }
        
        //print integers back to screen
        cout << "Your numbers: ";

        for (i = 0; i < numberArray.size() - 1; ++i)
        {
            cout << numberArray.at(i) << ", ";
        }
        cout << numberArray.back() << endl;
    }
    else{
        cout << "Error: user tried to enter more than 10 elements";
    }

    return 0;
}
