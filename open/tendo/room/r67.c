// by borstquc
#include <ansi.h>
inherit ROOM;

void create()
{
  string long;

set("short","����");
        set("long", @LONG
����ǵڶ��㣬����ʮ�ֵİ��������������κ���������Ϊ����
�������˵ȵ����������û�˸�������������������������ʷ��
չ�ҡ�
LONG);
set("exits", ([
        "south":__DIR__"r66",
	"north":__DIR__"r68",
]));
  set("light_up",1);
  setup();
}
