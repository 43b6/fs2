// by borstquc
#include <ansi.h>
inherit ROOM;

void create()
{
  string long;

set("short","����㳡");
        set("long", @LONG
���������������������ŵĵ��������������ĵط����������
����������������������������ϰ�����޷������������������
��Ƶ�һֱ�����ˡ�
LONG);
  set("outdoors",1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/tendo/npc/boy":1,
]));
set("exits", ([
        "south":__DIR__"r48",
	"north":__DIR__"r34",
	"east":__DIR__"r32",
	"west":__DIR__"r50",
]));
  setup();
}
