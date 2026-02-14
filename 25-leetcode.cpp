#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

class LinkedList{
    Node* head;

public:
    LinkedList(){
        head = NULL;
    }

    void pushfront(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }

    void print(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    int number_of_nodes(){
        Node* temp = head;
        int count = 0;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }
        return count;
    }

    void reverse(int pairs){  

        if(head == NULL || head->next == NULL)
            return;

        Node* temp1 = head;
        Node* temp2 = head->next;
        Node* temp3 = NULL;

        while(pairs > 0 && temp1 != NULL && temp1->next != NULL){
            temp3 = temp2->next;
            temp2->next = temp1;
            temp1->next = temp3;
            head = temp2;
            temp1 = temp3;
            if(temp1 == NULL || temp1->next == NULL)
                break;
            temp2 = temp1->next;
            pairs--;
        }
    }
};

int main() {
    LinkedList ll;
    int k;
    cin >> k;

    ll.pushfront(5);
    ll.pushfront(4);
    ll.pushfront(3);
    ll.pushfront(2);
    ll.pushfront(1);

    int count = ll.number_of_nodes();
    int pairs = count / k;
    ll.reverse(pairs);
    ll.print();
    return 0;
}
