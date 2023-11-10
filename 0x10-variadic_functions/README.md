Variadic functions in programming languages allow a function to accept a variable number of arguments. In languages like C and C++, this is typically achieved using ellipsis (...) in the function declaration. 

For example, in C:
```c
#include <stdarg.h>

int sum(int count, ...) {
    int result = 0;
    va_list args;
    va_start(args, count);

    for (int i = 0; i < count; ++i) {
        result += va_arg(args, int);
    }

    va_end(args);
    return result;
}
```

This `sum` function can take any number of integer arguments. Variadic functions are flexible but require careful handling of the arguments, usually done with the `<stdarg.h>` library in C.
