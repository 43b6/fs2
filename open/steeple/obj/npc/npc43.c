#include <ansi.h>
inherit NPC;
void create() {
        
        set_name("����ħ��",({"seven-dark"}));
        set("long",
   "\n�������, ���������, �޷��ж�����һ�����ж���ʲô.\n");

        set("age",3121);
        set("str",35);
        set("title",HIW"����Ӱ��"NOR);
        set("cor",35);
        set("race","����");
        set("gender","����");
        set("attitude","aggressive");
        set("class","fighter");
        set("bellicosity",7500);
        set("max_gin",9000);
        set("max_kee",50000);
        set("max_sen",9000);
        set("max_force",500000);
        set("force",500000);
        set("force_factor",65);
        set("combat_exp",13000000);
        set("clan_kill",1);
        set_skill("unarmed",100);
        set_skill("dodge",100);
        set_skill("mogi-steps",100);
        set_skill("move",80);
        set_skill("parry",100);
        set_skill("literate",130);
        set_skill("mogi-strike2",100);
        set_skill("force",120);
        set_skill("badforce",90);
        map_skill("unarmed", "mogi-strike2");
        map_skill("dodge","mogi-steps");
        map_skill("parry","badstrike");
        map_skill("move","mogi-steps");
        map_skill("force","badforce");
        set("limbs",({"ͷ��","�ز�","����","����"}));
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
 
 if( random(100) < 15)
 {
    enemy=mob->query_enemy();
    i=sizeof(enemy);
    target=enemy[random(i)];
    if( env == environment(target) )
    {
      message_vision(HIW"\n                        ���á�Ӱ���ġ�����

"HIB"\n
$NָԲΪ�ģ���Բ�������а����˲��ɱ�Ⱥ���ڴˣ�����޺�ֱ
�����к�Ȼ����
��$NѸ��һָ��һʽ"MAG"��ǧ�׻�ʬ  ������ӡ�"HIB"����Ѫʬ����������
ֱ���ƴ�$n���߿�֮��
\n"NOR,mob,target);
	mob->add("kee",2000);
      target->receive_damage("kee",2000);
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
if(me->query("quest/start_game")< 44)
       {
        message_vision(HIY"
��ϲ"HIW+me->query("name")+HIY"��ս"HIG"��"HIR"����ʮ������������"HIG"��"HIY"ͨ������

"HIW"ϣ��"+me->query("name")+"�ܲ����������´�"HIG"��"HIY"����ʮ�Ĳ���������"HIG"��"HIW"��
	"NOR,me);
	me->set("quest/start_game",44);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"ϵͳ�����Ѿ�ͨ�����ԣ�ϵͳ�����κθ��ġ�\n"NOR);
	destruct(this_object());
}
}