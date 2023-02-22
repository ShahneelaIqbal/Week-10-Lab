#include <iostream>
using namespace std;

main()
{
    int number;
    cout << "Enter size:  ";
    cin >> number;
    int digit[number];
    for (int idx = 0; idx <= number - 1; idx++)
    {
        cout << "Enter number:  ";
        cin >> digit[idx];
    }
    int smallest = 1000;
    int final[number];
    for (int idx = 0; idx <= number - 1; idx++)
    {
        if (digit[0] < digit[idx])
        {
            
        }
    }
}