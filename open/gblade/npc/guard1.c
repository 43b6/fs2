inherit NPC;
#include <ansi.h>
inherit F_MASTER;
void create()
{
        set_name("Ī�޻�", ({ "hun mou", "hun", "mou" }));
        set("title","ħ����");
        set("nickname", "Ѫ���ɺ�");
        set("gender", "����");
        set("age", 40);
        set("attitude","aggressive");
        set("long","Ī�޻�ΪĪ���ֵĵܵܣ��������磬�Ķ�����֮λ��\n");
        set("str", 45);
        set("cps", 45);
        set("int", 45);
        set("bellicosity",2500);
        set("env/ħ����ն","YES");
        set("have_book",1);
        set("mpower",1);
        set("combat_exp",5000000);
        set("max_force", 10000);
        set("force",    10000);
        set("max_kee",10000);
        set("max_gin",10000);
        set("max_sen",10000);
        set("force_factor", 30);
        set_skill("force", 100);
        set_skill("parry",100);
        set_skill("dodge",100);
        set_skill("blade",120);
        set_skill("dragon-blade",120);
        set_skill("powerforce",100);
        map_skill("force", "powerforce");
        map_skill("blade", "dragon-blade");
        map_skill("parry", "dragon-blade");
        set_temp("apply/armor",100);
        set_temp("apply/damage",100);
        setup();
        carry_object("/daemon/class/blademan/obj/kar-blade")->wield();
        add_money("gold",10);
}
void heart_beat()
{
 object env,mob,*enemy,target;
 int i;
 mob = this_object();
 env = environment(mob);
if( random(100) > 50)
 {
    enemy=mob->query_enemy();
    if(i=sizeof(enemy)) {
target=enemy[random(i)];
    if( env == environment(target) )
    {
message_vision(HIC"
Ī�޻�˫Ŀŭ�ӣ�ʩչ��ħ���񵶡�����ʮ�١�ʬ���Ұ��\n"+
"$N���ܲ�����������Ҫ����Ѫ������\n"NOR,target);
      target->receive_damage("kee",500,mob);
      COMBAT_D->report_status(target,1);
    }
 }
}
   ::heart_beat();
}
