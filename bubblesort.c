#include <stdio.h>
long main()
{
    long data[100000];
	int i,n,step,temp;
    n=100000;  
    for(i=0;i<=n;++i)
    {
       data[i]= rand() * 100 + 1;
    }
    for(step=0;step<n-1;++step)
    for(i=0;i<n-step-1;++i)
    {
        if(data[i]>data[i+1])   /* To sort in descending order, change > to < in this line. */
        {
            temp=data[i];
            data[i]=data[i+1];
            data[i+1]=temp;
        }
    }
    printf("In ascending order: ");
    for(i=0;i<n;++i)
         printf("%d  ",data[i]);
         getche();
    return 0;
}

1-2018-


