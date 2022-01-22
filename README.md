# libft
school42 libft project

Subject of this project also located in this repository.

INTRODUCTION:

The purpose of this project is to create own library of function implementing the following original ones (isalpha, isdigit, isalnum, isascii,
isprint, strlen, memset, bzero, memcpy, memmove, strlcpy, strlcat, toupper, tolower, strchr, strrchr, strncmp, memchr, memcmp, strnstr, atoi,
calloc, strdup) and any useful functions:

ft_substr - to create substring;

ft_strjoin - to create union of strings;

ft_strtrim - to trim any characters from string;

ft_split - to create an array of strings from one string contained any delemited characters;

ft_itoa - to convert integer into array of symbols;

ft_strmapi - to apply any functions to each character of parameter string;

ft_striteri - to apply any functions to each character of parameter string and modify character if it necessary;

ft_putchar_fd - to output character to given file descriptor;

ft_putstr_fd - to output string to given file descriptor;

ft_putendl_fd - to output string followed by a newline to given file descriptor;

ft_putnbr_fd - to output integer to given file descriptor;

Bonus functions is created to work with lists, created as following structure:

typedef struct s_list{

  void *content;        // any kind of data.
  
  struct s_list *next;  // link to the next element of list.

}   t_list;

ft_lstnew - to allocate and return new note initialized with the value given as a parameter;

ft_lstadd_front - to allocate a new element of structer and put it at the beggining of the list;

ft_lstsize - to count the number of nodes in a list;

ft_lstlast - to return the last node of the list;

ft_lstadd_back - to allocate a new element of structer and put it at the end of the list;

ft_lstdelone - to free the memory of the node’s content (given as a parameter) using the function also given
as a parameter and free the node;

ft_lstclear - to delete and free the given node and every successor of that node, using the function given
as a parameter;

ft_lstiter - to iterate the list and apply the function given as a parameter on the content of each node;

ft_lstmap - tp iterate each element of list by the function given as a parameter and create new list of results.

USING:

Copy this repository by using command git clone git@github.com:cnearing27/libft.git

cd libft - move into the folder

make OR make all - to create library of object files (libft.a) WITHOUT bonus functions

make clean - to delete all .o files

make fclean - make clean + deleting libft.a

make re - to recompile if anything is changed

make bonus - create library WITH bonus functions.
