#include<iostream>
using namespace std;
class Student
{
    public:
    int roll_no;
    public:
    void get_roll(int x)
    {
        roll_no=x;
    }
     void putdata()
     {
         cout<<"Roll Number : "<<roll_no<<endl;
     }
};
class test:virtual public Student
{
   public:
   int hindi,english;
   public:
   void get1(int a,int b)
   {
      hindi=a;
      english=b;
   }
   void put1()
   {
       cout<<"Hinhi  "<<hindi<<endl;
       cout<<"English  "<<english<<endl;
   }
};
class Sports:virtual public Student
{
    public:
    int marks;
    public:
    void get2(int r)
    {
        marks=r;
    }
    void put2()
    {
        cout<<"Marks  "<<marks<<endl;
    }
};
class Result:public test,public Sports
{
    public:
    int sum;
    public:
    void total()
    {
        sum=hindi+english+marks;
        putdata();
        put1();
        put2();
        cout<<"Sum  :"<<sum<<endl;
        
    }
    
};
int main()
{
    Result obj;
    obj.get_roll(102);
    obj.get1(70,80);
    obj.get2(85);
    obj.total();
    return 0;
}