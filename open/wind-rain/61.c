// by roger && taifar
inherit ROOM;
#include <ansi.h>
#include "wind-rain.h"
void create () {
set ("short","�ȵ�");
set ("long", @LONG
��ľ����������ܣ��ۻ����������ܴ�����絭���������𣬸���
�ɻ������ݷҷ����ȼ�ɻ�����һ��һ�ԣ������˼�����ɳ���
�����·��д�������ɢ�ɻ���ˮ��֮�С������裬˿����Լ����
�ƻлпɺ�һ���Ӽ�����Ը���ȶ��֡�
LONG);



  set("exits", ([
            "east" : __DIR__"62",
            "west" : __DIR__"60",
            "north": __DIR__"72",
            "south": __DIR__"73",
                ]));
  set("objects", ([ 
  __DIR__"npc/thin-guard-out" : 3,
                  ]));   
        setup();
}
