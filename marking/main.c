//
//  main.c
//  marking
//
//  Created by 20161104569 on 18/6/25.
//  Copyright © 2018年 20161104569. All rights reserved.
//

#include <stdio.h>
#define N 4
void main()
{
    int a[N]={0};
    int i;
    int max,min,sum;
    sum=0;
    for(i=0;i<N;i++)
    {
        printf("请输入裁判要给的分数:");
        scanf("%d",&a[i]);
        if(a[i]<0||a[i]>100)
        {
            printf("输入有误,请重新输入:");
            scanf("%d",&a[i]);
        }
    }
    min=a[0];
    max=a[0];
    for(i=0;i<N;i++)
    {
        if(min>a[i])
            min=a[i];
        if(max<a[i])
        max=a[i];
        sum=sum+a[i];
        
    }
    printf("该选手的平均分为: %d",(sum-max-min)/(N-2));
}

