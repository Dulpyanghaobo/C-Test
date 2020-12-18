# C++内存管理

## Heap、stack、代码区、全局区

## 堆:动态分配内存的区域

- 堆当中的内存分配过后需要手动释放，否则会造成内存泄漏

- 其中堆当中有一块区域是free store,new 和 delete 操作的区域是 free store，C++特性
- malloc 和 free 操作的区域是 heap，这是C语言特性

## 栈:内存管理的语境下，指的是函数调用过程中产生的本地变量和调用数据的区域。这个栈和数据结构里的栈高度相似，都满足“后进先出”

- 函数中产生的变量与调用的数据存储在栈区

## 代码区：函数在没有被调用之前存储在代码区，被调用时加载到栈区

## 全局区:存储全局变量的地方

# RALL

> C++ 所特有的资源管理方式，通过栈和析构函数对栈和堆内存进行资源管理





## 常见的函数内创建对象写法：创建堆当中对象

```c++

bar* make_bar(…)
{
  bar* ptr = nullptr;
  try {
    ptr = new bar();
    …
  }
  catch (...) {
    delete ptr;
    throw;
  }
  return ptr;
}

void foo()
{
  …
  bar* ptr = make_bar(…)
  …
  delete ptr;
}
```

## 创建栈当中对象