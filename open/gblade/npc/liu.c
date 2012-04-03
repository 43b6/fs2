#include <ansi.h>
inherit NPC;
void create()
{
        set_name("����Ī��",({"degu liu","liu"}));
        set("long","���˸�����Ī��Ϊ�ֵܣ���ʦ��������һ����ƽħ����\n");
        set("gender","����");
        set("combat_exp",7000000);
        set("attitude","aggressive");
        set("age",50);
        set("class","fighter");
        set("family/family_name","ѩ����");
        set("quests/read_snow",1);
        set("title",HIC"��ѧ֮��"NOR);
        set("force",20000);
        set("max_gin",15000);
        set("max_sen",15000);
        set("max_kee",25000);
        set("bellicosity",5000);
        set("max_force",20000);
        set("force_factor",50);
        set("mpower",1);
        set("str",45);
        set("cor",45);
        set_skill("snow-martial", 100);
        set_skill("snowforce", 100);
        set_skill("snow-kee",100);
        set_skill("black-steps",100);
        set_skill("unarmed",100);
        set_skill("dodge",100);
        set_skill("parry",100);
        set_skill("force",100);
        map_skill("unarmed", "snow-martial");
        map_skill("parry","snow-kee");
        map_skill("force", "snowforce");
        map_skill("dodge", "black-steps");
        set_temp("apply/armor",100);
        set_temp("apply/damage",100);
        setup();
        carry_object("/open/snow/obj/figring")->wield();
        add_money("gold", 20);
}
void heart_beat()
{
object me,room,*target;
int i,j;
me=this_object();
room=environment(me);
target=me->query_enemy(room);
if(i=sizeof(target)) {
if(random(100) > 50)
{
if(random(9) >= 5)
{
message_vision(HIY"����Ī�����𡮺˱��ơ�����һ������ʱ������ӡ��������ţ�\n"NOR,me);
for(j=0;j < i;j++) {
target[j]->add("kee",-700); }
   }
   else
   {
message_vision(HIC"����Ī���ĸ�ƣ�������𡮶����ش����䡯һ������Ӳ��췢������ʱ����ٱ���\n"NOR,me);
    me->delete_busy();
    me->clear_condition();
if(random(9) >= 5) {
    me->receive_curing("kee",2000);
    me->receive_heal("kee",1000); }
   }
  }
}
  ::heart_beat();
  }
void greeting(object ob)
{
if(ob->query("family/family_name")=="ħ����"||ob->query("family/family_name")=="ħ��Ī��")
  {
   command("say �ߣ��ߣ�Ѫϴħ���������ɣ�\n ");
   kill_ob(ob);
   command("exert roar");
}}
void die()
{
   object me;
   me=this_object()->query_temp("last_damage_from");
   if (me && userp(me))  {
   me->add("snow-head",50);
tell_room(environment(),sprintf("%s�Ӷ���Ī����������һ����ͷ��\n",me->name()));
   }
   ::die();
}
