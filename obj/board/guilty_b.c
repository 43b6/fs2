inherit BULLETIN_BOARD;
#include <ansi.h>
void create()
{
set_name(HBMAG+HIY"���﹫�������߰�"NOR,({"board"}));
set("location","/open/wiz/guilty_room");
set("board_id","guilty");
set("long","��wiz������������������,���������������ߵĻ���\n");
setup();
set("capacity",300);
replace_program(BULLETIN_BOARD);
}
