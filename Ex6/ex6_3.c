#include "LinkedQueue.h"

int main(void){
    LQueueType* LQ1 = createLinkedQueue();
    element data;

    printf("\n ***** 연결 큐 연산 ***** \n");
    printf("\n 삽입 A>>"); enLQueue(LQ1, 'A'); printLQ(LQ1);
    printf("\n 삽입 B>>"); enLQueue(LQ1, 'B'); printLQ(LQ1);
    printf("\n 삽입 C>>"); enLQueue(LQ1, 'C'); printLQ(LQ1);
    data = peekLQ(LQ1); printf(" peek data : %c", data);
    printf("\n삭제  >>"); data = deLQueue(LQ1); printLQ(LQ1);
    printf("\t삭제 데이터 : %c", data);
    printf("\n삭제  >>"); data = deLQueue(LQ1); printLQ(LQ1);
    printf("\t삭제 데이터 : %c", data);
    printf("\n삭제 >>"); data = deLQueue(LQ1); printLQ(LQ1);
    printf("\t삭제 데이터 : %c", data);
    printf("\n 삽입 D>>"); enLQueue(LQ1, 'D'); printLQ(LQ1);
    printf("\n 삽입 E>>"); enLQueue(LQ1, 'E'); printLQ(LQ1);
    
    getchar(); return 0;
}