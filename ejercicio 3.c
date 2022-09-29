#include <stdio.h>
#define lines 4
#define columns 3


void capturedata(float product[][columns]);
int HigherPrice(float product[][columns]);
int lowerstock(float product[][columns]);
float total(float product[][columns]);

int main()
{
    float product[lines][columns];
    int Producthigher;
    int Productlowerstock;
    float totalbuys;

  capturedata(product);
   Producthigher = HigherPrice(product);
    Productlowerstock = lowerstock(product);
    totalbuys = total(product);


    printf("Highest priced product: %d\n",Producthigher);
    printf("Product with less stock: %d\n",Productlowerstock);
    printf("total expected sale: %.2f",totalbuys);

    return 0;
}
void capturedata(float product[][columns])
{
    for (int z = 0; z < lines; z++)
    {
        printf("Enter the product key %d: ",z+1);
        scanf("%f", &product[z][0]);

        if (product[z][0] == product[z-1][0])
        {
            do
            {
                printf("Error, la clave ya existe.\n Dame otra clave: ");
                scanf("%f", &product[z][0]);
            } while (product[z][0]!=product[z-1][0]);
        }
        printf("Give me the price of the product %.0f: ",product[z][0]);
        scanf("%f", &product[z][1]);

        printf("Give me the stock of the product %.0f: ",product[z][0]);
        scanf("%f", &product[z][2]);
    }
}
int HigherPrice(float productt[][columns])
{
    float auxilio;
    int HigherClave;
    auxilio = productt[0][1];
    HigherClave = productt[0][0];
    for (int w = 0; w < lines; w++)
    {
        if (auxilio < productt[w][1])
        {
            auxilio = productt[w][1];
            HigherClave = productt[w][0];
        }
    }
    return HigherClave;
}
int lowerstock(float productc[][columns])
{
    int auxilioo2 ;
    int LoWerClave;
    auxilioo2 = productc[0][2];
    LoWerClave = productc[0][0];
    for (int i = 0; i < lines; i++)
    {
        if (auxilioo2  > productc[i][2])
        {
            auxilioo2  = productc[i][2];
            LoWerClave = productc[i][0];
        }
    }
    return LoWerClave;
}
float total(float productqr[][columns])
{
    float total;
    for (int y = 0; y < lines; y++)
    {
        total = total + (productqr[y][1] * productqr[y][2]);
    }
    return total;
}
