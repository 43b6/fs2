//open/prayer/room/westarea/road16.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ֵ�");
        set("long",@LONG
	�������Գ�һ��Ľֵ�, ��ͨ�˴�, ��������. �����ǽ���ʥ
	��̷ֲ�֮һ��"��Ȩ��", ��Ȩ�ŵ�������λ��������, ʹ��
	һ�ֺù���, ������ʵ�ĳ��ൽ������ξ�û�˵�֪��......
LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 3 */
        "north":__DIR__"road11",		//�ֵ�
	"south":__DIR__"road19",		//�ֵ�
	"east":"/open/prayer/room/tanchun/2-door",		//�ֵ�
	
        ]) );
        
        set("no_fight", 0);
        
  setup();
}
