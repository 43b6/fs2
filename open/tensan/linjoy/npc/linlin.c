#include <ansi.h>
string magic();
inherit NPC;
string ask_master();
string ask_badman();
string ask_linjoy();
string ask_tensan();
void create()
{
            set_name("���",({"lin girl","girl"}));
            set("long","��������ɽ�����ڵ������˾�����ʦ���������ż���ģ��������������!!\n");
            set("gender","Ů��");
            set("nickname",HIY"Сʦ��"NOR);
	    set("title",HIW"��ɽ"+BMAG"���չ�"NOR);
            set("combat_exp",1000000);
            set("attitude","heroism");
            set("age",50);
            set("str", 50);
            set("cor", 50);
            set("cps", 50);
            set("per", 50);
            set("int", 50);
          set("kee",100000);
          set("max_kee",100000);
          set("gin",100000);
          set("max_gin",100000);
          set("sen",100000);
          set("max_sen",100000);
          set("atman",30000);
          set("max_atman",30000);
          set("mana",30000);
          set("max_mana",30000);
          set("force",30000);
          set("max_force",30000);
            set_skill("parry",200);     
            set_skill("force",200);
            set_skill("literate",200);
            set_skill("move",200);
            set_skill("dodge",200);
            set_skill("unarmed",150);      
        set_temp("apply/armor",70);     
        set("force_factor",30);
          set("inquiry",([
         "��ɽ"     :  (: ask_tensan :),
         "���չ�"   :  (: ask_linjoy :),
         "ʦ��"     :  (: ask_master :),
         "���˰���" :  (: ask_badman :),
         "����ˮ"   :  "��Ҳ������Ϊ������ʦ���û���˺��ŶԷ�\n",
    ]));

        setup();
      
}

void init()
{ 
  add_action("do_nod","nod");
  add_action("do_shake","shake");
  remove_call_out("check_kill");
  call_out("check_kill",1,this_player()); 
}

void check_kill(object me)
{  
  object mark=new("/open/tensan/obj/tensan-mark");	
  if(me->query_temp("kill_murofu")==1 && me->query_temp("kill_mechoufen")==1
  && me->query_temp("kill_kau")==1 && me->query_temp("kill_shion")==1
  && me->query_temp("kill_poison")==1 && me->query_temp("kill_wind")==1
  && me->query_temp("kill_thunder")==1 && me->query_temp("kill_water")==1
  && me->query_temp("kill_fire")==1
  && me->query("tensan/accept_help")==1 && !present("tensan mark",me))
  {   
     command("say �������ʵ�����������ɽͨ�������������ƾͿ������ɽ�����ɽ�ˡ�");  
     message_vision("$N����$nһ�顸��ɽͨ�����\n",this_object(),me);    
     mark->move(me); 	
     me->set_temp("tensan/get_enter",1);
     me->delete_temp("kill_murofu",1);
     me->delete_temp("kill_mechoufen",1);
     me->delete_temp("kill_kau",1);
     me->delete_temp("kill_shion",1);
     me->delete_temp("kill_poison",1);
     me->delete_temp("kill_wind",1);
     me->delete_temp("kill_thunder",1);
     me->delete_temp("kill_water",1);
     me->delete_temp("tensan/start_test",1);
  }else if(present("tensan mark",me))
     command("say �Ҳ�����ɽ����ɽλ�ڴ�½������������ϸ����Ӧ�þͿ����ҵ�");   
   else if(me->query_temp("tensan/start_test")==1)
     command("say ��ô��ô��ͻ����ˣ������ûͨ���ҵĲ���Ү��");
   else if(me->query_temp("tensan/get_enter")==1 || me->query("tensan/accept_help")==1)
     {
     	command("say ���Ʋ����ˣ��Ǿ��ٽ���һ���ҵĲ��԰ɣ�����ǾŸ�����������");
        me->set_temp("tensan/start_test",1);
     }
}
void heart_beat()
{
	object me=this_player();
        object ob=this_object();
        mixed enemy;
	int i,j;
        enemy=all_inventory(environment(ob));
	i=sizeof(enemy);
       
        :: heart_beat();
}

string ask_master()
{
    object me=this_player();
    if(me->query_temp("tensan/ask_linjoy")==1)
    {   
      command("sigh");
      command("say ��ʦ�����Ƕ�����������ɽͯ�ѣ�����������˰����������䲻��");        
      me->set_temp("tensan/ask_master",1);
      me->delete_temp("tensan/ask_linjoy",1);
    }else command("say ��ʦ�кδ���Ҫ���ร�");
    return "";
}

string ask_badman()
{
    object me=this_player();
    if(me->query_temp("tensan/ask_master")==1 && me->query_temp("tensan/start_test")!=1)   
    {
      command("say ʦ�����Ǳ���ʦ������ˮ����Ż�ɥʧ������������Ը�������ʦ����");        
      me->delete_temp("tensan/ask_master",1);
      me->set_temp("tensan/ask_badman",1);
    }else if(me->query_temp("tensan/start_test")==1)
       command("say �㲻���Ѿ���ӦҪ���Ҿ�ʦ���ˣ������Ͽ�ͨ���ҵĲ��ԡ�");
     else command("say ����˵ʲô����ƪ��");
    return "";
}

string ask_linjoy()
{
    object me=this_player(); 
    if(me->query_temp("tensan/ask_tensan")==1)   
    {
      command("say ���չ�����ʦ��һ�ִ����ģ�ʦ�����书��˵�����µ�һ");          
      me->set_temp("tensan/ask_linjoy",1);
      me->delete_temp("tensan/ask_tensan",1);
    }else command("say ���Ǵ��������ģ���˵��");
    return "";
}

string ask_tensan()
{
    object me=this_player(); 
    command("say ��ɽ����ط�����������Ĵ�˵���������չ�������ɽ��");          
    me->set_temp("tensan/ask_tensan",1);
    return "";
}
 
int accept_fight(object ob)
{
	object me=this_player();
        command("say �һ�æ�����˾�ʦ��������������Ѱ���˰ɣ�\n");    
        return 0;
}
int accept_kill(object ob)
{
        command("say �������ɱ�ˣ����չ����˲���Ź����!!!\n"); 
        return 1;
}

int do_nod()
{
object me = this_player();
if(me->query_temp("tensan/ask_badman") != 1 && me->query_temp("tensan/start_test")==1) 
   return 0;
 me->set("tensan/accept_help",1);
 me->set_temp("tensan/start_test",1);
 me->delete_temp("tensan/ask_badman",1);
 command("jump");
 command("say �����ҵ���Ը������ˣ�������֪����ʵ����Σ�");
 command("say ��˵�������оŸ���ӵ�����������������Խǿ����Ҳ��Խǿ");
 command("hmm");
 command("say �������ˣ�������ܴ������ˣ��Ҿ͸����������ɽ�ķ���");
 return 0;
}

int do_shake()
{
  object me = this_player();
  if(me->query("tensan/ask_badman") != 1)
        return 0;
  command("inn");
  command("say ��ô�죬���Ҳ����˾�ʦ���Ͳ���");
  return 0;
}

void die()                                                                 
{    
	object winner = query_temp("last_damage_from");
        if(!winner)
	{
	::die();
	return ;
        }
        winner->set("tensan/kill_lin",1);	
        log_file("/tensan/kill_linlin", sprintf("%s(%s) ɱ�����չ���� on %s\n"
        ,winner->query("name"),winner->query("id"), ctime(time()) ));

	::die();                                                           
}