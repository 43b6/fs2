//shun.c
#include <ansi.h>
inherit NPC;
void do_special();

mapping *action = ({
([     "action"     :   "$N��������,һ�С�÷�����Ʈ�����һ�,������Ʈ��,
$n�ƺ��޷��ܿ�����ղ�����һ��.",
                "dodge"      :   -35,
                "parry"      :   -35,
                "damage"     :    180,
                "force"      :    200,
                "damage_type":   "����",
           ]),
([     "action"     :   "$N��������,�Լ���������Ƴֵ���ǰ,�����ļ����赶����
����������ʽ�����㴫�ķ���,$n�ѱ��������ľ���
�����������˹���",
                "dodge"      :   -35,
                "parry"      :   -35,
                "damage"     :    200,
                "force"      :    200,
                "damage_type":   "����",
           ]),
([    "action"     :   "$N����б��,���������������ǡ�����ٻ��С���������Ҫ��ּ
$n�����⵶��һ���������м���,��Ȼ���Է���ѧ����$NΪʦ����ͷ.",
                "dodge"      :    40,
                "parry"      :   -50,
                "damage"     :    250,
                "force"      :    180,
                "damage_type":   "����",
            ]),
([    "action"     :    "$N�ֵ����뻡�ɰ�Բ,�۵�֮�С���������ġ���Ȼ����,$n
��$N��������ǿ���Ȼ�,$n������һ����֮��..",
                "dodge"      :  -35,
                "parry"      :  -35,
                "force"      :   200,
                "damage"     :   200,
                "damage_type":   "����֮��",
            ]),                
   });

void create()
{
        set_name("��������", ({"girl"}));
        set("age",15);
        set("long","����ŮӰ�Ŵ��˵�ʦ��,���Աߵ����л������������,����÷ֱ�\
���ˡ��ļ����赶�������ϰ벿���°벿,���ú��������������°벿����\n");
        set("title",HIM"ŮӰ�ž������������Ĵ�����"NOR);
        set("gender","Ů��");
        set("class","killer");
        set("str",30);
        set("cps",30);
        set("kar",30);
        set("spi",30);
        set("int",30);
        set("cor",30);
        set("attitude","herosim");
        set("max_gin",1000);
        set("max_kee",1000);
        set("max_sen",1000);
        set("gin",1000);
        set("kee",1000);
        set("sen",1000);
        set("combat_exp",500000);
        set("max_force",1000);
        set("force",1000);
        set("max_atman",1000);
        set("max_mana",1000);
        set("atman",1000);
        set("mana",1000);
        set("force_factor",10);
        set_skill("dodge",100);
        set_skill("nine-steps",100);
        map_skill("dodge","nine-steps");
        set_skill("unarmed",70);
        set("chat_chance_combat",15);
        set("chat_msg_combat",({
        (: do_special :)
        }));
        set_temp("apply/armor",100);
        set_temp("apply/damage",78);
        setup();
        carry_object("/open/japan/obj/super-cloth.c")->wear();
        set("default_actions", (: call_other, __FILE__,"query_action" :));
	reset_action();
}

mapping query_action()
{
        return action[random(sizeof(action))];
}
void do_special()
  {
    object *enemy,target;
    int i;

        enemy=this_object()->query_enemy();
        i=sizeof(enemy);
        target=enemy[random(i)];

                message_vision(
HIW "\n����ʹ���ļ����赶������ǿ������,���ŵ����ı任�ݻ������Ļ���ɷš��ĳ�ǿ�ع�\n",target);
                message_vision(
HIY "\n�ļ��������ϱ仯,$N�ѱ�����Ⱥ������֮��������,��֪��������������
\n"NOR,target);
                target->receive_wound("kee",random(50+150));
                COMBAT_D->report_status(target);

  }
