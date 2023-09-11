#include "stdio.h"
#include "stdlib.h"

typedef struct Arr
{
    int* pBase; // 首地址
    int len; //长度
    int count; //有效元素的个数
} p, *s; // s->struct Arr *, p->struct Arr

void init_arr(s arr, int len)
{
    arr->pBase = (int*)malloc(sizeof(int) * len);
    if (arr->pBase == NULL)
    {
        printf("分配失败");
        exit(-1);
    }
    else
    {
        arr->len = len;
        arr->count = 0;
    }
    return; //只有函数的返回类型是void才能在结尾处添加"return;", 但这一步不是必须出现的。
}

bool is_empty(s arr)
{
    if (arr->count == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool is_full(s arr)
{
    if (arr->count == arr->len)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool append_arr(s arr, int val)
{
    if (is_full(arr))
    {
        return false;
    }
    else
    {
        arr->pBase[arr->count] = val;
        ++arr->count;
        return true;
    }
}

bool insert_arr(s arr, int pos, int val)
{
    if (is_full(arr))
    {
        return false;
    }
    else if (pos < 1 || pos > arr->count + 1)
    {
        return false;
    }
    else
    {
        for (int i = arr->count - 1; i >= pos - 1; i--)
        {
            arr->pBase[i + 1] = arr->pBase[i];
        }
        arr->pBase[pos - 1] = val;
        ++arr->count;
        return true;
    }
}

bool delete_arr(s arr, int pos, int* pVal)
{
    if (is_empty(arr))
    {
        return false;
    }
    else if (pos < 1 || pos > arr->count)
    {
        return false;
    }
    else
    {
        *pVal = arr->pBase[pos - 1];
        for (int i = pos; i < arr->count; i++)
        {
            arr->pBase[i - 1] = arr->pBase[i];
        }
        return true;
    }
}

void bubble_sort_arr(s arr)
{
    for (int i = 0; i <= arr->count - 2; i++)
    {
        for (int j = i + 1; j <= arr->count - 1; j++)
        {
            if (arr->pBase[i] > arr->pBase[j])
            {
                int t = arr->pBase[i];
                arr->pBase[i] = arr->pBase[j];
                arr->pBase[j] = t;
            }
        }
    }
    return;
}

void show_arr(s arr)
{
    if (is_empty(arr))
    {
        printf("数组为空");
    }
    else
    {
        for (int i = 0; i < arr->count; i++)
        {
            printf("%d ", arr->pBase[i]);
        }
    }
    return;
}

void inversion_arr(s arr)
{
    int i = 0, j = arr->count - 1, t;
    while (i < j)
    {
        t = arr->pBase[i];
        arr->pBase[i] = arr->pBase[j];
        arr->pBase[j] = t;
        ++i;
        --j;
    }
    return;
}

int main(void)
{
    p arr;
    init_arr(&arr, 6);
    append_arr(&arr, -1);
    append_arr(&arr, -3);
    append_arr(&arr, 344);
    append_arr(&arr, 55);
    append_arr(&arr, 5);
    insert_arr(&arr, 6, 99);
    bubble_sort_arr(&arr);
    show_arr(&arr);
    return 0;
}