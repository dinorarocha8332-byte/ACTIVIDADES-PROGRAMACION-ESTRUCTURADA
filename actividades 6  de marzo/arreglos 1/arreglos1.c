#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temp1, temp2;
    float temp [24];
    int dummy;

    printf("\nDireccion de mem de 2 flotantes: &temp1%d; \n&temp2%d!\n", &temp1, &temp2);
    printf("\nDireccion de temp[24]:%d", temp);
    printf("\nDireccion de temp[24]:%d", &temp[23]);
    printf("\nDireccion de &dummy:%i\n", &dummy);



    return 0;
}

