#include <ansi.h>
inherit BULLETIN_BOARD;

void create()
{
set_name(HIC"�������"NOR, ({"mysterious crystal","board"}));
  set("location","/u/b/babe/workroom.c");
set("board_id","babe_b2");
  set("long","
    Ҫ������, ���깦��, ������ mud �!\n
    �����Ա���...\n
    ��������û�¶���ӭPOST..");
    setup();
set("capacity", 100);
  set("master",({"babe"}));
}
