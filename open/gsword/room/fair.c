#include <room.h>

 inherit ROOM;

 void create()
{
      
        set("short", "���пյ�");
        set("long", @LONG
��֪Ϊʲô��ï�ܵ������У������Ȼ��ݲ�����ʹ���ĳ�����̤ȥ,����
��������ؼ�Ӳ�ĺܣ�Ҳ�ѹ�ֲ���������������ˡ��ڿյ��м�������ª�����ݡ�
LONG
        );

        set("exits", ([
"west":__DIR__"fair1",
"south":__DIR__"plain3",
"enter":__DIR__"house2"
        ]) );
setup();

}
