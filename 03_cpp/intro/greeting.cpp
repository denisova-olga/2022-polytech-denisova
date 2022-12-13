#include <iostream>

int main() {
  std::cout << "Name? ";
  std::string username;
  std::cin >> username;
  std::cout << "\nHello, " << username << "!" << std::endl;
  return 0;
}
