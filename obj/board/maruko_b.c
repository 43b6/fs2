inherit BULLETIN_BOARD;
#include <ansi.h>
void create()
{
set_name(HIR"丸子贩卖机"NOR,({"board"}));
 set("location","/open/clan/maruko.c");
set("board_id","maruko");
set("long","这是让一串大丸子的讨论布告栏\n");
setup();
set("capacity",50);
replace_program(BULLETIN_BOARD);
}
