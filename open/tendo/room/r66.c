// by borstquc
#include <ansi.h>
inherit ROOM;

void create()
{
  string long;

set("short","����");
        set("long", @LONG
����ǵڶ��㣬����ʮ�ֵİ��������������κ���������Ϊ����
�������˵ȵ����������û�˸��������������
LONG);
set("exits", ([
	"east":__DIR__"r65",
	"north":__DIR__"r67",
]));
  set("light_up",1);
  setup();
}
