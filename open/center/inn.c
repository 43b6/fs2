// Room: /u/p/powell/room/inn.c
#include <ansi.h>
#include	"/open/open.h"

inherit ROOM;

void create ()
{
  set ("short", "������վ");
  set ("long", @LONG
������������������վ����ֵĳ���, ������ɳĮ�����ն�, ��
����ţ���⳵, ����ֻҪ��еó����ֵĽ�ͨ����������С�
LONG);

  set("outdoors", "/open/main");
  set("objects", ([ /* sizeof() == 2 */
  "/open/center/npc/sale_girl" : 1,
  "/open/dancer/npc/ringman" : 1,
  "/obj/ballot" : 1,
]));
  set("no_fight", 1);
  set("exits", ([ /* sizeof() == 5 */
  "south" : __DIR__"road3",
  "east" : __DIR__"road4",
  "west" : __DIR__"road2",
  "up" : "/open/common/room/inn",
  "north" : __DIR__"road1",
//         "present" : "/u/b/bss/present/present_room",
]));

  setup();
call_other("/obj/board/start_b.c","???");
}
