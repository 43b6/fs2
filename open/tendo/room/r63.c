// by borstquc
#include <ansi.h>
inherit ROOM;

void create()
{
  string long;

set("short","����");
        set("long", @LONG
����ǵڶ��㣬����ʮ�ֵİ��������������κ���������Ϊ����
�������˵ȵ����������û�˸���������������������}�����ϵ�
��Ϣ�ҡ�
LONG);
set("exits", ([
	"east":__DIR__"r71",
	"north":__DIR__"r62",
	"south":__DIR__"r64",
]));
  set("light_up",1);
  setup();
}
