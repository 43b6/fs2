// cloth.c
// by airke
#include <armor.h>
#include <ansi.h>
inherit EQUIP;

void create()
{
	set_name( MAG"�������" NOR ,({"silk cloth","cloth"}));
	set("long","����ɫ˿���Ƴɣ����滹���˷��Ͼ�̫��ͼ\n");
	set_weight(1500);
        set("armor_type","cloth");
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
		set("value",60000);
                set("material","cloth");
		set("armor_prop/armor",30);
set("no_get",1);
set("no_give",1);
                set("armor_prop/spell", 10);
		set("wear_msg","$Nװ����$n�����ܼ������֣�$Nֻ�����������棬˵���������á�\n"NOR);
                set("remove_msg",HIW"$N����$n"HIW"�����ԵĹ�â����������������\n"NOR);
	}
        setup();
}



int wear(){

  int val=this_player()->query("kar")*10;
  object me = this_player();
  // ��if ����Ҫ.....����wear all �����û����clothȴ��max_kee������
  if( !me->query_temp("armor/cloth") ) {
  	me->add("max_kee",val);
  	me->set_temp("silk_cloth",val);
//	me->add_temp("apply/name",({me->name()+HIW"(���֮��)"NOR}));
  }
  return ::wear();
}



int unequip(){

  object me=this_player();
int valu = me->query_temp("silk_cloth");

me->add("max_kee",-valu);
me->add("eff_kee",-valu);
  me->delete_temp("silk_cloth");
// me->delete_temp("apply/name");
  return ::unequip();
}





