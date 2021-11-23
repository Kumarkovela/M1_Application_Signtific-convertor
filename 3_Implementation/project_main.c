#include <stdio.h>
#include <string.h>

int main( )
{
     int u1, u2; 
     float c; 
     int a;
     scanf("%d %d %d", &u1, &u2, &a); 
     printf("%d\n",u1);
     printf("%d\n",u2);
     printf("%d\n",a);
     switch (u1) 
    { 
        case 1:

          switch (u2) 
          {
              case 1:
                 printf("%d", a);
                 break;
              case 2:
                 c=(float)a/10;
                printf("%f", c);
                break;
              case 3:
                 c=(float)a/1000;
                 printf("%f", c);
                 break;
              case 4:
                 c=(float)a/1000000;
                 printf("%f", c);
                 break;
              default:
                 printf("error");
                  break;
          }
          break;
     case 2:
           switch (u2)
           { 
             case 1:
                 c=(float)a*100;
                 printf("%d", c);
                 break;
             case 2:
                 c=a;
                printf("%f", c);
                break;
             case 3:
                 c=(float)a/100;
                 printf("%f", c);
                 break;
             case 4:
                 c=(float)a/100000;
                 printf("%f", c);
                 break;
             default:
                 printf("error");
           }
           break;
    }
 }

