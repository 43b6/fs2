#include <ansi.h>
inherit BULLETIN_BOARD;

void create()
{
	set_name("���Ӳ�����", ({"board"}));
  set("location","/u/j/judd/workroom.c");
  set("board_id","judd_b");
  set("long", "����С����ĵ������԰�\n");
    setup();
   set("capacity", 100);
  set("master",({"judd"}));
}

