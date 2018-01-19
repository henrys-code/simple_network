
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void * print_message(void * ptr)
{
    int * threadnum = (int *) ptr;
    printf("Hello from thread %d!\n", *threadnum);
}

int main (int argc, char * argv[])
{
    int num_threads =  5;
    pthread_t threads[num_threads];
    int threadID[num_threads];
    int threadstatus[num_threads];
    int i;

    for (i = 0; i < num_threads; i++)
    {
        threadID[i] = i;
        threadstatus[i] = pthread_create(&threads[i], NULL, print_message, (void *) &threadID[i]);
    }

    for (i = 0; i < num_threads; i++)
    {
        pthread_join(threads[i], NULL);
    }
    printf("Finished!\n");
    return 0;
}
