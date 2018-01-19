#include "Sender.h"

void * run_sender(void * ptr)
{
    int * threadnum = (int *) ptr;
    printf("Hello from sender thread %d!\n", *threadnum);
}