#include <ansi.h>
inherit BULLETIN_BOARD;

void create()
{
  set_name("[0;1;5;33m��[1;5mq[1;5m��[1;5ml[1;5m��[1;5mO[1;5m��[1;5m��[1;5m��[1;5m��[0m", ({"board"}));
  set("location","/u/a/acme/workroom.c");
  set("board_id","acme_b");
  set("long", "����acme�ĸ߿Ƽ��豸\n");
    setup();
   set("capacity", 100);
  set("master",({"acme"}));
}

