#include "LinkedList.hpp"

int main() {
    // 测试【取值】操作是否正确，包括可能的空链表测试(部分)，每种情况9分
    // SingleLinkedList<int> a;
    SingleLinkedList<int> a{1, 2, 3, 4, 5};  // 初始化链表
    int a_get = a.getCurrentVal();            // 获取当前值
    std::cout << a_get << std::endl;          // 输出当前值

    // 测试【定义值】操作是否正确，包括可能的空链表测试(部分)，每种情况9分
    // SingleLinkedList<char> b;
    SingleLinkedList<char> b{'a', 'c', 'e'};  // 初始化字符链表
    b.setCurrentVal('g');                     // 设置当前节点的值为 'g'
    b.printList();                            // 打印链表内容

    // 测试【空链表判断】操作是否正确，18分
    SingleLinkedList<char> e;                 // 定义一个空链表
    std::cout << b.isEmpty() << " "           // 判断链表 b 是否为空
              << e.isEmpty() << std::endl;    // 判断链表 e 是否为空

    // 测试【插入】操作是否正确，每种情况6分
    SingleLinkedList<double> c1;              // 创建空链表 c1
    SingleLinkedList<double> c2{1.5, 2.0, 9.0, 4.7};  // 初始化链表 c2
    SingleLinkedList<double> c3;              // 创建空链表 c3
    c3 = c2;                                  // 将 c2 赋值给 c3
    c1.insert(3.0);                           // 在 c1 中插入 3.0
    c2.insert(8.8);                           // 在 c2 中插入 8.8
    bool f_c3 = c3.find(2.0);                 // 在 c3 中查找 2.0
    c3.insert(8.8);                           // 在 c3 中插入 8.8

    c1.printList();                           // 打印链表 c1 的内容
    c2.printList();                           // 打印链表 c2 的内容
    c3.printList();                           // 打印链表 c3 的内容

    // 测试【删除】操作是否正确，每种情况6分
    e.remove();                               // 从空链表 e 中删除节点
    c1.remove();                              // 从链表 c1 中删除节点
    bool f = c2.find(9.0);                    // 查找 c2 中是否存在 9.0
    c2.remove();                              // 从 c2 中删除节点

    e.printList();                            // 打印空链表 e 的内容
    c1.printList();                           // 打印链表 c1 的内容
    c2.printList();                           // 打印链表 c2 的内容

    return 0;
}
