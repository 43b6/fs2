// master_jen.c
// Chan 22/5�������
#include <ansi.h>
inherit NPC;
inherit F_MASTER;
string test();
string kee_god();
string ask_yan();
string super_fighter();
void create()
  {
        set("class", "fighter");
        set_name("������", ({ "master jen", "master", "jen" }) );
        set("title","��ɽ�ɵ��ߴ�������");
        set("nickname", "��ɽ����");
        set("gender", "����");
        set("age", 45);
        set("del_delay",1);
        set("attitude", "hero");
        set("long",
        "������������������ѧ�����У����丸���β��ġ�Ӣ��ʽ�Ľ�����޹\n"
        "�ճ��������ǫѷ���˸���Ϊ��ɽ�����ŵ������Է�����ɽΪ����\n"
        "������Υ���ɹ�ĵ��Ӻ������飬��˾Ϳɿ���������ĸ���\n");
        set("str", 48);
        set("cps", 40);
        set("per", 34);
        set("int", 38);
        set("kar", 16);
        set("fire_strike",1);
        set("super_fire",1);
        set("combat_exp",5000000);
        set("max_kee",30000);
        set("kee",30000);
        set("max_gin",15000);
        set("gin",15000);
        set("max_sen",15000);
        set("sen",15000);
        set("force"       , 15000);
        set("max_force"   , 15000);
	set("atman"       , 15000);
        set("max_atman"   , 15000);
	set("mana"       , 15000);
        set("max_mana"   , 15000);
        set("force_factor", 40);
        set("score"       , 200000);
        set("s_kee",1000);
        set("env/��ɽ����","YES");
        set("max_s_kee",1000);
        set("sec_kee","tiger");
        set("inquiry",([
                 "��ɽȭ��":   "��Ϊ�μҴ��еľ�ѧ����Ϊ�����С��������ϡ��������塱���֡� ",
                 "����":       "����ɽȭ���н���ѧ��������С����ʽ��\n",
                 "����":       "��ɽ���Ϲ��С�ɽˮ֮����������Хɽ�֡����С�\n"
                               "ֻ����ɽȭ�����Ƿ��켫֮�ʲ��ܽ��ܿ��鴫��\n",
                 "����":       "���������������Ľ���ɽȭ��Ϻ��������������ľ��С�\n"
                               "��֮Ϊ���������ơ�����ʽ\n"
                               "ֻ����ɽ��ѧ���������ر��ײ��ܴ���\n",
                 "���Ͽ���":   (: test :),
                 "������" : (: ask_yan :),
                 "����֮��":   (: kee_god :),
                 "����ʥ��":   (: super_fighter :),
                 "Ҷ��":       "��ʮ��ǰ���н����޶����Ĵ�ħͷ�����ϴ����������ڼ�����\n",
                 "����":       "����ɽ�Ľ�����\n",
          ]));
        set("functions/kang_kee/level",100);
        set_temp("roared", 1 );
		set_temp("kang-power", 1 );
        set_skill("cure",40);
        set_skill("move",50);
        set_skill("unarmed", 120);
        set_skill("force",120);
        set_skill("parry",50);
        set_skill("dodge",50);
        set_skill("fire-kee",100);
        set_skill("literate",40);
        set_skill("henma-steps",100);
	set_skill("literate",30);
        set_skill("lungshan",100);
	set_skill("haoforce",100);

        map_skill("force", "haoforce");
        map_skill("unarmed", "lungshan");
        map_skill("dodge", "henma-steps");
        map_skill("parry", "fire-kee");
        set("chat_chance_combat",20);
        set("chat_msg_combat",({
            (: perform_action, "force.kang_kee"   :),
        }));
        create_family("��ɽ��", 7, "������");
        setup();
            carry_object(__DIR__"ywleg")->wear();
            carry_object(__DIR__"ywboots")->wear();
            carry_object(__DIR__"ywcloth")->wear();
            carry_object(__DIR__"ywgem")->wear();
            carry_object(__DIR__"ywhelme")->wear();
            carry_object(__DIR__"ywhand")->wear();
            carry_object(__DIR__"ywsu")->wear();
            carry_object(__DIR__"armband")->wear();
               carry_object(__DIR__"star");
                carry_object(__DIR__"figring")->wield();
        add_money("gold",40);
}

