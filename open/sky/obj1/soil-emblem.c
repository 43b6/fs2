inherit ITEM;
#include <ansi.h>
void create()
{
	set_name(YEL"��֮����"NOR,({"soil-emblem"}));
	set("long","�������п��Ըо�����ص���Ϣ���ϵش���Ʈ����һö��Ϊ��֮����\n"
		  +"����ֶ�����������ε�ϸ�����о���ȴҲ��֪���к����ã�Ҳ���\n"
		  +"��˵�е�����ؽ��йء�\n");
	set("unit","ö");
	set("value",100000);
	set("specialitem",1);
	set("no_sac",1);
	set_weight(1000);
        setup();
}
