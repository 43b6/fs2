// Room: /open/ping/room/soldier2.c
inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
������ƽ��פ����������,���ʿ������Ŭ���Ĳ�����,Ϊ
���һ����������ǵ��ഺ,�㲻�������ǵľ���е�����.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/ping/npc/soldier1" : 1,
]));
  set("outdoors", "/open/ping");
  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"road10",
  "south" : __DIR__"soldier3.c",
  "east" : __DIR__"soldier1",
]));

  setup();
}
