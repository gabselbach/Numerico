#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
f(x) = cos(x)+2sin(x)+x²
f'(x) = -sin(x)+2cos(x)+2x
xo = 0
e = 0,001
*/
double func(double num){
	double retorno = cos(num) +(2*sin(num)+ pow(num,2));
	return retorno;
}
double funcd(double num){
	double retorno = -sin(num) +(2*cos(num)+ pow(num,2));
	return retorno;
}
int main()
{
	int k;
	double  x0,e,x1,f0,f1,fi,r,xbarra;
	   printf("Digite a precisão requerida: \n");
   scanf("%lf",&e);
   printf("Digite o valor de x0 \n");
   scanf("%lf",&x0);

		f0 = func(x0);
		if(abs(f0) <e ){
			xbarra = x0;
		}else{
			fi = funcd(x0);
			x1 = x0 - (f0/fi);
			f1 = func(x1);
			k=1;
			do{

				printf("x0 | x1 | f0| f0*| k \n");
				printf("%lf %lf %lf %lf %d\n",x0,x1,f0,fi,k );
				x0 = x1;
				k++;
				f0 = func(x0);
				fi = funcd(x0);
				x1 = x0 - (f0/fi);
				f1 = func(x1);
				printf("x0 | x1 | f0| f0*| f1| k \n");
				printf("%lf %lf %lf %lf %lf %d\n",x0,x1,f0,fi,f1,k );
				double r = (fabs(x1-x0));
				printf("%lf\n",r );
			}while((fabs(f1) > e) || (fabs(x1-x0) > e));
			xbarra = x1;
	}
	printf("valor do xbarra %lf\n",xbarra);
}
