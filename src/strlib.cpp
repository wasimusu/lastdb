#include "../include/strlib.h"

std::vector<std::string> split(const std::string &str) {
  std::stringstream ss;
  ss << str;
  std::string word;
  std::vector<std::string> result;
  while (ss >> word) {
    result.push_back(word);
  }
  return std::move(result);
}

std::ostream &operator<<(std::ostream &os, std::vector<std::string> &strs) {
  for (auto i = 0; i < strs.size() - 1; ++i) {
    os << strs[i] << '\t';
  }
  os << strs.back();
  return os;
}

std::string join(std::vector<std::string> &strs, char delimiter) {
  std::string result;
  for (auto i = 0; i < strs.size() - 1; ++i) {
    result += strs[i];
    result.push_back(delimiter);
  }
  result += strs.back();
  return std::move(result);
}

int add(int a, int b) {
  return a + b;
}

