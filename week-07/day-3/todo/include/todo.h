#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int counter;

typedef struct todo_t
{
    char todo[1000];
    int completed;

} todo_t;

void getBasicScreen();
void listTasks(todo_t *inputarray);
void addTask(todo_t *inputArray);
void removeTask(todo_t *inputArray);
void completedTask(todo_t *inputArray);
