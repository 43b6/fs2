//casey's board
#include <ansi.h>
inherit BULLETIN_BOARD;

void create()
{
    set_name(HIC"���ʯ��"NOR, ({"board"}));
    set("location","/u/c/casey/workroom");
        set("board_id","casey_b");
        set("long","������������ֵ�ʯ��\n");
    setup();
    set("capacity", 999);
        set("master",({"casey"}));
}
