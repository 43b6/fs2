//uhen/1.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�����Ĺ뷿");
        set("long",@LONG

	�����Ĺ뷿��ɢ�������Ӱ�����㣬��Ȼ�����Ѿ���ʮ��
	���ˣ����ǻ��Ǽ���������������!!��������Ĵ�����
	������Ͼ˼ѽ!!�Ա���һ��СС�Ĵ�ͷ���ѵ������Ƿ�
	��������������??��~~��ˮ��������..........

LONG);
        set("exits", ([ /* sizeof() == 1 */
        "south":__DIR__"4",		//����
 
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
  setup();
}

