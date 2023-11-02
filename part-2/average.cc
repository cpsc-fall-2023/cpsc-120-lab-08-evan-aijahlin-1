// Evan Kranz
// ekranz27@csu.fullerton.edu
// @ekranz27
// Partners: @aijahlin

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() <= 1) {
    std::cout << "error: you must supply at least one number";
    return 1;
  }
  double sum{0.0};
  double average{0.0};
  bool is_first{true};
  for (std::string& xxx : arguments) {
    if (is_first) {
      is_first = false;
      continue;
    }
    sum += std::stod(xxx);
  }
  average = sum / static_cast<double>((arguments.size() - 1));
  std::cout << "average = " << average << "\n";
  return 0;
}
