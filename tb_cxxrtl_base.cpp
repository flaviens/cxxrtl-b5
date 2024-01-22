#include "cxxrtl.cpp"

int main() {

  cxxrtl_design::p_wrapper__cxxrtl top;
  uint32_t out;

  // Set the clock and reset signals to 0.
  top.p_clkin__0.set<uint32_t>(0);
  top.step();
  top.step();
  out = top.p_out__0.get<uint32_t>();
  std::cout << "out 0 = " << out << std::endl;

  top.p_clkin__1.set<uint32_t>(0);
  top.step();
  top.step();
  out = top.p_out__0.get<uint32_t>();
  std::cout << "out 1 = " << out << std::endl;

  top.p_in__0.set<uint32_t>(0x00000010);
  top.step();
  out = top.p_out__0.get<uint32_t>();
  std::cout << "out 2 = " << out << std::endl;

  top.step();
  out = top.p_out__0.get<uint32_t>();
  std::cout << "out 3 = " << out << std::endl;

  return 0;
}
