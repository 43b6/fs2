//open/prayer/room/westarea/road39.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ֵ�");
        set("long",@LONG
	�������Գ�һ��Ľֵ�, ��ͨ�˴�, ��������. ��������������,
	�ϱ�������ȸ��. Ʈ����������һ��һ������, ��Ȼ˵�ֲ��ķ�
	Χ�Ϸ�ɢ, ���������ص�ʵ������������һ��δ֪�ı���.
LONG);

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 3 */
        "north":__DIR__"road34",	//�ֵ�
	"south":__DIR__"road41",	//�ֵ�
	"east":__DIR__"road38",		//�ֵ�
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() ==  1*/
	"/open/prayer/npc/woman3" : 1,		
        ]) );

  setup();
}
