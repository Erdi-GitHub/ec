#include "../../include/ec.h"

main_method main argS noArgs argE run
    num n endl
    
    run_while (yes) run
      print argS ">> " argE endl
      input argS "%d" , addr n argE endl

      inc n endl
      
      print argS "%d\n" , n argE endl
    end
end_main_method
