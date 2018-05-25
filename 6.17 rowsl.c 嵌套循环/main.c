//
//  main.c
//  6.17 rowsl.c 嵌套循环
//
//  Created by Affee on 2018/4/13.
//  Copyright © 2018年 affee. All rights reserved.
//

#include <stdio.h>
#define PAR 72
#define SIZE 10
int main(int argc, const char * argv[]) {
    int index,score[SIZE];
    int sum = 0;
    float average;
    
    printf("Enter %d golf scores:\n",SIZE);
    for (index = 0; index <SIZE; index++)
        scanf("%d",&score[index]);//读取10个分数
    printf("The scores read in are as follows:\n");
    for (index = 0; index < SIZE; index++) {
        printf("%5d",score[index]);
        printf("\n");
    }
    for (index = 0 ; index <SIZE; index++) {
        sum += score[index];
        average = (float)sum/SIZE;
        printf("Sum of scores = %d,average = %.2f\n",sum,average);
        printf("That is a handicap of %.0f.\n",average - PAR);
    }
    
    return 0;
}
