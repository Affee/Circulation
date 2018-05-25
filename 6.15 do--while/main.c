//
//  main.c
//  6.15 do--while
//
//  Created by Affee on 2018/4/10.
//  Copyright © 2018年 affee. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    const int secret_code = 13;
    int code_entered;
    do{
        printf("To enter the BBS therapy club,\n");
        printf("please enter the secrect code number:");
        scanf("%d",&code_entered);
    }while(code_entered != secret_code);
        printf("终于过关了");
        printf("Congratulations! you are a sb!\n");
    
    
    return 0;
}
