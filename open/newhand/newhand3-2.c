#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIY"����ռ�������ŷ���"NOR);
  set ("long","Ҫ֪��Ŀǰ����Щ���ɵĻ������Դ�help cshowclan
  ���磺��cshowclans
        --------------------- ����ռ����а���һ����---------------------
        ����:���͵�(hero)                       ����:fish
        ����:��ħ(wind)                 ����:julio
        ����:ʮ������(13_luck)                  ����:lunn
        ����:�������(SunMoon_Station)                  ����:cyberfight
        ����:���꽭��(orient)                   ����:guetenr
        ����:������(Red_Fire)                   ����:lovemay
        -----------------------------------------------------------------
        ���Ϲ���������Ұ���

  ���������Ŀǰ�������İ����б�!!!!!!!!!!!
               \n");
  set("exits", ([
  "east" : __DIR__"newhand3-1",
  "west" : __DIR__"newhand",
               ]));
  set("light_up", 1);
  setup();
}

