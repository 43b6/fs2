inherit ITEM;
#include <ansi.h>
void create()
{
	set_name(HIB"��Ȩ����"NOR,({"chen-jade"}));
	set("long","�������е���Ȩ���񣬴����ǹ��������Ϣ��˸���ˣ���������ε�\n"
		  +"ϸ�����о���ȴҲ��֪���к����ã�Ҳ���ʹ�˵�е�����ؽ��йء�\n");
	set("unit","��");
	set("value",100000);
	set("specialitem",1);
	set("no_sac",1);
	set_weight(1000);
        setup();
}