#include <stdio.h>
#include <math.h>
/*
f(x) = cos(x)+2sin(x)+x²
f'(x) = -sin(x)+2cos(x)+2x
xo = 0
e = 0,001
*/
double func(double num){
	double retorno = cos(num) +(2*sin(num)+ pow(num,2);
	return retorno;
}
double funcd(double num){
	double retorno = -sin(num) +(2*cos(num)+ pow(num,2);
	return retorno;
}
int main()
{
	int k;
	double  x0,e,k,x1;
,f0,f1,f0*,r,xbarra;
	   printf("Digite a precisão requerida: \n");
   scanf("%lf",&e);
   printf("Digite o valor de x0 \n");
   scanf("%lf",&x0);
	f0 = func(x0);
	if(abs(f0) < e )
		xbarra = x0;
	else{
		k=1;
		f0* = funcd(x0);
		x1 = x0 - (f0/f0*);
		while (abs(f1) > e || abs(x1-x0) >e){
			f0* = funcd(x0);
			x1 = x0 - (f0/f0*);
			printf("x0 | x1 | f0| f0*| k \n");
			printf("%lf,%lf,\n", );
			x0 = x1;
			k++;
		}
		xbarra = x1;
	}
	
}
