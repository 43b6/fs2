// by borstquc
#include <ansi.h>
inherit ROOM;

void create()
{
  string long;

set("short","���εص�");
        set("long", @LONG
һ��������͸е�һ���������㴵����ʹ��ë���Ȼ���������
�������Ҿ���һ�����η����㲻������--��һ����Ҳ���������Ǹ�
��ô��?
LONG);
set("exits", ([
        "south":__DIR__"r73",
	"east":__DIR__"r78",
	"west":__DIR__"r75",
	"north":__DIR__"r59",
]));
  setup();
}
