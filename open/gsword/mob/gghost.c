inherit NPC;
 int done=0;
#include <ansi.h>
void create()
{
	set_name("��ëС��", ({ "Green ghost" , "ghost" }) );
	set("race", "Ұ��");
	set("age", 15);
	set("long", "һֻ������ë��С��,��������צ��Ѱ����������.\n");                                                                                                                                                                                                          
	set("str", 35);
	set("cor", 35);
        set("limbs", ({ "ͷ��", "����", "˫��", "˫��" }) );
        set("verbs", ({ "bite", "claw", "dunt" }));
	set("combat_exp", 2000);
	set("attitude","aggressive");
	set("chat_chance_combat", 20);
	set("chat_msg_combat", ({  
              (: this_object(),"heal_me" :),
              (: this_object(),"do_devide" :),
          HIB" С���ŭ�ؽ�:    ֨�� ֨��\n"NOR      }) );
	set_skill("dodge",30);
	setup();               
	add_money("coin",100);
}


int heal_me()
{   int max,now ;
    max = this_object()->query("max_kee");
   if( done< 3)
{
    this_object()->add("eff_kee",50);
 }
 done++;
    this_object()->set("kee",max);
    now = this_object()->query("kee");
    if(now > max)
     {
       this_object()->set("kee",max);
       now = max;
     }
    tell_room(environment(this_object()),
    HIG"  ͻȻһ���̹����϶���������ëС�������,�㷢�������������!!\n"NOR);
    return 1;
 }  

int do_devide()
{   object here ;
   if( done<3)
{
    tell_room(environment(this_object()), 
    HIG  "   ͻȻ��ëС�����Ӱ��ʼģ��,������..��ëС����ѳ���ֻ��..!!\n"NOR);
    here=environment(this_object()); 
    new("/open/gsword/mob/ghost1")->move(here);
 }
 done++;
    return 1;
 }   
 
 void die()
 {
 object me;
  me= this_object()->query_temp("last_damage_from");
  if( me&& userp(me) ) {
    me->add("bounds",10);
   tell_room(environment(),sprintf("%s ��С�����ϳ���10����ë�Ž��ڴ�\n",me->name()) );
   }
   ::die() ;
 }