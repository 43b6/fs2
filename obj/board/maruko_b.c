inherit BULLETIN_BOARD;
#include <ansi.h>
void create()
{
set_name(HIR"���ӷ�����"NOR,({"board"}));
 set("location","/open/clan/maruko.c");
set("board_id","maruko");
set("long","������һ�������ӵ����۲�����\n");
setup();
set("capacity",50);
replace_program(BULLETIN_BOARD);
}
