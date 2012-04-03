#include <ansi.h>
#include "/open/open.h"
inherit NPC;
string do_mdragon();
string do_mblade();
void create()
{
set_name("Ī�޳�",({"master mou","mou","master"}));
set("long","�������˵İ�������ʮ����������͵����Ϊ������Ѱ���³���丸ծ������������Կ�
�ﵽ�丸��ˮ׼��������ڵ������������µĴ��󣬸���������ŭն���з�����ħ������
�������������ף���ȷ�������صĺ󾢣�����������³��������Ʋ�������\n");
set("gender","����");
set("attitude","heroism");
set("age",35);
set("class","blademan");
set("nickname",HIR"����ħ��"NOR);
set("title",HIW"����Ӱ��"NOR"ħ���ŵڶ�������");
create_family("ħ����",2,"����");
set("score",100000);
set("force",100000);
set("max_force",100000);
set("env/ħ����ն","YES");
set("max_kee",30000);
set("force_factor",25);
set("mpower",1);
set("cor", 35);
set("str", 35);
set("per", 20);
set("int", 25);
set("functions/mdragon-dest/level",100);
set("cps", 35);
set("con", 35);
set("spi", 25);
set("kar", 35);
set("combat_exp", 10000000);
set("bellicosity", 3000);
set_skill("riding",80);
set_skill("force", 90);
set_skill("parry", 90);
set_skill("move", 60);
set_skill("dodge", 60);
set_skill("cure", 50);
set_skill("dragon-blade",105);
set_skill("powerforce", 90);
set_skill("blade", 150);
set_skill("literate", 40);
set_skill("unarmed", 20);
set_skill("spells", 20);
set_skill("magic", 20);
map_skill("parry","dragon-blade");
map_skill("blade","dragon-blade");
map_skill("force","powerforce");
set("chat_chance_combat",100);
set("chat_msg_combat",({
(: perform_action, "blade.mdragon-dest" :),
}));
set_temp("apply/armor",65);
set_temp("apply/damage",65);
setup();
carry_object("/daemon/class/blademan/obj/ublade.c")->wield();
carry_object("/daemon/class/blademan/obj/shield.c")->wear();
carry_object("/daemon/class/blademan/obj/six-neck.c");
add_money("gold",10);
}


void heart_beat()
{
 object env,mob,*enemy,target;
 int i;
 mob = this_object();
 env = environment(mob);
   if( random(100) > 70)
 {
    enemy=mob->query_enemy();
        if( i = sizeof(enemy) ) {
    target=enemy[random(i)];
    if( env == environment(target) )
    {
message_vision(HIW"\n                        ���á�Ӱ���ġ�����

"HIY"
Ī�޳�ʩչ��ħ������ն��Ԫ��������Ԫ��\n"+
"��������������𲡫����ᰴ��𡯣�����\n"+
"$N���ܲ�����������Ҫ����Ѫ������\n"NOR,target);
   mob->add("kee",1800);
    target->receive_damage("kee",1800,mob);
      COMBAT_D->report_status(target,1);
    }
        }
 }
   ::heart_beat();
}
int accept_kill(object who)
{
who=this_player();
command("wear all");
command("kill "+who->query("id"));
command("perform blade.mdragon-dest");
return 1;
}
int accept_fight(object who)
{
who=this_player();
command("wear all");
command("kill "+who->query("id"));
command("perform blade.mdragon-dest");
return 1;
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
if(me->query("quest/start_game")< 29)
       {
        message_vision(HIY"
��ϲ"HIW+me->query("name")+HIY"��ս"HIG"��"HIR"�ڶ�ʮ�˲���������"HIG"��"HIY"ͨ������

"HIW"ϣ��"+me->query("name")+"�ܲ����������´�"HIG"��"HIY"�ڶ�ʮ�Ų���������"HIG"��"HIW"��
	"NOR,me);
	me->set("quest/start_game",29);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"ϵͳ�����Ѿ�ͨ�����ԣ�ϵͳ�����κθ��ġ�\n"NOR);
	destruct(this_object());
}
}