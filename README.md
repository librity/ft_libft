<h3 align="center">42 São Paulo - libft</h3>

<div align="center">

[![Norminette v3](https://github.com/librity/ft_libft/actions/workflows/norminette_v3.yml/badge.svg)](https://github.com/librity/ft_libft/actions/workflows/norminette_v3.yml)
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

## 📜 Table of Contents

- [About](#about)
- [Getting Started](#getting_started)
- [Usage](#usage)
- [Tests](#tests)
- [Github Actions](#github_actions)
- [42 São Paulo](#ft_sp)

## 🧐 About <a name = "about"></a>

This was my first project at 42 São Paulo:
an implementation of many `stdlib.h` functions from scratch.

I've used it on most projects so far.
I learned about memory manipulations, string utilities and linked lists.
As a developer I've been using these functions for years
in some form or another, yet I had no idea how they really work.
Figuring them out was an initiation of sorts.

It has over 300 functions so far,
including a heap-less `printf` that handles `float`s and `long double`s.
All functions have a doxygen-style documentation comment,
and most have an example main.
I prioritize modularity and readability:
small functions with catchy names that do one thing well.

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
$ cp examples/ft_itoa.c examples/example.c
$ gcc -g -I ./includes examples/example.c libft.a
$ ./a.out
```

## 🎈 Usage <a name="usage"></a>

You can call most `stdlib.h` functions as you normally would
but with the prefix `ft_`:

```c
ft_putstr("Hello, world!\n");
```

## ✅ Tests <a name = "tests"></a>

This project is partly tested with the
[Unity framework](https://github.com/ThrowTheSwitch/Unity).
To run all tests, run `make`'s `test` rule:

```bash
make tests
```

## 🐙 Github Actions <a name = "github_actions"></a>

[Norminette Github Action](https://github.com/AdrianWR/libft/blob/master/.github/workflows/norminette.yaml)
by [@AdrianWR](https://github.com/AdrianWR)

## 🛸 42 São Paulo <a name = "ft_sp"></a>

Part of the larger [42 Network](https://www.42.fr/42-network/),
[42 São Paulo](https://www.42sp.org.br/) is a software engineering school
that offers a healthy alternative to traditional education:

- It doesn't have any teachers and classes.
- Students learn by cooperating
  and correcting each other's work (peer-to-peer learning).
- Its focus is as much on social skills as it is on technical skills.
- It's completely free to anyone that passes its selection process -
  [**The Piscine**](https://42.fr/en/admissions/42-piscine/)

It's an amazing school, and I'm grateful for the opportunity.
