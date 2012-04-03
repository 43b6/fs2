#include <ansi.h>
// by airke
inherit NPC;

void do_sleep();

void create()
{ 
  set_name(HIY"С�ƽ����"NOR,({"gold-dragon","dragon"}));
  set("age",1);
  set("long","pat it or order <����>\n");
  set("no_kill",1);
  set("kee",200000);
  set("max_force",10000);
  set("force_factor",30);
  set("combat_exp",7000000);
  set("chat_chance", 35);
  set("chat_msg", ({
  HIY+"�ƽ�С�������˵���������������ȥ������\n"NOR,
  HIY+"�ƽ�С����գ��գ����˫�ۣ����޹���������....\n"NOR,
  HIY+"�ƽ�С�������: �ڡ��������衫������\n"NOR,
  HIY+"�ƽ�С�����ý��ڵ������ĵػ���ȦȦ....\n"NOR,
  HIY+"�ƽ�С��������һָ�������һ��ʳ��........��ʼ����һ�Դ����� :D~~\n"NOR,
  HIY+"�ƽ�С���������������������������ۣ�....�ö��Ĩ�..\n"NOR,     
  HIY+"�ƽ�С������������ű�������\n"NOR,
  HIY+"�ƽ�С�������۵ش���һ����Ƿ...Zzzz\n"NOR,
  (: do_sleep :),
  }));

  setup();
}

void do_follow(object owner)
{
 command("follow "+owner->query("id")); 
 set_leader(owner);
return;
}

void init() {
object obj;
::init();
     if(interactive(obj=this_player())) {
          command("ssmile "+obj->query("id"));
        }
add_action("do_pat","pat");
add_action("do_order","order");
add_action("do_kick","kick");
add_action("do_lick","lick");
add_action("do_flop","flop");
add_action("do_die","die");
add_action("do_faint","faint");
add_action("do_hammer","hammer");
add_action("do_spit","spit");
add_action("do_ride","ride");
add_action("do_shout","shout");
return;
}

int do_pat(string str) {
 
  object scale,room;
  string name;

  if(!str||sscanf(str, "%s",name)!=1)
          return 0;
  if(name != "gold-dragon")
          return 0;
  message_vision (HIC"$N���Ļƽ�С������ͷ���ƽ�С�����ֱ����ľ��\n"NOR,this_player());
  room = environment(this_player());
  new("/open/island/obj/statue")->move(room); 
  destruct(this_object());
  return 1;
}


int do_order(string str)
{
  string act,tar;  
  
 if(this_player()!=this_object()->query_leader())
       return 0;
  if(!str)
       return notify_fail(HIY"�ƽ�С����գ��գ˫�ۣ��ɻ��������....\n"NOR);
  if(sscanf(str, "%s %s",act,tar)==2) {
     command(act+" "+tar);
     return 1;
  }
  if(sscanf(str, "%s",act)) {
     command(act);
     return 1;
  }
 return 1;
}

void do_sleep()
{
  object room;
  mixed all;
  int allnum,i; 

  room = environment(this_object());
  all = all_inventory(room);
  allnum=sizeof(all);
  for(i=0;i<allnum;i++) {
      if(userp(all[i])) {
          message_vision (HIY"С����͵͵�����$N�Ļ���....˯����....\n"NOR,all[i]);
          new("/open/island/obj/spat")->move(all[i]);
          i=allnum+1;              
      }
  } 
  destruct(this_object());
 return;
}

int do_ride(string str) {
 
  object room;
  string name;

  if(!str||sscanf(str, "%s",name)!=1)
          return 0;
  if(name != "gold-dragon")
          return 0;

  command("inn");
  write("\n����û������ݣ��밮��ϡ�ж���....\n");
  
  return 1;
}



