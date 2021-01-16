
#include <iostream>
using namespace std;

int main()
{
    int num1;
    int num2;
    int num3;
    int num4;
    int num5;

    cout << "Enter 5 integers: " << endl;


    cin >> num1;
    cin >> num2;
    cin >> num3;
    cin >> num4;
    cin >> num5;

    int array[5] = {num1, num2, num3, num4, num5};

    double sum = 0;
    double average = 0;
    

    for (int i =0; i < 5; ++i){
        sum = sum + array[i];
    }

    average = sum / sizeof(array[0]);

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
}