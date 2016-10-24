#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "programmes.h"
#include <math.h>


int main()
{




angle();
etoiles();
cases_minmax();
voyagearrivee();
jours();

int x,n;
    printf("\n Entrez X : ");
    scanf("%d",&x);
    printf("\n Entrez N : ");
    scanf("%d",&n);

printf(" %d puissance %d = %f\n", x,n,puissance(x,n));

hypothenuse();
delta();






    return 0;


    }
