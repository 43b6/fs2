#include <room.h>
inherit ROOM;

void create()
{
	set("short","��֮������");
	set("long",@LONG
	���ܱ����ܵ��һ�����Χ����һ����֮ʬ�����ڴ˴�����
	���û������ˢ�ӣ����Ǿ��������һ������ɣ�
	�����������������װ��û���������ˣ�
	��Ϊ�������ܳ������ܵ��һ�֮�⡣����û���κ�ͨ·��
	Ψһ�������õĶ������ܾ��Ǿ����ˣ�����
LONG);
      
set("objects",([
    "/open/killer/headkill/npc/f_ghost":1,
		]));
	set("light_up",10);
        setup();
}