## 补全的代码

```cpp
/**
 * @brief 迭代器的前置自减运算符. 用于将迭代器指向上一个节点.
 *
 * @return const_iterator& 上一个节点的迭代器.
 */
const_iterator &operator--()
{
    current = current->prev;
    return *this;
}

/**
 * @brief 迭代器的后置自减运算符. 用于将迭代器指向上一个节点.
 *
 * @return const_iterator 上一个节点的迭代器.
 */
const_iterator operator--(int)
{
    const_iterator old = *this;
    --(*this);
    return old;
}
```

```cpp
/**
 * @brief 迭代器的前置自减运算符. 用于将迭代器指向上一个节点.
 *
 * @return const_iterator& 上一个节点的迭代器.
 */
iterator &operator--()
{
    this->current = this->current->prev;
    return *this;
}

/**
 * @brief 迭代器的后置自减运算符. 用于将迭代器指向上一个节点.
 *
 * @return const_iterator 上一个节点的迭代器.
 */
iterator operator--(int)
{
    iterator old = *this;
    --(*this);
    return old;
}
```



## 测试插入

```cpp
myList.push_back(1);
myList.push_back(2);
myList.push_front(0);
myList.push_front(-1);

std::cout << "List after insertions: ";
for (auto it = myList.begin(); it != myList.end(); ++it) {
    std::cout << *it << " ";
}
std::cout << std::endl;
```

首先建立一个空链表，使用`push_back`和`push_front`插入，并使用迭代器输出

结果：

```
List after insertions: -1 0 1 2 
```



## 测试大小

```cpp
std::cout << "Size of list: " << myList.size() << std::endl;
```

检查size的正确性

结果：

```
Size of list: 4
```



## 测试前后元素

```cpp
std::cout << "Front: " << myList.front() << std::endl;
std::cout << "Back: " << myList.back() << std::endl;
```

结果：

```
Front: -1
Back: 2
```



## 测试复制构造函数

```cpp
List<int> copiedList(myList);
std::cout << "Copied list: ";
for (auto it = copiedList.begin(); it != copiedList.end(); ++it) {
    std::cout << *it << " ";
}
std::cout << std::endl;
```

构造copiedList，并将myList值复制构造

结果：

```
Copied list: -1 0 1 2
```



## 测试删除

```cpp
myList.pop_back();
myList.pop_front();
std::cout << "List after popping front and back: ";
for (auto it = myList.begin(); it != myList.end(); ++it) {
    std::cout << *it << " ";
}
std::cout << std::endl;
```

将前后节点删除

结果：

```
List after popping front and back: 0 1
```



## 测试清空

```cpp
myList.clear();
std::cout << "List after clearing: ";
std::cout << (myList.empty() ? "Empty" : "Not empty") << std::endl;
```

结果：

```
List after clearing: Empty
```



## 测试赋值运算符

```cpp
myList.push_back(5);
myList.push_back(10);
List<int> anotherList;
anotherList = myList;

std::cout << "Another list after assignment: ";
for (auto it = anotherList.begin(); it != anotherList.end(); ++it) {
    std::cout << *it << " ";
}
std::cout << std::endl;
```

在myList中插入5 10，赋值给anotherList

结果：

```
Another list after assignment: 5 10
```



## 测试插入到特定位置

```cpp
anotherList.insert(anotherList.begin(), 20);
std::cout << "List after inserting 20 at the front: ";
for (auto it = anotherList.begin(); it != anotherList.end(); ++it) {
    std::cout << *it << " ";
}
std::cout << std::endl;
```

将20插入到anotherList开头

结果：

```
List after inserting 20 at the front: 20 5 10
```



## 测试删除指定位置

```cpp
anotherList.erase(anotherList.begin());
std::cout << "List after erasing front element: ";
for (auto it = anotherList.begin(); it != anotherList.end(); ++it) {
    std::cout << *it << " ";
}
std::cout << std::endl;
```

擦除第一个节点

结果：

```
List after erasing front element: 5 10
```



## 测试范围删除

```cpp
anotherList.push_back(30);
anotherList.push_back(40);
anotherList.push_back(50);
anotherList.erase(anotherList.begin(), anotherList.end());
std::cout << "List after range erase: ";
std::cout << (anotherList.empty() ? "Empty" : "Not empty") << std::endl;
```

将链表删除

结果：

```
List after range erase: Empty
```

