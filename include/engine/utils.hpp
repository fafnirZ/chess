

namespace Engine {
namespace Utils {

template <typename T>
std::vector<std::unique_ptr<T>> reverse_unique_ptr_deep_copy_vals(
    const std::vector<std::unique_ptr<T>>& original
);

}
}