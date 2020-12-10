#include"queue.h"

int main(){
	//链队列
	queue *lqueue = (queue*)malloc(sizeof(queue));
	init_queue(lqueue);
	empty(lqueue);
	push(lqueue,12);
	push(lqueue,13);
	push(lqueue,15);
	push(lqueue,21);
	push(lqueue,11);printf("\n");
	pop(lqueue);printf("\n");
	empty(lqueue);
	get_front(lqueue);
	get_rear(lqueue);
	length(lqueue);
	dis_queue(lqueue);
	//优先队列
	pri_pop(lqueue);printf("\n");
	//双端队列
	Deque *deque = (Deque*)malloc(sizeof(Deque));
	init_deque(deque);
	dempty(deque);
	push_front(deque,10);
	push_front(deque,40);
	push_front(deque,30);
	push_rear(deque,20);//printf("\n");
	push_rear(deque,50);printf("\n");
	pop_front(deque);//printf("\n");
	pop_rear(deque);printf("\n");
	get_defront(deque);
	get_derear(deque);
	delength(deque);
	dempty(deque);
	dis_deque(deque);
	return 1;
}
