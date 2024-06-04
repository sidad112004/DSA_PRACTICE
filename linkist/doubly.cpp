#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node *prev;
};
struct node *head = NULL;

void insertbeg(int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
    {
        newnode->data = data;
        newnode->prev = NULL;
        newnode->next = head;
        head = newnode;
    }
    else
    {
        newnode->data = data;
        newnode->prev = NULL;
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
}

void insertend(int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
    {
        newnode->data = data;
        newnode->prev = NULL;
        newnode->next = head;
        head = newnode;
    }
    else
    {
        newnode->data = data;
        newnode->next = NULL;
        struct node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->prev = temp;
    }
}

void insertspec(int data, int key)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    struct node *temp = head;
    if (key == 0)
    {
        insertbeg(data);
    }
    else
    {
        newnode->data = data;
        while (--key)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
        newnode->prev = temp;
    }
}

void delbeg()
{
    head->next->prev = NULL;
    struct node *temp = head;
    head = head->next;
    free(temp);
}
void delend()
{
    struct node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

void delspec(int data)
{
    struct node *temp = head;
    while (temp->next->data != data)
    {
        temp = temp->next;
    }
    struct node *ptr = temp->next;
    temp->next = temp->next->next;
    free(ptr);
    temp->next->prev = temp;
}
void display()
{
    struct node *temp = head;
    cout<<"null";
    while (temp != NULL)
    {
        cout << " <- " << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "null" << endl;
}
int main()
{
    int n, key, data;
    while (1)
    {
        cout << "\n1.insert at beging \n2.insert at end \n3.insert at specfic\n4.delect at beging\n5.delect at end\n6.delect at specfic \n7.display\n"
             << endl;
        cin >> n;
        switch (n)
        {
        case 1:
            cin >> data;
            insertbeg(data);
            break;

        case 2:
            cin >> data;
            insertend(data);
            break;

        case 3:
            cin >> data >> key;

            insertspec(data, key);
            break;
        case 4:

            delbeg();
            break;
        case 5:

            delend();
            break;
        case 6:
            cin >> data;
            delspec(data);
            break;
        case 7:
            display();
            break;
        }
    }
}