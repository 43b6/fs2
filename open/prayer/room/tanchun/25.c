//open/prayer/room/tanchun/25.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","���䳡");
        set("long",@LONG

	��Ȩ�ŵ����䳡, ���䳡�ϵĵ������ڻ�������. ����
	ʥ��̵�ʥ���湦����רΪʥ������������ѧ����, ��
	�ƹ���ǳ�, ���Ǭ����Ų�ƵĲ���, ���ܹ�����Ĺ�
	������������!!

LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"19",		
        "west":__DIR__"26",	
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 3 */
	"/open/prayer/npc/trainee1" : 1,	//����
	"/open/prayer/npc/trainee4" : 1,	//����
	"/open/prayer/npc/man4" : 1,		//��ͷ   		
]));
     
  setup();
}
