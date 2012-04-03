// Room: /open/main/room/s1.c

inherit ROOM;

void create ()
{
  set ("short", "��ԭ");
  set ("long", @LONG
�����Ǵ��ԭ������, �����߿���ȥ, �Ǻ�ѹѹ������, Ҳ������಻
˼��Ĺ���, �����ٽ�ȥΪ��
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/center/npc/brownhorse" : 1,
]));

  set("outdoors", "/open/main");

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"F3",
  "south" : __DIR__"s4",
  "east" : __DIR__"s2",
]));

  setup();
}
