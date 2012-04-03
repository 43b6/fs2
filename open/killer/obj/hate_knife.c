#include <weapon.h>
#include <ansi.h>

inherit THROWING;

void create()
{
        set_name(HIR "ǧ�ź�" NOR,({"hate knife","knife"}));
        set_weight(700);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("base_unit","��");
                set("no_give",1);
                set("no_drop",1);
                set("no_put",1);
                set("base_value",1000);
                set("value",10000);
                set("material", "steel");
                set("weapon_prop/throwing",15);
                set("weapon_prop/dodge",7);
                set("weapon_prop/parry",7);       
        }
        init_throwing(80);
        set_amount(1);
        setup();
}
mixed hit_ob( object me,object victim)
{
 int i,j,bel,sk,h,cor;
 object *enemy,weapon;
 me=this_player();
 sk=me->query_skill("throwing");
 bel=me->query("bellicosity",1);
 h=me->query("quest/island")*8;
 cor=me->query("cor",1);
 if(me->is_fighting()&&query("equipped")&&me->query("quest/island")!=0 && me->query("bellicosity") > 500
    && me->query_temp("star_kill")!=1 && me->query("force") > 200 )
 {
  if(random(sk) > 95)
  {
   enemy=me->query_enemy();
   i=random(sizeof(enemy));
   message_vision(HIC"======  "HIW"$N ʹ �� �� �� � �� �� �� "HIY"�� �� �� �� "HIC" ====== \n\n"NOR,me);
   message_vision(HIW"$N������"HIR"ǧ�ź�"HIW"ͻȻ�ڿ��лû���������Ӱ, ��$n�޷�׽��!!\n\n"NOR,me,enemy[i]);
   for(j=0;j<(random(cor)+2)/2;j++)
   {
   message_vision(HIR"$N�ڴ�㵼��ѱ�ǧ�ź޵Ĳ�Ӱɨ��, ���һ���˿�, ��Ѫֱ��!!\n"NOR,enemy[i]);
   enemy[i]->receive_wound("kee",h);
   me->add("force", -30);
   me->add("bellicosity", -10);
   COMBAT_D->report_status(enemy[i],1);
  }
  } 
 }
}
int wield()
{
 if(!this_player()) return 1;
 if(this_player()->query_skill_mapped("throwing") != "rain-throwing")
    return notify_fail("����ɱ��ר�õĶ���\n");
 if(this_player()->query_skill("throwing") < 140 )
     return notify_fail("С���ѣ������ַ�����һ�㣬���ðɣ�\n");
 else 
 {
::wield();
  }
  return 1;
}
