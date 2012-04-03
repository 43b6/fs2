inherit NPC;
#include <ansi.h>
void create()
{
        set("nickname",HIW"�ڰ�˫ɲ"NOR);
        set_name("��ɲ��Ů", ({"white-ghost","ghost"}));
        set("age",8710);
        set("long","����ħ�������󻤷�֮һ�����ü������޵�Ů������������а\��������ɱ���͡���ѩ���족\n");
        set("title",HIW"����Ӱ��"NOR);
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
        set("max_kee",100000);
        set("kee",100000);
        set("combat_exp",14000000);
        set("max_force",500000);
        set("force",1000000);
        set("force_factor",40);
        set("clan_kill",1);
        set_skill("dodge",100);
        set_skill("force",100);
        set_skill("badforce",100);
        set_skill("mogi-steps",120);
        set_skill("unarmed",100);
        set_skill("mogi-strike3",120);
        set_skill("parry",100);
        set_skill("literate",180);
        set_skill("move",100);
        map_skill("unarmed","mogi-strike3");
        map_skill("dodge","mogi-steps");
        map_skill("move","mogi-steps");
        map_skill("force","badforce");
        map_skill("parry","mogi-strike3");
  
        set_temp("apply/armor",70);
        set_temp("apply/damage",70);
        setup();
        add_money("gold",25);
        
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
 write(HIY"��ɲ��Ů��Ц������ħ���ĵ�������ǰ�����ʲ�!?������ħ������ࡣ��ȥ����!!\n"NOR);
 ghost->kill_ob(who);
 return 1;                                                 
                  }
}

int accept_fight(object who)
{
return notify_fail("��ɲ��Ů˵�� : ��û�������档\n");
}


void heart_beat()
{
 object env,mob,*enemy,target;
 int i,j,force;
 mapping exit;
 string *exit_name;
 
 mob = this_object();
 
 env = environment(mob);
 
 if( !query("wield") )
 {
   set("wield",1);
   command("wield all");
 }
 
 if( random(100) < 30)
 {
    enemy=mob->query_enemy();
        if( i = sizeof(enemy) ) {
    target=enemy[random(i)];
    if( env == environment(target) )
    {
      message_vision(HIW"\n                        ���á�Ӱ���ġ�����

"HIW"
˲��, ��ѩ�׷�, ����Ҳ�, ��˪������, �������ת, �·𶳽�
��ѪҺһ��, ��ֹ��һ��
ֻ��$N��������һ��, �����ѩ���ɿ�ת, һʽ"HIB"����ѩ���족"HIW"
�����������¶�֮��Ϯȥ
\n"NOR,mob);
	mob->add("kee",3000);
      for(j=0;j < i;j++){
      enemy[j]->start_busy(2);
      enemy[j]->add("kee",-3000);
      COMBAT_D->report_status(enemy[j], 1);
                        }
    }
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
if(me->query("quest/start_game")< 46)
       {
        tell_object(users(),HIY"
��ϲ"HIW+me->query("name")+HIY"��ս"HIG"��"HIR"����ʮ�����������"HIG"��"HIY"ͨ������

"HIW"ϣ��"+me->query("name")+"�ܲ����������´�"HIG"��"HIY"����ʮ������������"HIG"��"HIW"��
	"NOR);
	me->set("quest/start_game",46);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"ϵͳ�����Ѿ�ͨ�����ԣ�ϵͳ�����κθ��ġ�\n"NOR);
	destruct(this_object());
}
}