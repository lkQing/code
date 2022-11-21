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
linklist mergelinklist(linklist la, linklist lb)
{
	node* pa, * pb, * r;
	linklist lc;
	pa = la->next;
	pb = lb->next;
	lc = la;
	lc->next = NULL;
	r = lc;
	while (pa && pb)
	{
		if (pa->data <= pb->data)
		{
			r->next = pa;
			r = pa;
			pa = pa->next;
		}
		else
		{
			r->next = pb;
			r = pb;
			pb = pb->next;
		}
	}
	if (pa)
	{
		r->next = pa;
	}
	else
	{
		r->next = pb;
	}
	free(lb);
	return lc;
}//将两个非递减有序排列单链表la和lb合并为非递减有序排列的单链表lc
linklist merge_loop_head(linklist la, linklist lb)
{
	node* ra, * rb;
	ra = la;
	rb = lb;
	while (ra->next != la)
	{
		ra = ra->next;
	}
	while (rb->next != lb)
	{
		rb = rb->next;
	}
	ra->next = lb->next;
	rb->next = la;
	free(lb);
	return la;
}//将两个带头指针的循环单链表la，lb合并为一个循环单链表
linklist merge_loop_tail(linklist ra, linklist rb)
{
	linklist la;
	la = ra->next;
	ra->next = rb->next->next;
	free(rb->next);
	rb->next = la;
	return rb;
}//将两个带尾指针的循环单链表la，lb合并为一个循环单链表
typedef struct dnode
{
	int data;
	struct dnode* prior, * next;
}dnode,*dlinklist;//双向链表
void dlinkins(dlinklist l, dnode* p, int e)
{
	dnode* pnew;
	pnew = (dnode*)malloc(sizeof(dnode));
	if (pnew != NULL)
	{
		pnew->data = e;
		pnew->prior = p->prior;
		p->prior->next = pnew;
		pnew->next = p;
		p->prior = pnew;
	}
}//在双链表l中p所指定的结点之前插入值为e的结点
#define maxsize 10
typedef struct snode
{
	int data;
	int next;//游标 cursor 模拟指针
}snode, staticlist[maxsize + 1];//静态链表结点
node* search_mid(linklist l)
{
	node* fast, * slow;
	fast = l;
	slow = l;
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}//返回链表的中间结点
node* search_tail_k(linklist l, int k)
{
	node* fast, * slow;
	slow = l;
	fast = l;
	while (k)
	{
		if (fast == NULL)
		{
			return NULL;
		}
		fast = fast->next;
		k--;
	}
	while (fast)
	{
		fast = fast->next;
		slow = slow->next;
	}
	return slow;
}//返回链表中倒数第k个结点
int main()
{
	return 0;
}