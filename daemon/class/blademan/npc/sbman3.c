#include <ansi.h>
inherit NPC;
void create()
{
        set_name("������",({"sword man","man"}));
        set("long","�����ߡ�\n");
        set("gender","����");
        set("combat_exp",3000000);
        set("sec_kee","god");
        set("attitude","heroism");
        set("get_sha_sp",1);
        set("max_s_kee",1000);
        set("s_kee",1000);
        set("age",60);
        set("class","swordsman");
        set("family/family_name","�ɽ���");
        set("force",9000);
        set("max_gin",9000);
        set("max_kee",9000);
        set("max_sen",9000);
        set("clan_kill",1);
        set("bellicosity",3000);
        set("max_force",9000);
        set("force_factor",10);
        set("str",45);
        set("cor",45);
        set("mpower",1);
        set_skill("shasword", 120);
        set_skill("literate",120);
        set_skill("sha-steps",120);
        set_skill("dodge",120);
        set_skill("shaforce",120);
        set_skill("parry",120);
        set_skill("sword",120);
        set_skill("force",120);
        map_skill("sword","shasword");
        map_skill("parry","shasword");
        map_skill("force", "shaforce");
        map_skill("dodge", "sha-steps");
        set_temp("apply/defense",100);
        set_temp("apply/armor",100);
        setup();
       carry_object("/open/gsword/obj/silver_sword")->wield();
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
message_vision(HIY"�������ý�����������һ������ʱ�˼����ǣ�\n"NOR,me);
for(j=0;j < i;j++) {
target[j]->add("kee",-350); }
   }
   else
   {
message_vision(HIC"����������һЦ��˲ʱ��Ϣ�ȹ̡�\n"NOR,me);
if(random(9) >= 5) {
me->receive_curing("kee",2000);
me->receive_heal("kee",1000); }
    me->clear_condition();
   }
  }
}
  ::heart_beat();
  }
int accept_fight(object who)
{
 command("say �߿����ң�\n");
 return 0;
}
int accept_kill(object who)
{
 int i;
 object guard;
 who=this_player();
 command("kill "+who->query("id"));
 command("cmd god_kee");
if( !present("sword1 man",environment(who)))
        {
for(i=0;i<1;i++)
          {
guard=new("/daemon/class/blademan/npc/sbman4.c");
guard->move(environment(who));
guard->kill_ob(who);
          }
        }
 command("say �ֵ��ǳ���ɱ�а� !!");
 return 1;
}
