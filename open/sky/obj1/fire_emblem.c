inherit ITEM;
#include <ansi.h>
void create()
{
	set_name(HIR"��֮����"NOR,({"fire-emblem"}));
	set("long","һö���������Ĺ�����������£��Դ�����ȵ��¶ȣ�������ε�\n"
		  +"ϸ�����о���ȴҲ��֪���к����ã�Ҳ��ʹ�˵�е�����ؽ��йء�\n");
	set("unit","ö");
	set("value",100000);
	set("specialitem",1);
	set("no_sac",1);
	set_weight(1000);
        setup();
}
