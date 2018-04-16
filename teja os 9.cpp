#include<stdio.h>
 
int main()
{
    int a[30],b[30],c[30],d[30],i,j,n,t=0,p,temp,m;
    float avg_wt,avg_tat; 
    printf("\nEnter five positive integers\n");
    for(i=0;i<5;i++)
    {
    	x:
        printf("p%d:",i+1);
        scanf("%d",&a[i]);
        if(a[i]>0)
        {
        	b[i]=i+1;
        }
        else
        {
        	printf("enterd is negative number\n");
        	goto x;
		}
          
    }
    printf("press 0 for the continue for the shortest job fist and 1 for the exit \n");
    scanf("%d",&m);
    if(m==0)
    {
    for(i=0;i<5;i++)
    {
        p=i;
        for(j=i+1;j<5;j++)
        {
            if(a[j]<a[p])
                p=j;
        }
 
        temp=a[i];
        a[i]=a[p];
        a[p]=temp;
 
        temp=b[i];
        b[i]=b[p];
        b[p]=temp;
    }
 
    c[0]=0;          
    for(i=1;i<5;i++)
    {
        c[i]=0;
        for(j=0;j<i;j++)
            c[i]+=a[j];
 
        t+=c[i];
    }
 
    avg_wt=(float)t/5;
    t=0;
 
    printf("\nProcess\t    Burst Time    \tWaiting Time\tTurnaround Time");
    for(i=0;i<5;i++)
    {
        d[i]=a[i]+c[i];
        t+=d[i];
        printf("\np%d\t\t  %d\t\t    %d\t\t\t%d",b[i],a[i],c[i],d[i]);
    }
 
    avg_tat=(float)t/5;
    printf("\n\nAverage Waiting Time=%f",avg_wt);
    printf("\nAverage Turnaround Time=%f\n",avg_tat);
}
else
    {
    	printf("you have selected to exit from the programm \n");
	}
}
