inherit ITEM;
#include <ansi.h>
void create()
{
	set_name(HIC"ˮ֮����"NOR,({"water-feather"}));
	set("long","һ������Щ΢ˮ������ë���������Ϣ�����������޵����ʣ���Ϊ\n"
		  +"ˮ֮����������ε�ϸ�����о���ȴҲ��֪���к����ã�Ҳ���\n"
		  +"��˵�е�����ؽ��йء�\n");
	set("unit","��");
	set("value",100000);
	set("specialitem",1);
	set("no_sac",1);
	set_weight(1000);
        setup();
}
