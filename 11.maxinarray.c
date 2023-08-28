#include <stdio.h>

int main()
{    
    int array[100], maximum, size, c;
    
    printf("Enter the number of elements in array\n");
    scanf("%d", &size);
    
    printf("Enter %d integers\n", size);
    
    for (c = 0; c < size; c++)
        scanf("%d", &array[c]);
    
    maximum = array[0];
    
    for (c = 1; c < size; c++)
    {
        if (array[c] > maximum)
        {
                maximum  = array[c];
               
        }
    }
    
    printf("Maximum element is  %d.\n", maximum);
    return 0;    
}
