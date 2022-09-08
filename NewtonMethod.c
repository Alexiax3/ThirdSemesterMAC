// Newton
// how to calculate a ecuation solution using newton method
#include <stdio.h>
#include <math.h>
//a in f(a)

double funcion(double x){
    x=((exp(x))/3)+2*pow(x,4.0)*cos(x)-0.8;
    return x;
}

//derivative of a
double derivada(double x){
    x=((exp(x))/3)-(2*pow(x,4.0)*sin(x))+(8*pow(x,3.0)*cos(x));
    return x;
}


int main()
{
    double a,error;
    int i;
    
    printf("\n\t Which is your first digit?  :");
    scanf ("%lf", &a);
    
    for (i=0; i<10; i++){
        a=a-(funcion(a)/derivada(a));
        if (a<0){
           error=0.8362488607567+ a; 
        }
        if(0<a){
            error=0.8362488607567- a;
        }
        
        printf("\n  |  %d  | %.30lf     |%.30lf",i,a, error);
    }
    return 0;
}

