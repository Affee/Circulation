//
//  main.c
//  6.13 逗号运算符 postage.c 程序
//
//  Created by Affee on 2018/4/10.
//  Copyright © 2018年 affee. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    const int FIRST_OZ = 46;
    const int NEXT_OZ = 20;
    int ounces,cost;
    printf("ounces cost\n");
    for (ounces = 1,cost = FIRST_OZ; ounces <= 16; ounces++,cost += NEXT_OZ) {
        printf("%5d  $%4.3f\n",ounces,cost/100.0);
    }
    //基友的啊
    return 0;
}
