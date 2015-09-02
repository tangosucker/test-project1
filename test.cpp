#include <iostream>
#include <thread>

void call_from_thread() {
    std::cout << "t1 : call_from_thread();" << std::endl;
}

int main()
{

    std::cout << "t0 : creating thread t1\n";
    
    std::thread t1(call_from_thread);
    t1.join();

    return 0;
}