// sword.c : an example weapon

#include <weapon.h>
#include <ansi.h>

	inherit STABBER;

void create()
{
	set_name(HIW "�����" NOR,({"ten pen","pen"}));
	set_weight(3000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit","֧");
		set("value",10000);
		set("material", "steel");
		set("long",@LONG
����Ƕ������ҵļұ�֮һ����Ի�����
�ഫ�˱ʲ����κ���ī����д�֣���д��������
�ʽ��ɫ�����⣬�ֿ�������Ϊ��������������
һ���������֪�����������޷����ӳ�������Ч
���ġ�
LONG);
		set("wield_msg",@LONG
$N�ӻ�����һ֧$n���������⣬�յ����ܶ���ɽ����ɫ��
LONG);
	}
	init_stabber(50,SECONDARY);
	setup();
}
