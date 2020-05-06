#include<stdio.h>
main()
{
    int n,i,steps=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]==0 && a[i+2]==0)
        {
            steps++;
            i+=1;   
        }
        else if(a[i]==0 && a[i+1]==0)
        {
            steps++;
        }  

    }
    
    printf("%d",steps);


}
