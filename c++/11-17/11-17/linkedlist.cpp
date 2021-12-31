#include<iostream>
#include<string>
using namespace std;

typedef struct ListNode {
	string data;
	struct ListNode* next;
} ListNode;

void InsertInLinkedList(ListNode** head, string data, int position) {
	ListNode* inserted = new ListNode;
	inserted->data = data;

	if (position == 1 || *head == NULL) {
		inserted->next = *head;
		*head = inserted;
	}
	else {
		ListNode* inserted_prev = *head;
		for (int i = 1; (inserted_prev->next != NULL) && (i < position - 1); i++) {
			inserted_prev = inserted_prev->next;
		}

		ListNode* inserted_next = inserted_prev->next;
		inserted_prev->next = inserted;
		inserted->next = inserted_next;
	}
}

void PrintList(struct ListNode* head) {
	struct ListNode* current = head;
	while (current != NULL)
	{
		cout << current->data << " -> ";
		current = current->next;
	}
	cout << "NULL\n";
}

void DeleteNodeFromLinkedList(ListNode** head, int position) {
	if (*head == NULL) {
		cout << "List empty" << "\n";
		return;
	}
	ListNode* removed_prev;
	ListNode* removed;
	if (position == 1) {
		removed = *head;
		*head = (*head)->next;
		delete(removed);
	}
	else {
		ListNode* removed_prev = *head;
		removed = removed_prev->next;
		for (int i = 1; (removed->next != NULL) && (i < position - 1); i++) {
			removed_prev = removed_prev->next;
			removed = removed_prev->next;
		}
		removed_prev->next = removed->next;
		delete(removed);
	}
}

int ListLength(struct ListNode* head) {
	int len = 0;
	struct ListNode* current = head;
	while (current != NULL)
	{
		len++;
		current = current->next;
	}
	return len;
}

ListNode* head = NULL;
int main() {
	InsertInLinkedList(&head, "월", 1);
	InsertInLinkedList(&head, "화", 2);
	InsertInLinkedList(&head, "수", 3);
	InsertInLinkedList(&head, "목", 4);
	InsertInLinkedList(&head, "금", 5);

	PrintList(head);
	return 0;
}
