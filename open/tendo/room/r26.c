// by borstquc
#include <ansi.h>
inherit ROOM;

void create()
{
  string long;

set("short","���");
        set("long", @LONG
һ��������������͸е��ޱȵĿ��ܣ�������ʲô��Ȥ����Ҫ
������һ�����㲻�ϵĿ����Լ������񣬵���ʱ����ȴʮ�ֲ�����һ
�ٵ��������з���ԭʼ�ĺ���..�� ��~~~
LONG);
set("exits", ([
        "out":__DIR__"r27",
]));
  set("no_light",1);
  setup();
}
