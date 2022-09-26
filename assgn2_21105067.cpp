//[Ques.1]--->While traversing a single-circular linked list, which condition establishes that the traversing element/variable has reached the first element? 

//[Ans.1]--->

//Lets take an example and create a basic circular linked list
#include <iostream>
using namespace std;


class Node{
    public:
    int data;
    Node*next;
    //Calling Node constructor
    Node(int data){
        this->data=data;
        next=NULL;
    }
};
//Function to insert a node at end on linked list
void append(Node*&head,int data){
    Node*temp=head;
    Node*new_node=new Node(data);
    if(temp==NULL){head=new_node;new_node->next=head;return;}
    while(temp->next!=head){temp=temp->next;}   //This condition establishes that the traversing element(temp) has reached the first element
    temp->next=new_node;
    new_node->next=head;
}
//Function to print elements of linked list from head to the last node.
void pfun(Node*&head){
    Node*temp=head;
    do{cout<<temp->data<<"->";temp=temp->next;}
    while(temp!=head);
}

int main(){
    Node*head=NULL;
    append(head,1);
    append(head,2);
    append(head,3);
    pfun(head);
}
/*
With reference to this example of circular linked list,

Line 26 i.e. while(temp->next!=head){temp=temp->next;} establishes that the traversing element/variable has reached the first element.

We Know that in circular linked list last node of linked list points to head of that linked list, hence we can check if any node points to head of linked list then that node is the end of circular linked list.
*/



/*=====================================================================================================================================================================================================================

[Ques.2]---> What are the practical applications of a circular linked list? (Try to find applications in your respective fields).

[Ans.2]---> Practical applications of circular linked list are as follows :

(1). Back/Next page in a web browser
(2). undo and redo options while editing some document such as image editing or text editing or etc in applications like photoshop, word, powerpoint etc
(3). Maintaining the playlist in a music/video player and moving amongst the tracks/video in a particular order.
(4). Multiple Player board game like online ludo game, the turn keeps coming in sequential order.
(5). Fionacci Heap: Circular Linked List is also used in the implementation of advanced data structures such as a Fibonacci Heap.

*/



