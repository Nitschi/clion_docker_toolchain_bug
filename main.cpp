#include <iostream>
#include <memory>

struct C
{
  // constructors needed (until C++20)
  C(int i) : i(i) {}
  C(int i, float f) : i(i), f(f) {}
  int i;
  float f{};
};

int main() {
  std::cout << "Hello, World!" << std::endl;
  auto test_var = std::make_shared<C>(1);
  std::shared_ptr<C> second_var = test_var;
  return 0;
}
