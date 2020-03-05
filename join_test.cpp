#include <iostream> 
#include <thread> 
using namespace std;
void func() { 
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
//t.join();
//cout <<"ok"<< endl;	//等待子线程结束后才进入主线程 
return 0; 
}
