#include <ansi.h>
#include	"/open/open.h"

inherit TRANS_ROOM;

void create ()
{
  set ("short", "������վ");
	set( "build", 6 );
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
    "west" : "/open/center/room/road2",
    "south" : "/open/center/room/road3",
	"up"	: "/open/common/room/inn",
    "north" : "/open/center/room/road1",
    "east" : "/open/center/room/road4",
    "down" : "/open/wiz/donate",
]));

  setup();
  call_other("/obj/board/start_b", "???");
}

//�����������������ѣ��ϵ���(pray), ����Ὣ�㴫�͵�����������ม�
void init()
{
  ::init();
  add_action ("do_pray","pray");
}
int do_pray()
{
	if(this_player()->query("combat_exp")>20000)
          return notify_fail("�㻹��������ȥȥȥ������ĵط�����ȥ!\n");
        message_vision(HIY"�����Ӧ��$N�ϵ������������һ����â����$N���ߡ�\n\n"NOR, this_player());
        this_player()->move("/open/start/room/newhand5.c");
        return 1;
}




