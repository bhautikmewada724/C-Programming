//4.Find Max, Min, Sum, Avg. of given numbers from an array.

#include <stdio.h>
int main()
{
     int a[100],i,sum=0,max,min,n;
     float avg;
     printf("Enter N Numbers:\n");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
          scanf("%d",&a[i]);
          sum=sum+a[i];
     }
     printf("Sum of Array Elements = %d\n",sum);
     avg=sum/n;
     printf("Average of Elements= %f\n",avg);
     max=a[0];
     for(i=0;i<n;i++)
          if(a[i]>max)
               max=a[i];
     printf("Maximum Element= %d\n",max);
     min=a[0];
     for(i=0;i<n;i++)
          if(a[i]<min)
               min=a[i];
     printf("Minimum Element= %d",min);
     return 0;
}
