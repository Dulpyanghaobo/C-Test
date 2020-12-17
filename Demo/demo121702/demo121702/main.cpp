//
//  main.cpp
//  demo121702
//
//  Created by yhb on 2020/12/17.
//

#include <iostream>
using namespace std;

class Person {
    int age;
    int height;
    string name;
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
  
//    栈空间
    Person person;
//    堆空间
    Person *p = new Person;

    return 0;
}
