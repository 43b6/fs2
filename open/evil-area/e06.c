inherit ROOM;
#include <ansi.h>

void create()
{
	set("short",BBLU+YEL"��а��"NOR);
	set("long",@LONG
������ͨ��, ������վ����λ��, ����״�Ľ���, ֱֵ��������
��, �㼯�о����ע������׶�, ֻ�ܿ�������һ��, [ ����
���ܾ��ǻ�ǽ����ɵġ��ý�硳��...] ��������ô�����š�
LONG);
	set("exits",([
"down":__DIR__"e07",
]));
	setup();
}