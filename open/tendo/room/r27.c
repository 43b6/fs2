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
        "east":__DIR__"r28",
	"north":__DIR__"r44",
	"west":__DIR__"r42",
]));
  set("light_up",1);
  setup();
}
