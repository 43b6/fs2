#include <weapon.h>
#include <ansi.h>
inherit THROWING;
object me;
void create()
{
     set_name(HIG"ɱ��ħ׶"NOR,({"bell_star","star"}));
     set_weight(10);
     if( clonep() )
         set_default_object(__FILE__);
     else {
       set("unit","֧");
       set("base_unit","֧");
       set("long","����ɱ�ֲ����õİ������������ձ������ߵ�ɱ��");
       set("value",1000);
       set("no_sell",1);
       set("weapon_prop/throwing",20);
       set("weapon_prop/dodge",10);
       set("weapon_prop/parry",10);
       set("material", "silver");
       set("wield_msg","$N����$n,�о������ܲ���\n");
       set("unwield_msg", "$N��$n��������\n");
     }
      init_throwing(100);
      set_amount(1);
      setup();
}

mixed hit_ob(object victim)
{//�����victim��ָ������
 int i,a,b,cor,vcor,mklv=0; 
 int keecost=0;
 object *enemy;
 object me;

 if( !living(victim)) return;
 enemy=victim->query_enemy();
 me=enemy[random(sizeof(enemy))]; 
 cor=me->query("cor");
 cor=(random(cor)+1)*5;

 vcor=victim->query("bellicosity");
 if (vcor < cor)
	cor= vcor;
  if(random(cor) > 50)
  {  
   message_vision(""HIM"$N��$n��ɱ��ħ׶�̳��˿�,ɱ�����˿���ʧ��$n������"NOR"\n",victim,me);
   if (me->query("sec_kee") == "mkill")
	mklv= me->query("max_s_kee"); //����Ҫlv 150�ſ�����Ϸ����켶 
   keecost=20;
   if(me->query("s_kee")< 20)
	keecost= me->query("s_kee");

   if ( me->query("quest/worldpill") && (keecost > 10))
   {
    if ((mklv >150) && (random(100) > 80))
    {
     message_vision(HIC"======  "HIW"$N ʹ �� �� �� � �� �� �� "HIR"�� ħ ɱ ׶ "HIC" ====== \n\n"NOR,me);
     message_vision(HIR"$N�ɱ���ǿ�ҵ�ɱ��������һ�ִ���ħ����ɱ��,�ں��ž�����������.\n"NOR,me);
     message_vision(HIR"$N�������ħ��˲������$n������е����ҵĿ־�У�\n"NOR,me,victim);
     message_vision(HIR"$N����������ħ����ħ׶,����$n������������������˺ۣ�\n"NOR,me,victim);
     victim->start_busy(2);
     victim->receive_damage("gin",random(cor+180));
     victim->receive_damage("sen",random(cor+180));
     victim->set_temp("mkill",1);
     //�������غ�
     victim->apply_condition("mkill_out",2);
     me->add("s_kee",-keecost);
     if (me->query("force") < 200)
	me->set("force",0);
     else
     	me->add("force",-100);
    }
   }
   COMBAT_D->report_status(victim,1);
   victim->receive_damage("kee",cor);
   victim->add("bellicosity",-cor);
   me->add("bellicosity",cor);
  } 
}

int wield()
{
 if(this_player()->query_skill_mapped("throwing") != "rain-throwing")
    return notify_fail("����ɱ��ר�õĶ���\n");
 if(this_player()->query_skill("throwing") < 80 )
     return notify_fail("С���ѣ������ַ�����һ�㣬���ðɣ�\n");
 else 
 {
::wield();
  }
  return 1;
}

