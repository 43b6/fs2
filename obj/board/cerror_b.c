#include <ansi.h>
inherit BULLETIN_BOARD;

void create()
{
set_name(HIY"�ҵļ��°�"NOR, ({"board"}));
set("location","/u/c/cerror/workroom.c");
set("board_id","cerror_b");
set("long",HIY"��������� ,�������±�\n"NOR);
    setup();
set("capacity", 80);
set("master",({"cerror"}));
}


