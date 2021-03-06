<h3 align="center">42 São Paulo - libft</h3>

<div align="center">

[![norminette](https://github.com/librity/ft_libft/actions/workflows/norminette.yml/badge.svg)](https://github.com/librity/ft_libft/actions/workflows/norminette.yml)
![42 São Paulo](https://img.shields.io/badge/42-SP-1E2952)
![License](https://img.shields.io/github/license/librity/ft_libft?color=yellow)
![Code size in bytes](https://img.shields.io/github/languages/code-size/librity/ft_libft?color=blue)
![Lines of code](https://img.shields.io/tokei/lines/github/librity/ft_libft?color=blueviolet)
![Top language](https://img.shields.io/github/languages/top/librity/ft_libft?color=ff69b4)
![Last commit](https://img.shields.io/github/last-commit/librity/ft_libft?color=orange)

</div>

<p align="center"> A partial implementation of stdlib.
  <br>
</p>

---

## 📝 Table of Contents

- [About](#about)
- [Installation](#getting_started)
- [Usage](#usage)
- [Tests](#tests)
- [Github Actions](#github_actions)
- [42 São Paulo](#ft_sp)

## 🧐 About <a name = "about"></a>

This was the first project I did at 42 São Paulo:
an implementation of many `stdlib.h` functions from scratch.

I've used this on all other projects that followed,
and I learned a lot about memory manipulations,
string utilities and linked lists.
As a developer I've been using all these functions for years
in some form or another,
but I had no idea how they worked until I did this project.

So far it has over 80 functions,
and the implementations are simple and readable.
I'm always updating my libft as I do more projects
and write more useful functions.

## 🏁 Getting Started <a name = "getting_started"></a>

### ⚙️ Prerequisites

All you need is a shell and a C compiler like `gcc` or `clang`.

### 🖥️ Installing

To compile the entire thing just clone the repo and run `make`:

```bash
$ git clone https://github.com/librity/ft_libft.git
$ cd ft_libft
$ make
```

This will generate a `libft.a` archive, which you can compile with
any of the example files:

```bash
$ cp examples/ft_itoa.c example.c
$ gcc -g -I ./includes example.c libft.a
$ ./a.out
```

## 🎈 Usage <a name="usage"></a>

You can call most `stdlib.h` functions as you normally would
but with the prefix `ft_`:

```c
ft_putstr("Hello, world!\n");
```

## ✅ Tests <a name = "tests"></a>

This project is tested with the
[Unity framework](https://github.com/ThrowTheSwitch/Unity).
To run all tests, go to the tests directory and run `make`:

```bash
cd tests
make
```

## 🐙 Github Actions <a name = "github_actions"></a>

[Norminette Github Action](https://github.com/AdrianWR/libft/blob/master/.github/workflows/norminette.yaml)
by [@AdrianWR](https://github.com/AdrianWR)

## 🏫 42 São Paulo <a name = "ft_sp"></a>

Part of the larger [42 Network](https://www.42.fr/42-network/),
[42 São Paulo](https://www.42sp.org.br/) is a software engineering school
that offers a healthy alternative to traditional education:

- It doesn't have any teachers or classrooms.
- Students learn from and correct each other's work (peer-to-peer learning).
- The method develops technical and social skills.
- It's completely free to anyone that passes its selection process - **The Piscine**

It's an amazing school, and I'm enjoying every second of it.
