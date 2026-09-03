#include <stdio.h>  // header file 
   int main ()           // main function 
   {
    int length; // data type 
    int width ;    // data type 
    int area;       // int data type 
    int perimeter;// int data type 
          printf("enter the length of rectangle: " );
          scanf("%d", &length); 
            printf("enter the width of the rectangle:") ;
            scanf("%d", &width );
            area = length * width;
                 printf(" the area of rectangle is%d", area);
            perimeter = 2*(length + width);
             printf (" the perimeter of the rectangle is %d ",perimeter);
             
             return 0;
   }

        


   
      
