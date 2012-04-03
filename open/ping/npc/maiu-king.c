// change from ƽ�Ͻ���
#include </open/open.h>
inherit NPC;
void create()
{
	set_name("���˾�ʦ",({"officer of maiu","officer","maiu"}));
	set("long","һλ�������˾����ľ�ʦ\n");
	set("gender","����");
        set("attitude","heroism");
	set("functions/firefinger/level",10);
	set("age",32);
	set("str", 30);
	set("con", 30);
	set("force",1500);
	set("max_force",1500);
        set("combat_exp", 90000);
	set_skill("force",60);
        set_skill("dodge", 50);
        set_skill("whip",60);
        set_skill("nine-steps",60);
        set_skill("poisonforce",30);
        set_skill("coldpoison",25);
        set_skill("ming-snake",40);
        map_skill("force","poisonforce");
        map_skill("dodge","nine-steps");
        map_skill("poison","coldpoison");
        map_skill("whip","ming-snake");        
        set("force_factor", 3);
	set("chat_chance_combat", 10);
	set("chat_msg_combat", ({
	(: perform_action,"poison.firefinger" :),
	}));
	setup();
        carry_object("open/poison/obj/snake_whip")->wield();
        carry_object("/obj/poison/five_poison")->set_amount(10);
	add_money("silver",50);
}
int accept_object(object who, object ob)
{
  object mid;
  if( ob->query("id") == "maiu_id" && !query("change") )
  { 
    who->set_temp("maiu",1);
    say("���˾�ʦ˵:Ŷ?��Ҫ������?...MMM....���ļ�����ô�õ���?.\n"+
        "����������ֶεõ���,��ô��֪��...��...��������!!!\n"+
        "���˾�ʦж�������ϵ���Ƥ���\n");
    set("change",1);
    set_name("����",({"king of maiu","king","maiu"}));
    set("long","����֮��,��Ϊ��δ�ܺ�����������\n");
    set("combat_exp", 140000);
    set("chat_chance_combat", 20);
    set("functions/firefinger/level",20);
    set("force_factor", 10);
    set_skill("coldpoison",30);
    set_skill("ming-snake",50);
//  mid=new("/open/ping/obj/maiu-head"); 
//  mid->move(this_object());
  }      
  if( ob->query("id") == "zhang-head" && who->query_temp("maiu") )
  { 
   say("����������ͷһ��,��ЦԻ: ����鳼Ҳ�н���...������!!!\n"+
       "��...���Ǹ����л��.\n��������һЩҩ��.\n");  
   mid=new("/open/gsword/obj/ff_pill");
   mid->add_amount( who->query("per")+15 );
   mid->move(who);
   who->delete_temp("maiu");
   who->delete_temp("k_m"); 
  }
   destruct(ob);
   return 1;  
}
int accept_kill(object who)
{
  object head; 
  if( who->query_temp("maiu") && !query("change2") )
  { 
   if( query("k_m") )
   {
   say("����˵: ����ִ�Բ�����!!!\n����ʩչ������ǿ��!!!\n");
   set("title","- ���� -");
   set("change2",1);
   set("combat_exp", 180000);
   set("max_kee",3000);
   set("kee",3000);
   set("chat_chance_combat", 25);
   set("functions/firefinger/level",30);
   set("force_factor", 15);     
   set_skill("ming-snake",60);
   setup();
   head=new("/open/ping/obj/maiu-head");
   head->move(this_object());
   }else{
   say("����˵: ��...����ְҵɱ�ְ�...�������ҷ�����ƽ�Ͻ���...\n�ҷ�Ը����ƽ"
      +"�ϸ����ĳ��л��!!\n");
   set("k_m",1);
   return 0;
   }
  } 
  return 1;
}
int accept_fight(object who)
{
  if( who->query_temp("maiu") && query("change") )
      return notify_fail("����˵: ȥɱƽ�Ͻ�����! �����Ľ��ͽϷ��ѽ!\n");
  return 1;
}                        
