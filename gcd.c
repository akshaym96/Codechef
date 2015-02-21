#include <stdio.h>
long int gcdf(long int a,long int b) {
 long  int r;
  while(b!=0){
    r = a % b;
    a = b;
    b = r;
  }
  return a;
}
int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{  int n,q;
	scanf("%d%d",&n,&q);
	long int a[n],i;
	for(i=1;i<=n;i++)
	scanf("%ld",&a[i]);
	while(q--)
	{  int l,r;
	  scanf("%d%d",&l,&r);
	    int d,e;
	    long int ans1,ans2,ans3;
	    
         for(d=1;d<l;d++)
         {    
             if(d+1<l)
             ans1=gcdf(a[d],a[d+1]);
             
         }
         
         for(e=r+1;e<=n;e++)
         {   
             if(e+1<=n)
             ans2=gcdf(a[e],a[e+1]);
             
         }
         ans3=gcdf(ans2,ans1);
         printf("%ld\n",ans3);
	
	    
	}
    
}
	return 0;
}


