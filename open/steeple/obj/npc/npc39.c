#include <ansi.h>
inherit NPC;
void create() {
        
        set_name("ī��ħ��",({"seven-dark"}));
        set("long",
   "\n��ҹǭ��, ��ʹ��, ��������ٶ�ǧ��, ҽ�������һ��.\n");

        set("age",3121);
       set("title",HIW"����Ӱ��"NOR);
        set("str",35);
        set("cor",35);
        set("race","����");
        set("gender","����");
        set("attitude","aggressive");
        set("class","fighter");
        set("bellicosity",7500);
        set("max_gin",13300);
        set("max_kee",50000);
        set("max_sen",13300);
        set("max_force",500000);
        set("force",500000);
        set("force_factor",50);
        set("combat_exp",13000000);
        set_skill("unarmed",100);
        set_skill("dodge",90);
        set_skill("mogi-steps",80);
        set_skill("move",80);
        set_skill("parry",80);
        set_skill("literate",170);
        set_skill("mogi-strike5",100);
        set("clan_kill",1);
        set_skill("force",120);
        set_skill("badforce",90);
        map_skill("unarmed", "mogi-strike5");
        map_skill("dodge","mogi-steps");
        map_skill("parry","mogi-strike5");
        map_skill("move","mogi-steps");
        map_skill("force","badforce");
        set("limbs",({"ͷ��","�ز�","����","����","����"}));
        setup();
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
 
 if( random(100) < 30)
 {
    enemy=mob->query_enemy();
    i=sizeof(enemy);
    target=enemy[random(i)];
    if( env == environment(target) )
    {
      message_vision(HIW"\n                        ���á�Ӱ���ġ�����

"HIM"\n
һ˲�䣬ħ�����ǣ��ط���ѹ����򣬶����ӵ�����������͸��ħ��֮��
$Nһ���ͺ�"HIW"����������  ����صء�"HIM"����ʱ����ը�ѣ�$n��������
\n"NOR,mob,target);
      target->add("force",-1800);
      target->receive_wound("kee",1800);
	mob->add("kee",1800);
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
if(me->query("quest/start_game")< 40)
       {
        message_vision(HIY"
��ϲ"HIW+me->query("name")+HIY"��ս"HIG"��"HIR"����ʮ�Ų���������"HIG"��"HIY"ͨ������

"HIW"ϣ��"+me->query("name")+"�ܲ����������´�"HIG"��"HIY"����ʮ����������"HIG"��"HIW"��
	"NOR,me);
	me->set("quest/start_game",40);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"ϵͳ�����Ѿ�ͨ�����ԣ�ϵͳ�����κθ��ġ�\n"NOR);
	destruct(this_object());
}
}
