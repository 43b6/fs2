//open/prayer/room/tanchun/15.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","���䳡");
        set("long",@LONG

	��Ȩ�ŵ����䳡, ���䳡�ϵĵ������ڽ����ܽ�ͷ��ָ���������
	����. ����ʥ��̵���ѧ����֮һ������Ǭ����, ������ٱ!!����
	��Ҫ���ϵ���ϰ��������ȭ��!!   

LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 3 */
        "east":__DIR__"14",		//����
	"south":__DIR__"19",		//���䳡
	"west":__DIR__"16",		//���䳡
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
  "/open/prayer/npc/trainee2" : 1,		//����
  "/open/prayer/npc/trainee4" : 1,		//����
   		
]));
     
  setup();
}
