//
//  main.cpp
//  C++Demo121801
//
//  Created by yhb on 2020/12/18.
//

#include <iostream>
using namespace std;

//sh n
//构造函数getter方法
struct Person {
    int m_age;
    Person() {
        cout << "Person()" << endl;
    }
    ~Person () {
        cout << "endl()" << endl;
    }
    Person(int age) {
        m_age = age;
        cout << "PersonAGe()" << endl;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
//    Person p1(1);
//    Person p2(2);
//    Person p3(3);
//
    {
        Person person;
    }
    Person *p4 = new Person(1);
//    Person *p5 = (Person *)malloc(sizeof(Person));
    delete p4;
//    free(p5);
    return 0;
}
