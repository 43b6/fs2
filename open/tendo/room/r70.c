// by borstquc
#include <ansi.h>
inherit ROOM;

void create()
{
  string long;

set("short","��������Ϣ��");
        set("long", @LONG
������������ ½��� ����Ϣ�ң��򱱵ķ��������ȴ���������
����һ�Ű�������Ǵ󴲣������������϶������ſڻ�վ����������
���ӡ�
LONG);
  set("light_up",1);
set("objects", ([ /* sizeof() == 1 */
  "/open/tendo/npc/boy2":2,
]));
set("exits", ([
        "south":__DIR__"r61",
]));
  setup();
}
