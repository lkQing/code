#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node* next;
}node, * linklist;//链表结点
void ins_list(linklist l, node* p, int e)
{
	node* pnew;
	pnew = (node*)malloc(sizeof(node));
	if (pnew != NULL)
	{
		pnew->data = e;
		pnew->next = p->next;
		p->next = pnew;
	}
}//在单链表l中p所指向的结点之后插入值为e的结点
void dellist(linklist l, node* p)
{
	node* pre;
	pre = l->next;
	while (pre->next != p)
	{
		pre = pre->next;
	}
	pre->next = p->next;
	free(p);
}//删除单链表l中p所指向的结点
node* search_x(linklist l, int x)
{
	node* p;
	p = l->next;
	while (p)
	{
		if (p->data != x)
		{
			p = p->next;
		}
		else
		{
			break;
		}
	}
	if (p == NULL)
	{
		printf("无此结点");
	}
	return p;
}//在单链表l中找到值为x的结点
int listlength(linklist l)
{
	int count = 0;
	node* p;
	p = l->next;
	while (p)
	{
		p = p->next;
		count++;
	}
	return count;
}//获取单链表l的长度
linklist create_head()
{
	linklist l;
	node* pnew;
	int x;
	l = (linklist)malloc(sizeof(node));
	if (l != NULL)
	{
		l->next = NULL;
		scanf_s("%d", &x);
		while (x != -1)
		{
			pnew = (node*)malloc(sizeof(node));
			if (pnew != NULL)
			{
				pnew->data = x;
				pnew->next = l->next;
				l->next = pnew;
				scanf_s("%d", &x);
			}
		}
	}
	return l;
}//头插法反向建立单链表
linklist creat_tail()
{
	linklist l;
	node* pnew, * r;
	int x;
	l = (linklist)malloc(sizeof(node));
	if (l != NULL)
	{
		l->next = NULL;
		r = l;
		scanf_s("%d", &x);
		while (x != -1)
		{
			pnew = (node*)malloc(sizeof(node));
			if (pnew != NULL)
			{
				pnew->data = x;
				pnew->next = r->next;
				r = pnew;
				scanf_s("%d", &x);
			}
		}
		r->next = NULL;
		return l;
	}
}//尾插法正向建立单链表
void revlink(linklist l)
{
	node* p = l->next, * q;
	l->next = NULL;
	while (p)
	{
		q = p->next;
		p->next = l->next;
		l->next = p;
		p = q;
	}
}//将单链表就地逆置
int main()
{
	return 0;
}