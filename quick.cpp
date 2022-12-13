/* C++ implementation of QuickSort */
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

// A utility function to swap two elements
void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

/* This function takes last element as pivot, places
the pivot element at its correct position in sorted
array, and places all smaller (smaller than pivot)
to left of pivot and all greater elements to right
of pivot */
int partition(int arr[], int low, int high)
{
	int pivot = arr[high]; // pivot
	int i
		= (low
		- 1); // Index of smaller element and indicates
				// the right position of pivot found so far

	for (int j = low; j <= high - 1; j++) {
		// If current element is smaller than the pivot
		if (arr[j] < pivot) {
			i++; // increment index of smaller element
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */
void quickSort(int arr[], int low, int high)
{
	if (low < high) {
		/* pi is partitioning index, arr[p] is now
		at right place */
		int pi = partition(arr, low, high);

		// Separately sort elements before
		// partition and after partition
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

/* Function to print an array */
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

// Driver Code
int main()
{float t,t1,t2;
	int arr[] = { 10, 7, 8, 9, 1, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	
	cout << "Sorted array: \n";
	t1=timefunction();
	quickSort(arr, 0, n - 1);
	t2=timefunction();

	t=t2-t1;
	cout<<"\ntimecomplexity= "<<t<<" millisecond\n";
	printArray(arr, n);
     
	return 0;
}
