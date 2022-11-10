#include<iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements (n1 n2 n3 ...): ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int temp;
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "The median is: " << arr[n/2];
    return 0;
}