o
#include <iostream>
using namespace std;
#include <string>
#include <algorithm> 
oid soort(int arr[], int n)
{
	int minIdx;
	                       
	for (int i = 0; i < n - 1; i++)//40 60 50 30 10 20
	{
		minIdx = i;

		for (int j = i + 1; j < n; j++)
			if (arr[j] < arr[minIdx])
				minIdx = j;
	            swap(arr[minIdx], arr[i]);

	}
	for(int x=0 ; x<n ; x++)
        cout<<char(arr[x]);
}

int main()
{
    int size;
    string s;
    cin >> size >> s;
    int chars[size];
    for(int i=0 ; i<size ; i++)
    {
        chars[i] = s[i] - 0;
    }
    soort(chars , size);
    return 0;
}