#include <ansi.h>
inherit ITEM;

void create()
{
	set_name(HIG"����ģ��"NOR,({"snake body","body","c-snake-2"}));
	set_weight(100);
	set("long","
����һ���ߵ����岿�֣���Ƿȱ��ͷ����β���������(compose)
��һ���������ߡ�\n");
	set("unit","��");
	set("value",100);
setup();
}