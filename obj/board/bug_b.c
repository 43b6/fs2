inherit BULLETIN_BOARD;
#include <ansi.h>
void create()
{
set_name(HBRED+HIY"bugs������"NOR,({"board"}));
set("location","/open/wiz/bug_room");
set("board_id","bug");
set("long","��wiz����bugs�õ�,����������post,��bug��ֱ�Ӵ�record,thx\n");
setup();
set("capacity",300);
replace_program(BULLETIN_BOARD);
}
