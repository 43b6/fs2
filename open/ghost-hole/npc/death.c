inherit NPC;
#include <ansi.h>

mapping *action = ({
([     "action"     :   "$N����ĵ���"HIB"��������ͷ��"NOR"���������ɣ�һ��˵�����$n��ȥ��",
                "dodge"      :   -35,
                "parry"      :   -35,
                "damage"     :    250,
                "force"      :    250,
                "damage_type":   "����",
           ]),
([     "action"     :   "$Nһ����̾�������к��⣬�漴ʹ��һ��"HIB"��һ��������"NOR"��$nȥ���ɣ�",
                "dodge"      :   -35,
                "parry"      :   -35,
                "damage"     :    350,
                "force"      :    350,
                "damage_type":   "����",
           ]),
([     "action"     :   "$N����ʹ��"HIB"��������顯"NOR"��һ���׶��������$n���ұ��ӣ�",
                "dodge"      :   -35,
                "parry"      :   -35,
                "damage"     :    300,
                "force"      :    450,
                "damage_type":   "����",
           ]),
([     "action"     :   "$N��Ц�������ҵ�"HIB"������������"NOR"������$n��Ȼ���ҵ�����$N����ɣ�",
                "dodge"      :   -35,
                "parry"      :   -35,
                "damage"     :    250,
                "force"      :    350,
                "damage_type":   "����",
           ]),
([     "action"     :   "$N����һʽ"HIB"�������ٻ���"NOR"��˲��$n����������һ�㣬����ս����",
                "dodge"      :   -35,
                "parry"      
                "damage"     :    350,
                "force"      :    250,
                "damage_type":   "����˺��",
           ]),
([     "action"     :   "$Nŭ���ȵ���һʽ"HIB"���������١�"NOR"������$N���$nҲ����������",
                "dodge"      :   -35,
                "parry"      :   -35,
                "damage"     :    500,
                "force"      :    500,
                "damage_type":   "ײ��",
           ]),
([     "action"     :   "$N����ҡҡ��׹��ʹ��һʽ"HIB"����Ī����������"NOR"������Ʈ�������Ĺ���$n��",
                "dodge"      :   -35,
                "parry"      :   -35,
                "damage"     :    450,
                "force"      :    350,
                "damage_type":   "����",
           ]),
([    "action"     :    "$N������ȫ�������ʹ����"HIB"���������ġ�"NOR"�������������ۼ�һ�㣬��$nƴ��Ϯȥ��",
                "dodge"      :    40,
                "parry"      :   -50,
                "damage"     :    250,
                "force"      :    400,
                "damage_type":   "����",
            ]), 
   });

void create()
{
        set("nickname",HIC"��������"NOR);
        set("title",HIB"������ڤ��"NOR);
        set_name("�ϻ��", ({"ghost death","ghost","death"}));
        set("age",30);
        set("long","�����ħ�����󻤷�֮һ�������ƹܡ��������������ң���ȫ������һ����飬ֻ�������һ˫����ע�����㡣\n");
        set("gender","����");
        set("str",35);
        set("con",35);
        set("cor",30);
        set("cps",30);
        set("attitude","aggressive");
        set("bellicosity",2000);
        set("max_gin",14000);
        set("gin",14000);
        set("max_sen",14000);
        set("sen",14000);
        set("max_kee",15000);
        set("kee",15000);
        set("combat_exp",10000000);
        set("max_force",90000);
        set("force",1000000);
        set("force_factor",40);
        set("clan_kill",1);
        set_skill("dodge",300);
        set_skill("force",200);
        set_skill("fireforce",150);
        set_skill("mogi-strike1",220);
        set_skill("mogi-steps",220);
        set_skill("unarmed",200);
        set_skill("parry",300);
        set_skill("literate",180);
        set_skill("move",200);
        map_skill("parry","mogi-strike1");
        map_skill("dodge","mogi-steps");
        map_skill("move","mogi-steps");
        map_skill("force","fireforce");
  
        set_temp("apply/armor",800);
        set_temp("apply/damage",500);
        setup();
        add_money("cash",50);

        set("default_actions", (: call_other, __FILE__,"query_action" :));
        reset_action();

}

mapping query_action()
{
        return action[random(sizeof(action))];
}
 
void init()
{
 ::init();
 add_action("do_cmd","cmd");
}

int do_cmd(string str){
 object who=this_player();
 object ob,ghost;
 ob=this_object();
 ghost=present( "ghost",environment(ob) );
 if(str=="askgod ghost" || str=="askgod white-ghost"){
 write(HIY"��ڤ����Ц������������ǰռ���ˣ�׼��������ĺ��°ɣ���\n"NOR);
 ghost->kill_ob(who);
 who->start_busy(1);
 return 1;                                                 
                  }
}

int accept_fight(object who)
{
return notify_fail("��ڤ��˵�� : �����ɣ�����������\n");
}

int accept_kill(object who)
{
 who = this_player();
 kill_ob(who);
 return 1;
}

void heart_beat()
{
 object env,mob,*enemy,target;
 int i,j,force,count;
 mapping exit;
 string *exit_name;
 mob = this_object();
 env = environment(mob);
 count = random(100);
 
 if( count < 5 )
 {
    enemy=mob->query_enemy();
        if( i = sizeof(enemy) ) {
    target=enemy[random(i)];
    if( env == environment(target) )
    {
      message_vision(HIW"
$Nһ�����"HIB"��ħ�����ԡ�"HIW"���ϵ���$n��������˫����ס
ȴҲ�ֵ������������ħ��....
\n"NOR,mob);
      for(j=0;j < i;j++){
      message_vision(HIR"$N�������������ħ�����ˣ����������ϵ�������ʧ\n"NOR,(enemy[j]));
      enemy[j]->start_busy(2);
      enemy[j]->add("kee",-800);
      enemy->apply_condition("death",random(2)+1);
      COMBAT_D->report_status(enemy[j], 1);
                        }
    }
        }
 }  

 if(count > 85 )
 {
    enemy=mob->query_enemy();
        if( i = sizeof(enemy) ) {
    target=enemy[random(i)];
    if( env == environment(target) )
    {
      message_vision(HIW"
$N����һʽ"HIR"������޽硱"HIW"��һ�������۵��һ���$n���˶���
ɲʱ�䣬$n�ѱ����۵��һ�����Χ....
\n"NOR,mob,(enemy[j]));
      for(j=0;j < i;j++){
      message_vision(HIR"$N����������һ������ţ���������ʹ��İ���������\n"NOR,(enemy[j]));
      enemy[j]->start_busy(2);
      enemy[j]->add("kee",-800);
      enemy->apply_condition("burn",random(5)+10);
      COMBAT_D->report_status(enemy[j], 1);
                        }
    }
        }
 }  


   set_heart_beat(1);
   ::heart_beat();
   
}

