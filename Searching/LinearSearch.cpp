//Search an element by user’s choice using linear search algorithm. [ use function]
#include <iostream>
using namespace std;

int array[10], n, num;

int linearsearch()
{
    for (int i = 0; i < n; i++)
    {
        if (array[i] == num)
        {
            return i + 1;
        }
    }

    return -1;
}

int main()
{
    cout << "Enter size of an array = ";
    cin >> n;

    cout << "Enter array elements = ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    cout << "Enter a number to search = ";
    cin >> num;

    int pos = linearsearch();

    if (pos != -1)
        cout << "Element found at position: " << pos << endl;
    else
        cout << "Element not found.\n";

    return 0;
}