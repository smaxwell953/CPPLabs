// An empty list:
//
//  Node*
// +------+
// | head |-->nullptr
// +------+
//
//  Node*
// +------+
// | tail |-->nullptr
// +------+
//
//
//
// A list with two elements:
//
//  Node*      Node         Node
// +------+   +-----+      +-----+
// | head |-->|value|  +-->|value|
// +------+   +-----+  |   +-----+
//            |next |--+   |next |-->nullptr
//            +-----+      +-----+
//                           ^
// +------+                  |
// | tail |------------------+
// +------+
#include <iostream>

using namespace std;
//5.3.13.4

class Node
{
public:
  Node(int val);
  int value;
  Node* next;
};

Node::Node(int val) : value(val), next(nullptr)
{
}

class List
{
public:
  List();
  void push_front(int value);
  bool pop_front(int &value);
  void push_back(int value);
  int size()
private:
  // other members you may have used
  Node* head;
  Node* tail;
};

List::List() : head(nullptr), tail(nullptr)
{
}

void List::push_front(int value)
{
  // You need to fix this part!
  // The tail pointer needs to be modified only when the first element is added
  Node* new_head = new Node(value);
  new_head->next = head;
  head=new_head;
}

// All of your previously written methods may require a little fixing

// START
// +------+   +-----+      +-----+
// | head |-->|  X  |  +-->|  Y  |
// +------+   +-----+  |   +-----+
//            |next |--+   |next |-->nullptr
//            +-----+      +-----+
//                           ^
// +------+                  |
// | tail |------------------+
// +------+
//
// STEP 1
//                                            new Node
// +------+   +-----+      +-----+             +-----+
// | head |-->|  X  |  +-->|  Y  |             |  Z  |
// +------+   +-----+  |   +-----+             +-----+
//            |next |--+   |next |-->nullptr   |next |-->nullptr
//            +-----+      +-----+             +-----+
//                           ^
// +------+                  |
// | tail |------------------+
// +------+
//
// STEP 2
//
// +------+   +-----+      +-----+       +-----+
// | head |-->|  X  |  +-->|  Y  |   +-->|  Z  |
// +------+   +-----+  |   +-----+   |   +-----+
//            |next |--+   |next |--+    |next |-->nullptr
//            +-----+      +-----+       +-----+
//                           ^
// +------+                  |
// | tail |------------------+
// +------+
//
// STEP 3
// +------+   +-----+      +-----+       +-----+
// | head |-->|  X  |  +-->|  Y  |   +-->|  Z  |
// +------+   +-----+  |   +-----+   |   +-----+
//            |next |--+   |next |--+    |next |-->nullptr
//            +-----+      +-----+       +-----+
//                                          ^
// +------+                                 |
// | tail |---------------------------------+
// +------+
void List::push_back(int value)
{
  // implement me!
}

int main()
{
  List list;
  //
  list.push_back(1);
  list.push_back(2);
  list.push_back(3);
  list.push_back(4);

  int value = 0;
  while (list.pop_front(value))
  {
    cout << value << endl;
  }
  return 0;
}
