#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void angle()
{
printf(" \n //// TP 1.1 //// \n");

int angle1,angle2,angle3;

printf("saisir premier angle\n");
scanf("%d",&angle1);
printf("saisir deuxieme angle\n");
scanf("%d",&angle2);

angle3= 180 - (angle1+angle2);

if ((angle1+angle2+angle3)>180)
{

printf("le troisieme angle vaut %d",angle3 );
}else{printf("\n error \n");}

}

void etoiles()
{   printf("\n//// TP 1.2 //// \n");
    char tab[1];
    char esp=32;

    tab[0]='*';
    int i=0,j=0,k=1,l=0,m,lignes=0;
    printf("veuillez saisir un nombre entier \n");
    scanf("%d",&lignes);
    m=lignes;

    for(i=0;i<lignes;i++)
    {
        for(l=0;l<m;l++){

        printf("%c",esp);

    } m--;

        for(j=0;j<(k);j++){

        printf("%c", tab[0]);
    }
printf("\n");
k+=2;}}

void cases_minmax(void)
{
    printf("\n /// TP 1.3 ///");

int tab[49]={0};
int cases,i,k,j,casemin,casemax,min,max;
for(i=0;i<50;i++)
    {
    tab[i]=0;
    }
    printf("nombre d entiers a saisir :\t");
    scanf("%d",&cases);
for(k=0;k<cases;k++)
    {
    printf(" \n Saisir la case %d : ",k);
    scanf("%d",&tab[k]);
    }

    for (i=0,j=1;j<(cases);j++)
    {
        if(tab[i]<=tab[j])
        {
            min=tab[i];
            casemin=i;
        }
        else {min=tab[j];casemin=j;i=j;
        }

    }

    for (i=0,j=1;j<(cases);j++)
    {
        if(tab[i]>=tab[j])
        {
            max=tab[i];
            casemax=i;
        }
        else {max=tab[j];casemax=j;i=j;
        }

    }

    printf("\n le minimum est %d dans la case %d",min, casemin);
    printf("\n le maximum est %d dans la case %d",max, casemax);
    }

void voyagearrivee()
{


    int dheures; int dminutes, aheures,aminutes,departminutes,arriveeminutes,totalminutes,dureeheures,dureeminutes,dureevoyage;

    printf("\n //// TP 2.1 //// \n \n");

    printf ("entrez l'heure et les minutes du depart du train : \n");
    printf("\n heures : ");
    scanf("%d",&dheures);
    printf("\n minutes : ");
    scanf("%d",&dminutes);

    printf ("\n entrez la duree du voyage : \n");
    printf("\n heures : ");
    scanf("%d",&dureeheures);
    printf("\n minutes : ");
    scanf("%d",&dureeminutes);

    departminutes= (dheures*60)+(dminutes);
    dureevoyage= (dureeheures*60)+(dureeminutes);
    arriveeminutes = departminutes + dureevoyage;

  /*  printf("\n depart en minutes %d", departminutes);
    printf("\n duree en minutes %d", dureevoyage);
    printf("\n total en minutes %d", arriveeminutes);
*/
    if (arriveeminutes>1439){arriveeminutes= arriveeminutes-1440;}

    aheures = arriveeminutes/60;
    aminutes = arriveeminutes%60;

    printf("\n heure d arrivee : %d heures et %d minutes ", aheures, aminutes);
    }


    void jours(){

    printf("\n //// TP 2.2 //// \n \n");

int annee,jours,mois,i;
int nbjoursmois[12]={31,28,31,30,31,30,31,31,30,31,30,31};
printf("saisir date: ex : 10/12/2016 \n ");
scanf("%d/%d/%d",&jours,&mois,&annee);

for (i=0; i<mois-1 ; i++)
{
    jours=jours+nbjoursmois[i];
}

annee=annee%4;

printf(" \n Test de l annee bissextile \n");

if (annee==0){jours = jours+1; printf (" annee bissextile");} else {printf(" ce n est pas une annee bissextile");};

printf(" \n nombre de jours depuis le debut de l annee : %d",jours);


    }

double puissance(double x, int n)
    {
        printf("\n //// TP 3.1 et 3.2 //// \n \n");
double resultat;
int i;

  /*  printf("\n Entrez X : ");
    scanf("%d",&x);
    printf("\n Entrez N : ");
    scanf("%d",&n);
*/
resultat = x;
for (i=0;i<n-1;i++)
{
    resultat = resultat*x;
};

    return resultat;
    }

void hypothenuse()
{

printf("\n //// TP 4.1 //// \n \n");

float a,b,t;

printf("saisir longueur a:");
scanf ("%f",&a);
printf("\n saisir longueur b:");
scanf("%f",&b);

a= a*a;
b= b*b;
t= a+b;

printf("\n longueur hypothenuse = %2f",sqrt(t));


}

void delta()

