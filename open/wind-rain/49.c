// by roger && taifar
inherit ROOM;
#include <ansi.h>
#include "wind-rain.h"
void create () {
set ("short","��·");
set ("long", @LONG
ϸ������ȴ�Ǵ������Ӿ�ˮ�ʵأ���Ϊһέ���������������Ծ� 
�ҹ�ʯ�����ƹ��Ȼ������ޣ���ľ���������������գ���Ȼ����
��Ȼ���������аŽ��һ���ⷺ�ʣ�����������ƮƮ�����b֮ˮ 
���ܵ������������v������ޥ¶�����۵ס�
LONG);



  set("exits", ([
            "south" : __DIR__"50",
            "north" : __DIR__"1",
                ]));

       

        setup();
}
