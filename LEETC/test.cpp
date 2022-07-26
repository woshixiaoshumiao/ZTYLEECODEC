#include<stdlib.h>
#include <vector>

using namespace std;


void quickSort(int *array, int left, int right)
{
    if(NULL == array)
    {
        return;
    }
 
	if(left < right)
	{
		int pivot = array[left];
		int low = left, high = right;
		while(low < high)
		{
			while(array[high] >= pivot && low < high)
				high--;
			array[low] = array[high];
			
			while(array[low] <= pivot && low < high)
				low++;
			array[high] = array[low];
		}
		array[low] = pivot;
		
		quickSort(array, left, low - 1);
		quickSort(array, low + 1, right);
	}
}

int main(){
    int a[] = {5, 3, 2, 4, 8, 12};
    quickSort(a, 0, 6);
    return 0;
}