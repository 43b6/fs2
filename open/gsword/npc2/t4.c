inherit NPC;
#include <ansi.h>
#include "/open/open.h"
string test();
void create()
{
        set("title",HIR"����������"NOR),
        set_name(HIC"�ɽ�����"NOR,({"gman"}));
        set("class","swordsman");
        create_family("�ɽ���",2,"����");
        set("family/master_name","��ң��");
        set("family/family_name","�ɽ���");
        set("attitude","heroism");
        set("env/����","YES");
        set("gender","����");
        set("age",200);
        set("str",40);
        set("con", 50);
        set("int", 30);
        set("cps", 40);
        set("cor", 40);
        set("kar",50);
        set("long","�ɽ�����֮��������,��˵���������������֮��Ӱ,�����ͨ�����Ĳ���(test_accept)��������ɽ�����������\n");
        set("combat_exp",4000000);
        set("max_gin",10000);
        set("gin",10000);
        set("max_kee",25000);
        set("max_force",30000);
        set("force",30000);
        set("kee",25000);
        set("max_sen",10000);
        set("sen",10000);
        set("bellicosity",3000);
        set("functions/swordkee/level",100);
        set("functions/godsub/level",100);
        set("functions/sha_kee/level",100);
        set("functions/sunswordkee/level",100);
        set_skill("dodge",150);
        set_skill("unarmed",200);
        set_skill("parry",120);
        set_skill("sword",170);
        set_skill("shasword",150);
        set_skill("sha-steps",100);
        set_skill("fireforce",250);
        set_skill("sun_fire_sword",100);
        set_skill("force",300);
        set_skill("array",100);
        set_skill("sha-array",100);
        map_skill("array","sha-array");
        map_skill("dodge","sha-steps");
        map_skill("move","sha-steps");
        map_skill("force","fireforce");
        map_skill("sword","shasword");
        map_skill("parry","sun_fire_sword");
        set("force_factor",20);
        set("inquiry",([
  "����" : (:test:),
]));
set("get_sha_sp", 1);
set("quests/sunfire",1);
set("quest/new_gold_fire",1);
set("chat_msg_combat",({
 (: perform_action,"sword.sha_kee" :)
  }));
setup();
carry_object("/u/a/appo/obj/sadsword.c")->wield();
carry_object("/open/gsword/obj/dragon-cloth.c")->wear();
carry_object("/open/gsword/obj1/ring.c")->wear();

        add_money("gold",5);
}
int accept_fight(object who)
{
  object ob = this_object() , me = this_player();
  command("say ע����...");
  fight_ob(who);
  me->delete_temp("3rdtest");
  command("perform sun_fire_sword.sunswordkee");
return 1;
}
int accept_kill(object who)
{
  object ob = this_object() , me = this_player();
  command("say ע����...");
  kill_ob(me);
  me->delete_temp("3rdtest");
  command("perform sun_fire_sword.sunswordkee");
  return 1;
}
void init() 
{

  object obj;
  ::init();
  if(interactive(obj=this_player()) && !is_fighting())
     {
      remove_call_out("greeting");
      call_out("greeting",1,obj);
     }
add_action("do_test","test_accept");
}

void greeting(object ob)
{
        command("wear all");
}
int do_test()
{
  object ob = this_object() , me = this_player();
  if( !is_fighting() )
  {
   if(ob->query("eff_kee") < ob->query("max_kee")/2 )
  {
  command("say ������Ϣһ�°�");
  }
  else
  {
  command("say ע����...");
  me->set_temp("3rdtest",1);
  kill_ob(me);
  }
  }
  else
  {
  command("say ����.һֱ��...���ҵ�");
  kill_ob(me);
  me->delete_temp("3rdtest");
  command("perform sun_fire_sword.sunswordkee");
  }
  return 1;
}

string test()
{
   tell_object(this_player(),HIW"�˹��ڲ��������������..��ô����.���ܹ��ء�\n"NOR);
   return("���������test_accept��������ս");
}
void heart_beat()
{
        if( !is_fighting() ) {
                if( query("sen") < query("eff_sen") ) // 125
                        command( "exert refresh" );
                if( query("force") < query("max_force") ) // 1 -> 5.035
                        command( "ex 400" );
                if( query("eff_kee") < query("max_kee") ) // 35
                        command( "20 exert heal" );
                if( query("gin") < query("eff_gin") ) // 125
                        command( "exert regenerate" );
                if( query("kee") < query("eff_kee") ) // 125 -> 300
                        command( "7 exert recover" );

        }
        ::heart_beat();
}
void unconcious ()
{
   object winner = query_temp("last_damage_from");
    if(!winner) :: unconcious();
    {
       if(winner->query_temp("/3rdtest")==1)
       {
       winner->set("quests/yan",5);
       tell_object(winner,HIW"���Ѿ�ͨ���ɽ�������..��ֱ�ӽ����ͻ���ɽ��\n"NOR);
       message("system",this_player()->name()+HIY"��ͨ���ɽ�����,��Ϊһ����ʦ��\n"NOR,users());
       winner->set("title","[1;36m�ɽ�ʥ��[0m");
       winner->move("/open/gsword/room/su3");
       destruct (this_object ());
       }
       else
       {
       tell_object(winner,HIW"����~~~����Ͷ���ķ�ʽ���޷��õ��ҵ���ͬ�ġ�\n"NOR);
       destruct (this_object ());
       }
    }
 ::die();
}
