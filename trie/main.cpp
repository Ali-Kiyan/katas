#include <assert.h>
#include <iostream>
#include <string>
#include "./trie.hpp"

using std::cout;
using std::string;

int main() {
  string keys[] = {"freedom", "free", "freed", "trial", "judgment", "fury"};
  struct TrieNode *root = createTrieNode();
  for (auto &key : keys) {
    insert(root, key);
  }

  bool result;

  result = search(root, "free");
  assert(result == true);

  result = search(root, "freedom");
  assert(result == true);

  result = search(root, "freed");
  assert(result == true);

  result = search(root, "test");
  assert(result == false);

  result = search(root, "foobar");
  assert(result == false);
}
