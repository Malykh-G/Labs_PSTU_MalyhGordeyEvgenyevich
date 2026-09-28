#include <iostream>
#include <string>
#include <thread>
#include <chrono>

int main() {
    std::string message = "DIS-26-3B THE BEST";
    
    for (int i = 0; i < (int)message.size(); ++i) {
        int color = 31 + (i % 7);   // цвета 31–37
        std::cout << "\033[1;" << color << "m" << message[i] << "\033[0m" << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    std::cout << std::endl;
    return 0;
}