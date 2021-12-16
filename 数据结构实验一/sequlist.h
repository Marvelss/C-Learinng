#include<stdio.h>
#include<stdlib.h>

#define MAXSIZE 100
typedef int datatype;
typedef struct {
    datatype a[MAXSIZE];
    int size;

}sequence_list;
/*��ʼ��˳���*/
void initseqlist(sequence_list* L)
{
    L->size = 0;
}
/*����˳���*/
void input(sequence_list* L)
{
    datatype x;
    initseqlist(L);
    //printf("������һ�����ݣ���0��Ϊ��������\n");
    scanf_s("%d", &x);
    while (x)
    {
        L->a[L->size++] = x;
        scanf_s("%d", &x);
    }
}
/*���ļ�����˳���*/
void inputfromfile(sequence_list* L, char* f)
{
    int i, x;
    FILE* fp = fopen(f, "r");
    L->size = 0;
    if (fp)
    {
        while (!feof(fp))
        {
            fscanf(fp, "%d", &L->a[L->size++]);
        }
        fclose(fp);
    }
}
/*���˳���*/
void print(sequence_list* L)
{
    int i;
    for (i = 0; i < L->size; i++)
    {
        printf("%5d", L->a[i]);
        if ((i + 1) % 10 == 0)
            printf("\n");
    }
    printf("\n");
}

