// Room: /open/main/room/r19.c

inherit ROOM;

void create ()
{
  set ("short", "��·");
  set ("long", @LONG
�����Ǵ���վͨ����¬�رؾ���Ҫ��, ���Ͼ���������վ, ������
��, ������ƺ���������������.
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : "/open/main/room/F12",
  "north" : "/open/main/room/r12",
  "south" : "/open/center/room/road1",
]));

  set("outdoors", "/open/main");

  setup();
}
