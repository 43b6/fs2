// by roger && taifar
inherit ROOM;
#include <ansi.h>
#include "wind-rain.h"
void create () {
set ("short","����ܽ��");
set ("long", @LONG
һ·������Χ����ʯ���ȣ�����Ҷ�Ž���������棬ɣ�����룬��
ɫ�����������������ۣ���ͳ�������������С��֮�»��н���
���֮����������Ķ�����߲˻�һ���޼ʣ������b����������ϸϸ
��������������
�������b֮ˮ���У��ּ�һ�������ӻ�ľ�к��ʯ϶֮�£�ת��
ɽ�´�������������޵�����٣�����ӣ�����죬ʵ����ͮ��������
�𣬺�ӭ��ͻ������Ĵ�����ɽʯ�����ķ�Ѱ�Ƹ�ʽʯ��������Ǿ
ޱԺˮ����������һ�����졣
LONG);



  set("exits", ([
            "east"   : __DIR__"55",
            "north"  : __DIR__"88",
                ]));
  set("objects", ([ 
  __DIR__"npc/peacock" : 3,
                  ]));
       
        setup();
}