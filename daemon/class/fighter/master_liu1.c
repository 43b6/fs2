// �������master_liu by Chan
// ������๦��
#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
string book();
string icef();
string test();
string super_fighter();
/*
// ��ǰ��quests����ȡ����,ʮ��׷ɱ��!!!!
string ask_sec()
{
        if( !this_player()->query("quests/to-kill-1") )
                return "����˵Щʲô ?\n";
        this_player()->set("quests/to-kill-2",1);
        return "�ð� ! �Ҿ͸�������� ! �����޺��������� !\n";
}
//�����Ƿ��ϻ�֮ͯquests  ȡ���� by chan
int do_check( object me )
{
        command("say "+(me->query("gender")=="����" ? "׳ʿ" : "����")+" ! �㿴���ƺ��ܵ��˼��ص����ˣ��������㿴���� ?");
}
int do_nod()
{
        object me = this_player() , ob = this_object();
        if( !me->query("quests/kill-dugur") || me->query("quests/cure-star") ) return 0;
        message_vision("$N���˿�$n���ϵ��˺ۡ�\n",this_object(),this_player());
        command("sign");
        command("say �Ϸ�����Ϊ��������֮�˵ĸ���Զ���Ϸ�֮�ϣ��������ϣ�����ֻ��֣ʿ��������ʵ����");
        command("say ��ȥ���������㿴������ˡ����������㡸���ˡ���");
        return 1;
}
*/
void create()
{
   set_name("��ȫ��",({"master liu","liu"}));
   set("long","����ѩ������֮�ס���Ӱ��š���ȫ�飬һ˫���ţ��ݺ����֡�\n");
   set("gender","����");
   set("guild_master",1);
   set("class","fighter");
   set("nickname","��Ӱ���");
   set("combat_exp",5000000);
   set("attitude","heroism");
   set("age",47);
   set("title","ѩ���ɵ��Ĵ�������");
   set("str", 50);
   set("cor", 24);
   set("cps", 18);
   set("per", 24);
   set("int", 42);
   set("force", 7000);
   set("max_kee",15000);
   set("kee",15000);
   set("quests/read_snow",3);
      set("max_gin",3000);
      set("gin",5000);
          set("sen",5000);
          set("max_sen",5000);
   set("s_kee",600);
   set("max_s_kee",1000);
   set("sec_kee","tiger");
   set("inquiry",([
        "��аʯ":   "ʦ������ǰ�����������������˵���ﵱ������Ե�ˡ�",
        "��Ե��":   "��˵��ʮ��ǰ������������ߣ���Ϊ��Ե�ˡ�\n",
        "�ؾ���":  (: book :),
        "����ʥ��":   (: super_fighter :),
        "����":   (: test :),
//      "���Ź�" : (: ask_sec :),
          ]));
    set_skill("literate",30);
   set("force_factor", 50);
   set("max_force",3000);
      set_skill("snow-kee",100);
   set_skill("cure",40);
          set_skill("move",50);
   set_skill("force",120);
   set_skill("magic",20);
   set_skill("dodge",50);
       set_skill("parry",50);
   set("functions/ice-fingers/level",100);
   set("functions/snow-powerup/level",50);
   set_skill("spells",20);
      set_skill("unarmed",120);
   set_skill("snowforce",100);
   map_skill("force","snowforce");
           set_skill("black-steps",100);
   set_skill("snow-martial",100);
   map_skill("unarmed","snow-martial");
   map_skill("dodge","black-steps");
   map_skill("parry","snow-kee");
   set("chat_chance_combat",60);
   set("chat_msg_combat",({
   (: icef :),
   }));
   setup();
   create_family("ѩ����",4,"������");
   carry_object(SNOW_OBJ"figring")->wield();
   carry_object("/open/snow/obj/liucloth.c")->wear();
}

void init()
{
        object ob;
/*
        object me = this_player();
        if( me->query("quests/kill-dugur") && !me->query("quests/cure-star") )
                call_out("do_check",1,me);
*/
        add_action("do_say","say");
/*
        add_action("do_nod","nod");
*/
        add_action("do_join","join");
}
void heart_beat()
{
        if( random(4) < 1 ){
        if( is_fighting() ){
                if( query("kee") < query("eff_kee") )
                        command("exert recover");
        }
        else{
                if( query("eff_kee") < query("max_kee") )
                        command("exert heal");
        }
        }
     ::heart_beat();
}

void attempt_apprentice(object ob)
{
        if(this_player()->query("class")!="fighter")
        {
                command("say �㲻�����ߣ��Ҳ������㡣\n");
                return;
        }
      if((int)ob->query("str")<20) {
          command("say ѩ����ѧҪ��������˲���ѧ���ҿ�����ذ�!\n");
          return;
      }
      command("hmm");
      command("recruit "+ob->query("id"));
}

int accept_fight(object who)
{
who=this_player();
command("cmd usekee "+who->query("id"));
 command("say ��ȻӢ�۳����ꡣ\n");
 command("perform snow-kee.snow-powerup");
command("cmd usekee "+who->query("id"));
 command("charge "+who->query("id"));
 return 1;
}

int accept_kill(object who)
{
who=this_player();
 command("say ����~~~~\n");
 kill_ob(who);
command("charge "+who->query("id"));
 command("perform snow-kee.snow-powerup");
command("cmd usekee "+who->query("id"));
 return 1;
}

