#include <ansi.h>
inherit F_CLEAN_UP;
void create() { seteuid(getuid());}
int main(object me,string str)
{
  printf("%s\n","/adm/daemons/temp.c"->check_heart_beat(str));
  return 1;
}

