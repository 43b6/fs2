#include <ansi.h>
inherit BULLETIN_BOARD;

void create()
{
  set_name(HIC"����ʯ��"NOR, ({"board"}));
  set("location","/open/prayer/room/prayer_talk.c");
  set("board_id","prayersss_b");
  set("long",HIC"��ɫ�����ʯ��,�������㾡�����...\n"NOR);
    setup();
set("capacity", 80);
  set("master",({"xman","xboy"}));
}


