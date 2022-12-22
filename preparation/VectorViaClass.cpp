#include <iostream>

class Vector {

public:
	Vector() = default;
	explicit Vector(const int& s) {
		p = new double[s];
		this->size = s;
		for (int i = 0; i < s; ++i) {
			p[i] = 0;
		}
	}
	Vector(const Vector& other) {
		size = other.size;
		p = new double[other.size];
		for (int i = 0; i < size; ++i) {
			p[i] = other.p[i];
		}
	}
	
	Vector& operator=(const Vector& other) {
		if (this == &other) {
			return *this;
		}
		delete[] p;
		size = other.size;
		p = new double[size];
                for (int i = 0; i < size; ++i) {
                        p[i] = other.p[i];
                }
		return *this;
	}
	
	~Vector() {
		delete[] p;
	}
	double& operator[](int index)  const {
		return p[index];
	}
	double& operator[] (int index) {
		return p[index];
	}	
	int Size() const {
		return size;
	}
	void Print() {
		for (int i = 0; i < size; ++i) {
			std::cout << *(p + i) << " ";
		}
		std::cout << std::endl;
	}

private:
	int size{};
	double* p = nullptr;
};

int main() {
	Vector v(5);
	std::cout << "This is for Vector object v just initializing: ";
	v.Print();
	Vector v1(v);
	std::cout << "This is for Vector object v1 after copy constructor:  ";
	v1.Print();
	Vector v2;
	v2 = v;
	std::cout << "This is for Vector object v2 after assignment operator: ";
	v2.Print();
	return 0;
}
