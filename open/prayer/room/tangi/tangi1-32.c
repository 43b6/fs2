//open/prayer/room/tangi/tangi1-32.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","���䳡");
        set("long",
"����ŵ����䳡,���䳡�ϵĵ�������ѵ������. ����ʥ��̵���ѧ��������,������
��Ǭ����Ų�ƵĲ���,�ǽ����ڶ�������õ���ѧ!!�ܹ�����ıܿ����˵Ĺ���!!\n");

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 2 */
        "north":"/open/prayer/room/tangi/tangi1-27",		//���䳡
	"west":"/open/prayer/room/tangi/tangi1-31",		//���䳡
       
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
  "/open/prayer/npc/trainee2" : 1,		//����
  "/open/prayer/npc/trainee3" : 1,		//����
   		
]));
     
  setup();
}
