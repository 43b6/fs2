//open/prayer/room/westarea/road29.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ֵ�");
        set("long",@LONG
	ʮ��·��. ͬʱҲ��ʥ��̵��ϱ����ٵ�·. �������߿���
	����ʥ��̵���̳. ��������ͨ����ԭ���ֵ�Ҫ��. �ķ���
	���ɼ�ʥ��̵ĸ���֧��..������һ��Ǯׯ, �����������
	�������!!
LONG);

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 4 */
       	"north":__DIR__"road25",	//�ֵ�
	"south":__DIR__"road33",	//�ֵ�
	"east":__DIR__"road28",		//�ֵ�
	"west":__DIR__"road30",		//�ֵ�

        ]) );
        set("no_fight", 0);
        
  setup();
}
