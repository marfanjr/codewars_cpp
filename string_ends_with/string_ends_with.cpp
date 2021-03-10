bool solution(std::string const &str, std::string const &ending) {
  if (ending.length() == 0) return true;

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