//open/prayer/room/tangi/tangi1-38.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","����");
        set("long",
"����ŵĳ���,��ʦ�Ĺ������Ǹ�������ȫ�������������˵Ķ�Ƥ. ���������е���
���ŵȻ�Ҫ�����Ĳ�ɫ��!!\n");

        set("exits", ([ /* sizeof() == 1 */
        "north":"/open/prayer/room/tangi/tangi1-36",		//����
       
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/cooker" : 1,		//��ʦ
   		
]));
     
  setup();
}
