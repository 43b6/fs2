inherit ITEM;
#include <ansi.h>
void create()
{
	set_name(HIM"�������"NOR,({"kylin-order"}));
	set("long","һ����ֵĽ������ȥ����ֵǮ���ƺ�������ĳ��Ȩ����������\n"
		  +"����ε�ϸ�����о���ȴҲ��֪���к����ã�Ҳ��ʹ�˵�е�����\n"
		  +"�ؽ��йء�\n");
	set("unit","��");
	set("value",100000);
	set("specialitem",1);
	set("no_sac",1);
	set_weight(1000);
        setup();
}
