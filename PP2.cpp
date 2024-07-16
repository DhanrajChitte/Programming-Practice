#include <iostream>
using namespace std;

int occurence(int lower, int higher, int digit)
{
    int count = 0;
    for (int i = lower; i <= higher; i++)
    {
        int temp = i;
        while (temp > 0)
        {
            if (temp % 10 == digit)
                count += 1;

            temp /= 10;
        }
    }
    return count;
}

int main()
{
    int lower, higher, digit;

    cout << "Enter the lower digit of the range" << endl;
    cin >> lower;

    cout << "Enter the higher digit of the range" << endl;
    cin >> higher;

    cout << "Enter the digit that will count in the given range" << endl;
    cin >> digit;

    cout << "The number of the count " << digit << " is " << occurence(lower, higher, digit) << endl;

    return 0;
}