#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main()
{
  printf(1 , "Numero de procesos: %d" , getproc());
  exit();
}