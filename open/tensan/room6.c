inherit ROOM;
#include <ansi.h>
void create () {
        set ("short","��ɽ��");
        set ("long",@LONG
����һ��·��������ɽ�İ�ɽ���������Ѿ���Ϊ������Զ�۾��ˣ���
���￪ʼ��·��ĸ�������У���ö�ѵ㾢���ܼ�������ǰ�С�
LONG);
           
        set("exits", ([ /* sizeof() == 1 */
        "north" : __DIR__"room7",
        "east" :  __DIR__"room8", 
        "eastdown" :  __DIR__"room5",           
        ]));

       
        setup();
}
