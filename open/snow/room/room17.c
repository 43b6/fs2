#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "��ɽ����ͤ");
  set ("long", @LONG
������ѩ���ɵ���������ͷ��װ�ο�������һ����ʷ�ˣ�����
������ѩ���ɵĸ��ݵأ�����Ľ��������ٶ��꣬�ഫѩ����
��ɽ��ʦ���꿪��ʱ�ƺ��н���һЩ��������֮��ġ�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"room16",
  "east" : __DIR__"troom_0.c",
]));
     set("objects",([
     "/open/snow/npc/fly.c": 1,
]));
  set("light_up", 1);

  setup();
}
