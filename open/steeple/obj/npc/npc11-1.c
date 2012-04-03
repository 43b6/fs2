#include <ansi.h>
inherit NPC;
void do_special();

mapping *action = ({
([     "action"     :   "$N����˵������������snoop $nม���ɲ�Ǽ�$N����Ӱ����$n�������",
                "dodge"      :   -35,
                "parry"      :   -35,
                "damage"     :    150,
                "force"      :    150,
                "damage_type":   "����",
           ]),
([    "action"     :   "$N����˵����������3���ӣ��Ҹ���smash����һ�����׻���$n��",
                "dodge"      :    40,
                "parry"      :   -50,
                "damage"     :    250,
                "force"      :    200,
                "damage_type":   "����",
            ]),
   });

void create()
{
        set_name("������", ({"lazy dancer","dancer","lazy"}));
        set("age",16);
        set("long","�������е���ʦ����������һλ�������������£�
�����ȥ�ҵ�һ�ݡ�����͵�����Ĺ�����\n");
        set("title",HIR"�������"NOR+ HIG"��ʦ"NOR);
        set("gender","����");
        set("class","��ʦ");
        set("str",30);
        set("cps",30);
        set("kar",30);
        set("spi",30);
        set("int",30);
        set("cor",30);
        set("attitude","herosim");
        set("potential",49999);
        set("max_gin",1000);
        set("max_kee",3000);
        set("max_sen",1000);
        set("gin",1000);
        set("kee",2000);
        set("sen",1000);
        set("combat_exp",100000);
        set("max_force",10000);
        set("force",10000);
        set("max_atman",5000);
        set("max_mana",5000);
        set("atman",5000);
        set("mana",5000);
        set("force_factor",35);
        set_skill("dodge",200);
        set_skill("unarmed",200);
        set("chat_chance_combat",40);
        set("chat_msg_combat",({
        (: do_special :)
        }));
        set_temp("apply/armor",430);
        set_temp("apply/damage",110);
        setup();
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
HIR "\n�����������Ľ���һ����"+target->query("name")+"�ٲ���Ӧ����������Ҫpurge "+target->query("id")+"����\n",target);
                message_vision(
HIW "\n������������������ָ�ӻӣ�������purge "+target->query("id")+" ��ѶϢ...\n"NOR,target);
                target->receive_wound("kee",random(210+270));
        COMBAT_D->report_status(target, 1);

  }


void unconcious ()
{
 object me=query_temp("last_damage_from");
if(!present("fight_card",me))
{
tell_object(me,"\n\nϵͳ��������ûЯ����Ƭ�������޷���¼ս����\n");
destruct (this_object ());
}
else
if(!me->query("quest/start_game"))
{
tell_object(me,"\n\nϵͳ��������û����ʽ�Ǽǣ������޷����䡣\n");
destruct (this_object ());
}
else
if(me->query("quest/start_game")< 12)
       {
        message_vision(HIY"
��ϲ"HIW+me->query("name")+HIY"��ս"HIG"��"HIR"��ʮһ����������"HIG"��"HIY"ͨ������

"HIW"ϣ��"+me->query("name")+"�ܲ����������´�"HIG"��"HIY"��ʮ������������"HIG"��"HIW"��
	"NOR,me);
	me->set("quest/start_game",12);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"ϵͳ�����Ѿ�ͨ�����ԣ�ϵͳ�����κθ��ġ�\n"NOR);
	destruct(this_object());
}
}


