#include <stdio.h>

int main()
{    
    int array[100], min, size, c;
    
    printf("Enter the number of elements in array\n");
    scanf("%d", &size);
    
    printf("Enter %d integers\n", size);
    
    for (c = 0; c < size; c++)
        scanf("%d", &array[c]);
    
    min = array[0];
    
    for (c = 1; c < size; c++)
    {
        if (array[c] < min)
        {
                min  = c;
                
        }
    }
    
    printf("Minimum element is %d.\n", min);
    return 0;    
}
