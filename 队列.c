#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
typedef int datatype;
typedef struct queuenode
{
	struct queuenode* next;
	datatype data;
}qnode;//定义队列结点
typedef struct queue
{
	qnode* head;
	qnode* tail;
}queue;//用结构体存放头尾指针

void queueinit(queue* pq)
{
	assert(pq);
	pq->head == NULL;
	pq->tail == NULL;
}//初始化队列

void queuedestory(queue* pq)
{
	assert(pq);
	qnode* cur = pq->head;
	while (cur)
	{
		qnode* next = cur->next;
		free(cur);
		cur = next;
	}
	pq->head = pq->tail = NULL;
}//队列销毁

void queuepush(queue* pq, datatype x)
{
	assert(pq);
	qnode* newnode = (qnode*)malloc(sizeof(qnode));
	assert(newnode);
	newnode->data = x;
	newnode->next = NULL;
	if (pq->head == NULL)
	{
		pq->head = pq->tail = newnode;
	}
	else
	{
		pq->tail->next = newnode;
		pq->tail = newnode;
	}
}//给队列尾插数据

bool queueempty(queue* pq)
{
	assert(pq);
	return pq->head == NULL;
}//判断队列是否为空

void queuepop(queue* pq)
{
	assert(pq);
	assert(!queueempty(pq));
	qnode* next = pq->head->next;
	free(pq->head);
	pq->head = next;
	if (pq->head == NULL)
	{
		pq->tail = NULL;
	}
}//尾删队列

datatype queuefront(queue* pq)
{
	assert(pq);
	assert(!queueempty(pq));
	return pq->head->data;
}//获取队列头数据

datatype queueback(queue* pq)
{
	assert(pq);
	assert(!queueempty(pq));
	return pq->tail->data;
}//获取队列尾数据

int queuesize(queue* pq)
{
	assert(pq);
	int n = 0;
	qnode* cur = pq->head;
	while (cur)
	{
		n++;
		cur = cur->next;
	}
	return n;
}//计算队列长度