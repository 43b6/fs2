// by borstquc
#include <ansi.h>
inherit ROOM;

void create()
{
  string long;

set("short",HIG"������������"NOR);

long = "\n"+
"                         "+BRED"                      \n"NOR+
"                       "+BMAG"                      "+BRED"    \n"NOR+
"                     "+BMAG"                          "+BRED"    \n"NOR+
"                    "+BMAG"                            "+BRED"    \n"NOR+
"                   "+BMAG"                              "+BRED"    \n"NOR+
"                  "+BMAG"             "+WHT"����"+HIW"(n)"+"            "+BRED"   \n"NOR+
"                  "+BMAG"            "+WHT" �ߡ���"+"             "+BRED"   \n"NOR+
"                  "+BMAG"     "+WHT"ˮ��"+HIW"(w)"NOR+BMAG+WHT" �ߡ���"+" ɽ��"
HIW"(e)"+"     "+BRED"   \n"NOR+
"                  "+BMAG"            "+WHT" �ߣߣ�"+"             "+BRED"   \n"NOR+
"                  "+BMAG"                                "+BRED"   \n"NOR+
"                  "+BMAG"             "+WHT"����"+HIW"(s)"+"            "+BRED"   \n"NOR+
"                   "+BMAG"                              "+BRED"   \n"NOR+
"                    "+BMAG"                            "+BRED"   \n"NOR+
"                     "+BMAG"                          "+BRED"   \n"NOR+
"                       "+BMAG"                      \n"NOR+
"\n";

set("long", long);
set("exits", ([
      "east"  : __DIR__"r6",
      "west"  : __DIR__"r7",
      "south" : __DIR__"r8",
       "north" : __DIR__"r19",
  ]));
  set("light_up", 1);
  set("no_magic", 1);
  set("no_fight", 1);
  set("no_clean_up", 1);
  setup();
}
void init()
{
        add_action("no_fanset","fanset");
}

int no_fanset()
{
        object who;
        who = this_player();
        tell_object(who,"���ڴ˴��ų���ǿ����Ļ������޷��趨��\n");

        return 1;
}
