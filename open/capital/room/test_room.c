// Room: /open/capital/room/r69.c
// rewrite by wade 1/5/1996
// �ĳ��� heart_beat �ķ�ʽ

#include "/open/open.h"
inherit ROOM;

void create ()
{
  set ("short", "����");
	set( "build", 19 );
  set ("long", @LONG
�����ǿ�����ÿ��Ŀƾٿ��Զ�����������У��������������
����һȺΪ�����������ʮ��Ķ������ǣ����������ڿ����е�ȡ��
��,��һ�Ų���(board)������.

LONG);

 set("item_desc", ([
  "board" : "һ����ٸ�,�ͱ�����ԭ�����������й�ϵ,���Ҫ�������!!!\n",
    ]));
  set("exits", ([ /* sizeof() == 1 */
  "east" : "/open/capital/room/r71",
]));

  set("objects", ([ /* sizeof() == 1 */
	CAPITAL_NPC"test_officer"	:	1,
]));

  set("no_kill", 1);
  set("no_fight", 1);
  set("light_up", 1);
  set("no_magic", 1);

  setup();
}
