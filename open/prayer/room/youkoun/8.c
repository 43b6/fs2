//open/prayer/room/youkoun/8.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��������");
        set("long",@LONG

        �ڰ칫�����ϱ�, ���������ڸ��������ε�Ů����������
        �ڵ�����. ������һ���ò������������, ���㲻������
        ǰȥ�ṩ���.

LONG);

        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"7",             //��������
        "northeast":__DIR__"5",         
 
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 2 */
        "/open/prayer/npc/vice-chair7" : 1,             
        "/open/prayer/npc/trainee3" : 1,                //����
                
]));
     
  setup();
}
