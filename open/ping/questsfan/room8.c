// Room: /u/d/dhk/questsfan/room8
inherit ROOM;

#include <room.h>
#include <ansi.h>
void create ()
{
  set ("short", "���µı˶�");
  set ("long", @LONG
����ı�����һ�����͵�ľդ��ֻ��ľդ�ĽǱ�����
һ��С�Ŷ��һ����������������̺������ѵ��������˾�
ס���������������˵Ľ����ɣ���
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"room9",
  "goup" : __DIR__"room30",
  "enter" : __DIR__"room10",
]));
  set("outdoors", "/u/d");

set("need_key/out",1);
create_door("enter",HIY"��ľդդ��"NOR,"out",DOOR_LOCKED);
  setup();
}
