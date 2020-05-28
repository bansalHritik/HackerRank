#include<stdio.h>
int main()
{
    int noc,ch=1,pl,a[1000],fq,tq,prob_rem,k,count= 0,page = 0,i;
     scanf("%d%d",&noc,&pl);
     for(i=0;i<noc;i++)
        scanf("%d",&a[i]);
     while(ch<=noc)
     {
         fq = 1;
         if(a[ch-1]<pl)
         tq = a[ch-1];
         else
            tq= pl;
         printf("\nChapter is %d\n",ch);
         prob_rem = a[ch-1];
         printf("Problem in Chapter is %d\n",prob_rem);
         while(prob_rem > 0)
         {
             page++;
             printf("\t\tOn Page %d\n",page);
             printf("From Prob %d To Prob %d\n",fq,tq);
             for(i=fq;i<=tq;i++)
             {
                if(page == i)
                {
                  count++;
                  printf("Yes We Got It At Page %d And Problem No %d\n",page,i);
                }
                else
                    printf("Nhi Mila\n");
             }

             prob_rem = prob_rem - pl;
             printf("Problem Left are %d\n",prob_rem);
            if(prob_rem>pl)
                    {
                    fq = tq+1;
                    tq= tq+pl;
                    }
            else
                    {
                    fq = tq+1;
                    tq= tq+prob_rem;
                    }
        }
         ch = ch+1;
     }
     printf("\n%d",count);
     return 0;
}
