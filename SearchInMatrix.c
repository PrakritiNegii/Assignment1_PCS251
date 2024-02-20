//Take a matrix as an input from the user. Search for a number x and print the indices at which it is present.
#include <stdio.h>
int main() 
{
    int rows, columns;
    printf("\nSpecify the number of rows and columns of the matrix.\n");
    scanf("%d %d", &rows, &columns);
    int array[rows][columns];
    
    for(int i = 0; i < rows; i++) 
    {
        printf("\nInput %d elements for each column of row number: %d\n", columns, i);
        for(int j = 0; j < columns; j++)
	 {
            scanf("%d", &array[i][j]);
         }
     }
    
    printf("\nInput the number to be searched in the matrix.\n");
    int n;
    scanf("%d", &n);
    printf("\n%d is present on: \n", n);
    for(int i = 0; i < rows; i++) 
	{
          for(int j = 0; j < columns; j++) 
		{
                  if(array[i][j] == n) 
			{
                           printf("row %d and column %d\n", i, j);
            		}
       		 }
    	 }
    
      return 0;
}

