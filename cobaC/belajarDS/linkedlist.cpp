#include <iostream>
using namespace std;

struct identitasDiri {
  string nama;
  int umur;
  string tempatLahir;

  identitasDiri *next;
};

identitasDiri *head, *tail, *cur, *newNode, *del;

void createSingleLinkedList(string nama, int umur, string tempatLahir) {
  head = new identitasDiri();

  head->nama = nama;
  head->umur = umur;
  head->tempatLahir = tempatLahir;
  head->next = NULL;

  tail = head;
}

void addFirst(string nama, int umur, string tempatLahir) {
  cout << "\nAdd First Element.\n";
  newNode = new identitasDiri();

  newNode->nama = nama;
  newNode->umur = umur;
  newNode->tempatLahir = tempatLahir;
  newNode->next = head;

  head = newNode;
}

void addLast(string nama, int umur, string tempatLahir) {
  cout << "\nAdd Last Element.\n";
  newNode = new identitasDiri();

  newNode->nama = nama;
  newNode->umur = umur;
  newNode->tempatLahir = tempatLahir;
  newNode->next = NULL;

  tail->next = newNode;
  tail = newNode;
}

void removeFirst() {
  cout << "\nRemove First Element.\n";

  del = head;
  head = head->next;
  delete del;
}

void removeLast() {
  cout << "\nRemove Last Element.\n";

  del = tail;
  cur = head;
  while(cur->next != tail) cur = cur->next;
  tail = cur;
  tail->next = NULL;
  delete del;
}

void changeFirst(string nama, int umur, string tempatLahir) {
  cout << "\nChange First Element.\n";

  head->nama = nama;
  head->umur = umur;
  head->tempatLahir = tempatLahir;
}

void changeLast(string nama, int umur, string tempatLahir) {
  cout << "\nChange Last Element.\n";

  tail->nama = nama;
  tail->umur = umur;
  tail->tempatLahir = tempatLahir;
}

void printSingleLinkedList() {
  cur = head;
  while (cur != NULL) {
    cout << "Namaku adalah " << cur->nama << ", umurku " << cur->umur << ". Aku tinggal di " << cur->tempatLahir << endl;
    cur = cur->next;
  }
}

int main() {

  createSingleLinkedList("Agus", 17, "Sungai Kupah");
  printSingleLinkedList();
  cout << '\n' << endl;

  addFirst("Bahrul", 19, "Jungkat");
  printSingleLinkedList();
  cout << '\n' << endl;

  addLast("Cahyo", 18, "Rasau");
  printSingleLinkedList();
  cout << '\n' << endl;

  removeFirst();
  printSingleLinkedList();
  cout << '\n' << endl;

  removeLast();
  printSingleLinkedList();
  cout << '\n' << endl;

  addFirst("Bahrul", 19, "Jungkat");
  printSingleLinkedList();
  cout << '\n' << endl;

  addLast("Cahyo", 18, "Rasau");
  printSingleLinkedList();
  cout << '\n' << endl;

  changeFirst("Dani", 20, "Mempawah");
  printSingleLinkedList();
  cout << '\n' << endl;

  changeLast("Ega", 15, "Sungai Jawi");
  printSingleLinkedList();
  cout << '\n' << endl;
  
}