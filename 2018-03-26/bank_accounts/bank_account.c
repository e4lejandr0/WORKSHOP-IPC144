#include <stdlib.h>
#include <string.h>
#include <stdio.h>


#include "bank_account.h"

struct Account get_account()
{
    struct Account new_account;
    printf("Enter the name: ");
    scanf("%s", new_account.name);
    printf("Enter the balance: ");
    scanf("%f", &new_account.balance);
    printf("Enter the id: ");
    scanf("%d", &new_account.id);

    return new_account;
}

void get_accounts(struct Account* accounts, int* size)
{
    printf("How many accounts to add?(max = 100)\n");
    scanf("%d", size);

    for(int i = 0; i < *size; i++) {
        accounts[i] = get_account();
    }
}

void swap_accounts(struct Account* first, struct Account* second)
{
    struct Account tmp;

    tmp.balance = second->balance;
    tmp.id = second->id;
    strcpy(tmp.name, second->name);

    second->balance = first->balance;
    second->id = first->id;
    strcpy(second->name, first->name);
    
    first->balance = tmp.balance;
    first->id = tmp.id;
    strcpy(first->name, tmp.name);
}
    


void sort_accounts(struct Account* accounts, int size)
{
    for(int i = 0; i < size; ++i) {
        for(int j = 0; j < size; ++j) {
            if(accounts[i].balance > accounts[j].balance) {
                swap_accounts(&accounts[i], &accounts[j]);
            }
        }
    }
}

