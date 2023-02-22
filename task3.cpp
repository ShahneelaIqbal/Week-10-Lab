#include <iostream>
using namespace std;
bool checkcondition(int pre, int current, int next);
main()
{
    int number;
    cout << "Enter size:  ";
    cin >> number;
    int arr[number];
    for (int idx = 0; idx < number; idx++)
    {
        cout << "Enter number :";
        cin >> arr[idx];
    }

    int count = 0;
    int total[10];
    for (int idx = 1; idx < number; idx++)

    {
        bool flag = checkcondition(arr[idx - 1], arr[idx], arr[idx + 1]);

        if (flag == true)
        {

            total[count] = arr[idx];

            count++;
        }
    }
    if (count == 0)
    {
        cout << "no peak found";
    }
    else
    {
        for (int idx = 0; idx < count; idx++)
        {
            cout << total[idx] << " ";
        }
    }
}
bool checkcondition(int first, int second, int third)
{
    bool flag = false;

    if (first < second && second > third)
    {
        flag = true;
    }
    return flag;
}
