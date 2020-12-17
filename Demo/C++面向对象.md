## 函数调用地址相同

### C++可以使用struct、class定义类

 struct与class区别

- struct默认权限public,class默认权限private

### struct默认权限public,class默认权限private

成员变量不能共用，不能共用内存

函数可以共用

### This

- this存储函数调用者的地址,this指向了函数调用者

- 原理：leaq将类地址(右边)值移动到左边的栈寄存器的栈底

- 

  ![image-20201217145618612](/Users/mac/Library/Application Support/typora-user-images/image-20201217145618612.png)

内存模型当中分为:堆、栈、代码区、全局区，函数存储在**代码区**当中代码区数据是只读的不能调用，函数调用在栈空间，成员变量放在栈空间。



类当中函数与成员变量存储地址不同，函数需要单独存入，为调用的函数并没有获取地址。

![image-20201217142059926](/Users/mac/Library/Application Support/typora-user-images/image-20201217142059926.png)

## 对象内存布局

- 对象内存分布是连续的

- int占4字节、char占4字节、string占16字节

- 指针指向的对象地址改变为当前对象地址改变

  ```
     struct User {
      string name;
      int age;
      int height;
      char gender;
      void display() {
  //        cout << name << age << height << endl;
          cout << "User::run()- "<<this->age << endl;
      }
  };
    int main() { 
     User user;
      user.display();
      user.name = "1";
      user.age = 2;
      user.height = 3;
      user.gender = 'm';
      user.display();
      cout << "user.name==" << &user.name << "\n" << "user.age==" << &user.age << "\n" << "user.height==" << &user.height << "\n" << "user.gender==" << (void *)&(user.gender) << endl;
      User *u = &user;
      u->age = 3;
      u->height = 3;
      u->gender = 'r';
      cout << "user.age==" << &u->age << "\n" << "user.height==" << &u->height << "\n" << "user.gender==" << (void *)&(u->gender) << endl;
      }
  ```

  ![image-20201217152124703](/Users/mac/Library/Application Support/typora-user-images/image-20201217152124703.png)

使用leaq一般都是指针操作

![image-20201217152844175](/Users/mac/Library/Application Support/typora-user-images/image-20201217152844175.png)

> 原理：如何利用指针间接访问所指对象的成员变量?
>
> 1.从指针当中取出对象地址
>
> 2.利用对象的地址+成员变量的偏移量(成员变量离类对象的距离)计算出成员变量的地址
>
> 3.根据成员变量的地址访问成员变量的存储空间

