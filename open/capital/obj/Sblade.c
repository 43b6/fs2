// blade.c
#include <weapon.h>
inherit BLADE;

void create()
{
	set_name("���ᵶ", ({ "swallow blade","blade" }) );
	set_weight(9000);
	if( clonep() )
		set_default_object(__FILE__);
	else 
	{
	  set("unit", "��");
	  set("value", 1000);
	  set("material", "iron");
	  set("long", "���ᵶ  �����𱳴󻷵�, ������, ��ͷ��, ������, �����Ϲ�����ֻͭ��,"+
	  " �Ӷ�ʱ�������, ��������, �������Ƭ����, ���������ᵶ���� \n");
	}
        init_blade(50);
	setup();
}
