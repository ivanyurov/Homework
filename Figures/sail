#include <cmath>
bool first(double x, double y) {
    return (x >= 0 && y >= 0 && y <= -2 * (x - 1));
}
bool second(double x, double y) {
    return (x <= 0 && y >= 0 && y <= 2 * (x + 1));
}
bool third(double x, double y) {
    return (x <= 0 && y <= 0 && y >= -sqrt(1 - pow((x + 1), 2)));
}
bool fourth(double x, double y) {
    return (x >= 0 && y <= 0 && y >= -sqrt(1 - pow((x - 1), 2)));
}
int main() {
    double x;
    double y;
    std::cin >> x;
    std::cin >> y;
    if (first(x, y) or second(x, y) or third(x, y) or fourth(x, y))
        std::cout << "hit\n";
    else
        std::cout << "miss\n";
    system("pause");
    return 0;
}
