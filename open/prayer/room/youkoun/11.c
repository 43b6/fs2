//open/prayer/room/youkoun/11.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","���䳡");
        set("long",@LONG

        �����䳡����������, ��λʦ����ڸ���ָ��ʦ�õĶ���
        . ����˵�ú����������, ��ϧʦ�û���һ֪���..����
        ������ͨ���ܹܷ�������.

LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 3 */
        "east":__DIR__"10",             
        "south":__DIR__"18",            //���䳡
        "west":__DIR__"13",     
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
        "/open/prayer/npc/trainee1" : 1,                //����
        "/open/prayer/npc/trainee4" : 1,                //����
                
]));
     
  setup();
}
