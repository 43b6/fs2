#include <ansi.h>
#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "����׵ľ���");
  set ("long", @LONG
�ò������߳�����ȷ���ִ˵ؾ���һ�����¡�����
��һ��һ��Ŀ��ɱ��ɱ��ɱ���Ĵ��š��������澹����
��״�����������ʱ����һ�ڣ���������ô�������
�ı����ƺ��������ᷢ��������Ӱ��

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/ping/questsfan/obj/corpse.c" : 1,
]));
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/ping/questsfan/room6",
  "north" : __DIR__"room1",
]));

  setup();
}
