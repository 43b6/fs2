// ����ħ�� by roger
// ���������� by chan
#include <ansi.h>
inherit NPC;   
void create()
{
        set("long","
Ī�޳���µ�һ�ڵ��������ó���ɱ��������Ϊ��!!!!!
���ո�����ί��!!���б�����׷�����˳�����������ǰ!!!������ɱ�޺�!!!!
���书Ϊ���𹦼�������!!!��������!!!!
");
        set("gender","����");
        set("class","fighter");
        set("nickname",HIR"����ɱ��"NOR);
        set("title","�ڵ�����");
        set_name("Ī�޳�",({"wu"}));
        set("combat_exp",15500000);
        set("attitude","hero");
        set("score",5000000);
        set("bellicosity",10000);
        set("age",45);
        set("max_force",250000);
        set("force",240000);
        set("max_kee",33000);
        set("kee",34000);
        set("max_gin",14000);
        set("max_sen",14000);
        set("str", 35);
        set("cor", 35);
set("no_lyssa",1);
        set("cps", 30);
        set("per", 30);
        set("int", 30);
        set("force_factor",45);
        set_skill("dodge",220);
        set_skill("force",250);
        set("clan_kill",1);     //������ɱ��׷ɱ
        set_skill("move",280);
        set_skill("parry",250);
        set_skill("mogi-steps",200);
        set_skill("firestrike",220);
        set_skill("unarmed",220);
        set_skill("literate",200);
        set_skill("fireforce",250);
        set_temp("armor_vs_force",5000);
        map_skill("force","fireforce");
        map_skill("unarmed","firestrike");
        map_skill("dodge","mogi-steps");
        map_skill("move","mogi-steps");
        map_skill("parry","firestrike");
        set("functions/gold-fire/level",100);
        set("quest/gold-fire",1);
        set("quest/new_gold_fire",1);
        setup();
        carry_object("/data/autoload/mogi/fire-armor")->wear();
        carry_object("/data/autoload/mogi/fire-cloud-boots")->wear();
        carry_object("/data/autoload/mogi/fire-belt")->wear();
        carry_object("/data/autoload/mogi/daemon-cloak")->wear();
        carry_object("/data/autoload/mogi/fire-dragon")->wield();
        add_money("gold",1000);
}

void greeting(object ob)
{
 if(ob->query("ckill"))
  {
    command("say ��!!��!!��һ����������!!����!!");
    command("perform fireforce.gold-fire");
    kill_ob(ob);
    ob->start_busy(2);
  } else if(ob->query("mk-blade")) {
if(ob->query("gender")=="����") {
if(ob->query("title")!="[1;37m����[1;33m����[0m" && !ob->query_temp("powerup") &&
   !ob->query_temp("addbasic")) {
tell_object(ob,HIW"��ʹ��а���Ƶ������ң��Ұ��㻹ԭtitle\n"NOR);
ob->set("title","[1;37m����[1;33m����[0m"); }} else {
if(ob->query("title")!="[1;34m����[1;36m�ļ�[0m" && !ob->query_temp("powerup") &&
   !ob->query_temp("addbasic")) {
tell_object(ob,HIW"��ʹ��а���Ƶ������ң��Ұ��㻹ԭtitle\n"NOR);
ob->set("title","[1;34m����[1;36m�ļ�[0m"); }}}
}
