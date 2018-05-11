#include <stdio.h>
#include <math.h>
void eliminacao(int v[3][3], int n, int result[3],int x[3] ){
int k,i,m,j,soma;
	for (k = 0; k <(n-1) ; ++k)
	{
		for ( i = (k+1); i < n; ++i)
		{
			m = (v[i][k]) / (v[k][k]);
			v[i][k]=0;
			for (j = (k+1); j < n; ++j)
			{
				v[i][j]= v[i][j] - m*(v[k][j]);
			}
			result[i] = result[i] -( m * (result[k]));
		}
	}
	x[n] = result[n] /v[n][n];
	for ( i =(n-1); i >= 0; --i)
	{
		soma =0;
		for (j= (i+1); j < n; ++j)
		{
			soma = soma + (v[i][j] * x[j]);
		}
		x[i]= (result[i] - soma) /v[i][i];
	}

}
int main(void){
	int matriz[3][3],i,j,result[3],x[3];
	printf("Digite os valores da matriz sem o resultado\n");
	for (i = 0; i < 3; ++i)
	{
		for (j= 0; j < 3; ++j)
		{
			scanf("%d",&matriz[i][j]);
		}
	}

	printf("digite só  o valor dos resultado de cada equação da primeira ate a ultima\n");

	for (i = 0; i < 3; ++i)
	{
		scanf("%d",&result[i]);
	}
	printf("###Matriz Inicial#####\n");
	for (i = 0; i < 3; ++i)
	{
		for (j= 0; j < 3; ++j)
		{
			printf(" %d ",matriz[i][j]);
		}
		printf("\n");
	}
	printf("Valores de Resultado B:\n");
	for (j= 0; j < 3; ++j)
		{
			printf(" %d ",result[j]);
		}
		printf("\n");
		eliminacao(matriz,3,result,x);
	printf("###Matriz Final #####\n");
	for (i = 0; i < 3; ++i)
	{
		for (j= 0; j < 3; ++j)
		{
			printf(" %d ",matriz[i][j]);
		}
		printf("\n");
	}
	printf("Valores de Resultado B:\n");
	for (j= 0; j < 3; ++j)
		{
			printf(" %d ",result[j]);
		}
		printf("\n");
		printf("Valores da incognita:\n");
	for (j= 0; j < 3; ++j)
		{
			printf(" %d ",x[j]);
		}

}