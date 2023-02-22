#include <iostream>
using namespace std;
int countLetter(int number, char word);

main()
{
    int number;
    char word;
    int answer;
    cout << "Enter size:  ";
    cin >> number;
    cout << "Enter a letter:  ";
    cin >> word;
    answer = countLetter(number, word);
    cout << answer;
}

int countLetter(int number, char word)
{
    int count = 0;
    string temp;
    string statement[number];
    for (int idx = 0; idx <= number - 1; idx++)
    {
        cout << "Enter word:  ";
        cin >> statement[idx];
    }
    for (int idx = 0; idx <= number - 1; idx++)
    {
        temp = statement[idx];
        int i = 0;
        while (temp[i] != '\0')
        {
            if (temp[i] == word)
            {
                count = count + 1;
            }
            i++;
        }
    }
    return count;
}
