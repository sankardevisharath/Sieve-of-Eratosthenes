//Sieve of Eratosthenes algorithm to find prime numbers..
#include<stdio.h>
int main(int argc,char *argv[])
	{
	if(argc<2)
		printf(" Enter argument \n");
	else 
		{
		int n,i,k,j;
		n=atoi(argv[1]);
		printf(" %d \t", n);
		int numarray[(n/32) +1];
		for(i=0;i<=n/32;i++)
			numarray[i/32]=0;
		printf("array initialized\n");
		i=2;
		for(;i<=n;i++)
			{
			if(((numarray[i/32]) & (1<<i))==0)
				{
				printf(" %d ", i);
				j=2*i;k=3;
				for(;j<=n;j=i*k,k++)
					numarray[j/32] |= 1<<j;
				}
			}
		printf(" \n");
		}
	}
