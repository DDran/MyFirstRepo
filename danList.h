#pragma once
#include <stdio.h>

struct List;
typedef struct List* ListPoint;
typedef int ElementType;
ListPoint creatList();
void insertItem(ElementType* arr,ElementType i,ListPoint L);
void insertItem_2(ElementType element);
ListPoint Tail(ListPoint L);
void PrintList(ListPoint L);

struct List {
	ElementType element;
	ListPoint next;
};

ListPoint Tail(ListPoint L) {
	ListPoint p = L;
	while (p->next!=NULL) {
		p = p->next;
	}
	return p;
}

void insertItem(ElementType* arr,ElementType i,ListPoint L) {
	ListPoint p = (ListPoint)malloc(sizeof(struct List));
	ListPoint p2;
	if (p==NULL) {
		printf("��ӵ�����ĩβʱ�ڴ����ʧ��!");
		exit(0);
	}
	p->element = arr[i];
	p->next = NULL;
	p2 = Tail(L);
	p2->next = p;
}

void PrintList(ListPoint L) {
	ListPoint p = L->next;
	while (p!=NULL) {
		printf("��ӡ����%d\n",p->element);
		p = p->next;
	}
}

void insertItem_2(ElementType element) {
	printf("%d\n", element);
}

ListPoint creatList() {
	ListPoint p = (ListPoint)malloc(sizeof(struct List));
	if (p==NULL) {
		printf("�����ڴ�ʧ�ܣ�");
		exit(0);
	}
	p->next = NULL;
	return p;
}