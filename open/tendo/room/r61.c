// by borstquc
#include <ansi.h>
inherit ROOM;

void create()
{
  string long;

set("short","����");
        set("long", @LONG
����ǵڶ��㣬����ʮ�ֵİ��������������κ���������Ϊ����
�������˵ȵ����������û�˸�������������������������˵���
Ϣ�ң�������������ɵ���Ĥ���á�
LONG);
set("exits", ([
	"north":__DIR__"r70",
	"south":__DIR__"r86",
	"east":__DIR__"r62",
	"west":__DIR__"r68",
]));
  set("light_up",1);
  setup();
}
