//open/prayer/room/tangi/tangi1-4.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","����ŵ���");
        set("long",
"������ڲ��ĵ���(open door),�������ٽ�ȥ���ǽ����˷��ĵط�.\n" );

      set("item_desc", ([ /* sizeof() == 1 */
      "east" : (: look_door,     "east" :),
]));

        set("exits", ([ /* sizeof() == 2 */
        "east":"/open/prayer/room/tangi/tangi1-6",		//����
        "west":"/open/prayer/room/tangi/tangi1-2",		//�һ���
 
        ]) );
        
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/jail-guard" : 1,		//��������
   		
]));
        set("no_fight", 0);
        create_door("east","��������", "west",DOOR_CLOSED);
  setup();
}
