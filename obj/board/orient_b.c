inherit BULLETIN_BOARD;
#include <ansi.h>
void create()
{
	set_name("[1;37m��[1;36m��[1;37mɽ[1;36m�[0m",({"board"}));
	set("long","[1;37m��[1;36m��[1;37mɽ[1;36m�[0m");
	set("make_clan","orient");
	set("location","/open/clan/orient/room/hall");
	set("board_id","orient");
	set("capacity",50);
	setup();
}
