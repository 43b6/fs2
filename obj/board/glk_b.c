
//glk's board
inherit BULLETIN_BOARD;
#include <ansi.h>
void create()
{
set_name(NOR"\n\n        "YEL"���Ʊ�"NOR, ({"board"}));
    set("location","/u/g/glk/workroom");
        set("board_id","glk_b");
        set("long","����һ��������Ƶ�ɽ�ڡ�\n");
    setup();
    set("capacity", 99);
        set("master",({"glk"}));
}

