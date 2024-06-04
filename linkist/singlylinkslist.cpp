#include <iostream>
using namespace std;
struct node
{
    int data;
    node *link;
};
node *head = NULL;

void insertbeginning(int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->link = head;
    head = newnode;
}
void display()
{
    struct node *temp = head;
    // * he addras store karnya sati use kele jatat manun apan manje
    // jar apulya la address store karaycha ahe tr apan tit * lavato magach tela kalnar ki te address ahe ka data

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->link;
    }
    cout << "NULL\n\n\n\n";
}
void insretend(int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->link = NULL;
    struct node *temp = head;
    while (temp->link != NULL)
    {
        temp = temp->link;
    }
    temp->link = newnode;
    // hit apan as la use kel karan jr apan temp null honysati thambnsr jeva to null zala ani natrn jr apan value asign keli tr temp madhe null chya thikani fakt ek value yenar ani ha ek temp manun apan temp->link=newnode karnar
}

void inbtw(int data, int key)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    struct node *temp = head;
    if (key == 1)
    {
        insertbeginning(data);
    }
    else
    {
        int s = key - 1;
        while (--s)
        {

            temp = temp->link;
        }
        if (temp->link == NULL)
        {
            insretend(data);
        }
        else
        {
            newnode->link = temp->link;
            temp->link = newnode;
        }
    }
}

void delectbeg()
{
    cout << head->data << " delected item" << endl;
    struct node *ptr = head;
    head = head->link;
    free(ptr);
}
void delectend()
{
    struct node *ptr = head;
    while (ptr->link->link != NULL)
    {
        ptr = ptr->link;
    }
    free(ptr->link);
    ptr->link = NULL;
}

void delectspecfic(int data)
{
    struct node *ptr = head;
    while (ptr->link->data != data)
    {
        ptr = ptr->link;
    }
    struct node *temp = ptr;
    temp = temp->link->link;
    free(ptr->link);
    ptr->link = temp;
}

int main()
{
    node *head = NULL;
    while (1)
    {
        int n;
        int data;
        int key;
        cout << "enter the choice \n insert \n 1.benging \n 2.end\n 3.specific\n 4.display\n \n delect \n5.beging\n6.end\n7.specific\n";
        cin >> n;
        switch (n)
        {
        case 1:
            cin >> data;
            insertbeginning(data);

            break;
        case 2:
            cin >> data;
            insretend(data);

            break;
        case 3:
            cin >> data >> key;
            inbtw(data, key);

            break;

        case 4:
            display();
            break;

        case 5:
            delectbeg();
            break;
        case 6:
            delectend();
            break;

        case 7:
            cin >> data;
            delectspecfic(data);
            break;

        default:
            break;
        }
    }
}