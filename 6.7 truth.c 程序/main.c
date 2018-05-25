//
//  main.c
//  6.7 truth.c 程序
//
//  Created by Affee on 2018/4/10.
//  Copyright © 2018年 affee. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
 
    int n = 3;
    while (n)
        printf("%2d is ture\n",n--);
        printf("%2d is false\n",n);
//-------------------- 分割
    n = -3;
    while (n)
        printf("%2d is ture\n",n++);
    printf("%2d is false\n",n);
    
    return 0;
}
