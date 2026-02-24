
//SingleLevelInheritance

// #include <bits/stdc++.h>
// using namespace std;
// class parent
// {
//     public: void fun1()
//     {
//         cout << "parent class" << "\n";
//     }
// };
// class child: public parent
// {
//     public: void fun2()
//     {
//         cout<< "child class";
//     }
// };
// int main()
// {
//     child obj;
//     obj.fun1();
//     obj.fun2();
// }

//MultiLevelInheritance

// #include <bits/stdc++.h>
// using namespace std;
// class Gparent
// {
//     public: void fun1()
//     {
//         cout << "grandparent class" << "\n";
//     }
// };
// class parent: public Gparent
// {
//     public: void fun2()
//     {
//         cout<< "parent class" << endl;
//     }
// };
// class Gchild: public parent
// {
//     public: void fun3()
//     {
//         cout << "grandchild class";
//     }
// };
// int main()
// {
//     Gchild obj;
//     obj.fun1();
//     obj.fun2();
//     obj.fun3();
// }

// MultipleInheritance

// #include <bits/stdc++.h>
// using namespace std;
// class parent1
// {
//     public: void fun1()
//     {
//         cout << "Parent 1" << endl;
//     }
// };
// class parent2
// {
//     public: void fun2()
//     {
//         cout<< "Parent 2" << endl;
//     }
// };
// class child: public parent2, public parent1
// {
//     public: void fun3()
//     {
//         cout << "child";
//     }
// };
// int main()
// {
//     child obj;
//     obj.fun1();
//     obj.fun2();
//     obj.fun3();
// }

//HierarichalInheritance

#include <bits/stdc++.h>
using namespace std;
class parent
{
    public: void fun1()
    {
        cout << "Parent 1" << endl;
    }
};

/// @brief class : printf("tanamy");

class child1: public parent
{
    public: void fun2()
    {
        cout<< "Child 1" << endl;
    }
};
class child2: public parent
{
    public: void fun3()
    {
        cout << "Child 2" << endl;
    }
};
int main()
{
    child2 obj2;
    child1 obj1;
    obj2.fun1();
    obj2.fun3();
    obj1.fun1();
    obj1.fun2();
}
