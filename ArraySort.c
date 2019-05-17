/********************************
<<<<<<< HEAD
 *
 * ArraySort.c
 *
 * Created by Jean-Philippe Legault
 *
 * Your task is to implement in place sorting using the two available functions
 * swapAdjacent, and compareAdjacent.
 *
 * Some bug might have been introduced... you will have to find out if there are any!
 * if so, you will have to correct it
 *
=======
 * 
 * ArraySort.c
 * 
 * Created by Jean-Philippe Legault
 * 
 * Your task is to implement in place sorting using the two available functions
 * swapAdjacent, and compareAdjacent.
 * 
 * Some bug might have been introduced... you will have to find out if there are any!
 * if so, you will have to correct it
 * 
>>>>>>> 76a3425b61af7ebb2ff6f6c0030ac54d900cef60
 ********************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void printArray(int *array, int size)
{
<<<<<<< HEAD
    int i;
    for(i=0; i<size; i++)
=======
    for(int i=0; i<size; i++)
>>>>>>> 76a3425b61af7ebb2ff6f6c0030ac54d900cef60
    {
        if(i != 0)
        {
            printf(", ");
        }
        printf("%d", array[i]);
    }
    printf("\n");
}

void swapAdjacent(int *a, int index)
<<<<<<< HEAD
{
    int temp = *(a+index);
    *(a+index) = *(a + index+1);
    *(a+index+1) = temp;
=======
{    
    int *temp = a + index;
    *(a + index) = *(a + index + 1);    
    *(a + index + 1) = *temp;
>>>>>>> 76a3425b61af7ebb2ff6f6c0030ac54d900cef60
}

int compareAdjacent(int *a, int index)
{
    return *a + index - *a + index + 1;
}

/**
 * TODO: implement in place sorting on an array
 * by using the two functions swapAdjacent and compareAdjacent
 */
<<<<<<< HEAD
void inPlaceSort(int *a, int index)
{
  int i, j;
  for(i=0; i<index-1; i++)

    for(j=0; j< index-i-1; j++)
      if(compareAdjacent(a, j)>0){

        swapAdjacent(a, j);
      }
=======
void inPlaceSort(/* your input parameter */)
{

>>>>>>> 76a3425b61af7ebb2ff6f6c0030ac54d900cef60
}

int main(void)
{
<<<<<<< HEAD
    int x;
=======
>>>>>>> 76a3425b61af7ebb2ff6f6c0030ac54d900cef60

    int array_size = 0;
    printf("Enter the array size (>0) and the numbers to fill the array with: ");
    if(!scanf("%d", &array_size))
    {
        printf("ERROR. Must enter an integer.\n");
        return EXIT_FAILURE;
    }
    else if(array_size < 1)
    {
        printf("ERROR. array size must be at least 1.\n");
        return EXIT_FAILURE;
    }

    int a[array_size];

<<<<<<< HEAD

    /**********************
     * TODO finish parsing the user input to fill the array
     *
     * it should parse user input with scanf to fill the array with values
     **********************/
     for (x=0; x<array_size;x++)
     {

         scanf("%d", &a[x]);
     }
      printArray(a, array_size);
    inPlaceSort(a,array_size);
    printArray(a, array_size);

    return 0;
}
=======
    /**********************
     * TODO finish parsing the user input to fill the array
     * 
     * it should parse user input with scanf to fill the array with values
     **********************/

    printf("=== Array before Sorting = ");
    printArray(a, array_size);

    inPlaceSort(/* your input parameter */);

    printf("=== Array after Sorting = ");
    printArray(a, array_size);

}
>>>>>>> 76a3425b61af7ebb2ff6f6c0030ac54d900cef60
