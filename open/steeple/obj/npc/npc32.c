inherit NPC;
#include <ansi.h>
inherit F_MASTER;
void create()
{
        set_name("Ī����", ({ "run mou", "run", "mou" }));
        set("title",HIW"����Ӱ��"NOR"ħ��ħ��");
        set("nickname", "ʬ������");
        set("gender", "����");
        set("age", 40);
        set("attitude", "aggressive");
        set("long","Ī������Ī�޳��ͬ�ţ�����۶�����֮λ����������Ӻ�����\n");
        set("str", 45);
        set("cps", 45);
        set("cor", 45);
        set("have_book",1);
        set("mpower",1);
        set("env/ħ����ն","YES");
        set("bellicosity",3000);
        set("combat_exp",12000000);
        set("max_force", 500000);
        set("force", 500000);
        set("max_kee",50000);
        set("max_gin",10000);
        set("max_sen",10000);
        set("force_factor", 30);
        set_skill("force", 120);
        set_skill("parry",120);
        set_skill("dodge",120);
        set("functions/mdragon-dest/level",100);
        set_skill("blade",120);
        set_skill("dragon-blade",120);
        set_skill("powerforce",120);
        map_skill("force", "powerforce");
        map_skill("blade", "dragon-blade");
        map_skill("parry", "dragon-blade");
        set("chat_chance_combat",90);
        set("chat_msg_combat",({
            (: perform_action, "blade.mdragon-dest"   :)
        }));
        set_temp("apply/armor",100);
        set_temp("apply/defense",100);
        setup();
        carry_object("/daemon/class/blademan/obj/mar-blade")->wield();
        carry_object("/open/gblade/obj/dragon_book");
        add_money("gold",10);
}
void heart_beat()
{
 object env,mob,*enemy,target;
 int i;
 mob = this_object();
 env = environment(mob);
if( random(100) > 40)
 {
    enemy=mob->query_enemy();
    if(i=sizeof(enemy)) {
target=enemy[random(i)];
    if( env == environment(target) )
    {
message_vision(HIW"\n                        ���á�Ӱ���ġ�����

"HIC"
Ī���ֱ���������ʩչ��ħ��ħ��������ǧ��Ѫ����Ұ��\n"+
"$N���ܲ�����������Ҫ����Ѫ������\n"NOR,target);
	mob->add("kee",3000);
      target->receive_damage("kee",1400,mob);
      COMBAT_D->report_status(target,1);
    }
 }
}
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
if(me->query("quest/start_game")< 33)
       {
        tell_object(me,HIY"
��ϲ"HIW+me->query("name")+HIY"��ս"HIG"��"HIR"����ʮ������������"HIG"��"HIY"ͨ������

"HIW"ϣ��"+me->query("name")+"�ܲ����������´�"HIG"��"HIY"����ʮ������������"HIG"��"HIW"��
	"NOR);
	me->set("quest/start_game",33);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"ϵͳ�����Ѿ�ͨ�����ԣ�ϵͳ�����κθ��ġ�\n"NOR);
	destruct(this_object());
}
}
