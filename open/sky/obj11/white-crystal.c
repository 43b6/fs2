inherit ITEM;
#include <ansi.h>
void create()
{
	set_name(HIW"��ɫ�⾧"NOR,({"white-crystal"}));
	set("long","һ���Գʰ�ɫ�Ĺ⾧���ڹ⾧���治ʱ��ɢ������ֵ���⣬����\n"
		  +"����ε�ϸ�����о���ȴҲ��֪���к����ã�Ҳ��ʹ�˵�е�����\n"
		  +"�ؽ��йء�\n");
	set("unit","��");
	set("value",100000);
	set("specialitem",1);
	set("no_sac",1);
	set_weight(1000);
	setup();
}
