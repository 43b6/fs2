// Room: /open/start/room/f13.c

#include <../start.h>

inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
����ũ���Ǵר��������Ϣ�Ĳ������ֻ��
һЩ��ª�����ߣ������ƾɵ����ӣ��и���ˮ�׷���
�Աߡ�

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"f8",
  "west" : __DIR__"f12",
  "south" : __DIR__"f18",
  "east" : __DIR__"f14",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/start/obj/beck" : 1,
]));
  set("light_up", 1);

  set ("��Դ/Һ��", ([
       "����" : "ˮ",
       "����" : "��ˮ",
       "ֹ��" : 30
  ]) );

  setup();
}
