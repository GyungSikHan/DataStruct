#include<iostream>
#include"02_LinkedList.h"
using namespace std;

//typedef LinkedList<int> List;

int main()
{
    {// List::Node* node = List::Create(10);
    // List* list = new List(node);
    // list->Push(List::Create(20));
    // List::Node* temp = List::Create(30);
    // list->Push(temp);
    // list->Push(List::Create(5));
    // list->Push(List::Create(30));
    // list->Push(List::Create(40));
    // list->Print(list->Head());
    // cout<<endl;
    // list->Print(temp);
    }

    {
    	// List::Node* node = List::Create(1);
    // List* list = new List(node);
    // list->Push(List::Create(2));
    // list->Push(List::Create(3));
    // list->Push(List::Create(4));
    // list->Push(List::Create(5));

    // list->Insert(node, List::Create(0));
    // list->Print(list->Head());
    // cout<<"list count"<<list->GetNodeCount()<<endl;

    // list->Insert(list->GetNode(3), List::Create(6));
    //     list->Print(list->Head());
    // cout<<"list count"<<list->GetNodeCount()<<endl;

    // list->Insert(4,List::Create(10));
    // list->Print(list->Head());
    }

    Node* node = nullptr;

    for (int i = 0; i < 5; i++)
    {
        Node* temp = Create(i);
        Push(&node,temp);
    }

    Node* newNode{};
    newNode = Create(-1);
    InsertHead(&node, newNode);
    newNode = Create(-2);
    InsertHead(&node, newNode);

    //print
	{
		Node* current = GetNode(node, 2);
    	newNode = Create(1000);
    	Insert(current, newNode);
    	int count = GetNodeCount(node);
    	for (int i = 0; i < count; i++)
    	{
    		Node* current = GetNode(node, i);
    		cout << "List[" << i << "]" << current->Data << endl;
    	}
    	cout << "---------------------------------------" << endl;
	}

    //remove
	{
		Node* remove = GetNode(node, 3);
    	Remove(&node, remove);
    	int count = GetNodeCount(node);
    	for (int i = 0; i < count; i++)
    	{
    		Node* current = GetNode(node, i);
    		cout << "List[" << i << "]" << current->Data << endl;
    	}
    	cout << "---------------------------------------" << endl;
	}

    //Remove All
    {
        int count = GetNodeCount(node);
        for (int i = 0; i < count; i++)
        {
            Node* current = GetNode(node, 0);
            if(current != nullptr)
            {
                Remove(&node, current);
                Destroy(current);
            }
        }
    }

    int a{};
	return 0;
}