#include <room.h>
inherit ROOM;

void create()
{
	set("short","��֮������");
	set("long",@LONG
	��������绷������һ����������ǿ�ҵ���������վ��ס�š�
	Ψһֻ�����������е�ʯ���ϣ���Ÿе������ķ�����
	��һ����֮ʬ�����ڴ˴����أ�û������ˢ�ӣ����Ǿ��������һ������ɣ�
	�����������������װ��û���������ˣ�

LONG);
      
set("objects",([
    "/open/killer/headkill/npc/w_ghost":1,
		]));
	set("light_up",10);
        setup();
}