//open/prayer/room/tangi/tangi1-1.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�������鷿");
        set("long",@LONG

	�˴�������������������鷿��ֻ�����ܵ����װ����ʫ
	����������ᣬ�ɼ�������˾���������ѧ��Ʒ���Ƿǳ���
	�ӵģ�ͬʱ����Ҳ����������������ܾۻ�֮��!!��ʥ���
	���ǲ��ܽ����!! 

LONG);
        set("exits", ([ /* sizeof() == 1 */
        "south":"/open/prayer/room/tangi/tangi1",		//����
        ]) );
        set("no_fight", 0);
        set("light_up", 1);

   setup();
}



