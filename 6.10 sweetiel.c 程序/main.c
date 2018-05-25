//
//  main.c
//  6.10 sweetiel.c 程序
//
//  Created by Affee on 2018/4/10.
//  Copyright © 2018年 affee. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    const int NUMBER = 22;
    int count = 2;
    while (count <= NUMBER) {
        printf("Be your Valentine! %4d\n",count);
        count++;
        printf("Be your Valentine! %8d\n",count);
    }
    
    return 0;
}
