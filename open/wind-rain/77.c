// by roger && taifar
inherit ROOM;
#include <ansi.h>
#include "wind-rain.h"
void create () {
set ("short","����С��");
set ("long", @LONG
���b����һ������������������ʯ���Ͻ�ϵˮ��������ɫ��ƣ���
������ѩ��������㻱���������޻�Ҷȴ�ø�ɫ���ֽ�ͨ��Ϊ
����������к�����������ˮ��ʻ���ĵ������������Ư�࣬����
����ӯӯ͡����
LONG);



  set("exits", ([
            "south" : __DIR__"78",
            "east"  : __DIR__"76",
                ]));
  set("objects", ([ 
  __DIR__"npc/gold-guard-out" : 3,
                  ]));        

        setup();
}
