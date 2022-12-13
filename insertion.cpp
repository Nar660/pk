// C++ program for insertion sort

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


// Function to sort an array using
// insertion sort
void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;

		// Move elements of arr[0..i-1],
		// that are greater than key, to one
		// position ahead of their
		// current position
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

// A utility function to print an array
// of size n
void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

// Driver code
int main()
{
	int arr[] = { 50,40,35,30,25,20,15,17,12,115,11,10,3};
	int N = sizeof(arr) / sizeof(arr[0]);

	
	float t,t1,t2;
	
	 cout<<"before sorting";
	 t1=timefunction();
     insertionSort(arr, N);
	 cout<<"after sorting";
     t2=timefunction();
	
	t=t2-t1;
	cout<<endl<<"timecomplexity= "<<t<<" milisecond\n";
     
	printArray(arr, N);

	return 0;
}

