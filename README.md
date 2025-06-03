# 📄 Get Next Line – 42 Project

Reimplementation of a line-by-line file reader in C.  
The goal of this project is to return a single line from a file descriptor at each function call, handling any file size, buffer, or line structure.

---

## 📌 Description

The function `get_next_line()` reads from a file descriptor and returns one line at a time, ending in `\n` or EOF.  
It must be able to manage multiple file descriptors simultaneously, preserve buffers between calls, and work with any buffer size.

---

## 🧠 Constraints

- No use of standard library functions beyond `read()`, `malloc()`, and `free()`.
- You must **not read the whole file in one go**.
- Must handle multiple file descriptors at once (`BONUS`).
- Works with any valid `BUFFER_SIZE`, including very small values (1, 2…).

---

## 📂 Project Structure

get_next_line/
├── get_next_line.c # Core logic
├── get_next_line_utils.c # Helper functions
├── get_next_line.h # Header declarations
├── get_next_line_bonus.c # Multi-FD logic (bonus)
├── get_next_line_utils_bonus.c
├── get_next_line_bonus.h
├── main.c # Test file (optional)
├── Makefile
└── README.md


---

## 🔧 Build Instructions

```
make            # Builds the mandatory version
make bonus      # Builds the bonus version (multi-FD)
make clean      # Removes .o files
make fclean     # Removes .o and compiled libraries
make re         # Full rebuild
```
## 🧪 Usage
Mandatory
```
char *line;
int fd = open("file.txt", O_RDONLY);

while ((line = get_next_line(fd)) != NULL)
{
    printf("%s", line);
    free(line);
}
```

## 🛠️ Compilation Example
```
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c main.c
```