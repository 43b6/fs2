//open/prayer/room/westarea/road13.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ֵ�");
        set("long",@LONG
	������һ��ʮ��·��, �������߿��Ե���ʥ��̵���̳. ����
	�߿��Ե����, �����. ������һ���̵�, ����ȥ��һ��а��
	�����ĸ���ɽ��!!
LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 4 */
       	"north":__DIR__"road9",		//�ֵ�
	"south":__DIR__"road17",	//�ֵ�
	"east":__DIR__"road12",		//�ֵ�
	"west":__DIR__"road14",		//�ֵ�

        ]) );
        set("no_fight", 0);
        
  setup();
}
