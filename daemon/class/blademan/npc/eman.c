#include <ansi.h>
#include "/open/open.h"
string magic();
inherit NPC;
inherit F_MASTER;
void create()
{
   set("score",10000000);
            set_name("����",({"earth man","man"}));
            set("long","���ߡ�\n");
            set("gender","����");
            set("class","dancer");
         set("combat_exp",5000000);
            set("attitude","heroism");
            set("get_dan_sp",1);
            set("sec_kee","god");
            set("max_s_kee",1000);
            set("s_kee",1000);
            set("age",60);
            set("str", 45);
            set("cor", 45);
            set("cps", 50);
          set("kee",10000);
          set("max_kee",10000);
          set("gin",5000);
          set("max_gin",5000);
          set("atman",10000);
          set("max_atman",10000);
          set("mana",5000);
       set("del_confuse",1);
   set("mpower",1);
          set("max_mana",5000);
          set("force",10000);
          set("max_force",10000);
            set_skill("parry",150);
            set_skill("spells",150);
            set_skill("magic",150);
            set_skill("force",150);
            set_skill("literate",150);
            set_skill("move",150);
            set_skill("dodge",150);
            set_skill("unarmed",150);
            set_skill("paull-steps",150);
            set_skill("dremagic",150);
            set_skill("dreamforce",150);
            set_skill("dreamdance",150);
        map_skill("magic","dremagic");
        map_skill("dodge","paull-steps");
        map_skill("force","dreamforce");
        map_skill("move","paull-steps");
        map_skill("unarmed","dreamdance");
        map_skill("parry","dreamdance");
        set_temp("apply/defense",100);
        set_temp("apply/attack",50);
        set_temp("apply/armor",100);
        set("/spells/confuse/level",100);
        set("/spells/fireball/level",100);
        set("/spells/thunder/level",100);
        set("/spells/firedance/level",100);
        set("/spells/dreamwings/level",100);
        set("/spells/dreamcure/level",100);
        set("force_factor",30);
        setup();
     carry_object("/data/autoload/dancer/ribbon.c")->wield();
        carry_object("/daemon/class/blademan/obj/estone");
        add_money("gold", 20);
set("chat_chance_combat",50);
        set("chat_msg_combat",({
         (: magic :),
        }));
}

string magic()
{
        command("conjure confuse");
        command("conjure fireball");
        command("conjure thunder");
        command("conjure dreamcure");
        command("conjure firedance");
        return "\n";
}

void heart_beat()
{
object me,room,*target;
int i,j;
me=this_object();
room=environment(me);
target=me->query_enemy(room);
if(i=sizeof(target)) {
if(random(100) > 30)
{
if(random(9) >= 7)
{
message_vision(HIY"���������Ϸ���һ�������ʱ����ط��ж������ã�\n"NOR,me);
for(j=0;j < i;j++) {
target[j]->start_busy(1); }
   }
   else
   {
message_vision(HIC"��������һЦ��˲ʱ��Ϣ�ȹ̡�\n"NOR,me);
me->receive_curing("kee",1200);
me->receive_heal("kee",1200);
    me->delete_busy();
    me->clear_condition();
   }
  }
}
  ::heart_beat();
  }
int accept_fight(object who)
{
 command("say �߿����ң�\n");
 return 0;
}
int accept_kill(object who)
{
 object guard;
 who=this_player();
 command("kill "+who->query("id"));
command("conjure confuse");
command("conjure dreamwings");
 command("cmd god_kee");
 return 1;
}
void die()
{
   object winner = query_temp("last_damage_from");
   winner->add_temp("sublade",1);
  :: die();
}
