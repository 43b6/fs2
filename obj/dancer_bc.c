#include <ansi.h>
inherit BULLETIN_BOARD;
								
void create()
{
	set_name( HIY "���߹�����°�" NOR ,({"dancer board", "board"}));
	set("location","/open/capital/room/dancer");
	set("board_id","dancerc");
	set("long",	"�������������֮����\n");
	setup();
	set("capacity", 50);
       set("master",({"cgy"}));
}
							
