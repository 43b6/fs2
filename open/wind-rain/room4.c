// by roger
inherit ROOM;
#include <ansi.h>
#include "wind-rain.h"
void create () {
set ("short","ܽ�غ���");
set ("long", @LONG
    �����Ǿ����Ｋ���ֵĵط�����������̯�ӣ�һ����ţ�⣬һ����
���⣬һ�������⡣�н������յĸ�Ů���н�ͷ˵�飬�ֱ�����Ľ���
�ˣ�����С��ؤ������ؤ�ڴ������䡣�����мҾ�¥�С�����¥����
����������ȫ�����λ���֮�ˣ���¥�Ͽ�����������ܽ�غ���
LONG);


  set("exits", ([
            "east"  : __DIR__"room3",
            "enter"  : __DIR__"room5",
            "west"  : __DIR__"room7",
                ]));

       

        setup();
}
