// blade.c
#include <weapon.h>
inherit BLADE;

void create()
{
	set_name("��", ({ "horse blade","blade" }) );
	set_weight(2000);
	if( clonep() )
		set_default_object(__FILE__);
	else 
	{
	  set("unit", "��");
	  set("value", 300);
	  set("material", "iron");
	  set("long", "�������ר��֮����, ʷ�ǡ����������������֮��, �Ŵ������������, "+
	  "���±��ս��, ��״���������ơ� \n");
	}
	init_blade(40);
	setup();
}
