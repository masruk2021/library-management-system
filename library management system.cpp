#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class library
{
private:
    struct node
    {
        int id;
        string name,author,publisher;
        node*next_add;

    };
public:
    node *head=NULL;
    void menu();
    void insert_valo();
    void search();
    void update();
    void  del();
    void sort();
    void show();
};
void library::menu()
{p:
    system("cls");
    int choice;
    cout<<"\n\n\t\t\t=====================================";
    cout<<"\n\n\t\t\t====LIBRARY  MANAGEMENT SYSTEM=====";
    cout<<"\n\n\t\t\t=====================================";
    cout<<"\n\n 1.Insert New Record";
    cout<<"\n\n 2.Search Record";
    cout<<"\n\n 3.Update Record";
    cout<<"\n\n 4.Delete Record";
    cout<<"\n\n 5.Show all Record";
    cout<<"\n\n 6.Exit";
    cout<<"\n\n Enter Your choice  :";
    cin>> choice;
    switch(choice)
    {
    case 1:
      {insert_valo();
      }
        break;
          case 2:
              search();
        break;
          case 3:
              update();
        break;
          case 4:
            {
                del();
            }
        break;
          {case 5:
           sort();
             show();
          }
        break;
          case 6:
              exit(0);
          default:
            cout<<"\n\n Invalid Choice.....Please Try Again.....";
    }
    getch();
    goto p;
}
void library::insert_valo()
{   system("cls");
     cout<<"\n\n\t\t\t=====================================";
    cout<<"\n\n\t\t\t====LIBRARY  MANAGEMENT SYSTEM=====";
    cout<<"\n\n\t\t\t=====================================";
    node*new_node=new node;
    cout<<"\n\n Book ID : ";
    cin>>new_node->id;
     cout<<"\n\n Name : ";
    cin>>new_node->name;
     cout<<"\n\n Author Name : ";
    cin>>new_node->author;
     cout<<"\n\n Publisher Name : ";
    cin>>new_node->publisher;
    new_node->next_add=NULL;
    if(head==NULL)
    {
        head=new_node;
    }
    else
    {
        node*ptr=head;
    while(ptr->next_add!=NULL)
    {
        ptr=ptr->next_add;
    }
    ptr->next_add=new_node;
   // ptr=new_node;
    }
    cout<<"\n\n\t\t New Book Insert Successfully.......";
    }
void library::search()
{  system("cls");
int t_id,found=0;
    cout<<"\n\n\t\t\t=====================================";
    cout<<"\n\n\t\t\t====LIBRARY  MANAGEMENT SYSTEM=====";
    cout<<"\n\n\t\t\t=====================================";
    if(head==NULL)
    {
        cout<<"\n\nLink List is Empty......";
    }
        else {
            cout<<"\n\nBook ID : ";
            cin>> t_id;
            node*ptr=head;
            while(ptr!=NULL)
            {
                if(t_id==ptr->id)
                {system("cls");
    cout<<"\n\n\t\t\t=====================================";
    cout<<"\n\n\t\t\t====LIBRARY  MANAGEMENT SYSTEM=====";
    cout<<"\n\n\t\t\t=====================================";
               cout<<"\n\n Book ID : "<<ptr->id;
               cout<<"\n\n Book Name : "<<ptr->name;
               cout<<"\n\n Author Name : "<<ptr->author;
               cout<<"\n\n Publisher Name : "<<ptr->publisher;
                    found++;
                }
                ptr=ptr->next_add;

            }
            if(found==0)
            {
                cout<<"\n\n Book ID id Invalid......";
            }

    }

}
 void library::update()
 {
     system("cls");
int t_id,found=0;
    cout<<"\n\n\t\t\t=====================================";
    cout<<"\n\n\t\t\t====LIBRARY  MANAGEMENT SYSTEM=====";
    cout<<"\n\n\t\t\t=====================================";
    if(head==NULL)
    {
        cout<<"\n\nLink List is Empty......";
    }
        else {
            cout<<"\n\nBook ID : ";
            cin>> t_id;
            node*ptr=head;
            while(ptr!=NULL)
            {
                if(t_id==ptr->id)
                {system("cls");
    cout<<"\n\n\t\t\t=====================================";
    cout<<"\n\n\t\t\t====LIBRARY  MANAGEMENT SYSTEM=====";
    cout<<"\n\n\t\t\t=====================================";
               cout<<"\n\n Book ID : ";
               cin>>ptr->id;
               cout<<"\n\n Book Name : ";
               cin>>ptr->name;
               cout<<"\n\n Author Name : ";
               cin>>ptr->author;
               cout<<"\n\n Publisher Name : ";
               cin>>ptr->publisher;
                    found++;
                    cout<<"\n\n\t\t Update Book Sucessfully.......";
                }
                ptr=ptr->next_add;

            }
            if(found==0)
            {
                cout<<"\n\n Book ID id Invalid......";

        }
 }
 }

