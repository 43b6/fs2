//open/prayer/room/westarea/road11.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ֵ�");
        set("long",@LONG
	�������Գ�һ��Ľֵ�, ��ͨ�˴�, ��������. ����������
	����, �ϱ�������Ȩ��. �����Դ�ʥ�����������, �Ѿ���
	��û��ս�ҵķ�����. ����Զ����ȥ��һ�����ʵ�ɽ��!!
LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 3 */
       	"north":__DIR__"road8",		//�ֵ�
	"south":__DIR__"road16",	//�ֵ�
	"west":__DIR__"road12",		//�ֵ�
 
        ]) );
        set("no_fight", 0);
        
  setup();
}
