inherit ITEM;
#include <ansi.h>
void create()
{
	set_name(HIB"��֮Ʈ��"NOR,({"wind-feather"}));
	set("long","һ������΢�������Ϣ����ë����ȻƮ����Ϊ��֮Ʈ��������ε�\n"
		  +"ϸ�����о���ȴҲ��֪���к����ã�Ҳ��ʹ�˵�е�����ؽ��йء�\n");
	set("unit","��");
	set("value",100000);
	set("specialitem",1);
	set("no_sac",1);
	set_weight(1000);
        setup();
}
