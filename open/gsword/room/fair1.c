#include <room.h>

 inherit ROOM;

 void create()
{
      
        set("short", "���пյ�");
        set("long", @LONG
��֪Ϊʲô��ï�ܵ������У������Ȼ��ݲ�����ʹ���ĳ�����̤ȥ,����
��������ؼ�Ӳ�ĺܣ�Ҳ�ѹ�ֲ���������������ˡ�
LONG
        );

        set("exits", ([
"west":__DIR__"plain6",
"south":__DIR__"plain4",
"east":__DIR__"fair"
        ]) );
setup();

}
