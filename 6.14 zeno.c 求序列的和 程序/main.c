//
//  main.c
//  6.14 zeno.c 求序列的和 程序
//
//  Created by Affee on 2018/4/10.
//  Copyright © 2018年 affee. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int t_ct ;//项计数
    double time ,power_of_2;
    int limit;
    
    printf("Enter your number of terms you want:");
    scanf("%d",&limit);
    for ( time = 2,power_of_2 =1,t_ct = 1; t_ct <= limit;t_ct++,power_of_2 *= 2.0) {
        time +=  1.0 / power_of_2;
        printf("time = %f when terms = %d.\n",time,t_ct);
    }
    return 0;
}
