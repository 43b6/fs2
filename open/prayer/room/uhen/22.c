//open/prayer/room/uhen/22.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","���䳡");
        set("long",@LONG

        �㿴�����䳡�ϵĶ��������������䳡��������ȥ.  
        �����ƺ��������൱���ص�Ǧ����ѵ������. ������ 
        �����������൱������.
LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"15",		
        "east":__DIR__"21",	
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
        "/open/prayer/npc/trainee1" : 1,		//����
        "/open/prayer/npc/trainee3" : 1,		//����
   		
]));
     
  setup();
}
