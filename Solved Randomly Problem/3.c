#include<stdio.h>
int main()
{

    int array[]={1,2,3,4,3,2,1};
    int i,j;
   printf("This pattern : \n");
    for(i=0;i<7;i++)
    {
         for(j=0;j<array[i];j++)
         {
        printf("*",array[i]);
         }
        printf("\n");

    }
    return 0;
}
