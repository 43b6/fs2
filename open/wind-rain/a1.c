// by roger && taifar
inherit ROOM;
#include <ansi.h>
#include "wind-rain.h"
void create () {
set ("short","һ¥����");
set ("long",@LONG
�����ǽ��ϸ��¥Ψһ�ĳ���ڣ�Ҳ�Ǹ�¥���ƶ���Ҫ����������
�������쵱�վ�������ı�����һ�߰����Է���������Ľ��̣���
��ʢ�ŵ����Ϻ����飬�Ѫɺ�������滹�����ٲ������ں��µ���
֯�Ķ�ɴ��������ͬ�������Ƶ������ʡ� 
LONG);



  set("exits", ([
/*
            "up" : __DIR__"b1",
*/
            "out": __DIR__"58",
            "south" : __DIR__"a2",
                ]));

        setup();
}
