//open/prayer/room/tangi/tangi1-30.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","���䳡");
        set("long",
"����ŵ����䳡,���ϵ����ɼ�����������. �����Ǵ���,���������ͨ��������\n");

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 2 */
        "north":"/open/prayer/room/tangi/tangi1-25",		//���䳡
	"east":"/open/prayer/room/tangi/tangi1-31",		//���䳡
       
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee4" : 3,		//����
   		
]));
     
  setup();
}
