//open/prayer/room/uhen/20.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","���䳡");
        set("long",@LONG

        ���䳡�ϵĵ�����������. ����ʥ��̵���ѧ��������, ��
        ��֮һ�Ļ��챦���ķ�, ��Ů�������������������ѧ!!��
        ϰ֮�󲻵�����ǿ���������!!����ʹ����ϰʥ��̵���ѧ
        ���°빦����Ч��.
LONG);

        set("outdoors", "/open/prayer");
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
