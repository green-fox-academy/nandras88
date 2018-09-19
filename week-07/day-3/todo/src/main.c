#include "todo.h"

int counter;

int main()
{
	todo_t listOfTodo[20];

	getBasicScreen();

	int exitStatement = 0;
	while (exitStatement != 1)
	{

		char introduction;
		printf("Please give me an Instruction\n");
		scanf("%c", &introduction);

		switch (introduction)
		{
		case 'l':
			listTasks(listOfTodo);
			break;
		case 'a':
			addTask(listOfTodo);
			break;
		case 'r':
			removeTask(listOfTodo);
			break;
		case 'c':
			completedTask(listOfTodo);
			break;
		case 'q':
			printf("The program is done\n");
			exitStatement++;
			break;
		}
	}
	return 0;
}
