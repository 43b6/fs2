// by roger && taifar
inherit ROOM;
#include <ansi.h>
#include "wind-rain.h"
void create () {
set ("short",HIW"���b"NOR);
set ("long", @LONG
�˳�Բ�����£��ʵع⳺���ݣ�ӿ����������ȫ¥��ˮԴ��������
ɽб�裬ϧ����죬�м���֦�ӻ��������ϼһ�㣬ˮ�ϰ׻�����
��ʯ��Ȫ��ˮ�����ʶ�����������
LONG);



  set("exits", ([
            "north" : __DIR__"70",
            "south" : __DIR__"61",
                ]));
  set("objects", ([ 
  __DIR__"npc/white-fish" : 2,
                  ]));
       
        setup();
}
