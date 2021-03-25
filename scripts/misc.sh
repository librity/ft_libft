echo '
.vscode
main.c
test.c
example.c
a.out.dSYM
*.out
*.a
*.o
*/core
core
*.rb
' >>.git/info/exclude

gcc -Wall -Wextra -Werror *.c && time ./a.out
gcc -Wall -Wextra -Werror *.c && ./a.out

norminette *.c *.h
