inherit BULLETIN_BOARD;

#include <ansi.h>
void create()
{
  set_name(HIC"�μҽ�����"NOR, ({"board"}));
set("location","/open/ping/room/talkroom.c");
  set("board_id","lord_b");
  set("long",HIC"��ɫ�����ʯ��,�������㾡�����...\n"NOR);
    setup();
    set("capacity", 80);
set("master",({"adam","xboy"}));
}
