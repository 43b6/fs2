inherit NPC;
#include <ansi.h>

mapping *action = ({
([     "action"     :   "$N˫��һ��"HIY"�������е���"NOR"��ɲ�Ǽ����������ӿ��$n�ѱ����ص���������Χ�����ڵ�Ϧ��",
                "dodge"      :   -35,
                "parry"      :   -35,
                "damage"     :    250,
                "force"      :    250,
                "damage_type":   "����",
           ]),
([     "action"     :   "$N�������һʽ"HIY"���������š�"NOR"��������$n��$n׽��������",
                "dodge"      :   -35,
                "parry"      :   -35,
                "damage"     :    350,
                "force"      :    350,
                "damage_type":   "����",
           ]),
([     "action"     :   "$N��̾����"HIY"��������ʱ����"NOR"���ο�ѽ���ο�ѽ��$n�͹ԹԵ����־ͷ��ɣ���",
                "dodge"      :   -35,
                "parry"      :   -35,
                "damage"     :    300,
                "force"      :    450,
                "damage_type":   "����",
           ]),
([     "action"     :   "$N̾����"HIY"��������ʱ��"NOR"��̾���ɱ�ѽ����ʽ�������޵���$n��",
                "dodge"      :   -35,
                "parry"      :   -35,
                "damage"     :    250,
                "force"      :    350,
                "damage_type":   "����",
           ]),
([     "action"     :   "$Nɱ������ʹ��һʽ"HIY"��ɱ���޻ڡ�"NOR"��˲���Ѿ���������֮����ɱ��$n�˺����ۣ�",
                "dodge"      :   -35,
                "parry"      :   -35,
                "damage"     :    350,
                "force"      :    250,
                "damage_type":   "����",
           ]),
([     "action"     :   "$N��Ц������������$n"HIY"���������ҡ�"NOR"�����Բ��������$n��ȥ��",
                "dodge"      :   -35,
                "parry"      :   -35,
                "damage"     :    500,
                "force"      :    500,
                "damage_type":   "����",
           ]),
([     "action"     :   "$N�������ȣ�һʽ"HIY"��������Ϣ��"NOR"��һ��һʽ����$n���ص�Ϯȥ��",
                "dodge"      :   -35,
                "parry"      :   -35,
                "damage"     :    450,
                "force"      :    350,
                "damage_type":   "����",
           ]),
([    "action"     :    "$N�ȵ���ʹ������һʽ"HIY"���ն�������"NOR"��ͨͨ�����µ���ȥ�ɣ�����",
                "dodge"      :    40,
                "parry"      :   -50,
                "damage"     :    600,
                "force"      :    600,
                "damage_type":   "����֮��",
            ]),
   });

void create()
{
        set("nickname",HIM"��������"NOR);
        set("title",HIY"������ڤ��"NOR);
        set_name("�η��", ({"ghost life","ghost","life"}));
        set("age",30);
        set("long","�����ħ�����󻤷�֮һ�������ƹܡ��������������Ķ��ˣ����ǵ������ħ�ĳ谮��\n");
        set("gender","Ů��");
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
  
        set_temp("apply/armor",600);
        set_temp("apply/damage",200);
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
 write(HIY"��ڤ����Ц������������ǰռ���ˣ�ʡʡ�ɣ���\n"NOR);
 ghost->kill_ob(who);
 who->start_busy(1);
 return 1;                                                 
                  }
}

int accept_fight(object who)
{
return notify_fail("��ڤ��˵�� : ���ң����߿�����\n");
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
  
 if(count < 5)
 {
    enemy=mob->query_enemy();
        if( i = sizeof(enemy) ) {
    target=enemy[random(i)];
    if( env == environment(target) )
    {
      message_vision(HIW"
һ����Ц��ǧ�����ĵ�$Nʩչ"HIM"������һЦ��������"HIW"����
"HIM"���������㡱"HIW"֮���Ի���$n��$n����ס�Ի�������ң�
������$N����Ĺ����ţ�ȫ���м�֮������
\n"NOR,mob,(enemy[j]));
      for(j=0;j < i;j++){
      message_vision(HIR"$N����ס�������Ի󣬽���ɥʧ��־����������Χ���˿��ˣ���\n"NOR,(enemy[j]));
      enemy[j]->start_busy(2);
      enemy[j]->add("kee",-800);
      enemy->apply_condition("mess",random(2)+1);
      COMBAT_D->report_status(enemy[j], 1);
                        }
    }
        }
 }  

 if(count > 85)
 {
    enemy=mob->query_enemy();
        if( i = sizeof(enemy) ) {
    target=enemy[random(i)];
    if( env == environment(target) )
    {
      message_vision(HIW"
$N�����ע����$n��"HIM"��"HIC"ɭȻ����"HIM"��"HIW"һ��ɭ������Ϣ������
Ϯ��$n��ɲʱ�䣬��$n���ܵĿ���Ϊ֮���ᣡ
\n"NOR,mob,(enemy[j]));
      for(j=0;j < i;j++){
      message_vision(HIR"$NΪ֮һ㵣��Ա����ҵ���Ϣ���ˣ���\n"NOR,(enemy[j]));
      enemy[j]->start_busy(2);
      enemy[j]->add("kee",-800);
      enemy->apply_condition("cold",random(5)+10);
      COMBAT_D->report_status(enemy[j], 1);
                        }
    }
        }
 }  

   set_heart_beat(1);
   ::heart_beat();
   
}