void library ::del()
{
    system("cls");
int t_id,found=0;
    cout<<"\n\n\t\t\t=====================================";
    cout<<"\n\n\t\t\t====LIBRARY  MANAGEMENT SYSTEM=====";
    cout<<"\n\n\t\t\t=====================================";
    if(head==NULL)
    {
        cout<<"\n\nLink List is Empty......";
    }
    else
    {
              cout<<"\n\nBook ID : ";
               cin>> t_id;
                if(head->id==t_id)
    {
      node*hp=head;
      head=head->next_add;
      delete hp;
      cout<<"\n\n\t\t Book delete Successfully....";
      found++;
    }
     else {
            node*ptr=head;
            node*pre=head;
            while(ptr!=NULL)
            {
                if(t_id==ptr->id)
                {
                    found++;
 pre->next_add=ptr->next_add;
             delete ptr;
            cout<<"\n\n\t\t Book delete Successfully....";
            break;
                }
                pre=ptr;
                ptr=ptr->next_add;

            }
}

    }
}

void library::sort()
{
  int cnt=0;
      if(head==NULL)
    {
        cout<<"\n\nLink List is Empty......";
        menu();
    }
int t_id;
string t_name,t_author,t_publisher;
    node*ptr=head;
      while(ptr!=NULL)
      {
          cnt++;
          ptr=ptr->next_add;
      }
      for(int i=1;i<=cnt;i++)
      {  node*ptr=head;
          for(int j=1;j<cnt;j++)
          {
              if(ptr->id>ptr->next_add->id)
              {
                  t_id=ptr->id;
                  t_name=ptr->name;
                  t_author=ptr->author;
                  t_publisher=ptr->publisher;
                  ptr->id=ptr->next_add->id;
                  ptr->name =ptr->next_add->name;
                  ptr->author=ptr->next_add->author;
                  ptr->publisher =ptr->next_add->publisher;

                  ptr->next_add->id=t_id;
                  ptr->next_add->name =  t_name;
                  ptr->next_add->author= ptr->author;
                  ptr->next_add->publisher = ptr->publisher;
              }
              ptr=ptr->next_add;
          }
      }
}
    void library::show()
 {
     system("cls");
    cout<<"\n\n\t\t\t=====================================";
    cout<<"\n\n\t\t\t====LIBRARY  MANAGEMENT SYSTEM=====";
    cout<<"\n\n\t\t\t=====================================";

            node*ptr=head;
            while(ptr!=NULL)
            {
               cout<<"\n\n Book ID : "<<ptr->id;
               cout<<"\n\n Book Name : "<<ptr->name;
               cout<<"\n\n Author Name : "<<ptr->author;
               cout<<"\n\n Publisher Name : "<<ptr->publisher;
               cout<<"\n\n ============================";

                ptr=ptr->next_add;

            }
}

int  main()

{
    library obj;
    obj.menu();

}
