#include<stdio.h>
#include"Src/EventManager.h"
int main(int av, char** ar)
{
	CEventManager eventManager;
	eventManager.start();
	return 1;
}
