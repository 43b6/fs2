#include <ansi.h>
#include <combat.h>
inherit NPC;
#define bell_big 400
#define bell_small 200
#define SPELLLVL 100
#define MANACOST 150
#define INVCOST 18
int special_att ();
object room2;
void create()
{
        set("title","ڤ���ʿ");
        set_name("С��",({"genies"}));
        set("max_gin",1000);
        set("gin",1000);
        set("race","Ұ��");
        set("age",510);
        set("str", 55);
        set("max_kee", 1000);
        set("kee", 1000);
        set("limbs", ({ "ͷ��", "����", "ǰ��" , "���" , "β��" }) );
        set("verbs", ({ "bite"}));
        set("combat_exp",250000);
        set("attitude","aggressive");
        set_temp("apply/armor",50);
        set_temp("apply/attack", 50);
        set("force_factor",10);
        set("bellicosity",1000);
        set("max_sen",1000);
        set("sen",1000);
        set("max_atman",1000);
        set("atman",1000);
        set("max_mana",1000);
        set("mana",1000);
        set("max_force",1500);
        set("force",1500);
        set("cor", 40);
        set("cps", 25);

        set("chat_chance_combat",25);
        set ("chat_msg_combat", ({(: special_att :)}));

        command("wield all");
        command("wear all");
        set_skill("hell-evil",70);
        map_skill("parry","hell-evil");
        set("unarmed",70);
        map_skill("unarmed","hell-evil");
        set_skill("dodge",70);
        set_skill("fly-steps", 60);
        map_skill("dodge","fly-steps");
        set_skill("parry",70);
setup();
    add_money("gold",5);
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
"          ���� "HIW"ڤ  ��  "HIR"��  "HIY"ѧ  "HIB"��  һ  ʽ ����"NOR"
                  "HIB"����  "HIY"�� ħ �� ��"HIB"  ����"NOR"
          "HIW"ڤ��С������ٿ���ڷ�����,�������һ"NOR"
    "HIW"���ƾ�,������Ӱ,�罭��ȱ����,��к����,�Ʒ��缤��"NOR"
                  "HIW"��������������!"NOR"
           "HIB"���� "HIW"ڤ  ��  "HIR"��  "HIY"ѧ  "HIB"��  ��  ʽ ����"NOR"
                  "HIB"����  "HIR"ħ �� �� ��"HIB"  ����"NOR"
          "HIW"ڤ��С����ͷ����ӭ������,˫Ŀ�¹����,"NOR"
    "HIW"��Ȼ˫�۶���,�û���ǧ�����ֱ�,ÿһ���ֱ��˳�һ���"NOR"
             "HIW"�۵��Ʒ�,�������Ӱ�����������!"NOR"
           "HIB"���� "HIW"ڤ  ��  "HIR"��  "HIY"ѧ  "HIB"��  ��  ʽ ����"NOR"
                  "HIB"����  "HIW"�� �� �� ��"HIB"  ����"NOR"
          "HIW"ڤ��С��˫�ֱ�����������˿��¶��Ũ�ҵĶ�"NOR"
    "HIW"����˫��͸����ֻ��ڤ��С��˫�ֲ�ͣ���裬�����мд���"NOR"
  "HIW"������֮��Ż�Ķ���,ʹ�����ܵ�������Ӱ�죬�ܵ�������˺�!"NOR"
           "HIB"���� "HIW"ڤ  ��  "HIR"��  "HIY"ѧ  "HIB"��  ��  ʽ ����"NOR"
                  "HIB"����  "HIC"�� �� �� ��"HIB"  ����"NOR"
          "HIW"ڤ��С��һ��������ĳ�Х,�������,���ε�"NOR"
    "HIW"�ջ���,һ����������ͬһʯ����֮�����,�Բ�ͬ�ķ���,"NOR"
  "HIW"��ͬ�ĽǶ�,������������ħצ�����Ӱ,�����������ķ�������!"NOR"
           "HIB"���� "HIW"ڤ  ��  "HIR"��  "HIY"ѧ  "HIB"��  ��  ʽ ����"NOR"
                  "HIB"����  "MAG"�� �� �� ��"HIB"  ����"NOR"
          "HIW"ֻ��ڤ��С������һ����˫��ǰ����һ������"NOR"
    "HIW"�εľ�����Ȼ��ǰӿȥ���ۻ�ľ������εõ������ɳ��ʯ��"NOR"
                       "HIW"�������Ϯ��ȥ!!\n"+NOR,me);
  
  if (random (2) >= 1)
    {
      damage = 30+(victim->query ("max_kee") / 8);
   if (damage < 40)
        damage = 40;
      if (damage > 250)
        damage = 250;
message_vision(HIR"$N���ұ��Ʒ����� , ��ʱȫ��Ѫ��Ȫӿ.\n"NOR,victim);
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



