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
	{
		newNode = Create(-1);
		InsertHead(&node, newNode);
		newNode = Create(-2);
		InsertHead(&node, newNode);
	}

	//print
	{
		Node* current = GetNode(node, 2);
		newNode = Create(1000);

		Insert(current, newNode);

		int count = GetNodeCount(node);
		for (int i = 0; i < count; i++)
		{
			Node* temp = GetNode(node, i);
			cout << "List[" << i << "]: " << temp->Data << endl;
		}
		cout << "--------------------------------------------------" << endl;
	}

	//remove
	{
		Node* remove = GetNode(node, 3);
		Remove(&node, remove);

		int count = GetNodeCount(node);
		for (int i = 0; i < count; i++)
		{
			Node* temp = GetNode(node, i);
			cout << "List[" << i << "]: " << temp->Data << endl;
		}
		cout << "--------------------------------------------------" << endl;
	}

	//remove all
	{
		int count = GetNodeCount(node);
		for (int i = 0; i < count; i++)
		{
			Node* temp = GetNode(node, 0);
			if(temp != nullptr)
			{
				Remove(&node, temp);
				Destroy(&temp);
			}
		}
	}

	int a{};
}