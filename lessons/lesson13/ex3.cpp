#include <iostream>
#include <vector>

class BigUint {
public:
    explicit BigUint(unsigned num) {
        while (num != 0 || digits_.empty()){
            digits_.push_back(num % 10);
            num /= 10;
        }
    }
    BigUint(const BigUint& other) = default;
    BigUint& operator=(const BigUint& other) = default;
    ~BigUint() = default;

    BigUint& operator+=(const BigUint& other) {
        const std::vector<uint8_t>& top = digits_.size() >= other.digits_.size() ? digits_ : other.digits_;
        const std::vector<uint8_t>& bottom = digits_.size() < other.digits_.size() ? digits_ : other.digits_;
        std::vector<uint8_t> sum(top.size());
        bool carry = false;
        for (size_t i = 0; i < top.size(); ++ i) {
            sum[i] = uint8_t(carry) + top[i] + (bottom.size() > i ? bottom[i] : uint8_t(0));
            carry = sum[i] >= uint8_t(10);
            sum[i] %= uint8_t(10);
        }
        if (carry)
            sum.push_back(uint8_t(1));
        digits_ = sum;
        return *this;
    }
    BigUint operator+() const {
        return *this;
    }
    void print() {
        for (ssize_t i = digits_.size() - 1; i >= 0; -- i) {
            std::cout << (int) digits_[i];
        }
    }
    BigUint& operator++() {
        return operator+=(BigUint(1));
    }
    const BigUint operator++ (int) {
        BigUint cpy(*this);
        operator++();
        return cpy;
    }
private:
    std::vector<uint8_t> digits_;
private:
    friend bool operator==(const BigUint&, const BigUint&);
    friend bool operator<(const BigUint&, const BigUint&);
};

bool operator==(const BigUint &first, const BigUint &second) {
    return false;
}

bool operator<(const BigUint &first, const BigUint &second) {
    return false;
}

int main() {
    unsigned x, y;
    std::cin >> x >> y;
    BigUint a(x);
    BigUint b(y);
    (a += b).print();
}