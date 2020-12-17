//
//  main.cpp
//  C++Demo121701
//
//  Created by yhb on 2020/12/17.
//
// C++可以使用struct、class定义类
// struct与class区别
//1.struct默认权限public,class默认权限private
#include <iostream>
using namespace std;

class Person {
public:
//    成员变量
    int age;
//    成员函数
    void run() {
        cout << "Person::run()"<<endl;
    }
};

int main(int argc, const char * argv[]) {
//  Java/JS
//    Person p = new Person();
    cout << "Hello, World!\n";
//创建一个对象
    Person p;
    p.age = 10;
    printf("%d\n",p.age);
    return 0;
}
