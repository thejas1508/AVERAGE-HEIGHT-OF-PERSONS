#include <stdio.h> 
#include <stdlib.h> 
void main()
{
int i,n,sum=0,count=0,height[10]; 
float Avg;
printf ("Enter the Number of persons:"); 
scanf ("%d", &n);
printf ("\n Enter the Height of Each person in cm\n"); 
for (i=0;i<n;i++)
{
  scanf("%d",&height [i]); 
  sum=sum + height[i];
}
Avg = (float)sum/n; 
for (i=0;i<n;i++)
if (height[i] > Avg) 
    count++;
printf("\n Average Height of %d persons is : %0.2f\n",n,Avg); 
printf("\n the Number of persons above Average Height : %d",count);
}
