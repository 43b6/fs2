// Room: /d/snow/school2.c

#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "[1;35m��ȥʱ��[0m ������ݽ�����");
  set ("long", @LONG
��������վ��һ�����Ľ������У��������Ż�ɫ��ϸɰ�������
��������Ŭ���ز����ţ�������һ��ߴ�ı������������������ʦ��
����Ϣ�Ĵ�����
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "west" : (: look_door,     "west" :),
]));
  set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/trainee" : 3,
  __DIR__"npc/fist_trainer" : 1,
]));
  set("outdoors", "snow");
  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"school1",
  "north" : __DIR__"weapon_storage",
  "east" : __DIR__"schoolhall",
]));

  setup();
}
