#include <room.h>

 inherit ROOM;

 void create()
{

        set("short", "С��");
        set("long", @LONG
����һ��������̦��С·���ɵ��ϵĺۼ����������ƺ��������˾���
�����Եľ�ʯ������ʮ�߸ߣ������㲻������զ�࣬С����������������
��ͨ���ɽ���ɽʯ�ҡ�
 
LONG
        );

        set("exits", ([
        "southeast":__DIR__"g6-4.c",
        "northwest":__DIR__"h-3.c",       
        ]) );
	set("outdoors" ,"/open/gsword/room");
        
setup();

}
