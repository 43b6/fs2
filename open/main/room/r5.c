// Room: /open/main/room/r5.c

inherit ROOM;

void create ()
{
  set ("short", "��·");
  set ("long", @LONG
�����Ǵ���վͨ����¬�رؾ���Ҫ��, ���ߵ������һ��С�Ļ��
�������̽�ȥ, ������һ��ƽ��, ��������������.
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"r7",
  "west" : __DIR__"L4",
  "east" : __DIR__"p7",
]));
  set("outdoors", "/open/main");

  setup();
}
