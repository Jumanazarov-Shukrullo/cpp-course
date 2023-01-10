#include <iostream>

class CircularBuffer {
public:
    explicit CircularBuffer(int size) : front_(-1), back_(-1), size_(size), circular_buffer_(new int[size_]) {}

    ~CircularBuffer() { delete[] circular_buffer_; }

    void Insert(int value) {
        if (isFull()) {
            throw std::runtime_error("Buffer is full");
        } else if (front_ == -1) {
            front_ = back_ = 0;
            circular_buffer_[back_] = value;
        } else if (back_ == size_ - 1 && front_ != 0) {
            back_ = 0;
            circular_buffer_[back_] = value;
        } else {
            back_++;
            circular_buffer_[back_] = value;
        }
    }
    [[nodiscard]] int size() const {
        return size_;
    }
    int Delete() {
        if (isEmpty()) {
            throw std::runtime_error("Buffer is empty");
        }
        int data = circular_buffer_[front_];
        circular_buffer_[front_] = -1;
        if (front_ == back_) {
            front_ = -1;
            back_ = -1;
        } else if (front_ == size() - 1)
            front_ = 0;
        else
            front_++;
        return data;
    }

    [[nodiscard]] bool isFull() const {
        if (front_ == 0 && back_ == size() - 1) {
            return true;
        }
        if (front_ == back_ + 1) {
            return true;
        }
        return false;
    }

    [[nodiscard]] bool isEmpty() const {
        if (front_ == -1)
            return true;
        else
            return false;
    }
private:
    int front_, back_;
    int size_;
    int *circular_buffer_;
};


Я буду использовать интеллектуальные указатели C++, чтобы гарантировать, что я не оставлю никаких данных после уничтожения буфера. Это означает, что я могу управлять буфером для пользователя.

Еще одним преимуществом C++ является тривиальность создания этого класса потокобезопасным: я могу полагаться на тип std::mutex (при условии, что он определен для нашей платформы).

#include <memory>
#include <mutex>

template<class T>
class CircularBuffer {
public:
    explicit CircularBuffer(int size) :
            buf_(std::unique_ptr<T[]>(new T[size])),
            max_size_(size) {}

    void Insert(T item) {
        std::lock_guard<std::mutex> lock(mutex_);

        buf_[head_] = item;

        if (full_) {
            tail_ = (tail_ + 1) % max_size_;
        }

        head_ = (head_ + 1) % max_size_;

        full_ = head_ == tail_;
    }

    void Delete() {
        std::lock_guard<std::mutex> lock(mutex_);
        head_ = tail_;
        full_ = false;
    }

    [[nodiscard]] bool isEmpty() const {
        return (!full_ && (head_ == tail_));
    }

    [[nodiscard]] bool isFull() const {
        return full_;
    }


    int size() {
        size_t size = max_size_;
        if (!full_) {
            if (head_ >= tail_) {
                size = head_ - tail_;
            } else {
                size = max_size_ + head_ - tail_;
            }
        }

        return size;
    }

private:
    std::mutex mutex_;
    std::unique_ptr<T[]> buf_;
    int head_ = 0;
    int tail_ = 0;
    const int max_size_;
    bool full_ = false;
};