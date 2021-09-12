//Time Complexity  : O(n^2)
//Space Complexity : O(1)


#include<stdio.h>
void swap(int* a,int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int array[], int size)
{
     int min_index;
     for(int step=0; step<size-1; step++)
     {
         min_index = step;
         for(int i = step+1;i<size;i++)
            if(array[i]<array[min_index])
            {
                min_index=i;
            }
        swap(&array[min_index],&array[step]);
     }
 }


void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() {
  int data[] = {20, 12, 10, 15, 2};
  int size = sizeof(data) / sizeof(data[0]);
  selectionSort(data, size);
  printf("Sorted array in Acsending Order:\n");
  printArray(data, size);
}