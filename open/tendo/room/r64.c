// by borstquc
#include <ansi.h>
inherit ROOM;

void create()
{
  string long;

set("short","走廊");
        set("long", @LONG
这儿是第二层，在这十分的安静几乎听不到任何声音，因为这里
是掌门人等的休憩处，因此没人敢在这大声喧哗。
LONG);
set("exits", ([
	"north":__DIR__"r63",
	"west":__DIR__"r65",
]));
  set("light_up",1);
  setup();
}
