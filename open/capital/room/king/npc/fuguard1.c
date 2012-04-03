//��ǰ�����������硱by bss
#include <ansi.h>
#include <command.h>
#include <combat.h>
#include <skill.h>
inherit NPC;


void create()
{
        set_name("������",({"king guard","guard"}));
        set("title","��ǰ����");
        set("gender","Ů��");
        set("age",50);
        set("attitude","aggressive");
        set("str",45);
        set("cor",45);
        set("cps",45);
        set("con",45);
        set("kar",45);
        set("clan_kill",1);
        set("del_delay",1);
        set("no_hole",1);
        set("no_plan",1);
        set("long","�������ӵ�����սʿ������ְ�أ���ƈ��Ц��\n");
        set("class","dagger");
        set("combat_exp",12000000);
        set("force",100000);
        set("max_force",90000);
        set("max_kee",15000);
        set("kee",15000);
          set("force_factor",40);

        set_skill("dagger",200);
        set_skill("parry",200);
        set_skill("force",200);
        set_skill("dodge",200);
        set_skill("fly-circle",200);
        set_skill("bss-steps",200);
        set_skill("fireforce",200);
        set_skill("bss-parry",200);
        map_skill("dagger","fly-circle");
        map_skill("parry","bss-parry");
        map_skill("dodge","bss-steps");
        map_skill("force","fireforce");

        setup();

        carry_object("/open/capital/room/king/obj/dagger1")->wield();
        add_money("gold",50);
}

void init()
{
        add_action("do_fight", "fight");
        add_action("do_fight", "kill");
        add_action("do_cmd","cmd");
}

int do_cmd(string str) {
 int force;
 object who=this_player();
 object me=this_object();
 if(str=="askgod king" || str=="askgod guard" || str=="askgod king guard") {
 who->start_busy(2);
 message_vision("$N��Ȼ�����Х��������ħ����$n�������ŵû����ɢ������Ҳ��˴���ۿ�!!\n",me,who);
 force=who->query("force");
 force=force*4/5;
 who->add("force",-force);
 kill_ob(who);
} else if(str=="bak king" || str=="bak guard" || str=="askgod king guard") {
  who->start_busy(2);
 message_vision("$N��Ȼ�����Х��������ħ����$n�������ŵû����ɢ������Ҳ��˴���ۿ�!!\n",me,who);
 force=who->query("force");
 force=force*4/5;
 who->add("force",-force);
  kill_ob(who);
} else if(str=="cmd throw king" || str=="cmd throw kguard" || str=="cmd throw guard"){
 who->start_busy(2);
message_vision("$N��Ȼ�����Х��������ħ����$n�������ŵû����ɢ������Ҳ��˴���ۿ�!!\n",me,who);
force=who->query("force");

force=force*4/5;
 who->add("force",-force);
kill_ob(who);
}
 return 1;
}
int do_fight(string arg)
{
        object who;
        who = this_player();

        if( !arg || (arg!="guard" && arg!="king") )
                return notify_fail("���빥��˭��\n");
        else {
          kill_ob(who);
        }

        return 1;
}
void heart_beat()
{
        int force,i,j;
        object *target;
        object me=this_object();
     if(me->is_fighting())
     {
        target=me->query_enemy();
         if( 50 > random(100)){
        me->delete_busy();
        message_vision("$N��չ��һ�½�ǣ�˲�������������!!!\n",me);
        }
        i=sizeof(target);
          if( 2 > random (100))
        {
  message_vision("$N���һ�������Ǵ󷨡�����ʼ����ÿ���˵Ĺ���!!\n",me);
                for(j=0;j<i;j++)
                {
                        force=target[j]->query("force");
                        force=force*4/5;
                        target[j]->add("force",-force);
                        me->add("force",force);
                        message_vision("$N��������$n�����Ǵ����������������˰˳�֮��!!!\n",target[j],me);
                        COMBAT_D->repore_status(target[j]);
                        target[j]->start_busy(1);
                }
                message_vision("$Nʩչ�����Ǵ󷨣���������!!!\n",me);
        }
     }
        ::heart_beat();
}
void die()
{
   int i,j;
     mixed enemy;
      object room;

   object winner = query_temp("last_damage_from");
     room= environment(this_object());
      enemy=all_inventory(room);
   i=sizeof(enemy);
        tell_object(users(),HIR"\n\n

��ǰ�����������þ������һ˿����˵��:�����ϣ�΢�����ܣ��޷��ٱ�������
                                     ��Ψ������л����!!!��
\n\n"NOR);
   message("room", HIR"
������������֮ǰ����Ȼ���������ɽ����ؼ�����ʯ��١������屬�����쾫Ѫ���飬
�����漣�Ƶ���Ӱ����!!!
\n"NOR, enemy);
  for(j=0;j<i;j++)
  {
  if( enemy[j]->is_character() && !enemy[j]->is_corpse() && living(enemy[j]) && enemy[j]->query("id")!="king guard" && enemy[j]->query("id")!="king")
{
        enemy[j]->add("kee",-1000);
        enemy[j]->start_busy(1);
        message_vision("$N���㲻������$n������ǰ��һ�����У��������ˣ�ҡҡ��׹!!!\n",enemy[j],this_object());
      COMBAT_D->report_status(enemy[j]);
  }
    }
  :: die();
}
