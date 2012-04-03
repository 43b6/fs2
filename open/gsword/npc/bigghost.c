inherit NPC;
inherit SSERVER;
object ob1=this_object();
object ob2;
int done=0;
void create()
{
	set_name("��ë����",({"ru mou","ru"}));
	set("long","������ʮ�� ,ȫ��������ɫ��ë�� ,���ϵļ���������֮��
�Ѿ��᲻�� ,������������֮������ ,������ʮ�ֵĹ��졣 .\n");
	set("gender","����");
        set("combat_exp",500000);
        set("attitude","aggressive");
	set("age",51);
	set("title","Ѫħ");
	set("force",1000);
	set("max_gin",1000);
        set("max_kee",10000);
	set("max_force",1000);
        set("force_factor",20);
        set("str",100);
        set("chat_chance_combat",20);
        set("chat_msg_combat",({
        (: this_object(),"special_attack" :),
        }));
        set("cor", 40);
	set("per", 10);
	set("int", 30);
	set("cps",40);
	set("con", 30);
	set("spi", 15);
	set("kar", 40);
        set_skill("unarmed",100);
        set_skill("dodge",60);
       set_skill("parry",60);
	set_skill("move",50);
	set_skill("force",50);
	setup();
}

         
void init()
{
ob1=this_object();
set_heart_beat(1);
add_action("do_show","show");
}

int do_show(string str)
{
 if(!this_player()->query_temp("allow_read",1))
   {
    write("��Ҫ��ʲô??\n");
    return 1;
    }
 if(str!="blood_sword")
    {
    write("��Ҫ��ʲô??\n");
    return 1;
    } 
 else
  {
    write("��ë����� : �ȵ�......��ѽ����Ǵ�������??�����Ļ� ,�ԹԵİѽ�
    ���� ,�һ������㲻�� \n");
    this_player()->set_temp("have_show",1);
   return 1;
   }
 }   
    
       
 int special_attack()
 {
   object ob;
   ob=this_object()->query_enemy();
   message_vision("[1;34m��ë������¶��� ,�ֱ۱���������� ,������������һ��Ī����˿�.\n[0m",this_object());
   ob->add("kee",-50);
  return 1;
  }
     
 void greeting(object ob)
 {
  if( !ob || environment(ob) != environment() ) return;
  if(ob->query("family/family_name","�ɽ���") )
     say("��ë�����:��!��!�ɽ����ӵ����ĺ� ,���������������.\n ");
  else
    say("���治�ͷ���˵:�����Ҹ��ɽ���֮��Ķ�Թ ,С���ٹ�����.\n");
  }
  
 int accept_object(object who,object ob)
 {
  ob2=who;
if( ob->query("id")!="blood_sword"||!who->query_temp("have_show",1) )
    {
      write("��ë����� :��л������ﰡ....������������??�ҿ��ǲ������������\n");
      return 0;
    }
   else
     {
      set_heart_beat(1);
      write("�����:��л�㽫��ѽ�������,�����Ӯ�ҵĻ��ҿɸ�����һ������ ,����.\n");
      write("\n����˵�� ,�����г���һ�� ,��֪�ǲ��Ǵ�� ,��е����������Ѻ͸ո�
      ����ͬ ,��е�Щ\��Ŀ־�\n");
      ob1->set("combat_exp",500000);
      ob1->set_skill("shasword",80);
      ob1->set_skill("sword",80);
      ob1->map_skill("sword","shasword");
      command("wield blood_sword");
      ob2->set_temp("have_give",1);
      return 0;
      }
 }         
          
         
 void die()
  {
   object me;
   me = this_object()->query_temp("last_damage_from");
      if(me->query_temp("have_give",1) && !done){
           this_object()->remove_all_killer();
           message_vision("С��...�㱾�²�����....,��Ȼ�ܴ�Ӯ�� ,���� ,�Ҿ������������� ,
           ����˵һ���������ܰ�\n",this_object());
           tell_object(me,"��ë�����Ը�������� : ���ܾ���ǰɽ����Ѩ��,������Ե�Ļ���Ȼ�ᷢ��\n");
           message_vision("��....���ǻر��㻹��֮�� ,�´μ��� ,�ɱ�������²����鰡..\n",me);
           done++;
           me->set_temp("have_win",1);
           this_object()->add("kee",100);
           return ;

      }
   if (me && userp(me))  {
     me->add("bounds",100); 
     tell_room(environment(),sprintf("%s���������ϳ���100����ë.\n",me->name()));
   }
   ::die(); 
  }
       
  void heart_beat()
   {
      if(!ob2) ob2=offensive_target(this_object());
      if(!ob2){
        ::heart_beat();
        return ;
      }
     if(ob2->query_temp("have_give",1))
     if(done==0)
     if( ob1->query("kee") < 0.2*ob1->query("max_kee"))
       {
         ob1->remove_all_killer();
         message_vision("С��...�㱾�²�����....,��Ȼ�ܴ�Ӯ�� ,���� ,�Ҿ������������� ,
         ����˵һ���������ܰ�\n",ob2);
         tell_object(ob2,"��ë�����Ը�������� : ���ܾ���ǰɽ����Ѩ��,������Ե�Ļ���Ȼ�ᷢ��\n");
         message_vision("��....���ǻر��㻹��֮�� ,�´μ��� ,�ɱ�������²����鰡..\n",ob2);
         done++;
         ob2->set_temp("have_win",1);
        }
     ::heart_beat();
   }               
