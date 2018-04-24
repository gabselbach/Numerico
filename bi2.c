#include <stdio.h>
#include <math.h>
/*
e = 0,001
a = 3
b = 4
fx= e⁻x (32sin(x) - 0.5 cos(x))
11 interações
*/
double calc(double num){
	double retorno = exp(-num) * ((32*sin(num) - 0.5*cos(num)));
	return retorno;
}
int main()
{
	int k=1;
	double  a,b,e,c,fa,fb,fc,r;
	   printf("Digite a precisão requerida: \n");
   scanf("%lf",&e);

   printf("Digite o intervalo onde deve se buscar a raiz (ex. [0;5] = digite 0 5): \n");
   scanf("%lf %lf",&a,&b);

	r = b-a;
	while( r > e){
		c =  (a+b)/2;
		fa = calc(a);
		fb = calc(b);
		fc=calc(c);
		printf("### tabela ###\n");
		printf("a| b | f(a) | f(b)| c | f(c)| k\n");
		printf(" %lf| %lf | %lf | %lf| %lf | %lf| %d | %lf\n", a,b,fa,fb,c,fc,k,r);
		if((fc >0 && fa<0) || fc<0 && fa>0){
			b = c;
		}else{
			a = c;
		}
		
		k++;
		r = b-a;
	}
}