#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;
    std::size_t cap = v.capacity();
    v.reserve(1000); // el bloque se aparta una vez

    std::cout << "size 0 -> capacity " << cap << '\n';
    for (int i = 0; i < 1000; ++i) {
        v.push_back(i);
        if (v.capacity() != cap) {
            cap = v.capacity();
            std::cout << "size " << v.size()
                    << " --> capacity " << cap << '\n';
        }
    }

    return 0;
}