// by roger
inherit ROOM;
#include <ansi.h>
#include "wind-rain.h"
void create () {
set ("short","��¥ǰ");
set ("long", @LONG
    �����ѵ��˺��ľ�ͷ����ǰ�ǡ����ϸ��¥������¥��Χǽ����
�����޴��¥���ں������������£�������ɻλΣ��ֲ�������ɫ��
�����������ѵı�Ե��˭��֪���������ж���Ȩı��¥��߻����ж�
�ٲ�Ϊ��֪�Ľ������������棬�ж�������������Ϊ��¥Ч��?
LONG);



  set("exits", ([
            "east"  : __DIR__"room8",
            "enter"  : __DIR__"1",
                ]));

       

        setup();
}
