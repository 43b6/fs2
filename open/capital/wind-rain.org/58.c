// by roger && taifar
inherit ROOM;
#include <ansi.h>
#include "wind-rain.h"
void create () {
set ("short",HIY"���ϸ��¥��"NOR);
set ("long","���Ÿ��������صĸ߼ܲ��ϣ��������ܣ��������Ե���������ѧʿ
��̫��д��һ�������ƣ�"HIG"�ۺ��������䣬����Ϯ���Ǿ��㡣"NOR"����
ͭ�������Ŵ��������������ɴ͸���㣬��������ˮ����������ѩ
�˵ƣ���м���أ����������ػԻ͡�
");



  set("exits", ([
            "enter" : __DIR__"a1",
            "north" : __DIR__"57",
                ]));

        setup();
}
