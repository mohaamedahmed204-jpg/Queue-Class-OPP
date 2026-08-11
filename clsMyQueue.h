#pragma once
#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;
template <class T>

class clsMyQueue {

protected:
	clsDblLinkedList <T> _MyList;
    T _Back = T();

public:

	void push(T Item) {
		_MyList.InsertAtEnd(Item);
        _Back = Item;
	}

	void pop() {
		_MyList.DeleteFirstNode();
        if(_MyList.IsEmpty())
            _Back = T();
	}

    void Print() {
		_MyList.PrintList();
	}

	int Size() {
		return _MyList.Size();
	}

	bool IsEmpty() {
		return _MyList.IsEmpty();
	}

	T front() {
		return _MyList.GetItem(0);
	}

	T back() {
		return _Back;
	}

    T GetItem(long long Item) {
        return _MyList.GetItem(Item);
    }

    void Reverse() {
        _MyList.Reverse();
    }

    void UpdateItem(long long Item, T Value) {
        _MyList.UpdateItem(Item, Value);
    }

    void InsertAfter(long long Item, T Value) {
        _MyList.InsertAfter(Item, Value);
    }

    void InsertAtFront(T Value) {
        _MyList.InsertAtBeginning(Value);
    }

    void InsertAtBack(T Value) {
        _MyList.InsertAtEnd(Value);
    }

    void Clear() {
        _MyList.Clear();
    }
};

