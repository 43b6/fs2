// by roger
inherit ROOM;
#include <ansi.h>
#include "wind-rain.h"
void create () {
set ("short","ܽ�غ���");
set ("long", @LONG
    �ذ����ƻ𣬗�������Զɽ��ˮ��ĮĮ���̡��������
�ǻ�����ȪԴ��ĺ�������������ǹ������´���Ҳ������Ԩ޴����
Ӣ�۵�־֮�أ�����־ʿ����֮�����ú����ǵĵط���
LONG);


  set("exits", ([
            "east"  : __DIR__"room2",
            "west"  : __DIR__"room4",
                ]));

       

        setup();
}
