// by borstquc
#include <ansi.h>
inherit ROOM;

void create()
{
  string long;

set("short","С��¥");
        set("long", @LONG
�ⶰС��¥�������������������������뵽�����ң����϶�¥
������Ҫ���ⶰС��¥���ߵġ��Ĵ��Ļ��ʮ�ֲ����ԣ���Ҫ������
���Լ����Ż�ѡ�
LONG);
set("exits", ([
	"down":__DIR__"r59",
	"up":__DIR__"r60",
        "south":__DIR__"r35",
]));
  set("no_light",1);
  setup();
}
