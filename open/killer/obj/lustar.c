#include <weapon.h>
#include <ansi.h>
inherit THROWING;
object me;

void create()
{
     set_name("[33;1m����׶[0m",({"lu star","star"}));
     set_weight(10);
     if( clonep() )
         set_default_object(__FILE__);
     else {
       set("unit","֧");
       set("base_unit","֧");
       set("long","����ɱ�ֲ����õİ���");
       set("value",1000);
       set("material", "silver");
       set("wield_msg","$N����[1;31m$n[0m,�о������ܲ���\n");
       set("unwield_msg", "$N��$n��������\n");
     }
      init_throwing(60);
      set_amount(1);
      setup();
}
int wield()
{
  if(!this_player()) return 0;
 if(this_player()->query_skill_mapped("throwing")!="rain-throwing")
    return notify_fail("����ɱ��ר�õĶ���\n");
      else{
      ::wield();
            }
        return 1;
}
