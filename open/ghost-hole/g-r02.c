#include <ansi.h>
inherit ROOM;
void create ()
{
	set("short",YEL"��ڤ��"NOR);
	set("long",@LONG
�ŵ�̤�ĺܲ�ʵ�ڣ��·�վ��ϡ�ɵ��������棬
һ���ʵ��Ҳû�У�����ż�����ǻᴫ������Ѫ�ȵ�
���ζ�����޷�������Լ����δ����ϱ�ż������
Щ���������ƺ���ĳЩ�������Ǳ߻�š�
LONG);
	set("exits",([
	"west":__DIR__"g-r01",
	"south":__DIR__"g-r03",
	"east":__DIR__"g-r10",
	]));
	set("no_transmit",1);
	setup();
}
