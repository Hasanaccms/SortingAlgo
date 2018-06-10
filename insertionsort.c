#include<stdio.h>
long main()
{
	long data[500000];
	int n,temp,i,j;
	n=500000;
	for(i=0;i<n;i++)
	{
		data[i]=rand() * 100 + 1;
	}
	for(i=1;i<n;i++)
	{
		temp = data[i];
		j=i-1;
		while(temp<data[j] && j>=0)
/*To sort elements in descending order, change temp<data[j] to temp>data[j] in above line.*/
		{
			data[j+1] = data[j];
			--j;
		}
		data[j+1]=temp;
	}
	printf("In ascending order: ");
	for(i=0; i<n; i++)
		printf("%d\t",data[i]);
		getche();
    return 0;
}

