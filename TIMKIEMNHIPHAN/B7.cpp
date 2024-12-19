#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node* next;
} Node;

// hash table
typedef struct HashTable {
    int size;
    Node** table;
} HashTable;

// node moi
Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}

// ham bam
int hashFunction(int value, int tableSize) {
    return value % tableSize; 
}

// hash table moi
HashTable* createHashTable(int size) {
    HashTable* hashTable = (HashTable*)malloc(sizeof(HashTable));
    hashTable->size = size;
    hashTable->table = (Node**)malloc(size * sizeof(Node*));
    for (int i = 0; i < size; i++) {
        hashTable->table[i] = NULL;
    }
    return hashTable;
}

// them gia tri vào hash table
void insert(HashTable* hashTable, int value) {
    int index = hashFunction(value, hashTable->size);
    Node* newNode = createNode(value);
    
    // chen dau danh sach lien ket
    newNode->next = hashTable->table[index];
    hashTable->table[index] = newNode;
}

// Ham tim gia tri trong hash table
int search(HashTable* hashTable, int value) {
    int index = hashFunction(value, hashTable->size);
    Node* current = hashTable->table[index];
    while (current) {
        if (current->value == value) {
            return 1; 
        }
        current = current->next;
    }
    return 0; 
}

// Hàm gi?i phóng b? nh? hash table
void freeHashTable(HashTable* hashTable) {
    for (int i = 0; i < hashTable->size; i++) {
        Node* current = hashTable->table[i];
        while (current) {
            Node* temp = current;
            current = current->next;
            free(temp);
        }
    }
    free(hashTable->table);
    free(hashTable);
}

int main() {
    int n, x;
    scanf("%d", &n);

    HashTable* hashTable = createHashTable(n * 2);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        insert(hashTable, x); 
    }

    scanf("%d", &x);
    if (search(hashTable, x)) {
        printf("So %d da duoc tìm thay trong mang.\n", x);
    } else {
        printf("So %d không có trong mang.\n", x);
    }
    freeHashTable(hashTable);

    return 0;
}

