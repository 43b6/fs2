//���һ��������...by firedancer ...11/3 2000//
//����ѧϰhellfire������,2000.10.16   firedancer //
//master_yua.c //cgy
#include <ansi.h>
#include "/open/open.h"
string magic();
string ask_get_dan_sp();
string ask_get_meteor();
string ask_ribbon();
string ask_set_allow_hellfire();
string ask_orderbee();
string ask_mirror();
string ask_title();
inherit NPC;
inherit F_MASTER;
void create()
{
            object ob;
            set_name("������",({"master yua","yua"}));
            set("long","���Ǿ��µ���λ�����ĵ���֮һ���ó��赸����˵
�����赸֮����������Ϊ��Ů�·����ɾ���\n");
            set("gender","Ů��");
            set("class","dancer");
            set("nickname","��������");
            set("combat_exp",5000000);
            set("attitude","heroism");
			set("allow_hellfire",1);
            set("age",20);
            set("str", 34);
            set("cor", 30);
            set("cps", 50);
            set("per", 24);
            set("int", 40);
			set("adv_dancer",1);
	set("kee",16000);
	set("max_kee",16000);
	set("gin",16000);
	set("max_gin",16000);
	set("max_sen",16000);
	set("sen",16000);
	set("atman",20000);
	set("max_atman",20000);
	set("mana",14000);
	set("max_mana",14000);
	set("force",2000);
	set("max_force",2000);
            set_skill("array",60);
            set_skill("parry",60);
            set_skill("spells",50);
            set_skill("magic",120);
            set_skill("cure",60);
            set_skill("force",60);
            set_skill("literate",70);
            set_skill("move",90);
            set_skill("dodge",100);
            set_skill("sword",50);
            set_skill("unarmed",70);
            set_skill("paull-steps",130);
            set_skill("dremagic",100);
            set_skill("order-bee",120);
            set_skill("dreamforce",90);
            set_skill("dreamdance",100);
        map_skill("magic","dremagic");
        map_skill("dodge","paull-steps");
        map_skill("force","dreamforce");
        map_skill("move","paull-steps");
        map_skill("unarmed","dreamdance");
        set_temp("apply/armor",70);
                set("get_dan_sp",1);
                set("/spells/reflection/level",100);
                set("/spells/confuse/level",100);
        set("/spells/fireball/level",100);
		set("/spells/hellfire/level",75);
        set("/spells/thunder/level",100);
         set("spells/mirror/level",100);
        set("/spells/firedance/level",100);
        set("/spells/dreamwings/level",1);
                
        set("force_factor",30);
        setup();
        create_family("ҹ��С��",3,"����");
        carry_object("/open/dancer/obj/yuaboots.c")->wear();
                carry_object("/open/dancer/obj/maple_ribbon.c")->wield();
        carry_object("/open/dancer/obj/yuawaist.c")->wear();
//                add_money("diamond",1);
//      ob->set_amount(50);
        set("inquiry", ([
            "������"  : "��˵��������ɽׯׯ����������??��������Ľ��ż��Ү!!",
                        "����ʽ" :  (: ask_get_dan_sp :),
                        "������" :  (: ask_get_meteor :),
                        "ribbon" : (: ask_ribbon :),
             "���":(: ask_orderbee :),
//             "mirror":(: ask_mirror :),
        "hellfire":(: ask_set_allow_hellfire :),
        "�����׻���":(: ask_set_allow_hellfire :),
		"����ʹ":(: ask_title :),
        ]));
        set("chat_chance_combat",60);
        set("chat_msg_combat",({
         (: magic :),
        }));
}
void init()
{       object ob;
        add_action("do_join","join");
        set_heart_beat(1);
}
void heart_beat()
{
        if( is_fighting() ){
                      if(query_temp("ref_shield")!=1)
                      command("conjure reflection");
                if( query("kee") < query("eff_kee") )
                        command("exert recover");
						if(random(100)>85)
		              command("conjure hellfire");
        }
        else{
                if( query("eff_kee") < query("max_kee") )
                        command("conjure dreamcure");
        }
        :: heart_beat();
}
  void attempt_apprentice(object ob)
{
        command("l "+ob->query("id"));
      if(this_player()->query("class")!="dancer")
      {
          command("hammer"+ob->query("id"));
          command("say ��ȥ�������߹���������\n");
          return;
      }
        command("smile");
        command("nod");
        command("chat ����������ֶ���һ�������������ˣ�ϣ����λ��మ����..\n");
         ob->query("no_recruit");
        command("recruit "+ob->query("id"));
                new("/open/dancer/obj/ribbon")->move(ob);
        message_vision("����������$Nһ���߲ʶд� .\n",ob);
        command("say ��������ҹ��С�������� ,������Ʊ��� !");
}
string ask_ribbon()
{
        if(present("ribbon",this_player()))
                   return "������������";
                if(this_player()->query("class")!="dancer")
                   return "����������Ҫ�Ǹ���ʲ����";
        else
                {
        command("say �� , ��ô������С���� !");
        new("/open/dancer/obj/ribbon")->move(this_player());
        return "ϣ�����ܺúñ��� , ����Ū������ !\n";
        }
           
}
string ask_get_dan_sp()
{ 
 if(this_player()->query("get_dan_sp")==1)
  return "������ѧ���ˣ���";
 if(this_player()->query("class")!="dancer")
      {
          command("stare"+this_player()->query("id"));
          return "������ô����";
      }
 if((int)this_player()->query("combat_exp") < 500000)
           return "�Ȋ�����ֵ��Щ�����ɣ�";
 else
  {
 command("say �ܺ�.....�Ҿͽ�����ʽ�����ڊ�...\n");
 this_player()->set("get_dan_sp",1);
  return "ϣ����Ŭ�������߾�ѧ������";
 }
}
string ask_get_meteor()
{ 
 if(this_player()->query("spells/meteor/level")==1)
  return "������ѧ���ˣ���";
 if(this_player()->query("class")!="dancer")
      {
          command("stare"+this_player()->query("id"));
          return "������ô����";
      }
 if((int)this_player()->query_temp("allow_learn")!= 1)
           return "��ͨ����ʦ�õĿ�����˵�ɣ�";
 else
  {
 command("say �ܺ�.....�Ҿͽ��ռ������������괫���ڊ�...\n");
 this_player()->set("spells/meteor/level",1);
 message("system",HIW"���������ĵ�˵��:����"+this_player()->name()+"�İ�������ʹ���߸��ӷ�����.\n"NOR,users());
 return "���Ҫ����Ŭ���";

 }
}
string magic()
{       
        command("conjure confuse");
        command("conjure fireball");
        command("conjure reflection");
        command("conjure firedance");
        command("conjure thunder");
        command("conjure dreamwings");
        return "\n";
}
 
int accept_fight(object ob)
{
        command("say СŮ���������Ķ�����??\n");
                command("conjure reflection");
                command("conjure dreamwings");
                command("conjure confuse");
        message_vision( this_object()->name()+"һ��������������ӡ�\n",ob);
        return 1;
}
int accept_kill(object ob)
{
        command("say û�뵽�������۸���СŮ�ӣ����ҾͲ�������!!!\n");
                command("conjure reflection");
                command("conjure dreamwings");
                command("conjure confuse");
        return 1;
}
int do_join()
{
        object ob=this_player();
        command("shake"+ob->query("id"));
        return notify_fail("�뵱����Ҫȥ����ʦ��ˮ��������!!\n");
}

string ask_set_allow_hellfire()
{
object me=this_player();
int i;
i=random(2);
        if(me->query("class")!="dancer")
                return "��Ǹ��, �������ߵĲ���֮��, ���ǲ���������˵�...";
        if(me->query("allow_hellfire"))
                return "�㲻�ǻ�����?";
        if(me->query("combat_exp") < 4000000 )
                return "��ľ��黹̫ǳ����, ���ĥ�����������Ұ�...";
        if(me->query("spells/fireball/level")<100)
                return "��Ļ�����������ǿ, ����ѧ�����׻���";
        if(me->query("spells/thunder/level")<100)
                return "���������������ǿ, ����ѧ�����׻���";
        if(me->query("spells/firedance/level")<100)
                return "��Ļ����軹����ǿ, ����ѧ�����׻���";
        message_vision("������Ц��˵:����$N�Ѿ����ʸ�ѧϰ��, �����ھͰ��׻���Ԫ����������!!\n",me);
		message("system",HIW"���������ĵ�˵��:��ϲ"HIC+this_player()->name()+HIG"����ĥ�����ڳ�Ϊ�����ߴ���.\n"NOR,users());
        me->set("allow_hellfire",1);
        me->set("adv_dancer",1);
        message_vision(HIW"һ��"HIB"����"HIC"��"HIR"��"HIW"��Ԫ��������$N������\n"NOR,me);
        if(i>0)
                me->set("title",HIG"��"HIM"�� ��"HIG"��"HIC"�� �� ʹ"NOR) ;
        else
                me->set("title",HIG"��"HIM"�� ��"HIG"��"HIR"�� �� ʹ"NOR) ;
                me->set("spells/hellfire/level",1);
                
                return "��ϲ��, ���Ѿ�ѧ���˵����׻�����!!";
}

string ask_title()
{
object me=this_player();
int i;
i=random(2);
        if(me->query("class")!="dancer")
                return "���������������ô...???";
        if(!me->query("allow_hellfire"))
                return "���������ʸ����ȥѧѧ�����׻�����?";
        if(me->query("title")==HIG"��"HIM"�� ��"HIG"��"HIC"�� �� ʹ"NOR)
                return "���Ѿ��ǹ���ʹ�˰�";
        if(me->query("title")==HIG"��"HIM"�� ��"HIG"��"HIR"�� �� ʹ"NOR)
                return "���Ѿ��ǹ���ʹ�˰�";
        
		message_vision("������Ц��˵:�ð�...�Ұ�ָ����ĳƺ�!!\n",me);
		
        
        if(i>0)
                me->set("title",HIG"��"HIM"�� ��"HIG"��"HIC"�� �� ʹ"NOR) ;
        else
                me->set("title",HIG"��"HIM"�� ��"HIG"��"HIR"�� �� ʹ"NOR) ;
				return"���ĳƺŸĺÆ�.....";
                
}


string ask_orderbee()
{
object me=this_player();
        if(!me->query_skill("order-bee"))
                return "����������������, ������Ҳû��\n";
        if(me->query_temp("give-order-bee"))
                return "���ֻ�ܸ�һ��, �´���������Ҫ�ɡ�\n";
        me->set_temp("give-order-bee",1);
    new("/daemon/class/dancer/bee_flute")->move(me);
        message_vision("����������һֻ��Ѹ�$N��\n",me);
                return "��ȥ��, �úñ���!!�ɲ�ҪŪ����!!\n";
}

string ask_mirror()
{
object me=this_player();
        if(me->query("spells/mirror"))
                return "�������Ѿ�ѧ������??\n";
                me->set("spells/mirror/level",1);
                return "�ðɣ����Ҿʹ����㡮����֪����!!";
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
	tell_object(users(),HIW"\n��"HIC"Ҷ �� �� �� �� "HIM"�� �Ʊ���ϲ
\t  "HIC"�� �� �� �� �� "HIM"�� ��Ҳ�ֺ�
\t\t  "HIC"�� �� �� �� �� "HIM"�� �ȶ�Ҳ��
\t\t\t  "HIC"ѩ �� �� �� �� "HIM"�� ��������"HIW"��
\n"HIG"�������ļ����ֻ���������һ�� �� ��Ҳ!!
\t����"HIY"������"HIG"����������Ҳ�Ӳ���������!!
\t\t��"HIR+winner->query("name")+HIG"Ҳ�ս�̤�����ֻ�֮�� �� ����ֹ��!!\n"NOR);

	if ( winner->query_temp("bless")==1 )
	{
	j=random(6000);
	  if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
	  {      
	  new("/open/sky/obj1/water_emblem")->move(environment(winner));
	  message_vision(HIM"\n�������������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/water_emblem",sprintf("%s(%s) ��������������ˮ֮������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj1/water_emblem")->move(environment(winner));
	  message_vision(HIM"\n�������������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/water_emblem",sprintf("%s(%s) ��������������ˮ֮������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();                                                           
}