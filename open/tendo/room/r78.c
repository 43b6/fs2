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
	"west":__DIR__"r72",
]));
  setup();
}
