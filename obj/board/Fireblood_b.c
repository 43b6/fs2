inherit BULLETIN_BOARD;
#include <ansi.h>
void create()
{
	set_name("[1m[31m��Ѫ[33m����[37m������[0m",({"board"}));
	set("long","[1m[32m���Ӳ���ҡ����...ҡ����... ҡ����...ҡ����...ҡ����... ҡ����...[0m");
	set("board_id","Fireblood");
	set("make_clan","Fireblood");
	set("location","/open/clan/Fireblood/room/hall");
	set("capacity",50);
	setup();
}
