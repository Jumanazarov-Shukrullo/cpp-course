#include <iostream>
#include <vector>

template<typename T>
void swap(T& x, T& y) {
    T temp = x;
    x = y;
    y = temp;
}

class BigUint {
public:
    BigUint() = default;
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
    friend std::istream& operator>>(std::istream &, BigUint&);
    friend std::ostream& operator<<(std::ostream &, const BigUint&);
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



std::istream& operator>>(std::istream& is, BigUint& num) {
    num.digits_.clear();

    std::string str;
    is >> str;
    bool inputted_non_zero_digit = false;
    for (size_t i = 0; i < str.size(); ++i) {
        if (str[i] >= '1' && str[i] <= '9') {
            num.digits_.push_back(str[i] - '0');
            inputted_non_zero_digit = true;
        } else if (str[i] == '0') {
            if (inputted_non_zero_digit)
                num.digits_.push_back(0);
        } else
            break;
    }
    for (size_t i = 0; i < num.digits_.size() / 2; ++i) {
        swap<uint8_t>(num.digits_[i], num.digits_[num.digits_.size() - 1 - i]);
    }
    if (num.digits_.size() == 0) {
        num.digits_.push_back(0);
    }
    return is;
}

std::ostream& operator<<(std::ostream& os, const BigUint& num) {
    for (ssize_t i = num.digits_.size() - 1; i >= 0; --i) {
        os << (int) num.digits_[i];
    }
    return os;
}


int main() {
    BigUint a;
    BigUint b;
    std::cin >> a >> b;
//    std::cout << a++ << std::endl;
    std::cout << a << " " << b << std::endl;
    swap<BigUint>(a, b);
    std::cout << a << " " << b << std::endl;
}