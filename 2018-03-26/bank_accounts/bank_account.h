#ifndef ACCOUNT_H__
#define ACCOUNT_H__

#define MAX_NAME_LENGTH 101

struct Account
{
    char name[MAX_NAME_LENGTH];
    int id;
    float balance;
};

/*! Gets an account from the user */
struct Account get_account();
/*! Gets an array of accounts */
void get_accounts(struct Account* accounts, int* size);
/*! Sort accounts */
void sort_accounts(struct Account* accounts, int size);
/*! Swap Accounts */
void swap_accounts(struct Account* first, struct Account* second);

#endif
