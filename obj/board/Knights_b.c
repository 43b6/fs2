inherit BULLETIN_BOARD;
#include <ansi.h>
void create()
{
set_name(HIC"Բ����ʿ��"HIY"��־"NOR,({"board"}));
set("location","/open/clan/Knights/hall.c");
set("board_id","Knights_b");
set("long","����Բ����ʿ���������������԰档\n");
setup();
set("capacity",50);
replace_program(BULLETIN_BOARD);
}
