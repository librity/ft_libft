# ft_libft

42 Sao Paulo's main cursus project - Libft

Tested with [Unity](https://github.com/ThrowTheSwitch/Unity).

## Snippets

```bash
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
' >> .git/info/exclude

gcc  -Wall -Wextra -Werror *.c && time ./a.out
gcc  -Wall -Wextra -Werror *.c && ./a.out
norminette *.c *.h
```

SSH easy peasy copy squeeze:

```bash
mkdir ~/.ssh

echo 'YOUR PRIVATE KEY
' > ~/.ssh/id_rsa

echo 'YOUR PUBLIC KEY
' > ~/.ssh/id_rsa.pub

chmod 600 ~/.ssh/id_rsa
```
