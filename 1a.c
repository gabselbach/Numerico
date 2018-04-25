#include <stdio.h>
#include <math.h>
double calc(double num){
	double retorno;
	retorno = pow(num,2)-3;
	return retorno;
}
int main()
{
	int k=1;
	double  a,b,e,c,fa,fb,fc,r;
   scanf("%lf",&e);


   scanf("%lf %lf",&a,&b);

	r = b-a;
	while(r > e){
		c =  (a+b)/2;
		fa = calc(a);
		fb = calc(b);
		fc=calc(c);

		if(fc >0 && fa<0 || fc<0 && fa>0){
			b = c;
		}else{
			a = c;
		}
		printf("a| b | f(a) | f(b)| c | f(c)| k\n");
		printf(" %lf| %lf | %lf | %lf| %lf | %lf| %d | %lf\n", a,b,fa,fb,c,fc,k,r);
		k++;
		r = b-a;
	}
}