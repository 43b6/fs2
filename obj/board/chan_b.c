inherit BULLETIN_BOARD;
#include <ansi.h>
void create()
{
set_name(HIC"琥珀水晶石"NOR,({"board"}));
set("location","/u/c/chan/workroom");
set("board_id","chan");
set("long","这是用来显示布衣行踪的水晶石，若找布衣有事也可以记录在上面\n");
setup();
set("capacity",50);
replace_program(BULLETIN_BOARD);
}
