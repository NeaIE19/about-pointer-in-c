#include <stdio.h>

const static int my_arrays[] = {1, 23, 17, 4, -5, 100};
const static int *pointer;

void int_copy(int arr[], int copy[], int size)
{
    for(int i = 0; i < size; i++)
    {
        copy[i] = arr[i];
    }
}
void display_arrays(int arrays[], int size)
{
    int count = size;
    for (int i = 0; i < count; i++)
    {
        printf("%d\t", arrays[i]);
    }
    
}
int main(int argc, char const *argv[])
{
    /* Programs 2.1 from PTRTUT10.HTM */
    /**** how to defining and initialization from arrays to pointers
     * by using the array notations or by dereferencing a pointer
     * **/
    
    int i;
    pointer = &my_arrays;
    printf("\n\n");
    for(i = 0; i < 6; i++){
        printf("my arrays is [%d] = %d\t", i, my_arrays[i]); /*<---A */
        printf(" pointer + %d = %d\n", i, *(pointer + i)); /*<---B */
    }

    /* technique of copying the arrays of integers */
    int SIZE = sizeof(my_arrays)/sizeof(my_arrays[0]);
    int copied_arrays[SIZE];
    int_copy(my_arrays, copied_arrays, sizeof(my_arrays)/sizeof(my_arrays[0]));
    display_arrays(copied_arrays, sizeof(my_arrays)/sizeof(my_arrays[0]));

    return 0;
}
