#include <iostream>
#include <clocale>

int main() {
    setlocale(LC_CTYPE, "Polish");
    std::cout << "Czeœæ, chcia³bym stworzyæ szachy" << std::endl;
    std::cin.get(); // Czeka na wciœniêcie klawisza
    return 0;
}