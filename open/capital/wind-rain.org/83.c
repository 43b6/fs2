// by roger && taifar
inherit ROOM;
#include <ansi.h>
#include "wind-rain.h"
void create () {
set ("short",HIG"������"NOR);
set ("long", @LONG
�������������磬��ʯ��Ϊ����������ӳ�������Ͽ̵������״��
ÿһֻ������н�ҧ��һ��ҹ���飬����������ǹ��㡣�ֹ�ˮ
�ϣ����ɽ�����«��ƮƮ�����ѵ�ˮ�����㿩���������羵�紵��
����ˮ���������������ˬ��
LONG);



  set("exits", ([
            "east"   : __DIR__"81",
            "north"  : __DIR__"74",
                ]));

        setup();
}
