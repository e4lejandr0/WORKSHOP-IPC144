## Code Examples for IPC144
#### Obtaining a copy of this reporsitory
Type the following command:

```bash
user@matrix ~ > git clone https://github.com/e4lejandr0/WORKSHOP-IPC144.git
```

-----------------------------------------
#### Keeping it up to date

Browse to the WORKSHOP-IPC144 folder created after obtaining the repo and type: 

```bash
user@matrix ~ > git pull
```

-----------------------------------------
#### FAQ

1. Is it okay to put 'int i = 0' inside my for loops?

    Short answer: yes. But your prof may disagree.

    Long answer: initializer inside the for loops got introduced in C90, previous versions did not allow
    `for(int i = 0; i < size; ++i)` which meant programmers needed to do the following:

    ```C
    int i;
    for(i = 0; i < size; ++i)
    ```

    For this reason you may hear some people questioning initializers inside for loops. It's been 28 years 
    since 1990 however and there's no reason to use the old way but old habits die hard.

2. What's the difference of `i++` vs `++i`?

    Consider the following:

    ```C
    int i = 0;
    int j = 0;
    printf("i = %d, j = %d\n", i, j);
    printf("i++ = %d, ++j = %d\n", i++, ++j);
    ```

    The output of the program is:

    ```C
    i = 0, j = 0 
    i++ = 0, ++j = 1 // i++ returns i before the increment, ++j returns j after the increment
    ```

3. Why will my code compile in visual studio but not in matrix?

    There might be several reasons, the most common one is that you are using features which may not
    be supported in C89 (matrix's compiler defaults to C89). In this case the fix is easy: add `-std=c99`
    to the compiler command line(eg: `g++ -std=c99 file.c -o output`)

4. Why will my code compile in matrix but not Visual Studio?

    Same as above, there might be several reasons. The most common one is that by default
    Visual Studio marks the `scanf()` function as insecure(Windows provides `scanf_s` which is secure but non-standard).

    How to fix: add `#define _SECURE_CRT_NO_WARNINGS` at the top of your C files.


-----------------------------------------
#### License

All the code in this repository is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

