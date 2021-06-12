#pragma once
#include "Serie.h"
#include "Pelicula.h"
struct Node {
	int value;
	struct Node* next;
};

class LinkedList{
private:
	Node* head;
	Node* tail;
public:
	LinkedList()
	{
		head = nullptr;
		tail = nullptr;
	}

    void createNode(int Value)
    {
        Node* temp = new Node;
        temp->value = Value;
        temp->next = nullptr;

        if (head == nullptr)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }

    void printList() {
        Node* current = head;

        while (current != nullptr) {
            std::cout << current->value << std::endl;
            current = current->next;
        }
    }

    void pushNode(int value) {
        Node* new_node;
        new_node = new Node;

        new_node->value = value;
        new_node->next = head;

        head = new_node;
    }

    void insertNodeAtPosition(int pos, int Value)
    {
        Node* pre = new Node;
        Node* current = new Node;
        Node* temp = new Node;
        Node * cur = head;

        for (int i = 1; i < pos; i++)
        {
            pre = current;
            current = current->next;
        }
        temp->value = Value;
        pre->next = temp;
        temp->next = current;
    }

    int pop(int n = 0) {
        int retval = 0;
        if (n == 0) {
            
            Node* next_node = nullptr;

            next_node = head->next;
            retval = head->value;
            delete head;
            head = next_node;

            //int retval;
        }
        else {
            return removeByIndex(n);
        }
        
        return retval;
    }

    int removeLast() {
        int retval = 0;
        /* if there is only one item in the list, remove it */
        if (head->next == nullptr) {
            retval = head->value;
            delete head;
            return retval;
        }

        /* get to the second to last node in the list */
        Node* current = head;
        while (current->next->next != nullptr) {
            current = current->next;
        }

        /* now current points to the second to last item of the list, so let's remove current->next */
        retval = current->next->value;
        delete current->next;
        current->next = nullptr;
        return retval;
    }

    int removeByIndex(int n) {
        int i = 0;
        int retval = -1;
        Node* current = head;
        Node* temp_node = nullptr;

        if (n == 0) {
            return pop();
        }

        for (i = 0; i < n - 1; i++) {
            if (current->next == nullptr) {
                return -1;
            }
            current = current->next;
        }

        temp_node = current->next;
        retval = temp_node->value;
        current->next = temp_node->next;
        delete temp_node;

        return retval;

    }

};

