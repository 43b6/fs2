//open/prayer/room/tangi/tangi1-39.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ܹܵ��鷿");
        set("long",
"������ܹܵ��鷿,�������ܹܴ�������ĵط�.�ܹ������������븱����ͬһְ�ȵ�
�ɲ�..ר�Ÿ�����������Ĵ���.�����������ȵķ���.\n");

        set("exits", ([ /* sizeof() == 1 */
        "east":"/open/prayer/room/tangi/tangi1-41",		//�ܹܷ�
       
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 2 */
  "/open/prayer/npc/general-manager" : 1,		//�ܹ�
  "/open/prayer/npc/foreman" : 1,			//��ͷ
   		
]));
     
  setup();
}
