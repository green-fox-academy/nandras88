#include "todo.h"

int counter;

int main()
{
	todo_t listOfTodo[20];

	char *instruction = "Please give me an Instruction";

	getBasicScreen();

	printf("%s\n", instruction);
	int exitStatement = 0;
	while (exitStatement != 1)
	{

		char introduction;
		scanf("%c", &introduction);

		switch (introduction)
		{
		case 'l':
			listTasks(listOfTodo);
			printf("%s\n", instruction);
			break;
		case 'a':
			addTask(listOfTodo);
			printf("%s\n", instruction);
			break;
		case 'r':
			removeTask(listOfTodo);
			printf("%s\n", instruction);
			break;
		case 'c':
			completedTask(listOfTodo);
			printf("%s\n", instruction);
			break;
		case 'q':
			printf("The program is done\n");
			exitStatement++;
			break;
		}
	}
	return 0;
}
