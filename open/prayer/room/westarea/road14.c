//open/prayer/room/westarea/road14.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ֵ�");
        set("long",@LONG
	�������Գ�һ��Ľֵ�, ��ͨ�˴�, ��������. ����������
	�Ե���ʥ��̵���̳. ��������Ե���"�����"��"�����"
	. ����ʥ��̵�λ�øպ�����һ�����֮��, �����ɶ�����
	�½�, �ϱ�������صĿ���!
LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 2 */
        "east":__DIR__"road13",		//�ֵ�
        "west":__DIR__"road15",		//�ֵ�
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() ==  1*/
	"/open/prayer/npc/man1" : 1,		
        ]) );

    setup();
}
