#include <ansi.h>
inherit BULLETIN_BOARD;

#include <ansi.h>
void create()
{
  set_name(HIC"���װ�İ���������"NOR, ({"board"}));
  set("location","/open/clam/wind.c");
   set("board_id","clam_1");
  set("long","
   ���װ� ���� , ��Ҽ��φ�~~~~~\n
  ���´��һ���æ��");
    setup();
    set("capacity", 50);
}
