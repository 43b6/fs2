inherit ITEM;
#include <ansi.h>
void create()
{
	set_name(HIR"��֮����"NOR,({"fire-feather"}));
	set("long","һ������΢��������ë����Լ��͸�������ã����Ϊ��֮������\n"
		  +"����ε�ϸ�����о���ȴҲ��֪���к����ã�Ҳ��ʹ�˵�е������\n"
		  +"���йء�\n");
	set("unit","��");
	set("value",100000);
	set("specialitem",1);
	set("no_sac",1);
	set_weight(1000);
        setup();
}
