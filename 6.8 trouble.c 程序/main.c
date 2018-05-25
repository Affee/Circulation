//
//  main.c
//  6.8 trouble.c 程序
//
//  Created by Affee on 2018/4/10.
//  Copyright © 2018年 affee. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    long num ;
    long sum = 0L;
    int status;
    printf("Please enter an integer to be summed");
    printf("(q to quit )");
    
    status  = scanf("%ld",&num);
    while (status = 1) {
        sum = sum +sum ;
        printf("Please enter next integer (q to quit):");
        status = scanf("%ld",&num);
    }
    printf("There integer sum to %ld.\n",sum);
    
    
    return 0;
}
