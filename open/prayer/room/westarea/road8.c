//open/prayer/room/westarea/road8.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ֵ�");
        set("long",@LONG
	�������Գ�һ��Ľֵ�, ��ͨ�˴�, ��������. ������ʥ�����
	��֮һ��"������", �����������������ʿ, Ϊ���ɸ���������
	��, �ʳ�Ϊ���������ص�����!!
LONG);

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 3 */
       	"north":__DIR__"road4",		//�ֵ�
	"south":__DIR__"road11",	//�ֵ�
	
     "east":"/open/prayer/room/tanshu/2-door",       //�ֵ�
        ]) );
        
        set("no_fight", 0);
        
  setup();
}
