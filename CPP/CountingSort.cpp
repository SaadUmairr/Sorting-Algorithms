#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

void countingSort(vec &arr)
{
}

int inputNumber()
{
    int num;
    cin >> num;
    if (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        throw runtime_error("INPUT MUST BE A NUMBER");
    }
    return num;
}
void printArray(const vec arr)
{
    cout << '\t';
    for (auto &i : arr)
        cout << i << '\t';
    cout << endl;
}
int main()
{
    vec arr;
    int testCases;

    testCases = inputNumber();

    while (testCases--)
    {
        try
        {
            int size;
            size = inputNumber();

            if (size <= 0)
            {
                throw runtime_error("SIZE SHOULD BE GREATER THAN ZERO");
            }

            arr.clear(); // Clear array for each test case
            for (int i = 0; i < size; i++)
            {
                long long int element = inputNumber();
                arr.push_back(element);
            }

            cout << "INPUT ARRAY: ";
            printArray(arr);

            countingSort(arr);

            cout << "SORTED ARRAY: ";
            printArray(arr);
        }
        catch (runtime_error &e)
        {
            cout << "ERROR: " << e.what() << endl;
        }
    }

    return 0;
}
