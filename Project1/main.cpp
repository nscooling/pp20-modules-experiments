
import std.core;

int main() {
    std::vector<std::string> vec{ "Plato", "Descartes", "Bacon" };
    for (auto const& str : vec) {
        std::cout << str << '\n';
    }
}