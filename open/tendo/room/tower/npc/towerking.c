#include <ansi.h>
#include <combat.h>
inherit NPC;
string magic1();
string magic2();
#define bell_big 400
#define bell_small 200
#define SPELLLVL 100
#define MANACOST 150
#define INVCOST 18
int special_att ();
object room2;

void create()
{
     set_name("��������",({"tower king","king"}));
     set("title",HIW"���֮��"NOR);
     set("long","�������·�����������.........\n");
     set("gender","����");
     set("class","taoist");
     set("age",1200);
     set("str",70);
     set("kar",70);
     set("per",50);
     set("cps",70);
     set("cor",70);
     set("combat_exp",500000);
     set("spi",70);
     set("int",70);
     set("max_kee",1800);
     set("kee",1800);
     set("max_sen",3000);
     set("sen",3000);
     set("max_force",2000);
     set("force",2000);
     set("gin",2000);
     set("max_mana",2500);
     set("mana",2500);
     set("max_atman",2500);
     set("atman",2500);
     set_skill("force",80);
     set_skill("gforce",80);
     map_skill("force","gforce");
     set_skill("dodge",80);
     set_skill("g-steps",80);
     map_skill("dodge","g-steps");
     set_skill("magic",80);
     set_skill("gmagic",80);
     map_skill("magic","gmagic");
     set_skill("whip",90);
     set_skill("gwhip",100);
     map_skill("whip","gwhip");
     set_skill("parry",80);
     map_skill("parry","gwhip");
     set_skill("spells",80);
     set_skill("necromancy",80);
     map_skill("spells","necromancy");
     set("force_factor",10);
     set("chat_chance_combat",50);
     set("chat_msg_combat", ({
     (: special_att :),
     (: magic1 :),
     (: magic2 :),

}));
setup();
     carry_object("/open/tendo/room/tower/obj/kwhisk")->wield();
     carry_object("/open/tendo/room/tower/obj/karmband")->wear();
     carry_object("/open/tendo/room/tower/obj/kbelt")->wear();
     carry_object("/open/tendo/room/tower/obj/kcape")->wear();
     carry_object("/open/tendo/room/tower/obj/kcloth")->wear();
     carry_object("/open/tendo/room/tower/obj/khat")->wear();
     carry_object("/open/tendo/room/tower/obj/klegging")->wear();
     add_money("gold",10);
     command("wield all");
     command("wield all");
}
string magic1()
{
 if (this_object ()->query ("sen") >30) {
 "/daemon/class/taoist/necromancy/invocation"->cast_soldier(this_object(),"lumob");
}
return "\n";
}
string magic2()
{
if(random(2))
command("cast feeblebolt");
else command("cast missible");
return "\n";
}
int spell ()
{
  return SPELLLVL;
}

int manacost ()
{
  return MANACOST;
}

int invcost ()
{
  return INVCOST;
}

int special_att ()
{
  object me = this_object ();
  object *enemy = query_enemy (), victim;
  int i = sizeof (enemy), damage;
  victim = enemy[random(i)];
      message_vision(HIB+
"              ��������ŭ�����ᣬ�������ϵ��˿ڣ����ϵؽ���������ʮ���ɡ�\n        
                          "HIR"�����������Ϸ���һ��ǿ���ɱ��\n
                 "HIY"����������ȫ��ʼ����ǿ�ҵ�"HIW"����"HIW"��"HIR"�һ�"HIY"��������������\n
                      "HIW"�� ��������ԴԴ���ϵ����������ۣ� ��\n
                              "HIY"ٿ�������������һ��\n
                 "HIY"����ʹ��һ��"RED"����"MAG"��ѧ"HIY"��֮�ռ����� - -"HIW"�� �� ��"HIY"��-\n
                 "HIC"����һ��ʹ��"RED"����"MAG"��ѧ"HIC"��֮��ѧ�ؼ� ����"HIR"�� �� ��"HIC"���� \n��
                   "HIB"ֻ���������һ������������籩���ػ���$N\n
                        "HIW"��������֮����֮��"HIC" ��"HIW"����"HIR"�һ�"HIW"��"HIC"��\n"+NOR,me);

  if (random (2) >= 1)
    {
      damage = 30+(victim->query ("max_kee") / 8);
   if (damage < 40)
        damage = 40;
      if (damage > 250)
        damage = 250;
message_vision(HIR"$N���㲻��,�������һ���������͸�����,ȫ�����±��һ𼰺�����Χ��,��ͣ��˻��!\n"NOR,victim);
      victim->apply_condition ("bleeding", random (i * i));
      victim->receive_damage ("kee", damage, me);
      COMBAT_D->report_status (victim, 0);
    }
  else
    {
message_vision(HIW"ֻ��ϧ��$N����һ��, ��������, ���һ������, ��Ƥ��ʱ���˿���.\n"NOR,victim);
    }
  start_busy (1);
  return 1;
}
 int accept_fight(object me)
 {
  if((int)me->query("combat_exp")<=380000)
  {
  command("say ���»�û��ʵ�����ҽ���..");
  return 0;
  }
  command("say ��ָ�̣�");
  return 1;
 }

int accept_kill(object ob)
{
	message_vision( HIR "$nʹ��[1;37m����ѧ[0m֮������ʹ$N���ܶ�����\n",this_player(),this_object());
	set("no_sword",1);
	this_player()->start_busy(3);
	return 1;
}
void die()
{
        object winner = query_temp("last_damage_from");
        tell_object(users(),
HIW"\n���������������һ��������:\n\n
                 "HIR"�� �� ����   ���� �� ���ҡ��ġ��Ρ���ѽ��\n
          "HIC"���վ�Ȼ�������"HIW""+winner->query("name")+""HIC"֮�֣���\n"NOR);


        :: die();
}

      


