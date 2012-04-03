// Room: /u/w/wade/workroom.c
#include <room.h>

#define WIZ_ENTRANCE "/open/wiz/entrance"

inherit ROOM;

void create ()
{
  set ("short", "��������Ĺ�����");
  set ("long", @LONG
�������, ������ѧϰһ�еĿ�ʼ, Ҳ���㷢й������
���ȥ��, ��Ȼ, ���߿�Ҳ�������, ��ס, ���������Զ
������. ����������Կ�׵�ʾ��д��, ������Ҳ�� board
��ʾ��д����. �����������������һЩ����:
	more here
	more board
LONG);

  set("undead",1);
  set("light_up", 1);
  set("valid_startroom", 1);
  set("exits", ([ /* sizeof() == 3 */
  "wiz"		: __DIR__"room/wiz",
  "west"	: __DIR__"room/key_room",
  "room"	: __DIR__"room/room",
  "down"	: WIZ_ENTRANCE,
  "basic"	: __DIR__"room/prog",
  "npc"		: __DIR__"room/npc",
  "doc"         : __DIR__"room/doc",
  "lpc"		: __DIR__"room/lpc",
]));

  create_door("west", "��", "east", DOOR_CLOSED);

  setup();
  call_other("/obj/board/wade_b", "???");
}

void init()
{
  add_action("test", "test");
}

int test(string arg)
{
  object ob;

  if (!arg || arg == "") return 0;
  ob = find_player (arg);

  if (!objectp (ob)) write ("Not found.\n");
  else printf ("%s's data: %O\n", arg, ob->query_entire_dbase());
  return 1;
}
