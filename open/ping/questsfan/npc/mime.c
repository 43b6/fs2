inherit NPC;     //���� by dhk 2000.4.22
#include <ansi.h>
inherit F_MASTER;
#include </open/open.h>
string do_mime2();
string do_mime3();

void create()
{
  set_name("����",({"mime duan","mime","duan"}));
set("long","���Ƶ�ʦ�֣�Ҳ�Ƕμҵ�ʮ������ӡ����С�������ң���\n"
            +"�аܼ��ӵķ緶�����ź�������һ�ε������о���һ������\n"
            +"���ˣ�������λ���˴���ʮ���ӵĹ��������������ĸ��Բ�\n"
            +"֪�Ƿ��ܵ���λ������Ϊ��Ӱ�����˺ܴ�ĸı䣬��ĳ���\n"
            +"������Ҳ�����������ڽ�������ǰ��������������������\n"
            +"һ��������Ŀ��ν��������Ҳ��\n");
  set("gender","����");
  set("class","scholar");
  set("title",""HIY"ʱ��"WHT"����"NOR"");
  set("attitude","heroism");
  set("age",300);
  set("max_kee",10300);
  set("kee",10300);
  set("str",40);
  set("con",40);
  set("cps",40);
  set("cor",24);
  set("int",32);
  set("bellicosity",10000);
  set("max_force",20000);
  set("force",20000);
  set("force_factor",20);
  set("combat_exp",8000000);
//��ʾby bss,��������skill��,��û�������Ǹ�skill��???�Ǹ�����Ϊ�β�����handwriting��ԭ����
  set_skill("dodge",120);
  set_skill("move",120);
  set_skill("force",250);
  set_skill("literate",200);
  set_skill("parry",100);
  set_skill("unarmed",100);
  set_skill("stabber",120);
  set_skill("linpo-steps",100);
  set_skill("six-fingers",100);
  set_skill("sunforce",250);
  map_skill("unarmed","six-fingers");
  map_skill("parry","six-fingers");
  map_skill("stabber","six-fingers");
  map_skill("move","linpo-steps");
  map_skill("dodge","linpo-steps");
  map_skill("force","sunforce");
  set_temp("fan-finger",100);
  set("env/������","YES");
  set("marks/fan-finger",1);
  set("marks/sun-finger",1);
  set("marks/six_sp",3);
  set("inquiry", ([
  "Ʈ����"         : (: do_mime2 :),
  "����"           : (: do_mime3 :),
  ]));
  set("functions/handwriting/level",100);
 set("functions/fan-finger/level",100);
  set("chat_chance_combat",100);
  set("chat_msg_combat",({
     (:perform_action,"unarmed.handwriting":),
     (:this_object(),"exert_sunforce":),
     }));
  set("chat_chance", 1);
setup();
  add_money("gold",50);
 carry_object("/data/autoload/scholar/finger_fan.c")->wield();
  carry_object(PING_OBJ"neck0")->wear();
  carry_object("/open/ping/obj/cloud_fan");
  create_family("�μ�",10,"����");
}
int accept_kill(object who)
{
  object k=this_player();
  command("perform unarmed.handwriting");
  command("wield fan");
  kill_ob(who);
  return 1;
}
int accept_fight(object who)
{
  object k=this_player();
  command("perform unarmed.handwriting");
  command("wield fan");
  fight_ob(who);
  return 1;
}

void init()
{
        set_heart_beat(1);
        add_action("do_nod","nod");
        add_action("do_say","say");
}
void heart_beat()
{
        if( random(4) < 1 ){
        if( is_fighting() ){
	command("shoot");
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
string do_mime2()
{
        object me=this_player();
        if( me->query_temp("mime_ok") == 1 )
        {
        if( me->query("family/family_name") == "�μ�" )      me->set_temp("mime_ok",2);
          return(
          "�ոձ��������Ա����ϳ��Ṧ׷�ϱ��������һ�׷�ϱ���������\n"+
          "          �Ϳ��ó�����书��Ϊ���ѡ��ټ�����ʦ���ź����Ƽ���������\n"+
          "          �����Ʒһ��Ҳ������Ҫ��������Ʈ�������ʵ�ڲ��ѣ�������\n"+
          "          �Ƚϵ��ĵ������õĵ������ϡ���....��!!! \n");
        }
        else
          return("��");
}
string do_mime3()
{
        object me=this_player();
        if( me->query_temp("mime_ok") == 2 )
        {
        if( me->query("family/family_name") == "�μ�" )      me->set_temp("mime_ok",3);
          return(
          "�ǲ��ϲ���ƽ��������ɽ������һ�����룬��;�����ص�\n"+
          "          �ؿ�������������ͻ�ƹؿ��õ���\n");
        }
        else
          return("��");
}
int accept_object(object me, object obj)
{

        if( obj->query("id") == "duan's letter" )
        {
          command("pat "+getuid(me));
          if( me->query("family/family_name") == "�μ�" && me->query_temp("run_over")==1 )
          {
            command("say ��!!ԭ��������ʦ�����¡�������!!!����!����!����!������!!!\n\n");
            me->set_temp("mime_ok", 1);
          }
            destruct(obj);
        }
        else
        command("? "+getuid(me));
        return 1;
}
int do_nod()
{
object me = this_player();
if(me->query_temp("mime_ok") != 3)
        return 0;
else
me->delete_temp("mime_ok");
remove_call_out("greeting");
call_out("greeting",1,me);
return 0;
}
int do_say(string str)
{
object me = this_player();
if(me->query_temp("mime_ok") != 3)
        return 0;
if(str == "yes" || str == "ok")
     {
me->delete_temp("mime_ok");
        remove_call_out("greeting");
        call_out("greeting",1,me);
        return 0;
     }
return 0;
}
void greeting(object me)
{
  object ob = this_object();
  object map=new("/open/ping/questsfan/obj/weaponmap.c");
  command("smile");
  command("say �ð�!!!�Ǻ�ɽͨ��������ʦ�ܷ���ġ����塳�����¡�\n\t  �����ͼ�Ҿ��ȴ������!���Լ�ҪС��һ�㣬ȥ��!!!\n");
  message_vision("$N����$nһ��Ʈ�����������ͼ��\n",ob,me);
  map->move(me);
  me->set("now_start",1);
}

void die()
{
        object winner = query_temp("last_damage_from");
        tell_object(users(),"\n\t"HIR"��"HIB"ǧ  ɽ  ��  ��  ��          ��  ��  ��  ��  ��"NOR"\n\n\t\t"HIB"��  ��  �w  ��  ��          ��  ��  ��  ��  ѩ"HIR"��"NOR"\n"+
        "\n\t����"HIC"��"WHT"��"NOR"��������, ��ȴ����"+winner->query("name")+"֮��\n\t"HIY"��������"NOR"��ν��"HIC"�������˸�ǰ����"NOR"��\n");
        tell_object(users(),"\n\n"CYN"�Ϸ���ջ���һ�����ǡ�"NOR"\n\n\t��"HIY+BLINK"��������"NOR"��\n\n");
        :: die();
}

