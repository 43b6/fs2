inherit BULLETIN_BOARD;
#include <ansi.h>								
void create()
{
	set_name( HIC "ҹ��С�����°�" NOR ,({"dancer board", "board"}));
	set("location","/open/dancer/room/start");
	set("board_id","dancer");
	set("long",	"�������������֮����\n");
	setup();
	set("capacity", 50);
       set("master",({"cgy","lum"}));
}
                
							
