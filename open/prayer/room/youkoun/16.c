//open/prayer/room/youkoun/16.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","���䳡");
        set("long",@LONG

        �����䳡��������, ������Ů�������ڽ����˴˵��ĵ�.
        ���߽�һ��, ֻ����ģģ�����ļ��� :" �������Ӳ���,
        һ������̫��, �ͻ��в�ª������.."

LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 3 */
        "north":__DIR__"9",             //���䳡
        "south":__DIR__"19",            //���䳡
        "west":__DIR__"17",             //���䳡
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
        "/open/prayer/npc/trainee3" : 1,                //����
        "/open/prayer/npc/trainee3" : 1,                //����
                
]));
     
  setup();
}
