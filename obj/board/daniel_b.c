inherit BULLETIN_BOARD;
#include <ansi.h>
 
void create()
{
    set_name(HIW"Ӱ����"NOR, ({ "board" }) );
    set("location", "/u/d/daniel/workroom");
    set("board_id", "daniel_b");
    set("long", "���㶺�!?����ɶ�ÿ�,���Ǹ��� post �õ�.\n" );
    setup();
    set("capacity", 100);
    set("master",({ "daniel" }) );
}
