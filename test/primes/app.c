#include "../../include/ec.h"

boolean isPrime argS num n argE run
    each argS num i set_to 2 endl i less_than n endl inc i argE run
        check (not (n mod i)) ret no endl
    end

    ret yes endl
end

main_method main argS noArgs argE run
    num n endl

    run_while (yes) run
        check (isPrime argS inc n argE) run
            print argS "%d\n" , n argE endl
        end
    end
end_main_method
