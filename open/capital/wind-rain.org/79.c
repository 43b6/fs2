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
            "north" : __DIR__"76",
            "east"  : __DIR__"82",
                ]));

        setup();
}
