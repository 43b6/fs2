//open/prayer/room/tangi/tangi1-8.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","ʯ��");
        set("long",@LONG
�˴������̷ֲ�֮һ��������ڲ���ʯ��.��λ������һλ����ŵĵ���,�����˺�����,
һ�������ܵ����ٵ�Ű����!!�������Ǹ��������������й�����Ű���ĳ嶯!! 
LONG);
        set("exits", ([ /* sizeof() == 1 */
        "south":"/open/prayer/room/tangi/tangi1-9",		//����
        ]) );
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/criminal2" : 1,		//�˷�
        ]) );

   setup();
}
