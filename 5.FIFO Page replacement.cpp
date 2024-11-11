//5.Write the C Program for page replacement algorithm using FIFO

#include <stdio.h>
int main()
{
int pv[10], pf=0,i,j,s,pages,frames;
printf("\nEnter the number of Pages:\t");
scanf("%d", &pages);
printf("\nEnter page values:\n");
for(i=0;i<pages; i++)
{
   printf("Value No. [%d]:\t",i + 1);
   scanf("%d", &pv[i]);
}
printf("\n What are the total number of frames:\t");
scanf("%d", &frames);
int temp[frames];
for(i=0;i<frames;i++)
{
  temp[i]=-1;
}
for(i=0;i<pages;i++)
{
  s = 0;
  for(j=0;j<frames;j++)
   {
      if(pv[i]==temp[j])
         {
            s++;
            pf--;
         }
   }     
   pf++;
   if((pf <= frames) && (s == 0))
      {
        temp[i] = pv[i];
      }   
   else if(s == 0)
      {
        temp[(pf - 1) % frames] = pv[i];
      }
      printf("\n");
      for(j = 0; j < frames; j++)
       {     
         printf("%d\t", temp[j]);
       }
} 
printf("\nTotal Page Faults:\t%d\n", pf);
return 0;
}


