//open/prayer/room/kiyan/20.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","���䳡");
        set("long",@LONG

	�����ŵ����䳡, ���䳡�ϵĵ�������������,����ʥ��̵���ѧ��
	������,����֮���Ļ��챦���ķ�, ��Ů�������������������ѧ!!
	��ϰ֮�󲻵�����ǿ���������!!���ܷ����������̾Ϊ��ֹ�ľ���
	����!!

LONG);

        set("outdoors", "/open/prayer/room");
        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"13",		
        "west":__DIR__"21",	
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
  "/open/prayer/npc/trainee1" : 1,		//����
  "/open/prayer/npc/trainee4" : 1,		//����
   		
]));
     
  setup();
}
