// cloth.c
//
// This is the basic equip for players just login.

#include <armor.h>
#include <ansi.h>

inherit CLOTH;

void create()
{
	set_name(HIC "�ۼ�������" NOR,({"blue cloth","cloth"}));
	set_weight(3000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long",@LONG
��������Ƕ������ҵļұ�����Ϊ����һ����
��Ի���ۼ������¡��������·�����ɫ���ۼ���
�ɣ�������������һ����ֵ���ǵı�����
LONG);
		set("unit", "��");
		set("material", "cloth");
		set("value",100000);
		set("armor_prop/armor",10);
		set_temp("apply/dodge",10);
	}
	setup();
}
