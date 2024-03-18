#include "../cmkproject/utils/utils.h"

int main(int argc, char** argv) {
    std::string str = cmkproject::utils::Print("CMake template!"); 
    std::cout << str << "\n"; 
    return 0; 
}
