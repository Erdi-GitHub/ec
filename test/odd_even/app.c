#include "../../include/ec.h"

boolean isOdd argS num n argE endl

main_method main argS noArgs argE run
    print argS "This app checks if the given number is even or odd\n" argE endl

    num n;

    run_while (yes) run
        print argS ">> " argE endl
        input argS "%d" , addr n argE endl

        print argS isOdd argS n argE ? "%d is odd" : "%d is even" , n argE endl
        print argS "\n" argE endl
    end
end_main_method

boolean isOdd argS num n argE run
    ret n % 2;
end