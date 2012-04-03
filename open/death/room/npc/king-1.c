#include <ansi.h>

inherit NPC;
void do_special();
void use_poison(object me, object viction);
 
mapping *action = ({
        ([
                "action"     :  "$Nŭ��һ�������Ӵ��������$nֱ�˶���",
                "dodge"      :  -20,
                "parry"      :  -20,
                "damage"     :   25,
               "damage_type":  "����"
        ]),
        ([
                "action"     :  "$N����һԾ��˫�ֱ�ϥ����״ײ��$n���������������һ�С�������ħ�塯",
                "dodge"      :  -30,
                "parry"      :   25,
                "damage"     :   40,
                "damage_type":  "����",
        ]),
        ([
                "action"     :   "$N�����䣬һ�С�ħ���צ��������������Ʈ����������צ���ֹ��죬ץ��$n",
                "dodge"      :   -35,
                "parry"      :    15,
                "damage"     :    65,
                "damage_type":   "ץ��",
            "post_action"    :   (: use_poison :)
        ]),
        ([
                "action"     :   "$N������Х��һ�С�ħ�����ԡ������$n�߿���Ѫ", 
                "dodge"      :   -20,
                "parry"      :    25,
                "damage"     :    90,
                "damage_type":   "����"
        ]),
        ([
                "action"     :   "$N˫ϥ΢���������Ͷ��֮�ƣ�ȴ�û�˫צ�͹�$n���̣�����һ�С����Ȱ��¡�",
                "dodge"      :    30,
                "parry"      :   -30,
                "damage"     :    160,
                "force"      :    160,
                "damage_type":   "ץ��",
            "post_action"    :   (: use_poison :)
        ]),
        ([
                "action"     :   "$N����һתʹ��������лꡯ����ʱ������ণ�צӰ���أ�����һצ�ɻ�״����$n�ĺ���",
                "dodge"      :   -50,
                "parry"      :    15,
                "damage"     :    130,
                "force"      :    60,
                "damage_type":   "����",
                "weapon"     :   "��צ",
            "post_action"    :   (: use_poison :)
        ]),
         ([     "action"     :   "$N��Хһ����ʹ����������ر����ơ���ɲ�Ǽ���Ӱ��£��$n��ȫ��",
                "dodge"      :   -35,
                "parry"      :   -35,
                "damage"     :    230,
                "force"      :    200,
                "damage_type":   "����",
           ]),
          ([    "action"     :   "$N��ɫһ�򣬼�ȫ��֮����ʹ����ɱ�С�ħ��֮Դ��",
                "dodge"      :    40,
                "parry"      :   -50,
                "damage"     :    200,
                "force"      :    180,
                "damage_type":   "����",
                "weapon"     :   "��צ",
            "post_action"    :   (: use_poison :)
            ]),
   });
 
void create()
{
        set_name("�ع�����",({"king chin kuang","king","chin","kuang"}));
        set("race", "��ħ");
	set("age",1000);
        set("long","�㿴��һ�����ϵ����ߣ���������룬˫Ŀ����������㣬�·�Ҫ�����������\n");
        set("str",30);
        set("cps",30);
        set("kar",20);
        set("spe",20);
        set("int",20);
        set("cor",30);
        set("limbs", ({"ͷ��", "�ز�", "�Ȳ�", "�ֱ�"}) );
        set("verbs", ({ "bite"}));
 
        set("attitude","herosim");
        set("combat_exp",100000);
        set_skill("dodge",260);
        set_skill("unarmed",200);
        set("chat_chance",10);
        set("chat_msg",({

          "����Ϊ�ƣ����Ʋ���;����Ϊ����񲻷���\n",
          "��Ȼ�����������͸��н��ܿ��̵�׼����\n",
        }));

        set("chat_chance_combat",200);
        set("chat_msg_combat",({
        (: do_special :)
        }));
        set_temp("apply/defend",100000);
        set_temp("apply/armor",100000);
        setup();
        set("default_actions", (: call_other, __FILE__,"query_action" :));
	reset_action();
}
 
mapping query_action()
{
        return action[random(sizeof(action))];
}
void use_poison(object me, object viction)
{
// here can write many thing u want
   viction->apply_condition("dark_poison",100+viction->query_condition("dark_poi
son") );
}
void do_special()
  {
    object *enemy,target;
    int i;

        enemy=this_object()->query_enemy();
        i=sizeof(enemy);
        target=enemy[random(i)];

                message_vision(
        HIY "\nҹ����һ�������ҵġ�ҹ����ž�������������  ��  ��\n",target);
                message_vision(
        HIB "\nҹ�����ϵ�˫צͻȻ������ת�����벻����λ�ù���!!\n"NOR,target);
                target->receive_wound("kee",random(50+100));
                COMBAT_D->report_status(target);

  }
