// by roger && taifar
inherit ROOM;
#include <ansi.h>
#include "wind-rain.h"
void create () {
set ("short","����");
set ("long", @LONG
һ�����ڣ��㴫��һ�����㣬����c����������������������ϸ��
ʱ�»�����δ����ī��һɫˮĥȺǽ�������ɫʯ�������ˮ����
ģ��������һ�����ǰ�ѩ��Ǿ�����»�Ƥ����ʯ���������Գ�����
�Ƿ�����������һ����˪ʯ����ݺṰ�����ϣ�������ӳ������ӭ
����
LONG);



  set("exits", ([
            "east"  : __DIR__"2",
            "west"  : __DIR__"48",
            "south" : __DIR__"49",
            "out"   : __DIR__"room9",
                ]));

       

        setup();
}
