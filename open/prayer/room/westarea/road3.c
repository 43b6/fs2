//open/prayer/room/westarea/road3.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ֵ�");
        set("long",@LONG
	�������Գ�һ��Ľֵ�, ��ͨ�˴�, ��������. ����������
	�Ե���ʥ��̵���̳. ��������Ե���"�׻���"��"�����"
	. �׻��������������һ�����ŵķ�֧, ����ȴ������˵��
	�˼�����������һ���ɵ���ͽ!!
LONG);

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 2 */
        "east":__DIR__"road1",		//�ֵ�
        "west":__DIR__"road5",		//�ֵ�
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() ==  1*/
	"/open/prayer/npc/woman2" : 1,		
        ]) );

    setup();
}
