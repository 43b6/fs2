inherit ITEM;
#include <ansi.h>
void create()
{
	set_name(HIB"��ƽʯ"NOR,({"peace-stone"}));
	set("long","һ�ſ���������������ʯͷ����Ϊ��ƽʯ��������ε�ϸ����\n"
		  +"�о���ȴҲ��֪���к����ã�Ҳ��ʹ�˵�е�����ؽ��йء�\n");
	set("unit","��");
	set("value",100000);
	set("specialitem",1);
	set("no_sac",1);
	set_weight(1000);
        setup();
}