int do_say(string str,object ob)
{
     object who;
        who=this_player();
        if(who->query("get_stone")==1){
           return 0;}//�ǵúܾ�֮ǰlum��Ҫ�Ҹĳ�������ppl����������Щ��Ҳ������ʷ
	else {	            //��...����sula������..so...�ٰ����ĳ�������..........cgy
    if (str=="�µ���")  this_player()->set_temp("say_1",1);
    if (str=="����")    this_player()->set_temp("say_2",1);
    if (str=="����а��")  this_player()->set_temp("say_3",1);
    if(this_player()->query_temp("say_1")==1&&this_player()->query_temp("say_2")==1&&this_player()->query_temp("say_3")==1)
     {
      command("smile");
      command("say ���Ȼ����Ե�ˡ�\n");
      
        this_player()->set("get_stone",1);
		call_out("do_gs",1,ob);
      }
    return 0;
}}
int do_gs(object ob)
    {
        object stone;
     
        command("say ��аʯ��ȥ�� !");
        new("/open/snow/obj/stone")->move(this_player());
        
        return 1;
    }
string icef()
{       
        command("perform snow-martial.ice-fingers");
        return "\n";
}
string book()
{
   object me=this_player();
   if(me->query("allow_study")==1)
          return "��...���Ǹ���˵������\n";
   command("say ���˱��ɲ����صأ������б�����Ҫ���š�");
   if(me->query("family/family_name")!="ѩ����")
          return "�㲻�Ǳ��ɵĵ��ӣ�û�ʸ�����ɵ��顣\n";
   if(me->query("combat_exp")<150000)
          return "�������̶ֳ�Ҫ���ؾ�����飬����ĺܡ�\n";
    return "ֻ��Ϊ�������ش�Ĺ��׵�ѩ���ɵ��Ӳ�����ؾ����ж�!!!\n";
}

int do_join()
{
        if(this_player()->query("class"))
                return notify_fail("���Ѿ��������������ˡ�\n");
        this_player()->set("class","fighter");
        message("system",
        HIC "����Ӣ��.....\n\nһ������"+this_player()->name()+"������ !!!\n" NOR,users());
        return 1;
}
string test()
{
 object me;
 me=this_player();
 if(me->query("family/family_name") != "ѩ����")
  {
   return "��ȫ���:����ѩ���ɵ���,������ɲ��ù���!!!!\n";
  }
if((int)me->query_skill("snow-martial",1)<70)
{
return "���ѩ����ѧ..δ����!!!�ҿ�����..��..\n";
}
 say("��ȫ������һ��!!!\n");
 say("��ȫ���:�����ɽ�ɵ���������������,����Э��������ƽ�ϳǸ����Ķ��ǻ�!!!\n");
 say("��ȫ������:�������ͽ������....!!!\n");
 me->set("snow_test",1);
}
int accept_object(object who, object ob)
{
  if( ob->query("id") == "tiger-head")
  {
    destruct(ob);
    if((who->query("family/family_name") == "ѩ����") && (who->query("snow_test") != 1))
     {
      say("��ȫ����ϸ�Ŀ��˿�!!,˵:�ⲻ�Ƕ��ǻ���ͷ!!��\n");
    return 0;
     }
    if((who->query("family/family_name") != "ѩ����") || who->query("read_ok"))
     {
     say("��ȫ����ϸ�Ŀ��˿�!!,˵��:��Ȼ�Ƕ��޵�ͷ!!��л��Ϊ���ֳ��˴󺦡�\n");
  return 1;
     }
   say("��ȫ����ϸ�Ŀ��˿�!!˵��:���Ȼ�ǲк��������ն���--���ǻ�--��ͷ��\n");
   if(!who->query("allow_study"))
   {
    who->set("allow_study",1);
say("�ðɣ���׼����ؾ����ڵ��飬����ѩ����¼����Ҷ�������š��ͺ�Ӱ�з�¼������ֻ׼��һ�������Ҷ�һ�Ρ�\n");
   }
   if(who->query("allow_study")==1)
    say("��...���Ǹ���˵������\n");
return 1;
  }
}
string super_fighter()
{
 object me;
 me=this_player();
 if((me->query("class") != "fighter") || (!me->query("ask_super_fighter")) )
  {
   return "��ȫ���:�˵�Ϊ���ߴ�˵ʥ��,ˡ�ѷ��!!!!\n";
  }
 if((me->query("family/family_name") == "��ɽ��") && (me->query("title") != "��ɽ���崫��"))
  {
   return "��ȫ��ŭ��:���Լ����ɵ��ذ��嶼û��ѧ����,����ô����ʲô!!!\n";
  }
 if((me->query("family/family_name") == "ѩ����") && (me->query("title") != "ѩ�Ծ�ѧ����"))
  {
   return "��ȫ��ŭ��:���Լ����ɵľ�ѧ��û��ѧ����,����ô����ʲô!!!\n";
  }
 say("��ȫ����˼��һ��!!!\n");
 say("��ȫ����ʫ��:------��~��~��~��~�衢��~��~ʥ~��~��-----\n");
 say("��ȫ������:�϶������ȥ��������ɡ�!!\n");
 say("��ȫ������:���еĺ�����Լ����ɡ�!!\n");
 me->set("ask_super_fighter",1);
}
void die()
{
   object winner = query_temp("last_damage_from");
   tell_object(users(),
   "\n\t[1m����[1;36m��ȫ��[1;37m����������ʮ��,����һ�ܽ��쾹��[33m"+winner->query("name")+"[1;37m����!!�������!!���!![0m\n");
 :: die();
}
