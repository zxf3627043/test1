#include <iostream> 
#include <thread> 
#include <vector>
using namespace std;
void func() { 
    vector<int> time;
    for(int i = -10; i > -20; i--) 
    { 
        cout << "from func():" << i << endl; 

    } 
}
void func1() { 
    for(int i = -10; i > -20; i--) 
    { 
        cout << "from func():" << i << endl; 
    } 
}
int main()	//主线程
{ 
cout << "mian()" << endl; 
cout << "mian()" << endl; 
cout << "mian()" << endl; 
thread t(func);	//子线程 
thread t1(func1)
//t.join();
//cout <<"ok"<< endl;	//等待子线程结束后才进入主线程 
return 0; 
}
