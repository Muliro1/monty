#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */

typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;




/**
 * struct file_data - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */

typedef struct file_data
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  file_dat;
extern file_dat file;
void push(stack_t **head, unsigned int counter);
void queue(stack_t **head, unsigned int counter);
void addnode(stack_t **head, int n);
void pall(stack_t **head, unsigned int counter);
void addqueue(stack_t **head, int n);
void free_stack(stack_t *head);
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
void pstr(stack_t **head, unsigned int counter);
void div(stack_t **head, unsigned int counter);
void rotr(stack_t **head, __attribute__((unused)) unsigned int counter);
void add(stack_t **head, unsigned int counter);
void pchar(stack_t **head, unsigned int counter);
void stack(stack_t **head, unsigned int counter);
void mul(stack_t **head, unsigned int counter);
void pint(stack_t **head, unsigned int counter);
void sub(stack_t **head, unsigned int counter);
void nop(stack_t **head, unsigned int counter);
int main(int argc, char *argv[]);
void pop(stack_t **head, unsigned int counter);
void rotl(stack_t **head,  __attribute__((unused)) unsigned int counter);
void swap(stack_t **head, unsigned int counter);
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file);
void mod(stack_t **head, unsigned int counter);
=======
>>>>>>> parent of ceccd71 (bugs)
=======
>>>>>>> parent of ceccd71 (bugs)
=======
>>>>>>> parent of ceccd71 (bugs)

#endif
