#include <thread>
#include <iostream>
#include<chrono>
#include <mutex>
using namespace std;
void Fun_1(unsigned int &counter);
void Fun_2(unsigned int &counter);
mutex mtx;
int main()
{
     unsigned int counter = 0;
     thread thrd_1(Fun_1, ref(counter));
     thread thrd_2(Fun_2, ref(counter));
     thrd_1.join();
     thrd_2.join();
     //system("pause");
     return 0;
 }
 
 void Fun_1(unsigned int &counter)
 {
     while (true)
     {
	 lock_guard<std::mutex> mtx_locker(mtx);
         ++counter;
         if (counter < 1000)
         {
            cout << "Function 1 counting " << counter << "...\n";
         }
         else
         {
             break;
         }
     }
 }
 
 void Fun_2(unsigned int &counter)
 {
     while (true)
     {
	 lock_guard<std::mutex> mtx_locker(mtx);
         ++counter;
         if (counter < 1000)
         {
             cout << "Function 2 counting " << counter << "...\n";
         }
         else
         {
             break;
         }
     }
 }
