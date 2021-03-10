#include <string>
#include <iostream>
bool solution(std::string const &str, std::string const &ending) {
  std::size_t pos = str.length() - ending.length();
  std::size_t found = str.find(ending);
  if (found != std::string::npos)
    if(found == pos)
      return true;
  return false;
}
int main() {
  std::cout << solution("abcde", "cde");
  std::cout << solution("abcde", "abc");
  std::cout << solution("abc", "");
  return 0;
}