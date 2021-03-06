
/*	queue.h

	Header file for queue implementation

	by: Steven Skiena
*/

/*
Copyright 2003 by Steven S. Skiena; all rights reserved. 

Permission is granted for use in non-commerical applications
provided this copyright notice remains intact and unchanged.

This program appears in my book:

"Programming Challenges: The Programming Contest Training Manual"
by Steven Skiena and Miguel Revilla, Springer-Verlag, New York 2003.

See our website www.programming-challenges.com for additional information.

This book can be ordered from Amazon.com at

http://www.amazon.com/exec/obidos/ASIN/0387001638/thealgorithmrepo/

*/
                                   
#ifndef QUEUE_H
#define QUEUE_H

#define QUEUESIZE      32 
#define MSG_BUF_SIZE   512

typedef struct {
        char **q;		/* body of queue */
        int first;                      /* position of first element */
        int last;                       /* position of last element */
        int count;                      /* number of queue elements */
} queue;

queue *init_queue();
void enqueue(queue *q, char *msg);
char *dequeue(queue *q);
int empty(queue *q);
void print_queue(queue *q);
#endif
