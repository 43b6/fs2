// Room: /open/main/room/s3.c

inherit ROOM;

void create ()
{
  set ("short", "��ԭ");
  set ("long", @LONG
�����Ǵ��ԭ�Ķ���, ������ȥ, �ǳ�����������ɳĮ
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : "/open/main/room/s5",
  "west" : "/open/main/room/s2",
  "east" : "/open/main/room/d1",
]));

  set("outdoors", "/open/main");

  setup();
}
