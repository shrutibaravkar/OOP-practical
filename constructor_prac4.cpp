#include<iostream>
#include<string>
using namespace std;
class book
{
private:
int bookID;
string title;
string author;
double price;
public:
book()
{
bookID=101;
title="c++ programming";
author="Balguru swami";
price=500.00;
}
book(int id, string t, string a, double p)
{
bookID=id;
title=t;
author=a;
price=p;
}
void display()
{
cout<<"Book ID:"<<bookID<<endl;
cout<<"title:"<<title<<endl;
cout<<"author:"<<author<<endl;
cout<<"------------------"<<endl;
}
};
int main()
{
book book1;
book book2(102,"object oriented programming","Robert Lafore",690.00);
cout<<"First Book details:"<<endl;
book1.display();
cout<<"Second Book details:"<<endl;
book2.display();
return 0;
}
