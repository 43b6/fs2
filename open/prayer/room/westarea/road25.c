//open/prayer/room/westarea/road25.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ֵ�");
        set("long",@LONG
	��һ�����ϱ���ĵ�·, ��ͨ�˴�, ��ʥ��̵�ר�ù�·, ��
	�߿���ͨ��ʥ��̵���̳. �ϱ�����ͨ����ԭ���ֵ�Ҫ��.
LONG);

       	set("outdoors", "/u/r/rence");
       	set("no_fight", 0);
	set("exits", ([ /* sizeof() == 2 */
       	"north":__DIR__"road21",		//�ֵ�
	"south":__DIR__"road29",		//�ֵ�
	 
        ]) );
        set("objects",([ /* sizeof() ==  1*/
	"/open/prayer/npc/woman1" : 1,		
        ]) );
        setup();
}
