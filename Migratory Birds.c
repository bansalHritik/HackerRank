void main()
{
    int i,j,a[100],count=0,n,high;
    int c[6]={0,0,0,0,0,0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<6;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==a[j])
                c[i]=c[i]+1;
        }
    }
    high=c[0];
    for(i=1;i<6;i++)
    {
        if(high<c[i])
            high=c[i];
    }
    for(i=0;i<6;i++)
    {
        if(high==c[i])
        {
            count=i;
            break;
        }
    }
    printf("\n%d",count);
}
