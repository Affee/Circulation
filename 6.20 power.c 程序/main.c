//
//  main.c
//  6.20 power.c 程序
//
//  Created by Affee on 2018/4/13.
//  Copyright © 2018年 affee. All rights reserved.
//
//计算数的整数幂

#include <stdio.h>
double power(double n ,int p);
int main(int argc, const char * argv[]) {
    double x, xpow;
    int exp;
    
    printf("Enter a number and the positive integer power");
    printf("to which\nthe number will be raised.enter q");
    printf("to quit.\n");
    while (scanf("%lf%d",&x,&exp) == 2) {
        xpow = power(x,exp);
        printf("%.3g to the power %d is %.5g\n",x,exp,xpow);
        printf("Enter next pair of num or q to quit.\n");
    }
    printf("Hope you enjoyed this power trip --- bye");

    return 0;
}

double power(double n,int p)
{
    double pow = 1;
    int i ;
    for (i = 1; i <= p ; i++) {
        pow  *= n;
    }
    return pow;
}
