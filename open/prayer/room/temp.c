//open/prayer/room/punch1-2

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "��̳����");
  set ("long", @LONG

    ����ʥ��̵���̳��������������������۵ĵط��������������
�����ʥ��̵Ľ��飬����ʥ����ĳ������⣬�������ڴ����ԣ��Ͼ�ʥ
�����Ϊ��Ҷ����ģ����Һúð�ϧ����

LONG);

  set("exits", ([ /* sizeof() == 4 */
          "south" : "/open/main/room/maiu-1",
]));
  set("light_up", 1);
  setup();
    call_other("/obj/board/prayertemp_b","???");
}
 