int accept_object(object who, object ob)
{
  object mid;
  if( ob->query("id") == "ya-head")
  {
    destruct(ob);
    say("��������ϸ��Ҷ���ͷ����,˵��:�⾹Ȼ�ǡ�Ѫħ��Ҷ���ͷ��\n");
    who->set("quests/ya",1);
    if( who->query("family/family_name")=="��ɽ��"&&who->query_skill("lungshan",1) < 70)
	{
	 say("������ŭ��:��ɽ�ɵ���ѧ��û��ѧ����,����ѧʲô����!!!\n");
	 return 0;
    }
    else if( who->query("family/family_name")=="��ɽ��")
     {
	 
      if(!who->query("fire_strike",1))
       {
        say("��Ϊ���ֳ�ȥ�����ħͷ��������˴�Ĺ���!\n"
            "��!!�ð�!!�ұ㽫��ɽ���ռ����塮�������ơ����ڸ���\n");
        who->set("fire_strike",1);
        who->set("title","��ɽ���崫��");
       }
      else
       {
        say("��Ϊ���ֳ�ȥ�����ħͷ��������˴�Ĺ���!!\n"
            "��Щ���Ҷ������ռ���ѩ��������֥�ɵ��������\n");
        mid=new("/open/gsword/obj/ff_pill");
        mid->add_amount( who->query("per")+100 );
        mid->move(who);
        mid=new("/open/gsword/obj/f_pill");
        mid->add_amount( who->query("per")+100 );
        mid->move(who);
       }
     }
     else
     {
      if(!who->query("get_force",1))
       {
        say("��Ϊ���ֳ�ȥ�����ħͷ��������˴�Ĺ���!!\n"
            "��!!�ð�!!�ҽ������������ڸ����!!\n");
        message_vision(HIC"�����罫˫�ְ�ס$N̴��Ѩ������˲ʱ���ͨ$N���ζ�����\n",who);
        who->add("max_force",200);
        who->set("get_force",1);
       }
      else
       {
        say("��Ϊ���ֳ�ȥ�����ħͷ��������˴�Ĺ���!!\n"
            "��Щ���Ҷ������ռ���ѩ��������֥�ɵ��������\n");
        mid=new("/open/gsword/obj/ff_pill");
        mid->add_amount( who->query("per")+100 );
        mid->move(who);
        mid=new("/open/gsword/obj/f_pill");
        mid->add_amount( who->query("per")+100 );
        mid->move(who);
       }
     }
} else
  if( ob->query("id") == "tiger-head")
  {
    destruct(ob);
    if((who->query("family/family_name") == "��ɽ��") && (who->query("lungshan_test") != 1))
     {
      say("��������ϸ�Ŀ��˿�!!,˵:�ⲻ�Ƕ��ǻ���ͷ!!��\n");
      return 0;
     }
    if((who->query("family/family_name") != "��ɽ��") || who->query("super_fire"))
     {
      say("��������ϸ�Ŀ��˿�!!,˵��:��Ȼ�Ƕ��޵�ͷ!!��л��Ϊ���ֳ��˴󺦡�\n");
      who->set("go_ya",1);
      return 0;
     }
    say("��������ϸ�Ŀ��˿�!!˵��:���Ȼ�ǲк��������ն���--���ǻ�--��ͷ��\n");
    if(!who->query("super_fire",1))
     {
     say("�������:���Ȼ���������������������ѵ�����!!\n"
         "��!!������ɽȭ���ϼ��İ��ܾʹ��ڸ����!!,�������һ��¥��\n");
     who->set("super_fire",1);
     who->set("title","��ɽ��ѧ����");
      who->set("go_ya",1);
     }
  }
}

int accept_fight(object who)
{
 command("say ��ȻӢ�۳����ꡣ\n");
 who=this_player();
 fight_ob(who);
 command("cmd usekee "+who->query("id"));
 command("charge "+who->query("id"));
// command("perform force.kang-power");
  return 1;
}

int accept_kill(object who)
{
 command("say ����!!!\n");
 who=this_player();
 kill_ob(who);
 command("cmd usekee "+who->query("id"));
 command("charge "+who->query("id"));
// command("perform force.kang-power");
  return 1;
}
  void attempt_apprentice(object ob)
{
        if(this_player()->query("class")!="fighter")
        {
                command("sigh");
                command("say �㲻�����ߣ��Ҳ������㡣\n");
                return;
        }
      if((int)ob->query("cps") <20 )
{
          command("sigh");
          command("say ѧ��ɽȭ�������к��ģ����˹�֮"+ RANK_D->query_respect(ob) + "�������ƺ����ˣ�\n");

return;
        }

      command("hmm");
      command("pat" + ob->query("id"));
      command("recruit "+ob->query("id"));
}

