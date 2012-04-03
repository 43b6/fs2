inherit NPC;     //��ܿ 2000.4.2 by dhk
#include <ansi.h>
#include </open/open.h>
inherit F_MASTER;

void create()
{
  set_name("��ܿ",({"yun hain","yun","hain"}));
  set("long","��ܿ�Ƕ��ϵ�ϵ����Ů���вŻ���Ϊ���ڣ�Ҳ����Ϊ����\n"
            +"��ò���ľ�ɫ���ˡ������ڴ˵�����λ�ؿ�����֮һ����\n"
            +"ȫ����Ϊ��С�����׵�Ӣ����������Ⱦ���¡�\n");
  set("gender","Ů��"); 
  set("class","dancer");
  set("title","�μҵ�ʮ����Ů");
  set("nickname",""HIM"������ˮ"NOR"");
  set("attitude","heroism");
  set("age",20);
  set("max_kee",5000);
  set("kee",5000);
  set("str",30);
  set("per",50);
  set("cps",50);
  set("cor",30);
  set("int",40);
  set("kar",50);
  set("max_force",14000);
  set("force",14000);
  set("force_factor",10);
  set("combat_exp",9000000);
  set_skill("dagger",100);
  set_skill("fly-circle",120);
  map_skill("dagger","fly-circle");
  set_skill("dodge",120);
  set_skill("move",120);
  set_skill("force",100);
  set_skill("parry",100);
  set_skill("literate",110);
  set_skill("unarmed",90);
  set_skill("linpo-steps",100);
  set_skill("sunforce",160);
  set_temp("apply/armor",100);
  map_skill("move","linpo-steps");
  map_skill("dodge","linpo-steps");
  map_skill("force","sunforce");
  set("chat_chance_combat",100);
  //set("chat_msg_combat",({
  //   (:do_special_fight:),
  //   }));
  set("chat_chance",10);
  set("chat_msg", ({
            ""+HIY+"��ܿ��������ĵ�: ����Ψһ�������ҵġ�������֡����Ѿ��о�����ʮ���ˡ�"+NOR+"\n",
            ""+HIY+"��ܿ������ֵ�: ���������˹��ϵĲ�Ů�����ǶԸ��׵Ĳо־�һ��ͷ��Ҳû�С�"+NOR+"\n"+
                            ""+HIY+"�Һ�ܿ���췢�ģ������ⲻ���˾֣��㳣����ƴӴ�һ������"+NOR+"\n",
            ""+HIM+"��ܿ̾��: ����д�˵��"+HIR+"��˧����"+HIM+"��"+HIC+"�޵�����"+HIM+"�����Ҿͽ�ĳ����ˡ�"+NOR+"\n",
      
               }));
setup();
  add_money("gold",100);
//carry_object("/open/dancer/obj/yuaboots.c")->wear();
  carry_object("/open/ping/questsfan/obj/diamond_hairpin")->wear();
  carry_object("/open/ping/questsfan/obj/diamond_skirt")->wear();
   carry_object("/open/ping/questsfan/obj/dagger1")->wield();
//carry_object("/open/dancer/obj/ribbon.c")->wield();
  create_family("�μ�",10,"��Ů");
}
int accept_fight(object ob)
{
        command("say СŮ���������Ķ�����??\n");
        message_vision( this_object()->name()+"һ��������������ӡ�\n",ob);
        command("say ��Ȼ�������۸���СŮ�ӣ����ҾͲ�������!!!\n");
        fight_ob(ob);
        return 1;
}
int accept_kill(object who)
{
        command("say û�뵽�������۸���СŮ�ӣ����ҾͲ�������!!!\n");
        kill_ob(who);
        return 1;
}

void init()
{
        add_action("do_answer","answer");
        set_heart_beat(1);
}
void heart_beat()
{
        if( random(4) < 1 ){
        if( is_fighting() ){
                if( query("kee") < query("eff_kee") )
                        command("exert recover");
        }
        else{
                if( query("eff_kee") < query("max_kee") )
                        command("exert heal");
        }
        }
        :: heart_beat();
}

int accept_object(object me, object obj)
{
    if( obj->query("id") == "board chess manual" )
      {
        command("bow "+getuid(me));
        command("say ̫����, ������εõ��ģ�����̫��л��");
         if( me->query("family/family_name") == "�μ�" && me->query("questsfan/quest_step") == 4 )
          {
            command("say ��ܿ������õĶ���˵��:���¾�������˹���֮���СŮ����һ׮���£��������!!!\n");
            me->set("questsfan/quest_step", 5);
          }
        destruct(obj);
      }
    else
      command("? "+getuid(me));
    return 1;
}
