#include <iostream>
#include <vector>

template <int N>
void f(int x) {
    std::cout << x + N;
}
template <typename T, size_t N>
class array {
    T arr[N];
};

template <size_t N>
class Residue {

};

template <size_t N, size_t M, typename Field = Rational>
class Matrix {

};

template <size_t N, size_t M, size_t K, typename Field>
Matrix<N, K, Field> operator*(const Matrix<N, M, Field>&, const Matrix<M, K, Field>& );

template <template<class> typename Container>
class Stack {
    Container<int> c;
};

template <typename T>
void foo(T& x) {
    switch (type_name< decltype(T)>()) {
        case int:
            break;

    }
}
int main() {
    Stack<std::vector> s;
    return 0;
}