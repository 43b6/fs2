inherit BULLETIN_BOARD;
#include <ansi.h>
void create()
{
set_name(NOR"□HIW"□NOR"□HIW"J"NOR"□HIW"d"NOR"□HIW"□NOR"□HIW"O"NOR,({"board"}));
set("location","/u/i/immo/workroom.c");
set("board_id","board");
set("long",HIY"这是混混大巫师"NOR"□HIW"□NOR"□HIW"J"HIY"的专用留言版, 你可以在上面涂涂鸭和留言(Post)。\n"NOR);
	setup();
	set("capacity", 100);
}
