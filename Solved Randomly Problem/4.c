#include<stdio.h>
int main()
{

    int array1[5];
    int array2[5];
    int i,j;
    printf("Please Enter Array1 element : ");
    for(i=0;i<5;i++)
        scanf("%d",&array1[i]);
    printf("Please Enter Array2 element : ");
    for(i=0;i<5;i++)
        scanf("%d",&array2[i]);

    for(j=0;j<5;j++)
    {
        if(array1[j]+array2[j]<10)printf("0 ");
        else printf("1 ");
    }
    return 0;

}
