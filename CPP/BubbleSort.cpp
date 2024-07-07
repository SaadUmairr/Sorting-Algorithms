#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

int bubbleSort(vec &arr)
{
    bool change;
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        change = false;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                change = true;
            }
            if (!change)
                break;
        }
    }
    return 0;
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

void printArray(vec arr)
{
    cout << '\t';
    for (auto &i : arr)
        cout << i << '\t';
    cout << endl;
}

int main()
{
    system("cls");
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    vec arr;
    int size, testCases;
    testCases = inputNumber();

    while (testCases--)
    {
        try
        {
            ll element;
            size = inputNumber();
            arr.clear(); // Clearing array so that every iteration have a new one
            if (size <= 0)
                throw runtime_error("SIZE SHOULD BE GREATER THAN ZERO");
            for (int i = 0; i < size; i++)
                element = inputNumber(), arr.push_back(element);
            cout << "INPUT ARRAY: ";
            printArray(arr);
            bubbleSort(arr);
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