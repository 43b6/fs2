#include <ansi.h>
inherit NPC;
void create() {
        
        set_name("����ħ��",({"seven-dark"}));
        set("long",
   "\n��������, �������Ʈ��, �����佣ħ������, ����Ӣ��.\n");

        set("age",3121);
        set("str",35);
        set("title",HIW"����Ӱ��"NOR);
        set("cor",35);
        set("race","����");
        set("gender","����");
        set("attitude","aggressive");
        set("class","fighter");
        set("bellicosity",500);
        set("max_gin",13000);
        set("max_kee",13000);
        set("max_sen",13000);
        set("max_force",15000);
        set("force",15000);
        set("force_factor",49);
        set("combat_exp",6300000);
        set_skill("sword",100);
        set_skill("dodge",100);
        set_skill("mogi-steps",100);
        set_skill("move",80);
        set_skill("parry",100);
        set_skill("literate",130);
        set_skill("mogi-strike7",100);
        set("clan_kill",1);
        set_skill("force",120);
        set_skill("badforce",90);
        map_skill("sword", "mogi-strike7");
        map_skill("dodge","mogi-steps");
        map_skill("parry","mogi-strike7");
        map_skill("move","mogi-steps");
        map_skill("force","badforce");
        set("limbs",({"ͷ��","�ز�","����","����"}));
        setup();
        carry_object("/open/mogi/castle/obj/sword-1")->wield();
        carry_object("open/mogi/castle/obj/seven4-dark-head");

        add_money("gold",5);
}

void heart_beat()
{
 object env,mob,*enemy,target;
 int i;

 mob = this_object(); 
 env = environment(mob);  

 if( !query("wield") )
 {
   set("wield",1);
   command("wield all");
 }
 
 if( random(100) < 25)
 {
    enemy=mob->query_enemy();
    i=sizeof(enemy);
    target=enemy[random(i)];
    if( env == environment(target) )
    {
      message_vision(HIW"\n                        ���á�Ӱ���ġ�����

"HIW"\n
$N�ὣ������������ֹ�����⽣���𼤳����亮����ħ�����Χס����
�����е��ˣ��¶�����$N����ʶֱ�߽���     
˲�䣬$N�����⽣ֱָ���죬����һʽ"HIC"��ʮ��ǧ��  ��ˮ�޷⡱"HIW"������
��ħ�羡�����н�������Ѫ���� 
\n"NOR,mob,target);
      target->receive_damage("kee",1700);
	mob->add("kee",1700);
      target->start_busy(2);
      COMBAT_D->report_status(target, 1);
    }
 }  
   set_heart_beat(1);
   ::heart_beat();
   
}

int heal_up()
{
        if (!is_fighting() ) {
             message_vision (HIW"ϵͳ��ս��ֹͣ��$N�����У���\n"NOR, this_object ());
             destruct(this_object());
             return 1;
        }
        return ::heal_up() + 1;
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
if(me->query("quest/start_game")< 38)
       {
        message_vision(HIY"
��ϲ"HIW+me->query("name")+HIY"��ս"HIG"��"HIR"����ʮ�߲���������"HIG"��"HIY"ͨ������

"HIW"ϣ��"+me->query("name")+"�ܲ����������´�"HIG"��"HIY"����ʮ�˲���������"HIG"��"HIW"��
	"NOR,me);
	me->set("quest/start_game",38);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"ϵͳ�����Ѿ�ͨ�����ԣ�ϵͳ�����κθ��ġ�\n"NOR);
	destruct(this_object());
}
}
