inherit ITEM;
#include <ansi.h>
void create()
{
	set_name(BLU"�֮����"NOR,({"dark-emblem"}));
	set("long","һö����һ����Ҳû�е�������£���Ϊ��֮���£�������ε�ϸ\n"
		  +"�����о���ȴҲ��֪���к����ã�Ҳ��ʹ�˵�е�����ؽ��йء�\n");
	set("unit","ö");
	set("value",100000);
	set("specialitem",1);
	set("no_sac",1);
	set_weight(1000);
        setup();
}
