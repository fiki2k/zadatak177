// Program treba nabrojat koliko puta se pojavljuje zadani broj u broju.

#include <stdio.h>

int main()
{
    long int br,tbr,digit,brojac;
    int rem;

    printf("Unesi neki broj: ");
    scanf("%ld",&br);
    printf("\nUnesi broj koji trazis: ");
    scanf("%ld",&digit);

    brojac=0;
    tbr=br;

    while(tbr>0)
    {
        rem=tbr%10;
        if(rem==digit)
            brojac++;
        tbr/=10;
    }

    printf("\nUkupno pojavljivanje broja [ %ld ] u broju [ %ld ] je : [ %ld ].\n",digit,br,brojac);

    return 0;
}