// by babe
void heart_beat()
{
        if( !is_fighting() ) {
                if( query("sen") < query("eff_sen") ) // 125
                        command( "exert refresh" );
                if( query("force") < query("max_force") ) // 1 -> 5.035
                        command( "ex 160" );
                if( query("eff_kee") < query("max_kee") ) // 35
                        command( "10 exert heal" );
                if( query("gin") < query("eff_gin") ) // 125
                        command( "exert regenerate" );
                if( query("kee") < query("eff_kee") ) // 125 -> 300
                        command( "3 exert recover" );
        
        }
		if(is_busy() ){
		if(30>random(100)){
		message_vision(HIW"\nֻ��$N��������"HIY"�����ھ�"HIW"��$Nȫ��¤����һ��"HIC"��������"HIW"�У���Ȼ�ѽ⿪���ϱ����Ѩ����\n"NOR,this_object());
        delete_busy();
		}
		}
		::heart_beat();
}

string ask_yan()
{
  object me;
  me=this_player();
  if( me->query("fyan")==5)
{
command("say ��˵������ǰ����,������������������������¤ɽ����ȫ��ѩ��֮��,�ԶԸ�Ѫħ�Ӵ������,̸���..������ѩ��ȥ�ˡ�\n ");
me->set("fyan",6);
}
  else
    {
   command("say �Ҳ��崦��~��\n");
    }
}

string test()
{
 object me;
 me=this_player();
 if(me->query("family/family_name") != "��ɽ��")
  {

   return "������ŭ��:������ɽ����������ô����ʲô!!!!\n";
  }
 if(me->query_skill("lungshan",1)   < 70)
  {
   return "������ŭ��:��ɽ�ɵ���ѧ��û��ѧ����,����ѧʲô����!!!\n";
  }
 say("����������һ��!!!\n");
 say("�������:���������վ��ƽ�ϳǵķ���,��˵��һֻ���ǻ�����,Σ���������İ���!!\n");
 say("����������:ֻҪ����˴�!!�Ҿͽ��������ڸ���!!!\n");
 me->set("lungshan_test",1);
}
string kee_god()
{
 object me;
 me=this_player();
 if(!me->query("ask_god_kee"))
  {
   return "�������:�������������ش��ش�!!ˡ�ѷ��!!!!\n";
  }
 say("��������˼��һ��!!!\n");
 say("�������:�����Ƽ�Ȼ������˵��..�Ҿ͸������!!\n");
 say("����������:����֮���������֮��,��Ҫ������ȱ���Ҫ������֮��������ʯ���ܽ�!!\n");
 say("�������ֵ�:��������ȵ�λ�õĻ�!!��ѩ��ɽ֮���Լ��Ұ�!!\n");
 me->set("ask_god_kee",2);
}
string super_fighter()
{
 object me;
 me=this_player();
 if((me->query("class") != "fighter") || (!me->query("ask_super_fighter")) )
  {
   return "�������:�˵�Ϊ���ߴ�˵ʥ��,ˡ�ѷ��!!!!\n";
  }
 if((me->query("family/family_name") == "��ɽ��") && (me->query("title") != "��ɽ���崫��"))
  {
   return "������ŭ��:���Լ����ɵ��ذ��嶼û��ѧ����,����ô����ʲô!!!\n";
  }
 if((me->query("family/family_name") == "ѩ����") && (me->query("title") != "ѩ�Ծ�ѧ����"))
  {
   return "������ŭ��:���Լ����ɵľ�ѧ��û��ѧ����,����ô����ʲô!!!\n";
  }
 say("��������˼��һ��!!!\n");
 say("��������ʫ��:------ѩ~ɽ~��~��~�С���~��~һ~��~��-----\n");
 say("����������:�¶������ȥ����ȫ��ɡ�!!\n");
 say("����������:���еĺ�����Լ����ɡ�!!\n");
 me->set("ask_super_fighter",1);
}
void die()
{
	object winner = query_temp("last_damage_from");
	int j;
        if(!winner)
	{
	::die();
	return ;
        }
	tell_object(users(),"\n\t[1;37m����[36m����������ǰ�� ǰ������ɳ̲��[1;37m����[0m\n"+
	"\n\t[1;37m�벻����ɽ����[36m������[37m��������,�������ֽ���[33m"+winner->query("name")+"[1;37mΪ[1;31m����[1;37m��!![0m\n");

	if ( winner->query_temp("bless")==1 )
	{
	j=random(6000);
	  if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
	  {      
	  new("/open/sky/obj3/fire_feather")->move(environment(winner));
	  message_vision(HIM"\n������������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/fire_feather",sprintf("%s(%s) ������������˻�֮������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj3/fire_feather")->move(environment(winner));
	  message_vision(HIM"\n������������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/fire_feather",sprintf("%s(%s) ������������˻�֮������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
 :: die();
}
