// by roger && taifar
inherit ROOM;
#include <ansi.h>
#include "wind-rain.h"
void create () {
set ("short","����С��");
set ("long", @LONG
�������ϱ�͵��¶��ţ�����ۻ������������ܴ���ӣ���ͷף�
������ң��滨���꣬ͩ����磬ݶ«ҹѩ���ٺ�����ݺ��֦ͷ
���䣬�������������ֻ��ͥ���ƿգ���м���أ���������������
֮���������ᡣ
LONG);



  set("exits", ([
            "south" : __DIR__"79",
            "north" : __DIR__"75",
            "west"  : __DIR__"77",
                ]));

        setup();
}
