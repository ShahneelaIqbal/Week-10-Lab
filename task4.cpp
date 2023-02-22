#include <iostream>
using namespace std;
int arr[100];

main()
{
    int size;
    int cycle;
    cout << "Enter size:  ";
    cin >> size;
    cout << "Enter number of cycle:  ";
    cin >> cycle;
    for (int idx = 0; idx <= size - 1; idx++)
    {
        cout << "Enter number:  ";
        cin >> arr[idx]; 
    }
}