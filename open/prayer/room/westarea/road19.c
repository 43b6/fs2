//open/prayer/room/westarea/road19.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ֵ�");
        set("long",@LONG
	�������Գ�һ��Ľֵ�, ��ͨ�˴�, ��������. ����������Ȩ��
	, �ϱ�����������. ��������"��а����". ����������������
	�����, ������ε�����, ����Ҫȥ�������߲Ż�֪����.
LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 4 */
       	"north":__DIR__"road16",	//�ֵ�
	"south":__DIR__"road24",	//�ֵ�
	"west":__DIR__"road20",		//�ֵ�
	"east":"/open/prayer/room/hole/1",	//����
 
        ]) );
        set("no_fight", 0);
        
  setup();
}
