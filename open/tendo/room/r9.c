// by borstquc
#include <ansi.h>
inherit ROOM;

void create()
{
  string long;

set("short",HIW"������������"NOR);

long = "\n"+
"                         "+BGRN"                      \n"NOR+
"                       "+BWHT"                      "+BGRN"    \n"NOR+
"                     "+BWHT"                          "+BGRN"    \n"NOR+
"                    "+BWHT"                            "+BGRN"    \n"NOR+
"                   "+BWHT"                              "+BGRN"    \n"NOR+
"                  "+BWHT"             "+HIB"����"+HIW"(n)"+"            "+BGRN"   \n"NOR+
"                  "+BWHT"            "+HIB" �ߣߣ�"+"             "+BGRN"   \n"NOR+
"                  "+BWHT"     "+HIB"����"+HIW"(w)"+HIB" �ߣߣ�"+" ����"HIW"(e)"
+"     "+BGRN"   \n"NOR+
"                  "+BWHT"            "+HIB" �ߣߣ�"+"             "+BGRN"   \n"NOR+
"                  "+BWHT"                                "+BGRN"   \n"NOR+
"                  "+BWHT"             "+HIB"����"+HIW"(s)"+"            "+BGRN"   \n"NOR+
"                   "+BWHT"                              "+BGRN"   \n"NOR+
"                    "+BWHT"                            "+BGRN"   \n"NOR+
"                     "+BWHT"                          "+BGRN"   \n"NOR+
"                       "+BWHT"                      \n"NOR+
"\n";

set("long", long);
set("exits", ([
      "east"  : __DIR__"r6",
      "west"  : __DIR__"r8",
      "south" : __DIR__"r3",
       "north" : __DIR__"r10",
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
