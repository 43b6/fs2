//open/prayer/room/youkoun/9.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","���䳡");
        set("long",@LONG

        �����䳡�Ķ�����, ������Ů�������Ų�ˮ���������.
        ������һ��Ͱ��ˮ, �㲻���е���һ��ڿ���! ��������
        �������İ칫��.

LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 3 */
        "east":__DIR__"7",              //����
        "south":__DIR__"16",            //���䳡
        "west":__DIR__"10",             //���䳡
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
        "/open/prayer/npc/trainee3" : 1,                //����
        "/open/prayer/npc/trainee4" : 1,                //����
                
]));
     
  setup();
}
