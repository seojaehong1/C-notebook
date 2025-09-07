#include "cQueueS.h"

int main(void){
    QueueType* cQ1 = createCQueue();
    element data;

    printf("\n ***** 원형 큐 연산 ***** \n");
    printf("\n 삽입 A>>"); enCQueue(cQ1, 'A'); printCQ(cQ1);
    printf("\n 삽입 B>>"); enCQueue(cQ1, 'B'); printCQ(cQ1);
    printf("\n 삽입 C>>"); enCQueue(cQ1, 'C'); printCQ(cQ1);
    data = peekCQ(cQ1); printf(" peek data : %c", data);
    printf("\n삭제  >>"); data = deCQueue(cQ1); printCQ(cQ1);
    printf("\t삭제 데이터 : %c", data);
    printf("\n삭제  >>"); data = deCQueue(cQ1); printCQ(cQ1);
    printf("\t삭제 데이터 : %c", data);
    printf("\n삭제 >>"); data = deCQueue(cQ1); printCQ(cQ1);
    printf("\t삭제 데이터 : %c", data);
    printf("\n 삽입 D>>"); enCQueue(cQ1, 'D'); printCQ(cQ1);
    printf("\n 삽입 E>>"); enCQueue(cQ1, 'E'); printCQ(cQ1);
    
    getchar(); return 0;
}