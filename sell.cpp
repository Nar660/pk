// C++ implementation of Shell Sort
#include <iostream>
using namespace std;
#include<time.h>
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
/* function to sort arr using shellSort */
int shellSort(int arr[], int n)
{
	// Start with a big gap, then reduce the gap
	for (int gap = n/2; gap > 0; gap /= 2)
	{
		// Do a gapped insertion sort for this gap size.
		// The first gap elements a[0..gap-1] are already in gapped order
		// keep adding one more element until the entire array is
		// gap sorted
		for (int i = gap; i < n; i += 1)
		{
			// add a[i] to the elements that have been gap sorted
			// save a[i] in temp and make a hole at position i
			int temp = arr[i];

			// shift earlier gap-sorted elements up until the correct
			// location for a[i] is found
			int j;		
			for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
				arr[j] = arr[j - gap];
			
			// put temp (the original a[i]) in its correct location
			arr[j] = temp;
		}
	}
	return 0;
}

void printArray(int arr[], int n)
{
	for (int i=0; i<n; i++)
		cout << arr[i] << " ";
}

int main()
{  float t,t1,t2;
	int arr[] = {12, 34, 54, 2, 3}, i;
	int n = sizeof(arr)/sizeof(arr[0]);

	cout << "Array before sorting: \n";
	printArray(arr, n);
    t1=timefunction();
	shellSort(arr, n);
    t2=timefunction();
	
	t=t2-t1;
	cout<<"\ntimecomplexity= "<<t<<" millisecond";


	cout << "\nArray after sorting: \n";
	printArray(arr, n);


	return 0;
}
