inherit BULLETIN_BOARD;
#include <ansi.h>
void create()
{
	set_name("$HIY$����ת��¼$NOR$",({"board"}));
	set("long","һ��������ƵĲ�����");
	set("board_id","dragon");
	set("make_clan","dragon");
	set("location","/open/clan/dragon/room/hall");
	set("capacity",50);
	set("master",({"roman"}));
	setup();
}
