//constructor in derived class
#include<iostream>
using namespace std;
class A {
       protected:
       int i;
       public:
       A(int x)
       {
        i=x;
        cout<<"i valye initialized";
       }
};
class B:public A
{
    protected:
    int j;
    public:
    B(int m,int n):A(m)
    {
        j=n;
        cout<<"value of j ijs initialized";
    } 
};
class c:public B
{
    protected:
    int k;
    public:
    c(int m,int n,int o):B(m,n)
    {
        k=o;
        cout<<"value of k is intialized";
    }
    void dis()
    {
        cout<<"value of j is"<<j<<endl;
        cout<<"value of i is"<<i<<endl;
        cout<<"value of k is"<<k<<endl;
    } 
};
int main()
{
    c ayush(8,7,6);
     ayush.dis();
     return 0;
}
