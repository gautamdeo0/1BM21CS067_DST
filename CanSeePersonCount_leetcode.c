int*CanSeePersonCount(int*a, int n,int* returnSize)
int i,j, count = 0; 
int*S = (int*)malloc (n size of (int)); 
Printf("%d", *returnsize);
 for (i= (*returnSize); i<n; i++)
{
Count =0;

for ( j = i + 1; j < n;j++) 
{ if(a[j]<a[j-1]) && (j-1!=1))
{
Continue;
}
if(a[i]<a[j])
Count++; 

}

S[i]=count;
printf("%d",s[i]);
}
return s;
}