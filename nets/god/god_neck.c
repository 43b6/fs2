#include <armor.h>
#include <ansi.h>
inherit NECK;
void create()
{
set_name(""HIY"��HIW"��HIB"��HIW"s"HIY"��HIW"��HIB"��HIW"��NOR"",({"dragon_eye","eye"}));
      set_weight(2000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
       set("long","����������Ƭ , ���û������Ļ���\n");
          set("unit","��");
                set("no_sell",1);
                set("no_give", 1);
                set("no_auc",1);
                set("no_drop",1);
   set("no_get",1);
                set("no_put",1);
        set("material","crimsonsteel");
                set("armor_prop/armor",15);
                set("armor_prop/parry",5);
                set("armor_prop/force",7);
set("wear_msg","$N����$n���������������â������֮�ۿ�ʼ����Ч�� . \n");
 }
        setup();
}
