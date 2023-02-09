#include <iostream>

struct Polygon {
    int width{}, height{};

    Polygon() = default;

    [[nodiscard("You should assign into int")]] virtual int get_area() const = 0;

    [[maybe_unused]] virtual void set_width(int width) = 0;

    [[maybe_unused]] [[nodiscard("You should assign into int")]] virtual int get_width() const = 0;

    [[maybe_unused]] [[nodiscard("You should assign into int")]] virtual int get_height() const = 0;

    [[maybe_unused]] virtual void set_height(int height) = 0;
};


struct [[maybe_unused]] Rectangle : Polygon {
    [[maybe_unused]] Rectangle (int a, int b) {
        width = a;
        height = b;
    }

    [[nodiscard]] int get_area() const override {
        return width * height;
    }

    [[nodiscard]] int get_width() const override {
        return width;
    }

    [[nodiscard]] int get_height() const override {
        return height;
    }

    void set_width(int width) override {
        this->width = width;
    }

    void set_height(int height) override {
        this->height = height;
    }
};

struct Square : Polygon {
    explicit Square (int a){
        width = a;
        height = a;
    }
    [[nodiscard]] int get_area() const override{
        return width * height;
    }
    [[nodiscard]] int get_width() const override{
        return width;
    }
    [[nodiscard]] int get_height() const override {
        return height;
    }
    void set_width(int width) override {
        this->width = width;
    }
    void set_height(int height) override{
        this->height = height;
    }
};


int main() {
    Square s(5);
    std::cout<<s.get_area()<<std::endl;
}