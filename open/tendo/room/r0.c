// by borstquc
#include <ansi.h>
inherit ROOM;
void create()
{
  string long;

set("short",HIR"���������������"NOR);

long = "\n"+
BCYN"                                                                         "+
"       "NOR+
BCYN"                                                                         "+
"       "NOR+
BCYN"                                "+BLK"���������������"NOR+BCYN"      "+
"                          "NOR+
BWHT"                              "NOR+"                    "+BWHT"          "+
"                    "NOR+
BWHT"                              "NOR+"                    "+BWHT"          "+
"                    "NOR+
BWHT"                              "NOR+"                    "+BWHT"          "+
"                    "NOR+
BWHT"                              "NOR+"                    "+BWHT"          "+
"                    "NOR+
BWHT"                              "NOR+"                    "+BWHT"          "+
"                    "NOR+
BWHT"                              "NOR+"                    "+BWHT"          "+
"                    "NOR+
BWHT"                              "NOR+NOR"                    "+BWHT"      "+
"                        "NOR+
BWHT"                            "NOR+BBLU"                        "+BWHT"    "+
"                        "NOR+
BWHT"                          "NOR+BYEL"                            "+BWHT"  "+
"                        "NOR+
BWHT"                        "NOR+BRED"                                "+BWHT
"                        "NOR+
BWHT"                      "NOR+BMAG"                                    "+BWHT
"                      "NOR+
BWHT"                    "NOR+BGRN"                                        "+BWHT"                    "NOR+
NOR"\n";
set("long", long);
set("exits", ([
        "enter":"/open/tendo/room/r"+(1+random(3)),
  ]));
  set("light_up", 1);
  set("no_magic", 1);
  setup();
}
