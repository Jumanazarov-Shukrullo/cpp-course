#include <iostream>
#include <vector>
#include <string>
#include <set>

/// Some more complex classes
template <typename T>
class BST {
public:
    BST() = default;

    void insert(T x) {
        root = insert(root, x);
    }

    bool search(T x) {
        return search(root, x);
    }

    void remove(T x) {
        root = remove(root, x);
    }

    void inOrder() {
        inOrder(root);
    }

private:
    struct Node {
        T data;
        Node *left;
        Node *right;

        Node(T x) : data(x), left(nullptr), right(nullptr) {}
    };

    Node *root;

    Node *insert(Node *node, T x) {
        if (!node) {
            return new Node(x);
        }
        if (x < node->data) {
            node->left = insert(node->left, x);
        } else if (x > node->data) {
            node->right = insert(node->right, x);
        }
        return node;
    }
};

/// templates with multiple template arguments
template <typename T, typename U>
void swap(T &a, U &b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T, typename U>
auto dotProduct(const std::vector<T>& a, const std::vector<U>& b) {
    auto result = T{};
    for (std::size_t i = 0; i < a.size(); ++i) {
        result += a[i] * b[i];
    }
    return result;
}

template <typename T, typename U>
std::set<T> intersection(const std::set<T>& a, const std::set<U>& b) {
    std::set<T> result;
    for (const auto& x : a) {
        if (b.count(x)) {
            result.insert(x);
        }
    }
    return result;
}


