#include <stdio.h>

int main ()
{
    int task;
    long double ana;
    float dolar, euro;
    int n ;
    char ex, tur;
    float miktar;
    scanf("%d", &task);

    if(task == 1) 
    {
        
        scanf("%Lf %f %f", &ana, &euro, &dolar);
        scanf("%d", &n);
        while  (n>0)
        {
            
            scanf(" %c %c %f", &ex, &tur, &miktar);
            if (ex == 'D')
            {
                if (tur== 'E')
                {
                    ana += euro*miktar;
                }
                else if (tur == 'D')
                {
                    ana+= dolar*miktar;
                }
            }    
            else if (ex== 'W')
            {
                if (tur== 'E')
                {
                    ana -= euro*miktar;
                }
                else if (tur == 'D')
                {
                    ana-= dolar*miktar;
                }
                
            }
          n--;  
        }
       printf("Final balance: %.2Lf TL." , ana);
    }
    else if(task == 2) 
    {
        char test, ayt;
        float zz;
        scanf(" %c %c %f", &test, &ayt, &zz);
        if (test == 'T')
        {
            int a1 ,a2,a3, a4;
            float b1, b2, b3, b4, son;
            scanf(" %d %f %d %f %d %f %d %f", &a1, &b1, &a2, &b2, &a3, &b3, &a4, &b4);
            son =(a1*b1- (40-a1)*b1*zz)+(a2*b2- (40-a2)*b2*zz)+(a3*b3- (40-a3)*b3*zz)+(a4*b4- (40-a4)*b4*zz);
            printf("T result: %.2f points.", son);
            
        }
        else if (test== 'A')
        {
            if (ayt== 'O')
            {
                int a1 ,a2 ;
                float b1, b2, son;
                scanf(" %d %f %d %f", &a1, &b1, &a2, &b2);
                son =(a1*b1- (30-a1)*b1*zz)+(a2*b2- (30-a2)*b2*zz);
                printf("A-O result: %f points.", son);
            }    
            else if (ayt == 'C')
            {
                int a1 ,a2 ;
                float b1, b2, son;
                scanf(" %d %f %d %f", &a1, &b1, &a2, &b2);
                son =(a1*b1- (30-a1)*b1*zz)+(a2*b2- (30-a2)*b2*zz);
                printf("A-C result: %f points.", son);
            }
            else if (ayt== 'E')
            {
                 int a1 ,a2, a3, a4;
                 float b1, b2, b3, b4, son;
                 scanf(" %d %f %d %f %d %f %d %f", &a1, &b1, &a2, &b2, &a3, &b3, &a4, &b4);
                 son =(a1*b1- (30-a1)*b1*zz)+(a2*b2- (30-a2)*b2*zz)+(a3*b3- (30-a3)*b3*zz)+(a4*b4- (30-a4)*b4*zz);
                 printf("A-E result: %.2f points.", son);
            }
        }
        
    }

    return 0;
}
