#include <stdio.h>
#include <math.h>
double calc(double num){
	double retorno = pow(num,3)-3;
	return retorno;
}
int main()
{
	int k=1;
	double  a,b,e,c,fa,fb,fc;
   scanf("%lf",&e);
   scanf("%lf %lf",&a,&b);

	while( (b-a)>= e){
		c =  (a+b)/2;
		fa = calc(a);
		fb = calc(b);
		fc=calc(c);
		printf("a| b | f(a) | f(b)| c | f(c)| k\n");
		printf(" %lf| %lf | %lf | %lf| %lf | %lf| %d\n", a,b,fa,fb,c,fc,k);
		if((fa*fc > 0)){
			a = c;
		}else{
			a = c;
		}
		k++;
	}
	printf("a| b | f(a) | f(b)| c | f(c)| k\n");
		printf(" %lf| %lf | %lf | %lf| %lf | %lf| %d\n", a,b,fa,fb,c,fc,k);
}