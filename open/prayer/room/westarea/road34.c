//open/prayer/room/westarea/road34.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ֵ�");
        set("long",@LONG
	�������Գ�һ��Ľֵ�, ��ͨ�˴�, ��������, ������ʥ�����
	�µķֲ�֮һ--"������". ��������ȫ��Ů��, ������˵������
	��һλ���Խ���, ֮�����Ҳû���˿�������............  
LONG);

       	set("outdoors", "/u/r/rence");
       	set("no_fight", 0);
	set("exits", ([ /* sizeof() == 2 */
       	"north":__DIR__"road31",		//�ֵ�
	"south":__DIR__"road39",		//�ֵ�
	"west":"/open/prayer/room/youkoun/2-door",		//����
 
        ]) );
    setup();
}
