//Sieve of Eratosthenes algorithm to find prime numbers..
#include<stdio.h>
int main(int argc,char *argv[])
	{
	if(argc<2)
		printf("No argument passed.. \n");
	else 
		{
		//n is the upper limit of prime numbers
		//sample input : ./a.out 10
		//sample output: 2 3 5 7
		int n,i,k,j;
		n=atoi(argv[1]);
		int number_status[(n/32) +1];
		//numarray initialized to 0.
		for(i=0;i<=n/32;i++)
			number_status[i/32]=0;
		//i is initialized to first prime that is 2.
		i=2;
		for(;i<=n;i++)
			{
			//condition inside if becomes true, if i is a prime number. 
			//for example, if i=10, then number_status[10/32] & (1<<10) 
			//becomes zero. That means 10 th bit of number_status[0] is 0,
			//ie it is not marked.
			if(((number_status[i/32]) & (1<<i))==0)
				{
				//print i as prime number. and mark its corresponding 
				//multiples less than n.
				printf(" %d ", i);
				j=2*i;k=3;
				for(;j<=n;j=i*k,k++)
					number_status[j/32] |= 1<<j;
				}
			}
		printf(" \n");
		}
	}
