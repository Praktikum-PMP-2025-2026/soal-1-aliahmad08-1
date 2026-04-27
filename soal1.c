#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void swap(int *arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {

        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr, j, j + 1);
        }
    }
}
int main(){
     int *b = malloc(200 * sizeof(int));
    for(int i = 0; i < 200; i++){
        scanf("%d", &b[i]);

        if(b[i] == -1){ 
        break;
        }
    }

int count = 0; 
for(int i = 0; b[i] != -1; i++){
    count++; 
}    

printf ("COUNT %d ", count);
bubbleSort(b, count);

printf ("SORTED ");
    for (int i = 0; i < count; i++)
        printf("%d ", b[i]);

if (count % 2 == 0) {
    float median = 0;
    median = (b[count / 2] + b[(count / 2) - 1]) / 2;  
    printf("MEDIAN %.2f ", median);
}
else {
    int m1 = count-1;
    int median = b[(m1/2)];
    printf("MEDIAN %d ", median);
}
return 0;

}
