//open/prayer/room/tangi/tangi1-42.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ܹܷ�");
        set("long",
"�ܹܵ�ר���칫��.��Ϊ�ܹ���Ů��,�������䷿�ﶼ��Ů�ԵĻ�����Ա.�������ܹ�
������,������������.\n");
        set("exits", ([ /* sizeof() == 2 */
        "north":"/open/prayer/room/tangi/tangi1-41",		//�ܹ���
	"east":"/open/prayer/room/tangi/tangi1-45",		//�ܹ���
       
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/paltoon1" : 1,		//����
   		
]));
     
  setup();
}
