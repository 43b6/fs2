//open/prayer/room/tangi/tangi1-25.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","���䳡");
        set("long",
"����ŵ����䳡,���䳡�ϵĵ�����������. ����ʥ��̵���ѧ��������,����֮һ��
����Ǭ����,������ٱ!!����ȴ����Ҫ���ϵ���ϰ!!\n");

        	set("outdoors", "/u/r/rence");
        	set("exits", ([ /* sizeof() == 3 */
        	"north":"/open/prayer/room/tangi/tangi1-20",		//���䳡
	"south":"/open/prayer/room/tangi/tangi1-30",		//���䳡
	"east":"/open/prayer/room/tangi/tangi1-26",		//���䳡
         
        ]) );
        	set("no_fight", 0);
        	set("objects",([ /* sizeof() == 3 */
  "/open/prayer/npc/trainee1" : 1,		//����
  "/open/prayer/npc/trainee2" : 1,		//����
  "/open/prayer/npc/trainee3" : 1,		//����
   		
]));
     
  setup();
}
