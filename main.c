
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#include "Sender.h"
#include "Receiver.h"

#define NUM_THREADS     2

int main (int argc, char * argv[])
{
    printf("Starting...\n");
    pthread_t threads[NUM_THREADS];
    int threadID[NUM_THREADS];
    int threadstatus[NUM_THREADS];
    int i;

    for (i = 0; i < NUM_THREADS; i++)
    {
        threadID[i] = i;
        threadstatus[i] = pthread_create(&threads[i], NULL, run_receiver, (void *) &threadID[i]);
    }

    for (i = 0; i < NUM_THREADS; i++)
    {
        pthread_join(threads[i], NULL);
    }

    printf("Finished!\n");
    return 0;
}
