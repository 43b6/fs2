//open/prayer/room/punch1-2

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "ʥ����̳����");
  set ("long", @LONG

    ����ʥ��̵���̳��������������������۵ĵط��������������
�����ʥ��̵Ľ��飬����ʥ����ĳ������⣬�������ڴ����ԣ��Ͼ�ʥ
�����Ϊ��Ҷ����ģ����Һúð�ϧ����

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/general-manager" : 1,               //����
]));
  set("exits", ([ /* sizeof() == 4 */
        "north" : "/open/prayer/room/punch1",           //`����
        "south" : "/open/prayer/room/punch1-10",                //`����
//      "east" : "/open/prayer/room/punch1-8",          //`����
//      "west" : "/open/prayer/room/punch1-10",         //`����
]));
  set("light_up", 1);
  setup();
  call_other("/obj/board/prayer_b", "???");
}
 
