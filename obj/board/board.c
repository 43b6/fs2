#include <ansi.h>
inherit BULLETIN_BOARD;

void create()
{
   set_name(HIC"����ʯ��"NOR, ({"board"}));
set("location","/u/h/happy/room/workroom.c");
set("board_id","happy_b");
set("long",HIC"����Ũ���ʯ��,�������㾡������...\n"NOR);
    setup();
set("capacity", 80);
set("master",({"happy"}));
}


