// Room: /open/ping/room/soldier3.c
inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
������ƽ��פ����������,���ʿ������Ŭ���Ĳ�����,Ϊ
���һ����������ǵ��ഺ,�㲻�������ǵľ���е�����.�Ϸ�
�м�������,Ӧ��פ���Ĵ�Ӫ��.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/ping/npc/soldier1" : 1,
]));
  set("outdoors", "/open/ping");
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"soldier2",
  "enter" : __DIR__"soldier4",
]));

  setup();
}
