double sqrt(double x, double eps = 1e-6) {
    double n = 0.;
    double n1 = n + 1;
    while (abs(n1 - n) > eps)
    {
        n = n1;
        n1 = n - (n * n - x) / (2 * n);
    }
    return n1;
}
