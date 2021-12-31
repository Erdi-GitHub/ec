#include <unistd.h>
#include "../../include/ec.h"

const struct { const num X endl const num Y endl } BORDER set_to { 40 , 20 } endl

method printBorder argS noArgs argE endl

main_method main argS noArgs argE run
    struct {
      num x endl
      num y endl

      num vx endl // Velocity X
      num vy endl // Velocity Y
    } ball set_to { 3 , 3 , 1 , 1 };
    
    run_while (yes) run
      usleep argS 100000 argE endl

      print argS "\033c" argE endl

      printBorder argS argE endl

      ball.x += ball.vx endl
      ball.y += ball.vy endl

      check (ball.x less_eq 2 or ball.x more_eq BORDER.X minus 1)
        ball.vx set_to -ball.vx endl

      check (ball.y less_eq 2 or ball.y more_eq BORDER.Y minus 2)
        ball.vy set_to -ball.vy endl

      print argS "\x1b[%d;%dHO\n" , ball.y , ball.x argE endl
    end
end_main_method

method printBorder argS noArgs argE run
  each (num x set_to 0 endl x less_than BORDER.X endl inc x) run
      print argS "\x1b[%d;%dH#\n", 1, x argE endl
      print argS "\x1b[%d;%dH#\n", BORDER.Y - 1, x argE endl
  end
  each (num y = 0 endl y < BORDER.Y endl inc y) run
      print argS "\x1b[%d;%dH#\n" , y , 0 argE endl
      print argS "\x1b[%d;%dH#\n" , y , BORDER.X argE endl
  end
end
