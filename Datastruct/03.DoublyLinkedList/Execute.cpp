#include <iostream>
#include "DoublyLinkedLisk.h"

using namespace std;

int main()
{
	Node* node = nullptr;
	for (int i = 0; i < 5; i++)
	{
		Node* temp = Create(i);
		Push(&node, temp);
	}

	Node* newNode = nullptr;
	newNode = Create(-1);
	InsertHead(&node, newNode);
	newNode = Create(-2);
	InsertHead(&node, newNode);

	int a{};
}