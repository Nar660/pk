// C++ program for implementation of
// selection sort
#include <bits/stdc++.h>
using namespace std;
timefunction()
{
    clock_t start, stop;
    int i;
    start = clock();
    for(i=0; i<2000;i++)
    {
        printf("%d", (i*1)+(1^4));
    }
    printf("\n\n");
    stop = clock();

    //(double)(stop - start) / CLOCKS_PER_SEC
  printf("before sorting=");
    printf("%6.3f\n", start);
   printf("after sorting=");

    printf("%6.3f", stop);
    return 0;
}


//Swap function
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int arr[], int n)
{
	int i, j, min_idx;

	// One by one move boundary of
	// unsorted subarray
	for (i = 0; i < n-1; i++)
	{
	
		// Find the minimum element in
		// unsorted array
		min_idx = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min_idx])
			min_idx = j;

		// Swap the found minimum element
		// with the first element
		if(min_idx!=i)
			swap(&arr[min_idx], &arr[i]);
	}
}

//Function to print an array
void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

// Driver program to test above functions
int main()
{float t,t1,t2;
	int arr[] = {64, 25, 12, 22, 11};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	
	t1=timefunction();
	selectionSort(arr, n);
		t2=timefunction();

	t=t2-t1;
	cout<<"\ntimecomplexity= "<<t<<" millisecond\n";
	cout << "Sorted array: \n";
	printArray(arr, n);
	return 0;
}
