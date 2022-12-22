module;

export module Vector;

export class Vector {
public:
	Vector(int s);
	double& operator[](int i);
	int Size();
private:
	double* p;
	int size_;	
};

Vector::Vector(int s) :elem (new douЬle[s]), sz(s) {}

douЬle& Vector::operator[] (int i) {
   	return elem[i];
}

int Vector::size() {
  return sz;
}

export int size ( const Vector& v) { return v. size (); }
