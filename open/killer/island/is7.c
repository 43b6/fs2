// Room: /u/u/unfinished/room/is7.c
inherit ROOM;

void create ()
{
  set ("short", "ɳ̲");
  set ("long", @LONG
����ĵ�������������ʯ, �����ܵĻ����ܲ�Э��. ����������ʯ��֮��
��, ���ǲ��Ҳ���ʲô������Ѱ���ĵط�, �������Լ�̫�����˰�.
LONG);

  set("outdoors", "/u/u");
  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"is12.c",
  "east" : __DIR__"is8.c",
  "south" : __DIR__"is4",
]));

  setup();
}
