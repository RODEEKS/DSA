*/What is Selection Sort?
Selection sort in C is a comparison-based algorithm for sorting the array. 
For this, the array is divided into 2 parts, sorted part and an unsorted part, initially the sorted part is empty and the unsorted part is full. 
Find the smallest element from the unsorted array and replace it with the starting element of the unsorted part. 
Continue the process till the whole array is sorted.

Problem Solution
1. Starting from the beginning pick one number.
2. Compare it with others one by one.
3. Replace if the other number is lesser than this one.
4. Display the result.
*/

#include <stdio.h>
void selectionSort(int arr[], int size);
void swap(int *a, int *b);
/*
 * Selection sort function
 */
void selectionSort(int arr[], int size)
{
    int i, j;
    for (i = 0 ;  i < size;i++)
    {
        for (j = i ; j < size; j++)
        {
            if (arr[i] > arr[j])
                swap(&arr[i], &arr[j]);
        }
    }
}
 
/* Function to swap two variables */
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int array[10], i, size;
    printf("How many numbers you want to sort:  ");
    scanf("%d", &size);
    printf("\nEnter %d numbers\t", size);
    printf("\n");
    for (i = 0; i < size; i++)
        scanf("%d", &array[i]);
    selectionSort(array, size);
    printf("\nSorted array is ");
    for (i = 0; i < size;i++)
        printf(" %d ", array[i]);
    return 0;
}
*/Program Explanation
1. The algorithm divides the input list into two parts: the sublist of items already sorted, which is built up from left to right at the front (left) of the list, 
    and the sublist of items remaining to be sorted that occupy the rest of the list.
2. Initially, the sorted sublist is empty and the unsorted sublist is the entire input list.
3. The algorithm proceeds by finding the smallest (or largest, depending on sorting order) element in the unsorted sublist,
  exchanging it with the leftmost unsorted element (putting it in sorted order), and moving the sublist boundaries one element to the right.*/
