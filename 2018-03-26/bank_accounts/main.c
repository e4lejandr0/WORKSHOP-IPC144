#include <stdio.h>

#include "bank_account.h"

enum { MAX_SIZE = 100 };

int main(void)
{
    struct Account accounts[MAX_SIZE] = {0};
    int account_count = 0;

    /*! Get account information */
    printf("Getting account information...\n");
    
    get_accounts(accounts, &account_count);
    /*! The parameters are passed by pointer, they are modified inside the function
     *  After this line account_count contains the size of the accounts array
     *  and accounts is filled with information
     */

    printf("\nSorting account list...\n");

    /*! Sort them in-place using bubblesort */
    sort_accounts(accounts, account_count);

    /*! Print the sorted list */
    printf("\nId\tName\tBalance\n");
    for(int i = 0; i < account_count; ++i) {
        printf("%d\t%s\t%2.f\n", accounts[i].id, accounts[i].name, accounts[i].balance);
    }
    return 0;
}
