#include <ansi.h>
inherit BULLETIN_BOARD;

void create()
{
  set_name(HIC"����ʯ��"NOR, ({"board"}));
  set("location","/u/a/adam/workroom.c");
  set("board_id","adam_b");
  set("long",HIC"��ɫ�����ʯ��,�������㾡�����...\n"NOR);
    setup();
set("capacity", 80);
  set("master",({"adam"}));
}


