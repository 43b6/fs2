#include <room.h>

 inherit ROOM;

 void create()
{

        set("short", "С��");
        set("long", @LONG
����һ��������̦��С·���ɵ��ϵĺۼ����������ƺ��������˾���
�����Եľ�ʯ������ʮ�߸ߣ������㲻������զ�࣬С����������������
��ͨ���ɽ���ɽ��˼���¡�
 
LONG
        );

        set("exits", ([
		"eastdown":__DIR__"g6-1.c",
		"westup":__DIR__"g6-3.c",
        ]) );
	set("outdoors" ,"/open/gsword/room");
setup();

}
