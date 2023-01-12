#include <iostream>
#include <vector>

class BigUint {
public:
    explicit BigUint(unsigned num) {
        while (num != 0 || digits_.empty()) {
            digits_.push_back(num % 10);
            num /= 10;
        }
    }
    /// Rule of three
    BigUint(const BigUint& other) = default;
    BigUint& operator=(const BigUint& other) = default;
    ~BigUint() = default;

    BigUint& operator+=(const BigUint& other) {
        const std::vector<uint8_t>& top = digits_.size() >= other.digits_.size() ?
                digits_ : other.digits_;
        const std::vector<uint8_t>& bottom = digits_.size() < other.digits_.size() ?
                digits_ : other.digits_;

        std::vector<uint8_t> sum(top.size());
        bool carry = false;
        for (int i = 0; i < top.size(); ++i) {
            sum[i] = uint8_t(carry) + top[i] + (i < bottom.size() ? bottom[i] : uint8_t(0));
            carry = sum[i] >= uint8_t(10);
            sum[i] %= 10;
        }
        if (carry)
            sum.push_back(uint8_t(1));
        digits_ = sum;
        return *this;
    }
    BigUint& operator-=(const BigUint& other) {/**/}
    BigUint& operator*=(const BigUint& other) {/**/}
    void print() {
        for (ssize_t i = digits_.size() - 1; i >= 0; --i) {
            std::cout << (int)digits_[i];
        }
    }
    BigUint& operator++ () {
        return operator+=(BigUint(1));
    }
    BigUint operator++ (int) {
        BigUint cpy(*this);
        operator++();
        return cpy;
    }
private:
    std::vector<uint8_t> digits_;
private:
    friend bool operator<(const BigUint&, const BigUint&);
};

BigUint operator+(const BigUint& first, const BigUint& second) { return BigUint(first) += second; }
BigUint operator-(const BigUint& first, const BigUint& second) { return BigUint(first) -= second; }
BigUint operator*(const BigUint& first, const BigUint& second) { return BigUint(first) *= second; }

/// 123 < 45
/// 123, 321 ==> 321 && 123
bool operator<(const BigUint& first, const BigUint& second) {
    if (first.digits_.size() != second.digits_.size())
        return first.digits_ < second.digits_;
    for (int i = 0; i < first.digits_.size(); ++i) {
        if (first.digits_[i] != second.digits_[i])
            return first.digits_[i] < second.digits_[i];
    }
    return false;
}
int main() {
    unsigned x, y;
    std::cin >> x >> y;
    BigUint a(x);
    BigUint b(y);
    bool xx = (a < b);
    std::cout << xx << std::endl;
}