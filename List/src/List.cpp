#include "List.h"
#include <iostream>

void testList();
int main()
{
    testList();
    // List<int> lst;
    // for (int i = 0; i < 10; ++i)
    // {
    //     lst.push_back(i);
    // }

    // lst.pop_back();

    // for (auto it : lst)
    // {
    //     std::cout << it << std::endl;
    // }

    // for (auto it = lst.begin(); it != lst.end(); ++it)
    // {
    //     std::cout << *it << std::endl;
    // }

//     List<int> lst = {1, 2, 3, 4, 5};
//     for (auto &x : lst)
//     {
//         std::cout << x << "\t";
//     }
//     std::cout << std::endl;

// //    List<int> lst2 = std::move(lst);
//     List<int> lst2 = List<int> {5, 6};
//     for (auto &x : lst2)
//     {
//         std::cout << x << "\t";
//     }
//     std::cout << std::endl;

//     lst2 = std::move(lst);
//     for (auto &x : lst2)
//     {
//         std::cout << x << "\t";
//     }
//     std::cout << std::endl;

    return 0;
}

void testList() 
{
    List<int> myList;

    // 测试插入
    myList.push_back(1);
    myList.push_back(2);
    myList.push_front(0);
    myList.push_front(-1);

    std::cout << "List after insertions: ";
    for (auto it = myList.begin(); it != myList.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // 测试大小
    std::cout << "Size of list: " << myList.size() << std::endl;

    // 测试前后元素
    std::cout << "Front: " << myList.front() << std::endl;
    std::cout << "Back: " << myList.back() << std::endl;

    // 测试复制构造函数
    List<int> copiedList(myList);
    std::cout << "Copied list: ";
    for (auto it = copiedList.begin(); it != copiedList.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // 测试删除
    myList.pop_back();
    myList.pop_front();

    std::cout << "List after popping front and back: ";
    for (auto it = myList.begin(); it != myList.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // 测试清空
    myList.clear();
    std::cout << "List after clearing: ";
    std::cout << (myList.empty() ? "Empty" : "Not empty") << std::endl;

    // 测试赋值运算符
    myList.push_back(5);
    myList.push_back(10);
    List<int> anotherList;
    anotherList = myList;

    std::cout << "Another list after assignment: ";
    for (auto it = anotherList.begin(); it != anotherList.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // 测试插入到特定位置
    anotherList.insert(anotherList.begin(), 20);
    std::cout << "List after inserting 20 at the front: ";
    for (auto it = anotherList.begin(); it != anotherList.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // 测试删除指定位置
    anotherList.erase(anotherList.begin());
    std::cout << "List after erasing front element: ";
    for (auto it = anotherList.begin(); it != anotherList.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // 测试范围删除
    anotherList.push_back(30);
    anotherList.push_back(40);
    anotherList.push_back(50);
    anotherList.erase(anotherList.begin(), anotherList.end());
    std::cout << "List after range erase: ";
    std::cout << (anotherList.empty() ? "Empty" : "Not empty") << std::endl;
}
