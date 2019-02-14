#include<stdio.h>
#define MAX 300000
int temp[MAX];
void mergesort(int Array[],int indices[],int first,int last)
{
    if(first==last) return;
    int middle=(first+last)/2;
    mergesort(Array,indices,first,middle);
    mergesort(Array,indices,middle+1,last);
    int i,j,k;
    for(i=first,j=first,k=middle+1;i<=last;i++)
    {
        if(j==middle+1) temp[i]=indices[k++];
        else if(k==last+1) temp[i]=indices[j++];
        else if(Array[indices[k]]<Array[indices[j]]) temp[i]=indices[k++];
        else temp[i]=indices[j++];
    }
    for(i=first;i<=last;i++)
    {
        indices[i]=temp[i];
    }
}
int main()
{
    int k,n,t,d,i,j,x=0,m,cheepest_dish=0;
    long long int sum=0,element;
    scanf("%d",&n);
    int a[n],c[n],indices[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        indices[i]=i;
    }
    mergesort(a,indices,0,n-1);
    for(i=0;i<n-i-1;i++)
    {
        element=a[indices[i]]+a[indices[n-i-1]];
        sum=sum+element*element;
    }
    printf("%lld",sum);
    return 0;
}