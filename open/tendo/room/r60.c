// by borstquc
#include <ansi.h>
inherit ROOM;

void create()
{
  string long;

set("short","С��¥֮�ڶ���");
        set("long", @LONG
�ⶰС��¥�������������������������뵽�����ң����϶�¥
������Ҫ���ⶰС��¥���ߵġ��Ĵ��Ļ��ʮ�ֲ����ԣ���Ҫ������
���Լ����Ż�ѡ�
LONG);
set("exits", ([
	"down":__DIR__"r58",
        "north":__DIR__"r65",
]));
  set("no_light",1);
  setup();
}
