#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<int, std::string> hashTable = {{1, "one"}, {2, "two"}, {3, "three"}};

    // 删除键为 2 的键值对
    hashTable.erase(2);

    // 输出哈希表的内容
    for (const auto& pair : hashTable) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
    system("pause");
    return 0;
}