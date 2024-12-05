#include <iostream>
#include <algorithm> // Для std::max
using namespace std;

//Узел AVL-дерева
struct Node {
    int value; //Значение узла
    int height; //Высота узла
    Node* left; //Левый потомок
    Node* right; //Правый потомок 

    //Конструктор 
    Node(int val) : value(val), height(1), left(nullptr), right(nullptr) {}
};

class AVLTree {
private:
    Node* root; //Корень дерева 
    
    //Функция для получения высоты узла 
    int getHeight(Node* node) {
        return node ? node->height : 0; //Если узел не существует, его высота равна 0
    }
    
    //Функция для расчёта баланса узла 
    int getBalance(Node* node) {
    if (!node) return 0;
    return getHeight(node->left) - getHeight(node->right);
    }

    //Правый поворот вокруг узла у 
    Node* rotateRight(Node* y) {
        Node* x = y->left; //Новый корень 
        Node* T = x->right; //Сохранение поддерева х 

        //Выполняем вращение
        x->right = y;
        y->left = T;
        
        
    }
    
};

