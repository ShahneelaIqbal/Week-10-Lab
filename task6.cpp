#include <iostream>
using namespace std;

main()
{
    int number;
    cout << "Enter size of array:  ";
    cin >> number;
    string word[number];
    for (int idx = 0; idx <= number - 1; idx ++)
    {
        cout << "Enter word:  ";
        cin >> word[idx];
    }
    for (int idx = number - 1; idx >= 0; idx --)
    {
        cout << word[idx] << " ";
    }
}