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
	set("outdoors" ,"/open/gsword/room");

        set("exits", ([
		"westup":__DIR__"g6-2",
		"east":__DIR__"g4-15",
        ]) );
        
setup();

}
