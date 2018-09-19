#include "todo.h"

int counter;

void getBasicScreen()
{
    FILE *fptr;
    char c;

    fptr = fopen("../test.txt", "r");
    if (fptr == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }
    c = fgetc(fptr);
    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(fptr);
    }
    fclose(fptr);
}

void listTasks(todo_t *inputarray)
{
    if (counter == 0)
    {
        printf("There is no TODO for today");
    }
    else
    {
        for (int i = 0; i < counter; i++)
        {
            printf("%d - %s\n", i + 1, inputarray[i].todo);
        }
    }
}

void addTask(todo_t *inputArray)
{
    int *count = &counter;
    ++*count;
    printf("Please add me a task\n");
    scanf("%s", inputArray[counter - 1].todo);
}

void removeTask(todo_t *inputArray)
{
    int *count = &counter;
    --*count;
    int index;
    printf("Plese give me the INDEX of task what you want to remove\n");
    scanf("%d", &index);

    for (int i = index - 1; i <= counter - 1; i++)
    {
        inputArray[i] = inputArray[i + 1];
    }
}

void completedTask(todo_t *inputArray)
{
    int index;
    printf("Please give me the INDEX of task what is completed\n");
    scanf("%d", &index);

    for (int i = 0; i < counter; i++)
    {
        if (index - 1 == i && inputArray[i].completed == 0)
        {
            printf("%d - [x] %s\n", i + 1, inputArray[i].todo);
            inputArray[i].completed++;
        }
        else if (inputArray[i].completed == 0)
        {
            printf("%d - [ ] %s\n", i + 1, inputArray[i].todo);
        }
    }
}