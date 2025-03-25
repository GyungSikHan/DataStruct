#pragma once

#include<iostream>

template<typename T> 
class LinkedList
{
public:
    struct Node;//전방선언
public:
    LinkedList(Node* head)
    {
        this->head = head;
    }

    static Node* Create(T data)
    {
        Node* node = new Node();

        node->Data = data;
        node->Next = nullptr;
        return node;
    }
    static void Destroy(Node* node)
    {
        delete node;
        node = nullptr;
    }

    Node* Head(){return head;}

    void Push(Node* node)
    {
        Node* tail = head;
        while(tail->Next != nullptr)
            tail = tail->Next;
        tail->Next = node;
    }

    void Insert(Node* current, Node* node)
    {
        node->Next = current->Next;
        current->Next = node;
    }
    
    void Insert(int index, Node* node)
    {
        Node* temp = GetNode(index);

        Insert(temp, node);
    }

    Node* GetNode(int index)
    {
        Node* curr = head;

        while (curr != nullptr && --index >= 0)
            curr = curr->Next;
        
        return curr;
    }

    int GetNodeCount()
    {
        int count = 0;
        Node* current = head;
        while (current != nullptr)
        {
            current = current->Next;
            count++;
        }
        return count;
    }

    void Print(Node* node = nullptr)
    {
        if(node == nullptr)
            return;
        std::cout<<node->Data <<std::endl;
        Print(node->Next);
    }

public:
    struct Node
    {
        T Data;
        Node* Next;
    };

private:
    Node* head;
};