# What is ec?
Eso-C, Easy C, or EC, is a custom syntax "library" for C/C++.

EC basically turns C/C++ into an esoteric programming language.

# Installation
Put ec.h in your include path and include it in your code:
```c
#include "ec.h"
```

# Usage / Docs
EC has a number of features/definitions:

### main_method / main_func
Alias for `int`

Should be used to define the main method:
```c
main_method main argS noArgs argE run

end_main_method
```

### argS / argE
argS should be used at the start of argument lists.

argE should be used at the end of argument lists.

```c
num plusOne argS num n argE run
  ret n plus 1 endl
end
```

### endl
Should be used at the end of a line of code:
```c
print argS "Hello, World!" argE endl
```

### end_main_method
Should be used at the end of the main method:
```c
main_method main argS noArgs argE run

end_main_method
```

### ret
Alias for `return`

### yes / no
Boolean constants

### true / false
Boolean constants

### boolean
Boolean type


## Operators
### inc
Increment. Alias for `++`
### dec
Decrement. Alias for `--`
### plus
Alias for `+`
### minus
Alias for `-`
### mod
Modulus. Alias for `%`
### div
Divide. Alias for `/`
### mul
Multiply. Alias for `*`
### set_to
Alias for `=`
### is
Alias for `==`
### is_not
Alias for `!=`
### less_than
Alias for `<`
### more_than
Alias for `>`
### less_eq
Less than or equal to. Alias for `<=`
### more_eq
More than or equal to. Alias for `>=`
## Bitwise operators
### band
Bitwise and. Alias for `&`
### bor
Bitwise or. Alias for `|`
### bleft
Bitwise shift left. Alias for `<<`
### bright
Bitwise shift right. Alias for `>>`
