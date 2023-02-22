#include <iostream>
using namespace std;
int total(int boxes);

main()
{
    int boxes;
    cout << "Enter number of boxes:  ";
    cin >> boxes;
    int answer = total(boxes);
    cout << answer;
}
int total(int boxes)
{
    int dimen[boxes * 3];
    for (int idx = 0; idx <= (boxes * 3) - 1; idx++)
    {
        cout << "Enter dimensions of box:  ";
        cin >> dimen[idx];
    }
    int product[boxes * 3];
    int sum = 0;
    for (int idx = 0; idx <= (boxes * 3) - 1; idx = idx + 3)
    {
        product[idx] = dimen[idx] * dimen[idx + 1] * dimen[idx + 2];
        sum = sum + product[idx];
    }
    return sum;
}
