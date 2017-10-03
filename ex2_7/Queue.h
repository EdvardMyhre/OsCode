// Queue.h ... Queue ADT

// Queue items are positive integers
typedef int Item;
// Queues have a hidden representation
typedef struct QueueRep *Queue; 
// Links have hidden representation
typedef struct QueueNode *Link;

// create an initially empty Queue
Queue createQueue(void); 

// free all memory used by the Queue
void dropQueue(Queue); 

// add new Item to the tail of the Queue
void enterQueue(Queue, Item); 

// remove Item from head of Queue; return it
Item leaveQueue(Queue); 

// return count of Items in Queue
int  queueLength(Queue); 

// display Queue as list of 2-digit numbers
void showQueue(Queue);

