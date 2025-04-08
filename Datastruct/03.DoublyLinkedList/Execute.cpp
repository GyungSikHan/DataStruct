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
	int a{};
}