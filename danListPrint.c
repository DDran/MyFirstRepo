#include <stdio.h>
#include <stdlib.h>
#include "danList.h"

int main() {
	ListPoint p = creatList();
	ElementType arr[10] = {2,4,6,8,0,1,3,5,7,9};
	int i = 0;
	while (i<10) {
		insertItem(arr,i,p);
		//insertItem_2(arr[i]);
		i++;
	}
	PrintList(p);
	return 0;
}