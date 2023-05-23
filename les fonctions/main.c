#include <stdio.h>
#include <stdlib.h>

double conversion( double franc)
{
    return franc/6.55957 ;
}
double main()
{
     double franc=0;
       printf(" saisez votre nombre que vous voulez le convertir vers l euro\n");
    scanf("%lf",&franc);
    printf("le nombre en euro est %f EURO",conversion(franc));
    return 0;


}
