//
//  main.c
//  第6章 C控制语句：循环
//
//  Created by Affee on 2018/4/10.
//  Copyright © 2018年 affee. All rights reserved.
//

#include <stdio.h>
// 再次探索while循环
int main(int argc, const char * argv[]) {
    long num;
    long sum = 0L;/*把sum初始化为0*/
    int status;
    printf("Please enter an integer to be summed");
    printf("(q to quit):");
    status = scanf("%ld",&num);
    while (status == 1) {
        sum = sum +sum;
        printf("Please enter next integer(q to quit)");
        status = scanf("%ld",&sum);
    }
    printf("Those intergers sum to %ld\n",sum);
    return 0;
}
