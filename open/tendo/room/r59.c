// by borstquc
#include <ansi.h>
inherit ROOM;

void create()
{
  string long;

set("short","С��¥֮���²�");
        set("long", @LONG
�ⶰС��¥�������������������������뵽�����ң����϶�¥
������Ҫ���ⶰС��¥���ߵġ��Ĵ��Ļ��ʮ�ֲ����ԣ���Ҫ������
���Լ����Ż�ѡ�
LONG);
set("exits", ([
        "up":__DIR__"r58",
	"south":__DIR__"r72",
]));
  set("no_light",1);
  setup();
}
