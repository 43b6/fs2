// by borstquc
#include <ansi.h>
inherit ROOM;

void create()
{
  string long;

set("short","����");
        set("long", @LONG
����ǹ㳡���ܵ����ȣ������������ʮ�ֿ�������������ʵ��
������ľ���̣������ܵ�������������������ģ�ʹ������ķ��ε�
�����ڰ���̫�����������Ե�ʮ��ҫ�ۡ�
LONG);
set("exits", ([
	"south":__DIR__"r32",
	"west":__DIR__"r34",
	"east":__DIR__"r55",
]));
  set("light_up",1);
  setup();
}
