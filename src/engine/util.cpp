#include <vector>
#include <memory>
#include <algorithm>

namespace Engine {
namespace Utils {


template <typename T>
std::vector<std::unique_ptr<T>> reverse_unique_ptr_deep_copy_vals(
    const std::vector<std::unique_ptr<T>>& original
) {

    std::vector<std::unique_ptr<T>> reversed;
    reversed.reserve(original.size());

    // note crbegin -> reversed order
    for (auto it = original.crbegin(); it != original.crend(); ++it) {
        if (*it) { // Check for null pointers (important!)
        reversed.push_back(std::make_unique<T>(**it)); // Deep copy
        } else {
        reversed.push_back(nullptr); // Preserve nulls if present
        }
    }
    return reversed;
}

}
}