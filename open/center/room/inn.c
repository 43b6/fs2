#include <ansi.h>
#include	"/open/open.h"

inherit ROOM;

void create ()
{
  set ("short", "������վ");
  set ( "long", @long
������������������վ, ��ֵĳ���, ������ɳĮ�����ն�, ��
����ţ���⳵, ����ֻҪ��еó����ֵĽ�ͨ����������С�
long);

  set("objects", ([ /* sizeof() == 1 */
  "/open/center/npc/sale_girl" : 1,
]));
  set("no_kill",1);
  set("no_magic",1);
  set("no_fight",1);

	set("outdoors", "/open/main");
	set("exits", ([ /* sizeof() == 4 */
	"west" : __DIR__"road2",
	"south" : __DIR__"road3",
	"up"	: "/open/common/room/inn",
	"north" : __DIR__"road1",
	"east" : __DIR__"road4",
	"down" : "/open/wiz/donate",
]));

  setup();
  call_other("/obj/board/start_b", "???");
}

