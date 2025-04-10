// C program To Merge A linked List Into Another Linked list At Alternate Position
// This code Will be Adden to my github repository 
//link will be in the description!!
#include<stdio.h>
#include<stdlib.h>

//A nested list node
struct Node
{
    int data;
    struct Node *next;

};


/*Function To Insert A Node At The Beginning*/
void push(struct Node**head_ref, int new_data){
    struct Node*new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
/*Utility Function To Print A Singly Linked List*/

void print_list(struct Node*head)
{
    struct Node*temp = head;
    while(temp != NULL){
        printf("%d", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
//Main Funcion That Inserts Nodes Of Linked List q Into p At Alternate
//Position. Since head Of First List Never Changes And head Of Second 
//list May Change We Need Single Pointer For First And Double Pointer For 
//Second list
void merge(struct Node*p, struct Node**q)
{
    struct Node*p_curr = p, *q_curr = *q;
    struct Node *p_next, *q_next;

    //While There Are Available Position in p
    while (p_curr != NULL && q_curr != NULL)
    {
        p_next = p_curr->next;
        q_next = q_curr->next;
        //Make q_curr as Next of p_curr
        //Change next pointer of q_curr
        q_curr->next = p_next;
         //Change next pointer of p_curr
         p_curr->next = q_curr;
         //Update Current Pointers For Next Iteration

         p_curr = p_next;
         q_curr = q_next;

    }
    //Update head pointer of second list
    *q = q_curr;
}

//main function
int main(){
    struct Node*p = NULL, *q = NULL;
    push(&p,3);
    push(&p,2);
    push(&p,1);
    printf("First Linked List");
    print_list(p);
    //Forgot to Add Second Linked List :|
    push(&q,8);
    push(&q,4);
    push(&q,8);
    push(&q,4);
    push(&q,8);
    push(&q,4);
    printf("Second Linked List :");
    print_list(q);
    merge(p,&q);
    printf("Modified First Linked List :");
    print_list(p);
    printf("Modified Second Linked List :");
    print_list(q);

    getchar();
    return 0;
}