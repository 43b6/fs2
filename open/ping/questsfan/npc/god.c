inherit NPC;    //���ɹ����� 2000.5.12 by dhk
#include <ansi.h>
#include </open/open.h>
inherit F_MASTER;
string do_god();
string do_glaze();

void create()
{
  set_name("������",({"mountain god","mountain","god"}));
  set("long","���ɹȹ������ˣ������䳤���ס�ڲ��ɹȡ����Ǵ�δ���˼���\n"
        +"������Ŀ��һ�е�һ�н�ֹ�ڴ��Ŷ��ѣ���һ��������������һ\n"
        +"������ν�������ң�\n");
  set("gender","����");
  set("class","fighter");
  set("title",""HIM"����"HIG"����"NOR"");
  set("attitude","heroism");
  set("age",1435);
  set("max_kee",10000);
  set("kee",10000);
  set("max_force",10000);
  set("force",10000);
  set("force_factor",10);
  set("combat_exp",3500000);
  set_skill("seven-steps",200);
  set_skill("dodge",200);
  set_skill("move",200);
  map_skill("dodge","seven-steps");
  map_skill("dodge","seven-steps");
  setup();
}
void init()
{
//   add_action("do_answer","answer");
        set_heart_beat(1);
}
void heart_beat()
{
        if(query("kee")<0)
        die();
        if( random(4) < 1 ){
        if( is_fighting() ){
                if( query("kee") < query("eff_kee") )
                        add("kee",200);
        }
                else{
                if( query("eff_kee") < query("max_kee") )
                        command("exert heal");
        }
        }
        :: heart_beat();
}

void die()
{
     object winner = query_temp("last_damage_from");
  object god=new("/open/ping/questsfan/npc/god.c");
     if(winner->query_temp("kick")!=1)
     {
     tell_object(winner,"\n\n"HIG"��֪�ķ��ˣ����������˻�����???"NOR"\n");
     god->move("/open/ping/questsfan/rm34.c");
     winner->set_temp("kick",1);
     ::die();
     }
     tell_object(winner,"\n\n"HIM"��!!!���������ζ����˲��������ɹȲ���ӭ�㡣���߰�!!!"NOR"\n");
     tell_object(winner,""HIY"���"HIG"�ȿ�ʿ ���Ƕ� ˹���� ���� "NOR"\n\n");
     winner->set_temp("stupid",1);
     winner->move("/open/ping/questsfan/rm24.c");
     :: die();
}

