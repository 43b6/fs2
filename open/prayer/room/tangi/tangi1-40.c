//open/prayer/room/tangi/tangi1-40.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ܹܷ�");
        set("long",
"�ܹܵ�ר���칫��.��Ϊ�ܹ���Ů��,�������䷿�ﶼ��Ů�ԵĻ�����Ա.�ϱ����ܹ�
������,������������.\n");

        set("exits", ([ /* sizeof() == 2 */
        "south":"/open/prayer/room/tangi/tangi1-41",		//�ܹ���
	"east":"/open/prayer/room/tangi/tangi1-43",		//�ܹ���
       
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/paltoon2" : 1,		//����
   		
]));
     
  setup();
}
