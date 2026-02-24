#include <stdio.h>
int main()
{
    int arr1[5], arr2[6], arr3[11];
    arr1[5] = {1, 2, 7, 8, 87};
    arr2[6] = {3, 4, 6, 9, 56, 78};
    mergeArray(arr1, arr2, arr3, 5, 6);
}

int mergeArray(int arr1[], int arr2[], int arr3[], int n1, int n2)
{
    int i = 0, j = 0;
    while(i<n1 && j<n2)
    {
        if(arr1[i] < arr2[j])
        {
            arr3[k++] = arr[i++];
        }
        else
        {
            arr3[k++] = arr[j++];
        }
    }
    while(i<n1)
    {
        arr3[k++] = arr1[i++];
    }
    while(j<n2)
    {
        arr3[k++] = arr1[j++];
    }
    for(int i=0; i<n1+n2; i++)
    {
        printf("%d", arr[i]);
    }

}