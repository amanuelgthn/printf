#ifndef _MAIN_H_
#define _MAIN_H_
int _printf(const char *format, ...);
int _putchar(char c);
void printf_buffer(char buffer[], int *buff_ind);
int handle_print(const char *fmt, int *ind, va_list list, char buffer[], int flags, int width, int precision, int size)
int get_flags(const char *format, int *i);
#endif /* _MAIN_H_ */
