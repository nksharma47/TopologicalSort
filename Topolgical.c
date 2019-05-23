#include <stdio.h>

int ind[10],flag[10];

int main(void) 
{
	int n,a[10][10],i,j,k,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
	    {
	        scanf("%d",&a[i][j]);
	    }
	}
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
	    {
	        ind[i] += a[j][i];
	    }
	}
	while(count<n)
	{
	    for(k=0;k<n;k++)
	    {
	        if(ind[k]==0 && flag[k]==0)
	        {
	            printf("%d ",k+1);
	            flag[k]=1;
	        
	        
    	        for(i=0;i<n;i++)
    	        {
    	            if(a[k][i]==1)
    	                ind[i]--;
    	        }
	        }
	    }
	    count++;
	}
	
	for(i=0;i<n;i++)
	{
	    if(ind[i] != 0)
	    {
	        printf("Not Possible\n");
	        break;
	    }
	}
	return 0;
}

