#include<iostream>
#include"02_LinkedList.h"
using namespace std;

typedef LinkedList<int> List;

int main()
{
    // List::Node* node = List::Create(10);

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

    List::Node* node = List::Create(1);
    List* list = new List(node);
    list->Push(List::Create(2));
    list->Push(List::Create(3));
    list->Push(List::Create(4));
    list->Push(List::Create(5));

    list->Insert(node, List::Create(0));
    list->Print(list->Head());
    cout<<"list count"<<list->GetNodeCount()<<endl;

    list->Insert(list->GetNode(3), List::Create(6));
        list->Print(list->Head());
    cout<<"list count"<<list->GetNodeCount()<<endl;

    list->Insert(4,List::Create(10));
    list->Print(list->Head());
}