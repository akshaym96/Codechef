#include <stdio.h>
 
int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{   int n;
	 scanf("%d",&n);
	 int a[n],b[n],i;
	 for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	 for(i=0;i<n;i++)
	{  if(a[i]!=0)
	    b[i]=a[i]-1;
	    if(a[i]==0)
	    b[i]=0;
	}   
	int sum_b=0,sum_a=0;
	for(i=0;i<n;i++)
{	sum_b+=b[i];
    sum_a+=a[i];
}	
	if(sum_b<=100&&sum_b>=100-n&&sum_a<100+n)
	printf("YES\n");
	else
	printf("NO\n");
	    
	    
	    
	    
	    
	}
	return 0;
}
