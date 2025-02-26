#include <iostream>
#include <cstdlib>
#include <ctime>

#define MAXVALUE 100
#define MAXSIZE 100

// NON MODIFICARE IL CODICE SOTTO FINO A "NON MODIFICARE IL CODICE SOPRA"
struct list {
  int info;
  list * next;
};

struct tree {
  int info;
  tree * left;
  tree * right;
};

void insert(tree * & result, const int num) {
		if (result == NULL) {
				result = new tree;
				*result = {num, NULL, NULL};
		} else if (result->info > num) {
				insert(result->left, num);
		} else {
				insert(result->right, num);
		}
}

tree * crea_tree(const int num) {
		tree * result = NULL;
		for(int i = 0; i < num; i++) {
				insert(result, rand()%MAXVALUE);
		}
		return result;
}

void print_tree(const tree * root){
		if (root != NULL) {
				print_tree(root->right);
				std::cout << " " << root->info;
				print_tree(root->left);
  }
}

void delete_tree(tree * & root) {
  if (root != NULL) {
    delete_tree(root->left);
    delete_tree(root->right);
    delete root;
    root = NULL;
  }
}

void print_array(const int l[], const int l_size) {
  for(int i = 0; i < l_size; i++)
    std::cout << " " << l[i];
  std::cout << std::endl;
}

// NON MODIFICARE IL CODICE SOPRA

// Add hereafter the declaration of estrai
void estrai(const tree* t, int*& l1, int& l1_size, int*& l2, int& l2_size);
// Add here above the declaration of estrai

// NON MODIFICARE IL MAIN
int main(int argc, char ** argv) {
  srand(unsigned(time(0)));
		//
		// Commentare la linea seguente per avere comportamento
		// non-deterministico
		//
		srand(0);
		tree * root = crea_tree(rand()%MAXSIZE);
		std::cout << "Initial tree content: ";
		print_tree(root); std::cout << std::endl;
  int * l1;
  int l1_size;
  int * l2;
  int l2_size;
  estrai(root, l1, l1_size, l2, l2_size);
  delete_tree(root);
		std::cout << "L1 =";
  print_array(l1, l1_size);
		std::cout << "L2 =";
  print_array(l2, l2_size);
  delete [] l1;
  delete [] l2;
}
// NON MODIFICARE IL MAIN

void get_size(const tree* t, int& l1_size, int& l2_size) {
	if (t == nullptr) return;

	if (t->info % 2 == 0) {
		l1_size++;
	} else {
		l2_size++;
	}

	get_size(t->left, l1_size, l2_size);
	get_size(t->right, l1_size, l2_size);
}
	
void fill(const tree* t, int*& l1, int& l1_idx, int*& l2, int& l2_idx) {
	if (t == nullptr) return;

	fill(t->left, l1, l1_idx, l2, l2_idx);

	if (t->info % 2 == 0) {
		l1[l1_idx] = t->info;
		l1_idx++;
	} else {
		l2[l2_idx] = t->info;
		l2_idx++;
	}

	fill(t->right, l1, l1_idx, l2, l2_idx);
}

// Add hereafter the definition of estrai
void estrai(const tree* t, int*& l1, int& l1_size, int*& l2, int& l2_size) {
	l1_size = 0;
	l2_size = 0;

	get_size(t, l1_size, l2_size);

	if (l1_size != 0) l1 = new int[l1_size];
	if (l2_size != 0) l2 = new int[l2_size];

	int l1_idx = 0;
	int l2_idx = 0;
	fill(t, l1, l1_idx, l2, l2_idx);
}
// Add here above the definition of estrai
