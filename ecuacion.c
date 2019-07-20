#include<stdio.h>
#include<math.h>

int discriminante (int a , int b , int c);
float xdelvertice (float a , float b);


int main(){

int a , b , c , disc ,xr , xi;
float  x1 , x2;

printf ("\t\t\tEcuacion De Segundo Grado\n");
printf ("\t\t\t_________________________\n");


do{
    printf ("Ingrese Un Numero A (> 0): \n");
    scanf ("%d", &a);
 }while(a==0);

printf ("Ingrese Un Numero B: \n");
scanf ("%d", &b);

printf ("Ingrese Un Numero C: \n");
scanf ("%d", &c);

disc = discriminante(a,b,c);
printf ("B^2 -(4*A*C) Es: %d \n ", disc);
 
if(disc>0.0){
    printf("\t\t\tLas dos raices son reales \n");
    x1=((-b+sqrt(disc))/(2*a));
    x2=((-b-sqrt(disc))/(2*a));

    printf("\n\t\t\tx1=%.2f   x2=%.2f\n", x1, x2);
}
else{
    if(disc==0.0){
        x1=(-b)/(2.0*a);
        printf("\n\t\t\tLa ecuacion solo tiene una raiz %.2f\n", x1);

    }
    else{
        xr=(-b/(2.0*a));
        xi=(sqrt(-disc)/(2.0*a));

        printf("\n\t\tLa raiz real es %.2f y la imaginaria es %.2f\n", xr, xi);

    }
}
        printf ("El X Del Vertice es %f: \t", xdelvertice(a,b));

printf("\n\n\t\t\t");
printf ("Presione Una Tecla Para Terminar");

char w = getchar();

}

int discriminante (int a , int b , int c){
   return ((b*b)-4*a*c);
}

float xdelvertice (float a , float b){
    return (-b/(2*a));
}