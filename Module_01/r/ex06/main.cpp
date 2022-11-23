#include "Harl.hpp"

int main(int argc, char **argv) {
    
    Harl   Harl;

    switch (argc)
    {
        case 2:
            Harl.complain(argv[1]);
            break;
    
        default:
            std::cout << "[ Nothing to Harl filter ]" << std::endl;
            break;
    }
}