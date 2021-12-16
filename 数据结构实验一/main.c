#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "sequlist.h"
void  inter(sequence_list* la, sequence_list* lb, sequence_list* lc)
{
    int i, j, k;
    k = 0;
    for (i = 0; i < la->size; i++)
    {
        j = 0;
        while (j < lb->size && la->a[i] != lb->a[j])
            j++;
        if (j < lb->size)
            lc->a[k++] = la->a[i];
    }
    lc->size = k;
}
int main()
{
    sequence_list la, lb, lc;
    printf("输入表1:");
    input(&la);
    printf("输入表2:");
    input(&lb);
    print(&la);
    print(&lb);
    inter(&la, &lb, &lc);
    print(&lc);
    return 0;
}