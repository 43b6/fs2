#include <ansi.h>
#include <armor.h>
inherit BOOTS;
void create()
{
  set_name(HIW"����Ƥѥ"NOR,({"bear boots","boots"}));
  set_weight(9500);
  if( clonep() )
  set_default_object(__FILE__);
  else {
  set("long","����ɽ����Ƥ���Ƴɵ�Ƥѥ, ����������ߵķ���, ����ĳЩְҵ�����������Ե���׳���䡣\n");
  set("unit", "˫");
  set("material","steal");
  set("no_auc",1);
  set("no_sell",1);
  set("no_put",1);
  set("no_drop",1);
  set("no_give",1);
  set("no_steal",1);
  set("armor_prop/armor", 50);
  }
  setup();
}

