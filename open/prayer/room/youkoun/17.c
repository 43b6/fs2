//open/prayer/room/youkoun/17.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","���䳡");
        set("long",@LONG

        �����䳡��������, �������������ŵĵ�������ʾ������
        ��һ�Ե�ʦ���ǿ�. �����ǵ�����, �ƺ�������ô������
        , һ��Ҳ���ǻ�ȭ����, �����㶼������..

LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"10",            //���䳡
        "south":__DIR__"20",            //���䳡
        "west":__DIR__"18",             //���䳡
        "east":__DIR__"16",             //���䳡
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
        "/open/prayer/npc/trainee3" : 1,                //����
        "/open/prayer/npc/trainee4" : 1,                //����
                
]));
     
  setup();
}
