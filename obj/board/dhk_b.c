inherit BULLETIN_BOARD;
#include <ansi.h>
void create()
{
set_name(HIC"˾ͽ����"NOR,({"board"}));
set("location","/u/d/dhk/workroom");
set("board_id","dhk");
set("long","������dhk,���ڴ˰���post,thx\n");
setup();
set("capacity",50);
replace_program(BULLETIN_BOARD);
}
