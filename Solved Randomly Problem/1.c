#include<stdio.h>
float Cel_To_Fah(float n)
{
    return ((n * 9.0 / 5.0) + 32.0);
}
float F_to_C(float n)
{
    return (n - 32.0) * 5.0 / 9.0;
}
int main()
{
    int n;
    char ch;
     printf("Enter a Digit : ");
     scanf("%f",&n);
     printf("Convert to : ");
     scanf("%c",&ch);
     printf("%d%c",n,ch);

    return 0;
}

