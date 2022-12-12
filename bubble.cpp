// C++ program for implementation
// of Bubble sort
#include <bits/stdc++.h>
#include<time.h>
using namespace std;
timefunction()
{
	time_t seconds;
	
	seconds = time(NULL);
	printf("Seconds since January 1, 1970 = %ld\n", seconds);
}


// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)

		// Last i elements are already
		// in place
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
}

//Function to print an array
/*void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}*/

// Driver code
int main()
{float t,t1,t2;
	int arr[] = { 5, 1, 4, 2, 8};
	int N = sizeof(arr) / sizeof(arr[0]);
	t1=timefunction();
	
	bubbleSort(arr, N);
	t2=timefunction();
	//cout << "Sorted array: \n";
	//printArray(arr, N);
	t=t2-t1;
	cout<<"timecomplexity= "<<t<<"second";
     
	 return 0;
}

