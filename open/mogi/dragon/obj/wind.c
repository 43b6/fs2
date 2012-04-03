//firedragon2 by casey

#include <combat.h>
#include <ansi.h>
#include <mudlib.h>
inherit NPC;

void create()
{
set_name(HIC"����"NOR, ({ "wind dragon","dragon" }) );
set("long","ԭ���������ȵ��ػ��� ,�����ڱ����շ���\n�ƺ���������ȥ�(ride)");
set("no_give", 1);
set("no_drop", 1);
set("no_auc", 1);
set("no_sell", 1);
set("unit","ֻ");
set("value","10000000");
set("race", "Ұ��");
  set("gender","����");
  set("combat_exp",1900000);
  set("age",2471);
  set("cor",40);
  set("str",20);
  set("kee",10000);
  set("max_kee",10000);
  set("sen",7000);
  set("max_sen",7000);
  set("gin",4500);
  set("max_gin",4500);
  set("force",3200);
  set("max_force",3200);
  set("bellicosity",1000);
  set("attitude","peaceful");
  set("chat_chance_combat", 25);
  set_temp("apply/armor",100);
  set_temp("apply/damage",80);
set("limbs", ({ "����", "��צ", "����" , "����" , "��β" }) );
  set("force_factor",25);
     set_skill("dodge",700);
     set_skill("parry",400);
     set_skill("unarmed",500);
 
  setup();


}


void init()
{

add_action("do_ascend","ride");
add_action("do_descend","dismount");
}

int do_ascend()
{
        object me;

        me=this_player();
        if ( me->query_temp("marks/ascend") )
               return notify_fail("���޷�ͬʱ������ͷ������ѽ��\n");

        message_vision("$N����"+this_object()->name()+"�ı��ϡ�\n",me);
        me->set_temp("marks/ascend",1);
this_object()->set_leader(me);
        me->add_temp("apply/name",({ me->name()+ HIW"(������"NOR+this_object()->name()+HIW")"NOR}));
        move(me);
        me->set_heart_beat(1);
        return 1;
}

int do_descend()
{
        object me;
        string *name;

        me=this_player();
        if ( !me->query_temp("marks/ascend") )
                return notify_fail("��û������Ү��\n");
message_vision("$N��"+this_object()->name()+"�ı�������������\n",me);
        me->delete_temp("marks/ascend");   
        me->delete_temp("apply/name",name);
        move(environment(me));
 me->set_heart_beat(0);

        return 1;
}

int heal_up()
{
  object *enemy,who,user;
  int i,dodge;
        user = query_leader();
  if( user->is_fighting() )
  {
    if( random(10) > 2 )
    {
     enemy=user->query_enemy();

    i=random(sizeof(enemy));
     dodge = enemy[i]->query_skill("dodge", 1);
  
  if(random(dodge) < 60)

{
      message_vision(HIC+"���ҵĿ���Է������м��¶��� ,������$NѸ�ٿ���ȥ!!\n"+NOR,enemy[i]);
      message_vision(HIY+"$N���㲻�� ,��������������и��Ƥ��������\n"+NOR,enemy[i]);
     COMBAT_D->report_status(enemy[i], 1);
     enemy[i]->receive_damage("kee", 140);     
      enemy[i]->start_busy(1);
  COMBAT_D->report_status(enemy[i], 1);
 
}else{
      message_vision(HIC+"���ҵĿ���Է������м��¶��� ,������$NѸ�ٿ���ȥ!!\n"+NOR,enemy[i]);
     message_vision(HIW+"ֻ��$N������� ,����ܿ������Ĺ���...\n"+NOR,enemy[i]);

     }
    }
  }
        return ::heal_up() + 1;
}
void die() 
{
        object me;
        string *name;

        me=this_player();
       
        me->delete_temp("marks/ascend");   
        me->delete_temp("apply/name",name);
        move(environment(me));
 me->set_heart_beat(0);

        return;
}
int accept_fight(object me) {
        return notify_fail("���Ǳ��˵ĲƲ�, ��ɱ����!\n");
}

int accept_kill(object me) {
        return notify_fail("���Ǳ��˵ĲƲ�, ��ɱ����!\n");
}




