// Optimized implementation of Bubble sort
#include <bits/stdc++.h>
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


// An optimized version of Bubble Sort
void bubbleSort(int arr[], int n)
{
int i, j;
bool swapped;
for (i = 0; i < n-1; i++)
{
	swapped = false;
	for (j = 0; j < n-i-1; j++)
	{
		if (arr[j] > arr[j+1])
		{
		swap(arr[j], arr[j+1]);
		swapped = true;
		}
	}

	// IF no two elements were swapped
	// by inner loop, then break
	if (swapped == false)
		break;
}
}

// Function to print an array
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout <<" "<< arr[i];
}

// Driver program to test above functions
int main()
{
	float t,t1,t2;
	int arr[] = {64, 34, 25, 12, 22, 11, 90};
	int N = sizeof(arr)/sizeof(arr[0]);
	
	
	 t1=timefunction();
     bubbleSort(arr, N);
    t2=timefunction();
	
	t=t2-t1;
	cout<<endl<<"timecomplexity= "<<t<<" milisecond\n";
     
	cout <<"Sorted array: \n";
	printArray(arr, N);
	return 0;
}
