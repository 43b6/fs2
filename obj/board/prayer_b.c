inherit BULLETIN_BOARD;
#include <ansi.h>


void create()
{
        set_name( HIR "ʥ������԰�" NOR , ({ "prayer board","board" }) );
        set("location", "/open/prayer/room/punch1-2");
        set("board_id", "prayer_b");
        set("long",     "ʥ��̸�����������������Ե�.\n");
        setup();
        set("capacity", 30);
        set("master", ({"rence","kael","hana"}) );
}
