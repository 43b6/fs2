// by borstquc
#include <ansi.h>
inherit ROOM;

void create()
{
  string long;

set("short","���εص�");
        set("long", @LONG
������Ҷ���һ�����η��������ǿյġ��治֪��Щ�η���Ҫ
������ʲô��?
LONG);
set("exits", ([
        "south":__DIR__"r74",
	"north":__DIR__"r72",
	"east":__DIR__"r79",
	"west":__DIR__"r76",
]));
  setup();
}
