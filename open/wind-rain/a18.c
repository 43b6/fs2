// by roger && taifar
inherit ROOM;
#include <ansi.h>
#include "wind-rain.h"
void create () {
set ("short",HIC"���ص�"NOR);
set ("long",@LONG
ܰ���˱ǣ������Ŀ��һ�߾޴��ˮ����ɫ�����ƴ����ڶ������
��Ŀ����ľ������˫�ж�������ľ˫��ϸ�����ż������μ䣬�绨  
������Ů���������ں�����Ʒ���ֱֱ̺�������赽��ɴ����
֮���������Ů���ڷ�����һ¥¥���� 
LONG);



  set("exits", ([
            "north"  : __DIR__"a17",
                ]));
  set("objects", ([ 
  __DIR__"npc/dau" : 1,
                  ]));
       
        setup();
}
