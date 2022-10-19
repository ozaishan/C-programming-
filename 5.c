#include<stdio.h>
#include<conio.h>

void sl();
void ss();
void star();
void main()
{
        int i, j, n=17;
        
for(i=1; i<n; i++)
{
        if(i==8)
                 star();

                          else if(i==n)
                                  sl();
                                           else
                                                    ss();
}
// 2nd to 4th line code
for(j=0; j<3; j++)
{
       for(i=1;i<n;i++)
       {
               if(i==7 || i==8 || i==9)
                       star();
                              else if(i==n)
                                      sl();
                                              else
                                                     ss();
       }
}
// 5th line
for(i=1; i<=n; i++)
{
        if(i==5 ||i==7|| i== 8|| i==9)
                star();
                        else if(i==n)
                                sl();
                                else
                                        ss();
}
// 6th line code
for(i=1; i<= n ; i++)
{
       if(i== 2 || i==4 || i== 11|| i==5)
       star();
                       else if(i== 6 ||i==7 || i==8 || i==9)
                              star();
                              else if(i==n)
                              sl();
                              else
                                      ss();
                                      //   ==7;i== 811i==9)
}
// 7th line code
for(i=0;i<n;i++)
{
        if(i== 13||i== 14||i== 16)
                 ss();
                 else if(i==n)
                          sl();
                                  else
                                           star();
}
// 8th line code
for(i=1;i<=n;i++)
{
        if(i==13)
                ss();
                else if(i==n)
                        star();
                        else
                                star();
}
// 9th line code
sl();
for(i=1;i<n;i++)
{
       if(i==n)
              sl();
              else
              star();
}
// 10th line code
for(i=1;i<=14;i++)
{
      star();
      if(i== 14)
      sl();
}
// 11th line code
for(i=1;i<=14;i++)
{
       if(i== 14)
               sl();
               else
               star();
}
// 12th line code
for(i=1;i<=13;i++)
{
       if(i== 13)
               sl();
               else 
               star();
}
// 13th line code to 16th line code
for(j=0;j<4;j++)
{
       for(i=1;i<=13;i++)
       {
               if(i== 13)
               ss();
                               else
                               star();
        }sl();
getch();
}
}
// single line code
void sl()
{
       printf("\n");
}
// single space code
void ss()
{
       printf(" ");
}
// single star code
void star()
{
       printf("*");
}
                
                      
                    