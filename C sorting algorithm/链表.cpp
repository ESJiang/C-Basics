#include "stdio.h"
#include "stdlib.h"

typedef struct Node
{
	int data; // 数据域
	struct Node * pNext; //指针域
}node, *pnode; // node表示struct Node， pnode 等价于struct Node *

int length_list(pnode phead)
{
	pnode p = phead->pNext;
	int len = 0;
	while(p!=NULL)
	{
		++len;
		p = p->pNext;
	}
	return len;
}

bool is_empty(pnode phead)
{
	if(phead->pNext == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool is_full(pnode phead);

void sort_list(pnode phead)
{
	int i,j,t;
	pnode p,q;
	int len = length_list(phead);
	for(i = 0, p = phead->pNext; i < len-1; i++,p = p->pNext)
	{
		for(j = i + 1, q = p->pNext ; j < len; j++,q = q->pNext)
		{
			if(p->data>q->data)
			{
				t = p->data;
				p->data = q->data;
				q->data = t;
			}
		}
	}
	return;
}

pnode create_list()
{
	int len, val;
	pnode phead = (pnode)malloc(sizeof(node));
	if(phead == NULL)
	{
		printf("分配失败");
		exit(-1);
	}
	pnode ptail = phead;
	ptail->pNext = NULL;
	printf("请输入你需要的节点个数: len = ");
	scanf("%d", &len);
	for(int i = 0; i < len; i++)
	{
		printf("请输入第%d个节点的值: ", i+1);
		scanf("%d", &val);
		pnode pnew = (pnode)malloc(sizeof(node));
		if(pnew == NULL)
		{
			printf("分配失败");
			exit(-1);
		}
		pnew->data = val;
		ptail->pNext = pnew;
		pnew->pNext = NULL;
		ptail = pnew;
	}
	return phead;
}

void traverse_list(pnode phead)
{
	pnode p = phead->pNext;
	while(p!=NULL)
	{
		printf("%d ", p->data);
		p = p->pNext;
	}
	printf("\n");
}

int main(void)
{
	pnode phead = create_list();
	traverse_list(phead);
	sort_list(phead);
	traverse_list(phead);
	return 0;
}