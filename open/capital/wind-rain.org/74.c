// by roger && taifar
inherit ROOM;
#include <ansi.h>
#include "wind-rain.h"
void create () {
set ("short","����С��");
set ("long", @LONG
��ʯΪ����໨Ϊ�ţ�һ����������һ��� ���������������ģ���  
����ɡ��˿�����ƣ����µ�ɰ����Զ��Ǿޱ�߼������̴�ת����
�ϣ������Ϫǰ�裬���ɷ��������������������󤻤����������
��ͣ�ױ�����ء�
LONG);



  set("exits", ([
            "north" : __DIR__"73",
            "south" : __DIR__"83",
            "west"  : __DIR__"75",
                ]));

        setup();
}
