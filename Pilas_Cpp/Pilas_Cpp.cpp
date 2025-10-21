#include <iostream>
#include "Pila.h"

class Pila_test : public Pila {

private:
	class Node {
		public:
		Url url;
		Node* next = nullptr;
		Node(Url url) { this->url = url; }
	};
	Node* top = nullptr;
	int size = 0;

public:
	void Push(Url url) override {
		Node* new_node = new Node(url);
		new_node->next = top;
		top = new_node;
		size++;
	}

	void Pop() override {
		if (top != nullptr) {
			Node* temp = top;
			top = top->next;
			delete temp;
			size--;
		}
	}

	Url Get_element() override {
		if (top != nullptr) {
			return top->url;
		}
		else {
			throw std::out_of_range("Pila is empty");
		}
	}

	int Size() override {
		return size;
	}

	bool Empty() override {
		return size == 0;
	}
};

int main() {
	Pila_test pila;
	Url url1, url2, url3;
	url1.setUrl("http://example1.com");
	url2.setUrl("http://example2.com");
	url3.setUrl("http://example3.com");
	pila.Push(url1);
	pila.Push(url2);
	pila.Push(url3);
	std::cout << "Top element: " << pila.Get_element().getUrl() << std::endl;
	std::cout << "Pila size: " << pila.Size() << std::endl;
	pila.Pop();
	std::cout << "Top element after pop: " << pila.Get_element().getUrl() << std::endl;
	std::cout << "Pila size after pop: " << pila.Size() << std::endl;
	return 0;
}