package main

import "fmt"

type Node struct {
	data int
	next *Node
}

// InsertBeginning agrega un nuevo nodo al inicio de la lista complejidad de tiempo O(1)
func (n *Node) InsertAtBeginning(data int) *Node {
	newNode := &Node{data: data, next: n}
	return newNode
}

// InsertAtEnd agrega un nuevo nodo al final de la lista. Complejidad de tiempo O(n)
func (n *Node) InsertAtEnd(data int) {
	newNode := &Node{data: data, next: nil}

	if n.next == nil {
		n.next = newNode
		return
	}

	// recorre la lista para encontrar el ultimo nodo
	current := n
	for current.next != nil {
		current = current.next
	}

	current.next = newNode
}

func (n *Node) PrintList() {
	current := n
	for current != nil {
		fmt.Printf("%d -> ", current.data)
		current = current.next
	}

	fmt.Println("nil")
}

func (n *Node) DeleteNode(key int) *Node {
	// Delete head
	if n != nil && n.data == key {
		return n.next
	}

	current := n
	var prev *Node = nil
	for current != nil && current.data != key {
		prev = current
		current = current.next
	}

	if current == nil {
		return n
	}

	prev.next = current.next
	return n
}

func main() {
	var head *Node = nil

	head = head.InsertAtBeginning(1)

	fmt.Print("Lista original: ")
	head.PrintList()

	head = head.DeleteNode(1)

	fmt.Print("Lista original: ")
	head.PrintList()

}