{
printf("\n //// TP 4.2 //// \n \n");

float a,b,c,delta,x1,x2,bcarre,res;

printf("\n saisir a: ");
scanf("%f",&a);
printf("\n saisir b: ");
scanf("%f",&b);
printf("\n saisir c: ");
scanf("%f",&c);

bcarre=b*b;
delta=bcarre-(4*a*c);

printf(" \n delta = %.2f", delta);

if(delta==0)
{
    res=(-b/(2*a));
    printf(" \n delta=0 , x= %.2f",res);
}
else if(delta>0)
{
    x1=-b+sqrt(delta);
    x1= x1/(2*a);
    x2=-b-sqrt(delta);
    x2= x2/(2*a);
    printf(" \n delta superieur a 0 x1= %.2f et x2= %.2f",x1,x2 );
}
else
{
    printf(" \n delta inferieur a 0 = aucune racine. ");
}
}

void ordonnertab(int tab[],int tailletab)
{
    int i,b=0,a=0,j=0;

    while (j<200){
    for (i=0; i < tailletab-1 ; i++)
    { if (tab[i]>tab[i+1])
    {
        a=tab[i];
        b=tab[i+1];
        tab[i]=b;
        tab[i+1]=a;
        //printf (" %d\n", tab[i]);
    }
    }
    j++;    }

    i=0;
    for (i=0; i < tailletab ; i++)
    {
            printf (" %d\n", tab[i]);
    }


}

void maxtableau(int tableau[],int tailletableau, int valeurmax)
{
    int i;
    for (i=0; i < tailletableau ; i++)
    {
        if (tableau[i]>=valeurmax)
        {
            tableau[i]=0;
            printf (" %d\n", tableau[i]);
        }
else {printf (" %d\n", tableau[i]);}

    }
}

void copie(int tableauoriginal[], int tableaucopie[],int tailletableau)
{
    int i;
    for (i=0; i < tailletableau ; i++)
    {
        tableaucopie[i]=tableauoriginal[i];
        printf (" %d\t", tableaucopie[i]);
        printf (" %d\n", tableauoriginal[i]);
    }
    ;
}

double moyennetableau(int tableau[], int tailletableau)
{
    int i;
    double resultat=0;
    for (i=0; i < tailletableau ; i++)
    {
        resultat = resultat + tableau[i];
        printf (" %f\n", resultat);
    }

    resultat = resultat / tailletableau;
    printf (" \n %f\n", resultat);


    return 0;

}

int sommetableau(int tableau[], int tailletableau)
{
    int i, resultat=0;
    for (i=0; i < tailletableau ; i++)
    {
        resultat = resultat + tableau[i];
        printf (" %d\n", resultat);
    }
    return 0;
}

void affichertableau(int tableau[], int tailletableau)
{
    int i;
    for (i=0; i < tailletableau ; i++)
    {
        printf (" %d\n", tableau [i]);
    }
}

void decoupeMinutes(int* h, int* m)
{
    int heures = 0; int minutes = 90;

decoupeMinutes(&heures, &minutes);
printf("%d heures et %d minutes \n", heures, minutes);
printf("%p heures et %p minutes adresse hexa\n", &heures, &minutes);
printf("%d heures et %d minutes adresse decimale\n", &heures, &minutes);
    *h = *m / 60;
    *m = *m % 60;
}



void nombremystere()
{
    int i = 0,nombre,gagne = 0,nombreMystere;
    const int MAX = 100, MIN = 1 ;
    int continuer = 1, mode;
    srand(time(NULL));
    nombreMystere =(rand() % ( MAX - MIN + 1)) + MIN;

    printf( "MODE DE JEU \n 1 joueur taper 1 \n 2 joueurs taper 2 ");
    scanf("%d",&mode);

    switch (mode)

    {
    case 1:

do
    {


    while (gagne == 0)
    {
       printf("Trouvez le nombre mystere entre 1 et 100 \n\n");
    scanf("%d",&nombre);
    i++;

    if (nombre < nombreMystere)
    {
        printf(" \n plus grand \n");

    }
    else if (nombre > nombreMystere)
    {
        printf(" \n plus petit \n ");


    }
    else {printf(" \n Vous avez gagne en %d coups!!!! \n ",i);
        gagne++;
    }
    }
gagne = 0 ;
i = 0 ;
printf(" taper 1 pour continuer et 0 pour arreter ");
scanf("%d",&continuer);
    }
while (continuer==1);
break;
case 2:
    do
    {
        printf(" Joueur 1 Entrez un nombre mystere entre 1 et 100 \n\n");
       scanf("%d", &nombreMystere);
    while (gagne == 0)
        {
            printf("Joueur 2 tenter de trouver le nombre mystere \n\n");
            scanf("%d",&nombre);
            i++;
            if (nombre < nombreMystere)
            {
                printf(" \n plus grand \n");
            }
                else if (nombre > nombreMystere)
                {
                    printf(" \n plus petit \n ");
                }
        else{
            printf(" \n Vous avez gagne en %d coups!!!! \n ",i);
            gagne++;
            }
        }
gagne = 0 ;
i = 0 ;
printf(" taper 1 pour continuer et 0 pour arreter ");
scanf("%d",&continuer);
    }
while (continuer==1);
break;
}

double aireRectangle(double largeur, double hauteur)
{
    return largeur * hauteur;
}


    return 0;
}
