// Room: /open/gsword/room/gsword6-1.c
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
����һ������ ,�����о������ͷۺ��õ�� ,�������� ,������ٱ .
������� ,�������Ƿ��� ,��֧������������ ,���軨�� ,�����˼�һ����
�� .

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/npc/bee" : 2,
]));

  set("light_up", 1);
  set("outdoors", "/open/gsword/room");

  set("exits", ([ /* sizeof() == 3 */
  "north" : "/open/gsword/room/g4-8.c",
  "south" : "/open/gsword/room/g4-16.c",
  "east" : "/open/gsword/room/g4-12.c",
]));
  set("clean_up",0);
   set("objects",([
  "/open/gsword/npc/swordman-1.c" : 1,
 "/open/gsword/npc/swordman-2.c" : 1,
 "/open/gsword/npc/swordman-3.c" : 1,
  ]));
  setup();
}
