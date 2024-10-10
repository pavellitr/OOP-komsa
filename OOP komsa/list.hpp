#pragma once
#ifndef LIST_HPP
#define LIST_HPP
#include <iostream>
#include <cstddef>


template <typename T>
struct Node {
	T data;
	Node* next = NULL;
};

template <typename T>
class List {
public:
	class Iterator {
	private:
		Node<T>* curr;

	public:
		using iterator_category = std::forward_iterator_tag;



	};



};

























#endif // !LIST_HPP
