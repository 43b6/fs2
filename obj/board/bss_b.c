inherit BULLETIN_BOARD;
#include <ansi.h>
void create()
{
set_name(HBRED+HIY"Ѫ��ͼ"NOR,({"board"}));
set("location","/u/b/bss/workroom");
set("board_id","bss");
set("long","������bss,���ڴ˰���post,thx\n");
setup();
set("capacity",50);
replace_program(BULLETIN_BOARD);
}
