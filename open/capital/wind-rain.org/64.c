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
            "east" : __DIR__"51",
            "west" : __DIR__"65",
                ]));

        setup();
}
