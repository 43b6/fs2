// blade.c
#include <weapon.h>
inherit BLADE;

void create()
{
	set_name("�ӵ�", ({ "bo blade","blade" }) );
	set_weight(8000);
	if( clonep() )
		set_default_object(__FILE__);
	else 
	{
	  set("unit", "��");
	  set("value", 500);
	  set("material", "iron");
	  set("long", "�ӵ�һ�������Ŵ���ս, ��������, �������̽���Ϊ��, �ʱ��е伮��ν"+
	  "��˫��Ϊ��ĸ, ƴ��֮ʱ���ӵ���, ��ν�������ͻ����ߺ족, ��������, �����Ѫ�� \n");
	}
	init_blade(30);
	setup();
}
