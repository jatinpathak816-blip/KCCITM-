#include <iostream>
using namespace std;


int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] > pivot)   
        
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}


void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    int n;

    cout << "Enter number of trade values: ";
    cin >> n;

    int arr[n];

    cout << "Enter trade values:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    
    double total = 0;
    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }
    double overallAverage = total / n;

   
    quickSort(arr, 0, n - 1);

   
    cout << "\nTrade values in Descending Order:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

   
    int limit = (n < 5) ? n : 5;

    cout << "\n\nTop " << limit << " Highest Trade Values:\n";

    double topSum = 0;
    for (int i = 0; i < limit; i++)
    {
        cout << arr[i] << " ";
        topSum += arr[i];
    }

    cout << "\nAverage of Top " << limit << " Values = "
         << topSum / limit << endl;

    
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > overallAverage)
            count++;
    }

    cout << "Overall Average = " << overallAverage << endl;
    cout << "Number of Trade Values Greater than Overall Average = "
         << count << endl;

    return 0;
}