//open/prayer/room/tangi/tangi1-52.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","���������鷿");
        set("long",
"����Ÿ��������鷿,�����Ǹ�������������ĵط�. ����������ѧ���쵼��,��Ȼ
��ѧ���費��������һ��,����ϸ�����������������������ε�ԭ��!!\n");

        set("exits", ([ /* sizeof() == 1 */
        "west":"/open/prayer/room/tangi/tangi1-50",		//��������
       
        ]) );
        set("light_up", 0);
        set("objects",([ /* sizeof() == 2 */
  "/open/prayer/npc/vice-chair" : 1,		//������
  "/open/prayer/npc/puncher" : 1,		//ȭʦ
   		
]));
     
  setup();
}
