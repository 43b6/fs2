inherit NPC;
#include <ansi.h>
void create()
{
        set("nickname",HIW"�ڰ�˫ɲ"NOR);
        set_name("��ɲ�ɾ�", ({"black-ghost","ghost"}));
        set("age",8710);
        set("long","����ħ�������󻤷�֮һ�����м��������ġ������ʷ��֡��͡�������ࡱ\n");
	set("title",HIW"����Ӱ��"NOR);
        set("gender","����");
        set("str",35);
        set("con",35);
        set("cor",30);
        set("cps",30);
        set("attitude","aggressive");
        set("bellicosity",6000);
        set("max_gin",7000);
        set("gin",7000);
        set("max_sen",7000);
        set("sen",7000);
        set("max_kee",100000);
        set("kee",100000);
        set("combat_exp",18000000);
        set("max_force",800000);
        set("force",4000000);
        set("force_factor",45);
        set("clan_kill",1);
        set_skill("dodge",130);
        set_skill("force",130);
        set_skill("badforce",130);
        set_skill("mogi-steps",130);
        set_skill("unarmed",150);
        set_skill("literate",200);
        set_skill("mogi-strike5",120);
        set_skill("parry",140);
        set_skill("move",140);
        map_skill("unarmed","mogi-strike5");
        map_skill("dodge","mogi-steps");
        map_skill("move","mogi-steps");
        map_skill("force","badforce");
        map_skill("parry","mogi-strike5");
  
        set_temp("apply/armor",70);
        set_temp("apply/damage",70);
        setup();
        
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
 if(str=="askgod ghost" || str=="askgod black-ghost"){
 write(HIY"��ɲ�ɾ���Ц������ħ���ĵ�������ǰ�����ʲ�!?������ħ������ࡣ��ȥ����!!\n"NOR);
 ghost->kill_ob(who);
 return 1;                                                 
                  }
}

int accept_fight(object who)
{
return notify_fail("��ɲ�ɾ�˵�� : ��û�������档\n");
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
 
 if( random(100) < 27)
 {
    enemy=mob->query_enemy();
        if( i = sizeof(enemy) ) {
    target=enemy[random(i)];
    if( env == environment(target) )
    {
      message_vision(HIW"\n                        ���á�Ӱ���ġ�����

"HIM"\n
$N��ָһ�����Ϻ�ɫ��ħ��֮���Ȼ����, �·��������еĹ���
����ֹͣ 
���ڹ�����ʧ����֮�ʣ�$N��Ӱ���ݣ�ʹ��һʽ"HIR"��������ࡱ"HIM"��
$n��ü��ֱֱָȥ
\n"NOR,mob,target);
      target->receive_wound("force",10000);
      target->receive_wound("kee",4000);
      COMBAT_D->report_status(target, 1);
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
if(me->query("quest/start_game")< 49)
       {
        tell_object(users(),HIY"
��ϲ"HIW+me->query("name")+HIY"��ս"HIG"��"HIR"����ʮ�˲���������"HIG"��"HIY"ͨ������

"HIW"ϣ��"+me->query("name")+"�ܲ����������´�"HIG"��"HIY"����ʮ�Ų���������"HIG"��"HIW"��
	"NOR);
	me->set("quest/start_game",49);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"ϵͳ�����Ѿ�ͨ�����ԣ�ϵͳ�����κθ��ġ�\n"NOR);
	destruct(this_object());
}
}