//open/prayer/room/tangi/tangi1-23.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","����");
        set("long",
"����ŵ����ȣ����ȵ�֧��ͬ��������ľ��ɵģ����ȶ����������ͷǳ����䣬
�����������䳡���ϱ������������İ칫����\n");

        set("outdoors", "/u/r/rence");
        set("no_fight", 0);
        set("exits", ([ /* sizeof() == 2 */
        "south":"/open/prayer/room/tangi/tangi1-28",		//����
        "west":"/open/prayer/room/tangi/tangi1-22",		//����
       
        ]) );
     
  setup();
}
