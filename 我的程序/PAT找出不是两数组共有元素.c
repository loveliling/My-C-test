# include <stdio.h>
int main()
{   int m,n,i,j,k=0;
    int a[20];
while(scanf("%d",&m)!=EOF)
    {

    for(i=0;i<m;i++)
        scanf("%d",&a[i]);

    int b[20];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);

    int c[20];
    for(i=0;i<m;i++)
   {

   for(j=0;j<n;j++)
        {
        if (a[i]==b[j])
           break;
           }
    if(j>=n)
        {
        c[k]=a[i];
       k++;
    }
}




for(i=0;i<n;i++)
   {

    for(j=0;j<m;j++)

        {if(b[i]==a[j])
            break;
    }
       if(j>=m)
        {c[k]=b[i];
        k++;
        }
    }

printf("%d",c[0]);
 for(i=1;i<k;i++)
 {for(j=0;j<i;j++)

     {if(c[i]=c[j])
        break;}
       if(j>=i)
        printf("%d",c[i]);

 }
}
return 0;
}




