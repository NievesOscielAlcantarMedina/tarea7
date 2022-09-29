#include <stdio.h>
#define D 5

void captureIntegers(int *FD);
int SumPositionsPairs(int *UP);
int SumValuesPairs(int *TR);
void SumMayQuantity(int *DR, int *suma, int *contador);

int main()
 {
    int integer[D];
    int sumPositions;
    int sumPairs;
    int suma = 0;
    int contador = 0;

    captureIntegers(integer);
    sumPositions = SumPositionsPairs(integer);
    sumPairs = SumValuesPairs(integer);
    SumMayQuantity (integer, &suma, &contador);

    printf("the sum of the values of the even positions of the array is:%d\n",sumPositions);
    printf("the sum of the even values of the array is: %d\n",sumPairs);
    printf("the total sum witouht execeeding 100 is: %d\nEl the total numbers added are: %d\n", suma, contador);

    return 0;
}
void captureIntegers(int *FD)
{
    for (int i = 0; i < D; i++)
    {
        printf("Enter a number between  1 and 100: ");
        scanf("%d", &FD[i]);

        if (FD[i] < 0 || FD[i] > 100)
        {
            printf("The entered value is invalid as it is not in the required range\n");
            printf("Enter a number between 1 and 100: ");
            scanf("%d", &FD[i]);
        }
    }
}
   int SumPositionsPairs(int *UP)
{
    int sum = 0;
    for (int z = 0; z < D; z++)
    {
        if(z % 2 == 0)
        sum = UP[z] + sum;
    }
    return sum;
}
int SumValuesPairs(int *TR)
{
    int summ = 0;
    for (int e = 0; e < D; e++)
    {
        if (TR[e] % 2 == 0)
        {
            summ = summ + TR[e];
        }
    }return summ;
}
   void SumMayQuantity(int *DR, int *sumadd, int *cont)
{
    for (int i = 0; i < D || *sumadd > 100; i++)
    {
        *sumadd = *sumadd + DR[i];
        *cont = 1 + *cont;
        if(*sumadd > 100)
        {
            *sumadd = *sumadd - DR[i];
            *cont = *cont - 1;
        }
    }
}
