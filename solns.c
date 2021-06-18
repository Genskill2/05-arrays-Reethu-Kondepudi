/* Enter your solutions in this file */
#include <stdio.h>
#include <math.h>


int max(int arr[], int n)

{
int i;

int ele=arr[0];

for(i=0;i<n;i++)
 {
  while (ele<arr[i])
   {
    ele=arr[i];
   }
 }
 printf("%d",ele);
 return ele;
}



int min(int arr[], int n)
{
int i;
int ele=arr[0];
for(i=0;i<n;i++)
 {
  while (ele>arr[i])
   {
    ele=arr[i];
   }
 }
 printf("%d",ele);
 return ele;
}


float average(int arr[], int n)
{
int i;
int ele=0;
for(i=0;i<n;i++)
 {
 ele=ele+arr[i];
 }
float avg;
avg=ele/n;
return avg;
}


int mode(int a[], int n)
{
int maxValue = 0, maxCount = 0, i, j;

   for (i = 0; i < n; ++i) 
    {
      int count = 0;
      
      for (j = 0; j < n; ++j) 
       {
         if (a[j] == a[i])
         ++count;
       }
      
      if (count > maxCount) 
       {
         maxCount = count;
         maxValue = a[i];
       }
    }

   return maxValue;
}


int factors(int n, int arr[])
{
int i,j;
int index=0;

for (i=0;i<n;i++)
{
  while(n % 2 == 0)
    { 
    arr[index]=2;
    index++;
    n = n/2;
    }
}

for(j=3; j <= sqrt(n); j=j+2)
  {       
    while(n % j == 0) 
       {            
          arr[index]=j;
          index++;
          n = n/j;
        }
  } 
  if(n > 2) 
    {
    arr[index]=n;
    }
return index+1;
}
