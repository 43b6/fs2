//ŮӰ������(write by cyw)
#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;

void do_special()
  {
    object *enemy,target;
    int i;

        enemy=this_object()->query_enemy();
        i=sizeof(enemy);
        target=enemy[random(i)];

                message_vision(
HIM"\n������������������������������\n"NOR,target);
                message_vision(
HIW"\n���ܿ�������$N������ȫ������ʧ�ˣ�����\n"NOR,target);
                target->receive_wound("kee",random(50+100));
                target->start_busy(5);
                COMBAT_D->report_status(target);
}



void create()
{
        set_name("��������",({"Master Ma","master","ma"}));
        set("gender","Ů��");
        set("class","killer");
        set("title",HIM"ŮӰ�ž�������������"NOR);
        set("attitude","heroism");
        set("long","����ŮӰ��δ��������");
        set("age",21);
        set("str",30);
        set("cor",40);
        set("cps",30);
        set("per",60);
        set("int",55);
        set("con",30);
        set("spi",55);
        set("kar",50);
        set("combat_exp",1000000);
        set("gin",1500);
        set("kee",1500);
        set("sen",1500);
        set("max_gin",1500);
        set("max_kee",1500);
        set("max_sen",1500);
        set("atman",0);
        set("force",3000);
        set("mana",3000);
        set("max_atman",0);
        set("max_force",3000);
        set("max_mana",3000);
        set("force_factor",10);
        set_skill("unarmed",60);
        set_skill("dodge",100);
        set_skill("move",100);
        set_skill("force",100);
        set_skill("haoforce",100);
         set_skill("fole-ken",50);
        set_skill("sha-steps",100);
        set_skill("parry",100);
        set_skill("blade",100);
        set_skill("season-flower-blade",100);
          set_skill("spells",100);
        map_skill("force","haoforce");
         map_skill("unarmed","fole-ken");
        map_skill("parry","season-flower-blade");
        map_skill("dodge","sha-steps");
        map_skill("blade","season-flower-blade");
        set("chat_chance_combat",20);
        set("chat_msg_combat",({
        (:do_special:)
        }));
        setup();
        set_heart_beat(1);
        carry_object("/open/japan/obj/super-cloth.c");
        carry_object("/open/japan/obj/super-blade.c");
}
int accept_fight(object who)
{ 
return notify_fail("��������˵��:��ʦ˵���������ʩչ���ž�ѧ��\n");
}
int accept_kill(object who)
{  
object me;
me=this_object(); 
if( me->is_fighting()) 
return 1;
command("say �ɶ�����ֻ������ʩչ������ѧ��!С����!");
command("wear cloth");
return 1;
}
void heart_beat()
{
  object i;
  i=this_object();
  if( i->query("kee") < 1000 && !(i->query_temp("weapon")) && i->is_fighting())
  {
  command("say ��ԭ�����Ի�����,��û�뵽��Ȼ��Ҫ�������ű���!");
  command("wield blade");
  }
  if( !(i->is_fighting()) && (i->query_temp("weapon")))
  command("unwield blade");
  ::heart_beat();
}
void init(){
      if(this_player()->query_temp("blood")== 1){
      command("say �󵨿�ͽ����ɱ���ҽ�����,~~~��������!");
      command("wear cloth");
      kill_ob(this_player());}
}
void die(){
	object killer;
	killer = query_temp("last_damage_from");
        killer->set_temp("blood", 1);
        message_vision(HIR"$N�ݺݵص���$n˵:$n.....��.�����....��...��..����.....��Ϊ��..��...
........ .��...��..........(����)"NOR,this_object(),killer);
	::die();
}	
