// by roger && taifar
inherit ROOM;
#include <ansi.h>
#include "wind-rain.h"
void create () {
set ("short",HIC"ε����"NOR);
set ("long","������ľ�����滨���ף����b֮ˮ�ӻ�ľ���к������һ��ˮ��
֮������ƮȻ����ͤ��һ��Ȼ���ҵ�����ɣ����񹤣���������
��д��"HIC"������������ݴ䣬��������һ���㡱"NOR"�����ϣ�������ɴ��
�����ܣ�Ǿޱ��׺���䶥�ٳ����ʱ�Ӱ���������¡�
");



  set("exits", ([
            "north" : __DIR__"69",
            "south" : __DIR__"66",
                ]));

  set("objects", ([ 
  __DIR__"npc/liu-un" : 1,
                  ]));
       
        setup();
}
