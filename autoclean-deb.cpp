#include <iostream>
#include <filesystem>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cstdlib>


int main(){
char clear;
    std::cout << "Welcome to Autoclean tool! version 1.0" << std::endl;
    std::system("df -h /");
    std::cout << "Do you want to clean the root(/) filesystem? (y/n)" << std::endl;
std::cin >> clear;
if(clear == 'y' || clear == 'Y'){
std::cout << "start clean\n" << std::endl;
    std::system("sudo apt clean");
    std::system("sudo apt autopurge -y");
    std::system("sudo apt autoclean");
std::cout << "Cleaning user cache...\n";
    std::system("rm -r ~/.cache/*");
std::cout << "Cleaning journal logs...\n";
    std::system("sudo journalctl --vacuum-size=100M");
std::cout << "Cleaning tmp...\n";
    std::system("sudo rm -r /tmp/*");
}if(clear == 'N' || clear == 'n'){
std::cout << "Exit" << std::endl;
    std::system("exit");

}
//Autoclean tool for Debian.
//version 1.0
return 0;
}