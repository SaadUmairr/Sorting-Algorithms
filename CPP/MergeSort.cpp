#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

void merge(vec &arr, int low, int mid, int high)
{

    vec temp(high - low + 1);

    int i = low, j = mid + 1, k = 0;

    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while (j <= high)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void mergeSort(vec &arr, int low, int high)
{
    if (low < high)
    {
        int mid = low + (high - low) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
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

            mergeSort(arr, 0, size - 1);

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
