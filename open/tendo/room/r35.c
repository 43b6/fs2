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
�����ڰ���̫�����������Ե�ʮ��ҫ�ۡ���������ͨ��С��¥��·��
LONG);
set("exits", ([
	"east":__DIR__"r34",
	"north":__DIR__"r58",
	"west":__DIR__"r36",
	"south":__DIR__"r50",
]));
  set("light_up",1);
  setup();
}
