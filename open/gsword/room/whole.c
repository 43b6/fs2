#include <room.h>

 inherit ROOM;

 void create()
{
      
        set("short", "��Ѩ");
        set("long", @LONG
�������Ѩ���ڲ�����ʪ�Ŀ�����������������Щ�ϰ���ͨ�������Ͽ��뿪
�����ط������ϵ�С���ʯ�̵�������������������ұ��ϵ�ȭӡ�ֱ�
���ڴ�Ҫ����һЩ�����Ҹ�Ϊ�����ˡ�
LONG
        );

        set("exits", ([
"west":__DIR__"whole1",
"east":__DIR__"hole"
        ]) );
setup();

}
