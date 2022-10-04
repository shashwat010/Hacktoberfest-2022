#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int ar[], int numb)
{
	int i, j;
	for (i = 0; i < numb - 1; i++)
		for (j = 0; j < numb - i - 1; j++)
			if (ar[j] > ar[j + 1])
				swap(ar[j], ar[j + 1]);
}
void printArray(int ar[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << ar[i] << " ";
	cout << endl;
}

int main()
{
  int N;
  cout << "Enter number of items in array: ";
  cin >> N;
  int arr[N];
  for(int i=0;i<N;i++)
    cin >> arr[i];
	bubbleSort(arr, N);
	cout << "Sorted array: \n";
	printArray(arr, N);
	return 0;
}
