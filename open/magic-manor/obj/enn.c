inherit ITEM;
#include <ansi.h>
void create()
{
	set_name("��֪���Ķ���",({"unknow item","item"}));
	set("long","һ�鿴������ȫ�����۵Ķ�������������ȴ���Ըо������ĺ�ʵ��\n"
		  +"���أ�Ϊ���������еĶ�����ȴ�����ط�����͵�ߡ�\n");
	set("unit","��");
	set("value",100000);
	set("magic-manor",1);
	set("no_sac",1);
	set_weight(1000);
        setup();
}