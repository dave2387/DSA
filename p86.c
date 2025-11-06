// 86. Implement a Dictionary (key, value) pair using Hash-table. 

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
#define EMPTY -1
#define DELETED -2

int hashTable[SIZE];


void initTable()
{
    for (int i = 0; i < SIZE; i++)
        hashTable[i] = EMPTY;
}


int hash(int key)
{
    return key % SIZE;
}


void insert(int key)
{
    int index = hash(key);
    int i = 0;

    while (hashTable[(index + i) % SIZE] != EMPTY &&
           hashTable[(index + i) % SIZE] != DELETED &&
           hashTable[(index + i) % SIZE] != key &&
           i < SIZE)
    {
        i++;
    }

    if (i == SIZE)
    {
        printf("Hash Set Overflow! Cannot insert %d\n", key);
        return;
    }

    if (hashTable[(index + i) % SIZE] == key)
    {
        printf("%d already exists in Hash Set!\n", key);
        return;
    } 

    hashTable[(index + i) % SIZE] = key;
    printf("%d inserted successfully.\n", key);
}

void display()
{  
    printf("\nHash Set:\n");
    for (int i = 0; i < SIZE; i++)
    {
        if (hashTable[i] == EMPTY)
            printf("Index %d → (empty)\n", i);
        else if (hashTable[i] == DELETED)
            printf("Index %d → (deleted)\n", i);
        else
            printf("%d",hashTable[i]);
    }
    printf("\n");
}

void main()
{
    int choice, key;
    initTable();
     insert(key);
    display();
}