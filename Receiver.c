#include "Receiver.h"

void * run_receiver(void * ptr)
{
    int * threadnum = (int *) ptr;
    printf("Hello from receiver thread %d!\n", *threadnum);
}