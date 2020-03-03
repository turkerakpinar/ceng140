#include <stdio.h>

int main ()
{
    int task;
    
    scanf("%d", &task);

    if(task == 1) 
    {
        int n, i;
        long double initial, rate_e, rate_d;
        
        scanf("%Lf %Lf %Lf", &initial, &rate_e, &rate_d);
        scanf(" %d", &n);
        for (i = 0 ; i < n; i++) {
            char t_trans, currency;
            long double amount;
            scanf(" %c %c %Lf ", &t_trans, &currency, &amount);
            
            if (t_trans=='D' && currency == 'E'){
            initial += (amount*rate_e);}
            else if (t_trans=='D' && currency == 'D'){
            initial += (amount*rate_d);}
            else if (t_trans=='W' && currency == 'E'){
            initial -= (amount*rate_e);}
            else if (t_trans=='w' && currency == 'D'){
            initial -= (amount*rate_d);}
        }
         printf("Final balance: %.2Lf TL.",initial);
        
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
                printf("A-O result: %.2f points.", son);
            }    
            else if (ayt == 'C')
            {
                int a1 ,a2 ;
                float b1, b2, son;
                scanf(" %d %f %d %f", &a1, &b1, &a2, &b2);
                son =(a1*b1- (30-a1)*b1*zz)+(a2*b2- (30-a2)*b2*zz);
                printf("A-C result: %.2f points.", son);
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
