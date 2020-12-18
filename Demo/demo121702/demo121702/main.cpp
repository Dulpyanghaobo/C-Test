//
//  main.cpp
//  demo121702
//
//  Created by yhb on 2020/12/17.
//

#include <iostream>
using namespace std;

namespace MJ {

    int a_age;
    class Person {
    public:
        int m_age;
    };
}
namespace JJ {
int a_age;
    class Person {
    public:
        int m_age;
    };
}
class Person {
private:
    string name;
public:
    int age;
//    int height;
//    string name;
};
//全局区
Person g_person;
int main(int argc, const char * argv[]) {
//    int age = 10;
////    p在栈空间指向堆空间当中的age
//    int size = sizeof(int) * 10;
//    int *p =(int *)malloc(age);
//    memset(p, 0, size);
//    int *x = new int();
//    cout << &x << endl;
//    *x = 10;
//    *p = 10;
//    free(p);
//    delete x;
//    cout << "p\n"<<&p<<endl;
//
//    char *z = new char[4];
//    delete [] z;
//    printf("");
//    Person *p1 = new Person;
//    p1->name = "demo";
    
    return 0;
}
