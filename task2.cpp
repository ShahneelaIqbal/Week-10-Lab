#include <iostream>
using namespace std;
int countMiles(int number);

main()
{
    int number;
    int answer;
    cout << "Enter size:  ";
    cin >> number;
    answer = countMiles(number);
    cout << answer;
}
int countMiles(int number)
{
    int count = 0;
    int miles[number];
    for (int idx = 0; idx <= number - 1; idx ++)
    {
        cout << "Enter miles of week:  ";
        cin >> miles[idx];
    }
    for (int idx = 0; idx < number - 1 ; idx ++)
    {
        int add = idx + 1;
        if (miles[idx] < miles[add])
        {
            count = count + 1;            
        }
    }
    return count;
}