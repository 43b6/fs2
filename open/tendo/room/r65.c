// by borstquc
#include <ansi.h>
inherit ROOM;

void create()
{
  string long;

set("short","����");
        set("long", @LONG
����ǵڶ��㣬����ʮ�ֵİ��������������κ���������Ϊ����
�������˵ȵ����������û�˸�������������������߿ɵ�С��¥
�������ɵ��}��������Ϣ�ң��������ǵ������ʷ��չ�ҡ�
LONG);
set("exits", ([
	"south":__DIR__"r60",
	"east":__DIR__"r64",
	"west":__DIR__"r66",
]));
  set("light_up",1);
  setup();
}
