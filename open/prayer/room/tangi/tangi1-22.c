//open/prayer/room/tangi/tangi1-22.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","����");
        set("long",
"����ŵ����ȣ������Ͽɼ��������������͵��Ĵ����������ȵ��ȶ���ʹ���ϵȵ�
������ľ����ģ���ʱ����ɢ�������е���ľ�㣮�������ϱ������䳡��˳������
����Ե��︱�����İ칫����\n");

        set("outdoors", "/u/r/rence");
        set("no_fight", 0);
	set("exits", ([ /* sizeof() == 3 */
        "south":"/open/prayer/room/tangi/tangi1-27",		//���䳡
	"east":"/open/prayer/room/tangi/tangi1-23",		//����
        "west":"/open/prayer/room/tangi/tangi1-21",		//����
 
        ]) );
        
  setup();
}
