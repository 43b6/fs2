// blade.c

#include <weapon.h>
#include <ansi.h>
inherit BLADE;

void create()
{
	set_name(RED "���ֻ�ɽ" NOR, ({ "nature blade","blade" }) );
	set_weight(24000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("value",6000000);
		set("material", "steel");
		set("long", @LONG
��ѵ�����������һ��ƽ�������ľ��,���ڵ����Ͽ�������ԼԼ�Ŀ���
�����ֻ�ɽ���ĸ�С��,�ѵ�����Ǵ�˵�е�Զ��������
LONG);
		set("wield_msg", "\
$N����������$n�����ϵ�����,˲����ر�ɫ! $n��$N����ĵ�����\n\
���������ȡ����,�ڿ��л����˼�Ȧ�������Ľ���$N������,���ҷ��������ĺ�⡣\n");
		set("unwield_msg", "\
$N��$n��������ȥ,$n�ڿ����ͷŵ����������\n\
һ��ǿ��,��~~~һ��$n�ص�$N����ĵ����С�\n");
	}
	init_blade(100);
   
        set("ski_type1","blade");
        set("ski_type2","spell");
        set("ski_level1",80);
        set("ski_level2",85);
	setup();
}

int wield()
{
  object ob;
  ob=this_player();
  message_vision(HIY"�Ϲű��������ֻ�ɽ���ܷ���"+ob->name()+"�������л�.....\n\n"
		"�����������մ������,����Կ���һ�����Ѥ��ҫ��\n\n"
                "����ʹ�â������˷���������,�������Ǹ���һ���\n\n"
                "����ʧ�������ǰ��......\n\n"NOR,ob);
  ob->add("mana",-100);
  ::wield();
  return 1;
}
