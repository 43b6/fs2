inherit BULLETIN_BOARD;
#include <ansi.h>
void create()
{
	set_name("$HIY$龙神转世录$NOR$",({"board"}));
	set("long","一个帮派设计的布告栏");
	set("board_id","dragon");
	set("make_clan","dragon");
	set("location","/open/clan/dragon/room/hall");
	set("capacity",50);
	set("master",({"roman"}));
	setup();
}
