//open/prayer/room/tangi/tangi1-33.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","����");
        set("long",@LONG

	����ŵ����ȵľ�ͷ. �ɴ�����ȥ���Կ���һ���ܴ��
	����, ����������û���κε�����......��λ�����ڴ�
	�صȴ����������Ⱦ�!!

LONG);

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 1 */
        "north":"/open/prayer/room/tangi/tangi1-28",		//����
       
        ]) );
        set("objects",([ /* sizeof() == 1 */
	"/open/prayer/npc/man6" : 1,		
	]));
     
  setup();
}
