#include <room.h>

 inherit ROOM;

void create ()
{
  set ("short", "С����");
  set ("long", @LONG
һ����򵥲�����С�ţ�խ�Ľ�����������ͨ��������һ����Ϫ����������
����ˮ����ʹ�㾫����Ϊ֮һ������ǰ���߾����ɽ��ɵĺ�ɽ�ˡ�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"walley4",
  "south" : __DIR__"walley3",
]));

  set("outdoors", "/open/gsword/room");
  set("objects",([
     "/open/gsword/mob/hunter.c" :1,
   ]));

  setup();
}
